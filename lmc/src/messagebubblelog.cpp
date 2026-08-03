#include "messagebubblelog.h"
#include "stdlocation.h"

#include <QScrollBar>
#include <QTimer>
#include <QFile>
#include <QDir>
#include <QUrl>
#include <QDesktopServices>
#include <QLocale>
#include <QRegularExpression>

const QString acceptOp("accept");
const QString declineOp("decline");
const QString cancelOp("cancel");

lmcMessageBubbleLog::lmcMessageBubbleLog(QWidget* parent)
	: QScrollArea(parent), chatStateBubble(nullptr) {

	setWidgetResizable(true);
	setFrameShape(QFrame::NoFrame);
	setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

	content = new QWidget(this);
	contentLayout = new QVBoxLayout(content);
	contentLayout->setContentsMargins(8, 8, 8, 8);
	contentLayout->setSpacing(6);
	contentLayout->addStretch(1);
	setWidget(content);

	createContextMenu();

	participantAvatars.clear();
	hasData = false;
	messageTime = false;
	messageDate = false;
	allowLinks = false;
	pathToLink = false;
	trimMessage = true;
	fontSizeVal = 0;
	sendFileMap.clear();
	receiveFileMap.clear();
	lastId = QString();
	messageLog.clear();
	outStyle = false;
	autoScroll = true;
}

lmcMessageBubbleLog::~lmcMessageBubbleLog() {
}

void lmcMessageBubbleLog::createContextMenu(void) {
	contextMenu = new QMenu(this);
	copyAction = contextMenu->addAction(tr("&Copy"));
	contextMenu->addSeparator();
	selectAllAction = contextMenu->addAction(tr("Select &All"));
	Q_UNUSED(copyAction);
	Q_UNUSED(selectAllAction);
}

void lmcMessageBubbleLog::initMessageLog(QString themePath, bool clearLog) {
	if(clearLog) {
		QLayoutItem* item;
		while((item = contentLayout->takeAt(0)) != nullptr) {
			if(item->widget())
				item->widget()->deleteLater();
			delete item;
		}
		contentLayout->addStretch(1);
		fileBubbles.clear();
		chatStateBubble = nullptr;
	}
	this->themePath = themePath;
	reloadTheme();
}

void lmcMessageBubbleLog::reloadTheme() {
	themeData = lmcTheme::loadTheme(themePath);
}

MessageBubble* lmcMessageBubbleLog::appendBubble(BubbleStyle style, const QString& userId, const QString& senderName,
		const QString& html, const QDateTime* pTime, const QString& fileId) {

	bool sameAsLast = !userId.isEmpty() && userId.compare(lastId) == 0;

	MessageBubble* bubble = new MessageBubble(style, content);
	bubble->setShowHeader(!sameAsLast);
	bubble->setSender(senderName);
	bubble->setMessageHtml(html);
	if(pTime)
		bubble->setTimeText(getTimeString(const_cast<QDateTime*>(pTime)));
	if(!fileId.isEmpty()) {
		bubble->fileId = fileId;
		fileBubbles.insert(fileId, bubble);
	}

	if(!sameAsLast && (style == BubbleStyle::In || style == BubbleStyle::PublicIn)) {
		QString filePath = participantAvatars.value(userId);
		QPixmap avatar;
		if(QFile::exists(filePath))
			avatar.load(filePath);
		else
			avatar.load(AVT_DEFAULT);
		bubble->setAvatar(avatar.scaled(34, 34, Qt::KeepAspectRatio, Qt::SmoothTransformation));
	}

	connect(bubble, &MessageBubble::linkHovered, this, &lmcMessageBubbleLog::bubble_linkHovered);
	connect(bubble, &MessageBubble::linkActivated, this, [this](const QString& link) {
		QString linkPath = link;
		if(linkPath.startsWith("file")) {
			linkPath = linkPath.mid(5);
			QDesktopServices::openUrl(QUrl(QDir::toNativeSeparators(linkPath)));
			return;
		} else if(linkPath.startsWith("www")) {
			linkPath.prepend("http://");
			QDesktopServices::openUrl(QUrl(linkPath));
			return;
		} else if(!linkPath.startsWith("lmc")) {
			QDesktopServices::openUrl(QUrl(link));
			return;
		}

		QStringList linkData = linkPath.split("/", Qt::SkipEmptyParts);
		if(linkData.count() < 4)
			return;
		FileMode mode;
		FileOp op;
		if(linkData[2].compare(acceptOp) == 0) { mode = FM_Receive; op = FO_Accept; }
		else if(linkData[2].compare(declineOp) == 0) { mode = FM_Receive; op = FO_Decline; }
		else if(linkData[2].compare(cancelOp) == 0) { mode = FM_Send; op = FO_Cancel; }
		else return;

		updateFileMessage(mode, op, linkData[3]);
		fileOperation(linkData[3], linkData[2], linkData[1], mode);
	});

	QHBoxLayout* row = new QHBoxLayout();
	row->setContentsMargins(0, 0, 0, 0);
	bool rightAligned = (style == BubbleStyle::Out || style == BubbleStyle::PublicOut);
	bool centered = (style == BubbleStyle::System || style == BubbleStyle::Broadcast ||
		style == BubbleStyle::Error || style == BubbleStyle::File);

	if(centered) {
		row->addStretch(1);
		row->addWidget(bubble);
		row->addStretch(1);
	} else if(rightAligned) {
		row->addStretch(1);
		row->addWidget(bubble);
	} else {
		row->addWidget(bubble);
		row->addStretch(1);
	}

	//	insert before the trailing stretch (always the last item)
	contentLayout->insertLayout(contentLayout->count() - 1, row);

	if(autoScroll)
		scrollToEnd();

	return bubble;
}

void lmcMessageBubbleLog::removeChatStateBubble(void) {
	if(chatStateBubble) {
		//	remove the row (its parent layout) that holds this bubble
		QLayout* row = chatStateBubble->parentWidget() ? nullptr : nullptr;
		Q_UNUSED(row);
		//	walk contentLayout to find and remove the row containing this widget
		for(int i = 0; i < contentLayout->count(); i++) {
			QLayoutItem* item = contentLayout->itemAt(i);
			if(item->layout()) {
				for(int j = 0; j < item->layout()->count(); j++) {
					QLayoutItem* child = item->layout()->itemAt(j);
					if(child->widget() == chatStateBubble) {
						QLayoutItem* removedRow = contentLayout->takeAt(i);
						QLayout* rowLayout = removedRow->layout();
						QLayoutItem* w;
						while((w = rowLayout->takeAt(0)) != nullptr) {
							if(w->widget()) w->widget()->deleteLater();
							delete w;
						}
						delete removedRow;
						chatStateBubble = nullptr;
						return;
					}
				}
			}
		}
	}
}

void lmcMessageBubbleLog::appendMessageLog(MessageType type, QString* lpszUserId, QString* lpszUserName,
		XmlMessage* pMessage, bool bReload) {

	if(!pMessage && type != MT_Error)
		return;

	QString message;
	QDateTime time;
	QFont font;
	QColor color;
	QString id = QString();
	bool addToLog = true;

	removeChatStateBubble();

	switch(type) {
	case MT_Message:
		time.setMSecsSinceEpoch(pMessage->header(XN_TIME).toLongLong());
		message = pMessage->data(XN_MESSAGE);
		font.fromString(pMessage->data(XN_FONT));
		color.setNamedColor(pMessage->data(XN_COLOR));
		appendMessage(lpszUserId, lpszUserName, &message, &time, &font, &color);
		lastId = *lpszUserId;
		break;
	case MT_PublicMessage:
	case MT_GroupMessage:
		time.setMSecsSinceEpoch(pMessage->header(XN_TIME).toLongLong());
		message = pMessage->data(XN_MESSAGE);
		font.fromString(pMessage->data(XN_FONT));
		color.setNamedColor(pMessage->data(XN_COLOR));
		appendPublicMessage(lpszUserId, lpszUserName, &message, &time, &font, &color, type);
		lastId = *lpszUserId;
		break;
	case MT_Broadcast:
		time.setMSecsSinceEpoch(pMessage->header(XN_TIME).toLongLong());
		message = pMessage->data(XN_BROADCAST);
		appendBroadcast(lpszUserId, lpszUserName, &message, &time);
		lastId = QString();
		break;
	case MT_ChatState: {
		message = pMessage->data(XN_CHATSTATE);
		QString caption = getChatStateMessage((ChatState)Helper::indexOf(ChatStateNames, CS_Max, message));
		if(!caption.isNull()) {
			QString html = caption.arg(*lpszUserName);
			chatStateBubble = appendBubble(BubbleStyle::System, QString(), QString(), html, nullptr);
		}
		addToLog = false;
		lastId = QString();
		break;
	}
	case MT_Failed: {
		message = pMessage->data(XN_MESSAGE);
		font.fromString(pMessage->data(XN_FONT));
		color.setNamedColor(pMessage->data(XN_COLOR));
		QString caption = tr("This message was not delivered to %1:");
		decodeMessage(&message);
		QString html = caption.arg(*lpszUserName) + "<br>" + message;
		appendBubble(BubbleStyle::Error, QString(), QString(), html, nullptr);
		lastId = QString();
		break;
	}
	case MT_Error:
		appendBubble(BubbleStyle::Error, QString(), QString(), tr("Your message was not sent."), nullptr);
		lastId = QString();
		addToLog = false;
		break;
	case MT_File:
	case MT_Folder: {
		id = getFileTempId(pMessage);
		QString html = getFileMessageText(type, lpszUserName, pMessage, bReload);
		lastId = QString();
		appendBubble(BubbleStyle::File, QString(), *lpszUserName, html, nullptr, id);
		break;
	}
	case MT_Join:
	case MT_Leave: {
		message = pMessage->data(XN_GROUPMSGOP);
		QString caption = getChatRoomMessage((GroupMsgOp)Helper::indexOf(GroupMsgOpNames, GMO_Max, message));
		if(!caption.isNull())
			appendBubble(BubbleStyle::System, QString(), QString(), caption.arg(*lpszUserName), nullptr);
		lastId = QString();
		break;
	}
	default:
		break;
	}

	if(!bReload && addToLog && pMessage) {
		XmlMessage xmlMessage = pMessage->clone();
		QString userId = lpszUserId ? *lpszUserId : QString();
		QString userName = lpszUserName ? *lpszUserName : QString();
		messageLog.append(SingleMessage(type, userId, userName, xmlMessage, id));
	}
}

void lmcMessageBubbleLog::appendMessage(QString* lpszUserId, QString* lpszUserName, QString* lpszMessage,
		QDateTime* pTime, QFont* pFont, QColor* pColor) {
	Q_UNUSED(pFont);
	Q_UNUSED(pColor);
	bool localUser = (lpszUserId->compare(localId) == 0);
	decodeMessage(lpszMessage);
	appendBubble(localUser ? BubbleStyle::Out : BubbleStyle::In, *lpszUserId, *lpszUserName, *lpszMessage, pTime);
	hasData = true;
}

void lmcMessageBubbleLog::appendPublicMessage(QString* lpszUserId, QString* lpszUserName, QString* lpszMessage,
		QDateTime* pTime, QFont* pFont, QColor* pColor, MessageType messageType) {
	Q_UNUSED(pFont);
	Q_UNUSED(pColor);
	Q_UNUSED(messageType);
	bool localUser = (lpszUserId->compare(localId) == 0);
	decodeMessage(lpszMessage);
	appendBubble(localUser ? BubbleStyle::PublicOut : BubbleStyle::PublicIn, *lpszUserId, *lpszUserName,
		*lpszMessage, pTime);
	hasData = true;
}

void lmcMessageBubbleLog::appendBroadcast(QString* lpszUserId, QString* lpszUserName, QString* lpszMessage,
		QDateTime* pTime) {
	Q_UNUSED(lpszUserId);
	decodeMessage(lpszMessage);
	QString caption = tr("Broadcast message from %1:");
	QString html = caption.arg(*lpszUserName) + "<br>" + *lpszMessage;
	appendBubble(BubbleStyle::Broadcast, QString(), QString(), html, pTime);
}

QString lmcMessageBubbleLog::getFileMessageText(MessageType type, QString* lpszUserName, XmlMessage* pMessage,
		bool bReload) {
	Q_UNUSED(bReload);
	QString caption, html, szStatus, fileType;
	QString fileId = pMessage->data(XN_FILEID);

	switch(type) {
	case MT_File: fileType = "file"; break;
	case MT_Folder: fileType = "folder"; break;
	default: return QString();
	}

	FileOp fileOp = (FileOp)Helper::indexOf(FileOpNames, FO_Max, pMessage->data(XN_FILEOP));
	FileMode fileMode = (FileMode)Helper::indexOf(FileModeNames, FM_Max, pMessage->data(XN_MODE));

	QString body;
	QString links;

	if(fileMode == FM_Send) {
		caption = tr("Sending '%1' to %2.");
		body = caption.arg(pMessage->data(XN_FILENAME), *lpszUserName);
		switch(fileOp) {
		case FO_Request:
			sendFileMap.insert(fileId, *pMessage);
			links = "<a href='lmc://" + fileType + "/" + cancelOp + "/" + fileId + "'>" + tr("Cancel") + "</a>";
			break;
		case FO_Cancel: case FO_Accept: case FO_Decline: case FO_Error: case FO_Abort: case FO_Complete:
			links = getFileStatusMessage(FM_Send, fileOp);
			break;
		default:
			return QString();
		}
	} else {
		if(autoFile)
			caption = (type == MT_File) ? tr("%1 is sending you a file:") : tr("%1 is sending you a folder:");
		else
			caption = (type == MT_File) ? tr("%1 sends you a file:") : tr("%1 sends you a folder:");
		body = caption.arg(*lpszUserName) + "<br>" + pMessage->data(XN_FILENAME) + " (" +
			Helper::formatSize(pMessage->data(XN_FILESIZE).toLongLong()) + ")";

		switch(fileOp) {
		case FO_Request:
			receiveFileMap.insert(fileId, *pMessage);
			if(autoFile) {
				links = tr("Accepted");
				if(!bReload)
					fileOperation(fileId, acceptOp, fileType);
			} else {
				links = "<a href='lmc://" + fileType + "/" + acceptOp + "/" + fileId + "'>" + tr("Accept") + "</a>&nbsp;&nbsp;"
					"<a href='lmc://" + fileType + "/" + declineOp + "/" + fileId + "'>" + tr("Decline") + "</a>";
			}
			break;
		case FO_Cancel: case FO_Accept: case FO_Decline: case FO_Error: case FO_Abort: case FO_Complete:
			links = getFileStatusMessage(FM_Receive, fileOp);
			break;
		default:
			return QString();
		}
	}

	html = body + "<br>" + links;
	return html;
}

void lmcMessageBubbleLog::updateFileMessage(FileMode mode, FileOp op, QString fileId) {
	QString tempId = getFileTempId(mode, fileId);

	for(int index = 0; index < messageLog.count(); index++) {
		SingleMessage msg = messageLog.at(index);
		if(tempId.compare(msg.id) == 0) {
			XmlMessage xmlMessage = msg.message;
			xmlMessage.removeData(XN_FILEOP);
			xmlMessage.addData(XN_FILEOP, FileOpNames[op]);
			msg.message = xmlMessage;
			messageLog[index] = msg;

			QString html = getFileMessageText(msg.type, &msg.userName, &msg.message);
			MessageBubble* bubble = fileBubbles.value(tempId, nullptr);
			if(bubble)
				bubble->setMessageHtml(html);
			break;
		}
	}
}

void lmcMessageBubbleLog::updateUserName(QString* lpszUserId, QString* lpszUserName) {
	for(int index = 0; index < messageLog.count(); index++) {
		SingleMessage msg = messageLog.takeAt(index);
		if(lpszUserId->compare(msg.userId) == 0)
			msg.userName = *lpszUserName;
		messageLog.insert(index, msg);
	}
	reloadMessageLog();
}

void lmcMessageBubbleLog::updateAvatar(QString* lpszUserId, QString* lpszFilePath) {
	participantAvatars.insert(*lpszUserId, *lpszFilePath);
	reloadMessageLog();
}

void lmcMessageBubbleLog::reloadMessageLog(void) {
	initMessageLog(themePath, false);
	//	initMessageLog(clearLog=false) doesn't clear -- explicitly clear here,
	//	then rebuild from the structured message log (same data source the
	//	old rich-text version used for save/restore, entirely unaffected by
	//	this rewrite)
	QLayoutItem* item;
	while((item = contentLayout->takeAt(0)) != nullptr) {
		if(item->widget())
			item->widget()->deleteLater();
		else if(item->layout()) {
			QLayoutItem* child;
			while((child = item->layout()->takeAt(0)) != nullptr) {
				if(child->widget()) child->widget()->deleteLater();
				delete child;
			}
			delete item->layout();
		}
		delete item;
	}
	contentLayout->addStretch(1);
	fileBubbles.clear();
	chatStateBubble = nullptr;
	lastId = QString();

	for(int index = 0; index < messageLog.count(); index++) {
		SingleMessage msg = messageLog[index];
		appendMessageLog(msg.type, &msg.userId, &msg.userName, &msg.message, true);
	}
}

QString lmcMessageBubbleLog::prepareMessageLogForSave(OutputFormat format) {
	QDateTime time;

	if(format == HtmlFormat) {
		QString html =
			"<html><head><style type='text/css'>"
			"*{font-size: 9pt;} body {-webkit-nbsp-mode: space; word-wrap: break-word;}"
			"span.salutation {float:left; font-weight: bold;} span.time {float: right;}"
			"span.message {clear: both; display: block;} p {border-bottom: 1px solid #CCC;}"
			"</style></head><body>";

		for(int index = 0; index < messageLog.count(); index++) {
			SingleMessage msg = messageLog.at(index);
			if(msg.type == MT_Message || msg.type == MT_GroupMessage) {
				time.setMSecsSinceEpoch(msg.message.header(XN_TIME).toLongLong());
				QString messageText = msg.message.data(XN_MESSAGE);
				decodeMessage(&messageText, true);
				QString htmlMsg =
					"<p><span class='salutation'>" + msg.userName + ":</span>"
					"<span class='time'>" + QLocale::system().toString(time.time(), QLocale::ShortFormat) + "</span>"
					"<span class='message'>" + messageText + "</span></p>";
				html.append(htmlMsg);
			}
		}
		html.append("</body></html>");
		return html;
	} else {
		QString text;
		for(int index = 0; index < messageLog.count(); index++) {
			SingleMessage msg = messageLog.at(index);
			if(msg.type == MT_Message || msg.type == MT_GroupMessage) {
				time.setMSecsSinceEpoch(msg.message.header(XN_TIME).toLongLong());
				QString textMsg =
					msg.userName + " [" + QLocale::system().toString(time.time(), QLocale::ShortFormat) + "]:\n" +
					msg.message.data(XN_MESSAGE) + "\n\n";
				text.append(textMsg);
			}
		}
		return text;
	}
}

void lmcMessageBubbleLog::setAutoScroll(bool enable) {
	autoScroll = enable;
}

void lmcMessageBubbleLog::abortPendingFileOperations(void) {
	QMap<QString, XmlMessage>::iterator sIndex = sendFileMap.begin();
	while(sIndex != sendFileMap.end()) {
		XmlMessage fileData = sIndex.value();
		FileOp fileOp = (FileOp)Helper::indexOf(FileOpNames, FO_Max, fileData.data(XN_FILEOP));
		if(fileOp == FO_Request) {
			updateFileMessage(FM_Send, FO_Abort, fileData.data(XN_FILEID));
			sIndex.value().removeData(XN_FILEOP);
			sIndex.value().addData(XN_FILEOP, FileOpNames[FO_Abort]);
		}
		sIndex++;
	}
	QMap<QString, XmlMessage>::iterator rIndex = receiveFileMap.begin();
	while(rIndex != receiveFileMap.end()) {
		XmlMessage fileData = rIndex.value();
		FileOp fileOp = (FileOp)Helper::indexOf(FileOpNames, FO_Max, fileData.data(XN_FILEOP));
		if(fileOp == FO_Request) {
			updateFileMessage(FM_Receive, FO_Abort, fileData.data(XN_FILEID));
			rIndex.value().removeData(XN_FILEOP);
			rIndex.value().addData(XN_FILEOP, FileOpNames[FO_Abort]);
		}
		rIndex++;
	}
}

void lmcMessageBubbleLog::saveMessageLog(QString filePath) {
	if(messageLog.isEmpty())
		return;

	QDir dir = QFileInfo(filePath).dir();
	if(!dir.exists())
		dir.mkpath(dir.absolutePath());

	QFile file(filePath);
	if(!file.open(QIODevice::WriteOnly))
		return;

	QDataStream stream(&file);
	stream << peerId << peerName << messageLog;

	file.close();
}

void lmcMessageBubbleLog::restoreMessageLog(QString filePath, bool reload) {
	messageLog.clear();

	QFile file(filePath);
	if(!file.open(QIODevice::ReadOnly))
		return;

	QDataStream stream(&file);
	stream >> peerId >> peerName >> messageLog;

	file.close();

	if(reload)
		reloadMessageLog();
}

QString lmcMessageBubbleLog::getFontStyle(QFont* pFont, QColor* pColor, bool size) {
	Q_UNUSED(pFont);
	Q_UNUSED(pColor);
	Q_UNUSED(size);
	//	Per-message custom fonts/colors from the old rich-text theme system
	//	are intentionally not carried over to the widget-based bubbles --
	//	message styling now follows the INYTEL brand consistently instead.
	return QString();
}

QString lmcMessageBubbleLog::getFileStatusMessage(FileMode mode, FileOp op) {
	QString message;
	switch(op) {
	case FO_Accept: message = tr("Accepted"); break;
	case FO_Decline: message = tr("Declined"); break;
	case FO_Cancel: message = (mode == FM_Send) ? tr("Cancelled") : tr("Cancelled by sender"); break;
	case FO_Error: message = tr("Failed"); break;
	case FO_Abort: message = tr("Aborted"); break;
	case FO_Complete: message = tr("Completed"); break;
	default: break;
	}
	return message;
}

QString lmcMessageBubbleLog::getChatStateMessage(ChatState chatState) {
	QString message = QString();
	switch(chatState) {
	case CS_Composing: message = tr("%1 is typing..."); break;
	case CS_Paused: message = tr("%1 has entered text"); break;
	default: break;
	}
	return message;
}

QString lmcMessageBubbleLog::getChatRoomMessage(GroupMsgOp op) {
	QString message = QString();
	switch(op) {
	case GMO_Join: message = tr("%1 has joined this conversation"); break;
	case GMO_Leave: message = tr("%1 has left this conversation"); break;
	default: break;
	}
	return message;
}

void lmcMessageBubbleLog::fileOperation(QString fileId, QString action, QString fileType, FileMode mode) {
	XmlMessage fileData, xmlMessage;
	MessageType type = (fileType.compare("file") == 0) ? MT_File : MT_Folder;

	if(mode == FM_Send)
		fileData = sendFileMap.value(fileId);
	else
		fileData = receiveFileMap.value(fileId);

	xmlMessage.addData(XN_FILEID, fileId);

	if(action.compare(acceptOp) == 0)
		xmlMessage.addData(XN_FILEOP, FileOpNames[FO_Accept]);
	else if(action.compare(declineOp) == 0)
		xmlMessage.addData(XN_FILEOP, FileOpNames[FO_Decline]);
	else if(action.compare(cancelOp) == 0)
		xmlMessage.addData(XN_FILEOP, FileOpNames[FO_Cancel]);

	QString userId = peerId;
	QString userName = peerName;
	emit messageSent(type, &userId, &xmlMessage);
}

void lmcMessageBubbleLog::decodeMessage(QString* lpszMessage, bool useDefaults) {
	if(!useDefaults && trimMessage)
		*lpszMessage = lpszMessage->trimmed();

	if(useDefaults || allowLinks) {
		lpszMessage->replace(QRegularExpression("((?:(?:https?|ftp|file)://|www\\.|ftp\\.)[-A-Z0-9+&@#/%=~_|$?!:,.]*[A-Z0-9+&@#/%=~_|$])", QRegularExpression::CaseInsensitiveOption),
							 "<a data-isLink='true' href='\\1'>\\1</a>");
		lpszMessage->replace("<a data-isLink='true' href='www", "<a data-isLink='true' href='http://www");

		if(!useDefaults && pathToLink)
			lpszMessage->replace(QRegularExpression("((\\\\\\\\[\\w-]+\\\\[^\\\\/:*?<>|""]+)((?:\\\\[^\\\\/:*?<>|""]+)*\\\\?)$)"),
								 "<a data-isLink='true' href='file:\\1'>\\1</a>");
	}

	QString message = QString();
	int index = 0;

	while(index < lpszMessage->length()) {
		int aStart = lpszMessage->indexOf("<a data-isLink='true'", index);
		if(aStart != -1) {
			QString messageSegment = lpszMessage->mid(index, aStart - index);
			processMessageText(&messageSegment, useDefaults);
			message.append(messageSegment);
			index = lpszMessage->indexOf("</a>", aStart) + 4;
			QString linkSegment = lpszMessage->mid(aStart, index - aStart);
			message.append(linkSegment);
		} else {
			QString messageSegment = lpszMessage->mid(index);
			processMessageText(&messageSegment, useDefaults);
			message.append(messageSegment);
			break;
		}
	}

	*lpszMessage = message;
}

void lmcMessageBubbleLog::processMessageText(QString* lpszMessageText, bool useDefaults) {
	ChatHelper::makeHtmlSafe(lpszMessageText);
	if(!useDefaults && showSmiley)
		ChatHelper::decodeSmileys(lpszMessageText);
}

QString lmcMessageBubbleLog::getTimeString(QDateTime* pTime) {
	QString szTimeStamp;
	if(messageTime) {
		if(messageDate)
			szTimeStamp.append(QLocale::system().toString(pTime->date(), QLocale::ShortFormat) + " ");
		szTimeStamp.append(QLocale::system().toString(pTime->time(), QLocale::ShortFormat));
	}
	return szTimeStamp;
}

void lmcMessageBubbleLog::setUIText(void) {
	copyAction->setText(tr("&Copy"));
	selectAllAction->setText(tr("Select &All"));
	reloadMessageLog();
}

QString lmcMessageBubbleLog::getFileTempId(FileMode mode, QString fileId) const {
	QString tempId = (mode == FM_Send) ? "send" : "receive";
	tempId.append(fileId);
	return tempId;
}

QString lmcMessageBubbleLog::getFileTempId(XmlMessage* pMessage) const {
	QString fileId = pMessage->data(XN_FILEID);
	FileMode fileMode = (FileMode)Helper::indexOf(FileModeNames, FM_Max, pMessage->data(XN_MODE));
	return getFileTempId(fileMode, fileId);
}

void lmcMessageBubbleLog::scrollToEnd(void) {
	QTimer::singleShot(0, this, [this]() {
		QScrollBar* bar = verticalScrollBar();
		bar->setValue(bar->maximum());
	});
}

void lmcMessageBubbleLog::bubble_linkHovered(const QString& link) {
	Q_UNUSED(link);
}

void lmcMessageBubbleLog::changeEvent(QEvent* event) {
	if(event->type() == QEvent::LanguageChange)
		setUIText();
	QScrollArea::changeEvent(event);
}

void lmcMessageBubbleLog::resizeEvent(QResizeEvent* event) {
	QScrollArea::resizeEvent(event);
}

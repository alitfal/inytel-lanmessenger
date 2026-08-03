#ifndef MESSAGEBUBBLELOG_H
#define MESSAGEBUBBLELOG_H

#include "shared.h"
#include "chatdefinitions.h"
#include "chathelper.h"
#include "xmlmessage.h"
#include "theme.h"
#include "messagebubble.h"

#include <QScrollArea>
#include <QVBoxLayout>
#include <QMap>
#include <QMenu>

//	A single, real, native widget per chat message: this is what makes true
//	rounded corners and soft drop shadows possible. Qt's rich text engine
//	(used by lmcMessageLog, still used by chatroomwindow/broadcastwindow)
//	does not support border-radius or box-shadow at all -- verified
//	empirically before starting this rewrite.
class lmcMessageBubbleLog : public QScrollArea
{
	Q_OBJECT

public:
	explicit lmcMessageBubbleLog(QWidget* parent = nullptr);
	~lmcMessageBubbleLog(void) override;

	void initMessageLog(QString themePath, bool clearLog = true);
	void reloadTheme();
	void appendMessageLog(MessageType type, QString* lpszUserId, QString* lpszUserName, XmlMessage* pMessage,
		bool bReload = false);
	void updateFileMessage(FileMode mode, FileOp op, QString fileId);
	void updateUserName(QString* lpszUserId, QString* lpszUserName);
	void updateAvatar(QString* lpszUserId, QString* lpszFilePath);
	void reloadMessageLog(void);
	QString prepareMessageLogForSave(OutputFormat format = HtmlFormat);
	void setAutoScroll(bool enable);
	void abortPendingFileOperations(void);
	void saveMessageLog(QString filePath);
	void restoreMessageLog(QString filePath, bool reload = true);

	QString localId;
	QString peerId;
	QString peerName;
	QHash<QString, QString> participantAvatars;
	QString lastId;
	bool hasData;
	int fontSizeVal;
	bool showSmiley;
	bool autoFile;
	bool messageTime;
	bool messageDate;
	QString themePath;
	bool allowLinks;
	bool pathToLink;
	bool trimMessage;

signals:
	void messageSent(MessageType type, QString* lpszUserId, XmlMessage* pMessage);

protected:
	void changeEvent(QEvent* event) override;
	void resizeEvent(QResizeEvent* event) override;

private slots:
	void bubble_linkHovered(const QString& link);

private:
	void createContextMenu(void);
	MessageBubble* appendBubble(BubbleStyle style, const QString& userId, const QString& senderName,
		const QString& html, const QDateTime* pTime, const QString& fileId = QString());
	void removeChatStateBubble(void);
	void appendBroadcast(QString* lpszUserId, QString* lpszUserName, QString* lpszMessage, QDateTime* pTime);
	void appendMessage(QString* lpszUserId, QString* lpszUserName, QString* lpszMessage, QDateTime* pTime,
		QFont* pFont, QColor* pColor);
	void appendPublicMessage(QString* lpszUserId, QString* lpszUserName, QString* lpszMessage, QDateTime* pTime,
		QFont* pFont, QColor* pColor, MessageType messageType);
	QString getFileMessageText(MessageType type, QString* lpszUserName, XmlMessage* pMessage, bool bReload = false);
	QString getFontStyle(QFont* pFont, QColor* pColor, bool size = false);
	QString getFileStatusMessage(FileMode mode, FileOp op);
	QString getChatStateMessage(ChatState chatState);
	QString getChatRoomMessage(GroupMsgOp op);
	void fileOperation(QString fileId, QString action, QString fileType, FileMode mode = FM_Receive);
	void decodeMessage(QString* lpszMessage, bool useDefaults = false);
	void processMessageText(QString* lpszMessageText, bool useDefaults);
	QString getTimeString(QDateTime* pTime);
	void setUIText(void);
	QString getFileTempId(FileMode mode, QString fileId) const;
	QString getFileTempId(XmlMessage* pMessage) const;
	void scrollToEnd(void);

	QWidget* content;
	QVBoxLayout* contentLayout;

	QMap<QString, XmlMessage> sendFileMap;
	QMap<QString, XmlMessage> receiveFileMap;
	QList<SingleMessage> messageLog;
	ThemeData themeData;
	QMenu* contextMenu;
	QAction* copyAction;
	QAction* selectAllAction;
	bool outStyle;
	bool autoScroll;

	MessageBubble* chatStateBubble;			//	the current "is typing..." bubble, if any
	QHash<QString, MessageBubble*> fileBubbles;	//	fileId -> bubble, for live progress updates
};

#endif // MESSAGEBUBBLELOG_H

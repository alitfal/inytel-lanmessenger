#ifndef MESSAGEBUBBLE_H
#define MESSAGEBUBBLE_H

#include <QFrame>
#include <QLabel>
#include <QString>
#include <QPixmap>

//	Visual style of a message bubble. Deliberately separate from MessageType
//	(chatdefinitions.h) so this widget stays decoupled from the protocol layer.
enum class BubbleStyle {
	Out,		//	local user's chat message
	In,			//	remote user's chat message
	PublicOut,	//	local user's message in a public/group chat
	PublicIn,	//	remote user's message in a public/group chat
	System,		//	status/join/leave/rename notices
	Broadcast,	//	broadcast message
	File,		//	file/folder transfer request
	Error		//	delivery failure / error notice
};

//	A single chat message rendered as a real, native widget: this is what
//	makes true rounded corners and soft drop shadows possible, since Qt's
//	rich text engine (used by the old QTextBrowser-based log) does not
//	support border-radius or box-shadow at all. Uses only cross-platform
//	Qt APIs (QSS + QPainter + QGraphicsDropShadowEffect) -- nothing here
//	is Windows/macOS/Linux specific.
class MessageBubble : public QFrame
{
	Q_OBJECT

public:
	explicit MessageBubble(BubbleStyle style, QWidget* parent = nullptr);

	void setSender(const QString& name);
	void setAvatar(const QPixmap& pixmap);
	void setTimeText(const QString& text);
	//	content may contain the same limited rich-text markup the app already
	//	produces elsewhere (links, <b>/<i>, inline smiley <img> tags)
	void setMessageHtml(const QString& html);
	//	consecutive messages from the same sender hide the repeated
	//	avatar/name header, matching the old theme's *NextContent behavior
	void setShowHeader(bool show);
	void setStyle(BubbleStyle style);

	BubbleStyle style() const { return bubbleStyle; }
	//	set only for MT_File/MT_Folder bubbles, used to find-and-update the
	//	right widget when file transfer progress changes -- this replaces
	//	the old QTextBlockData::id search-and-replace mechanism with a
	//	simple, direct pointer lookup (see MessageBubbleLog::fileBubbles)
	QString fileId;

signals:
	void linkHovered(const QString& link);
	void linkActivated(const QString& link);

protected:
	void paintEvent(QPaintEvent* event) override;

private:
	void buildLayout();
	void applyPalette();

	BubbleStyle bubbleStyle;
	bool showHeader;

	QLabel* avatarLabel;
	QLabel* senderLabel;
	QLabel* messageLabel;
	QLabel* timeLabel;
};

#endif // MESSAGEBUBBLE_H

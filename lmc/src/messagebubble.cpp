#include "messagebubble.h"

#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QGraphicsDropShadowEffect>
#include <QPainter>
#include <QPainterPath>

MessageBubble::MessageBubble(BubbleStyle style, QWidget* parent)
	: QFrame(parent), bubbleStyle(style), showHeader(true) {
	setAttribute(Qt::WA_StyledBackground, true);
	buildLayout();
	applyPalette();

	//	Real, soft drop shadow -- pure QPainter compositing under the hood,
	//	so it behaves identically on Windows, macOS and Linux. Kept fairly
	//	cheap (small blur radius) since a long chat history can contain
	//	hundreds of these widgets.
	QGraphicsDropShadowEffect* shadow = new QGraphicsDropShadowEffect(this);
	shadow->setBlurRadius(12);
	shadow->setOffset(0, 2);
	shadow->setColor(QColor(15, 23, 42, 35));
	setGraphicsEffect(shadow);
}

void MessageBubble::buildLayout() {
	avatarLabel = new QLabel(this);
	avatarLabel->setFixedSize(34, 34);
	avatarLabel->setScaledContents(true);

	senderLabel = new QLabel(this);
	senderLabel->setObjectName("bubbleSender");

	messageLabel = new QLabel(this);
	messageLabel->setObjectName("bubbleMessage");
	messageLabel->setWordWrap(true);
	messageLabel->setTextFormat(Qt::RichText);
	messageLabel->setTextInteractionFlags(Qt::TextBrowserInteraction);
	messageLabel->setOpenExternalLinks(false);
	connect(messageLabel, &QLabel::linkHovered, this, &MessageBubble::linkHovered);
	connect(messageLabel, &QLabel::linkActivated, this, &MessageBubble::linkActivated);

	timeLabel = new QLabel(this);
	timeLabel->setObjectName("bubbleTime");

	QVBoxLayout* textCol = new QVBoxLayout();
	textCol->setContentsMargins(0, 0, 0, 0);
	textCol->setSpacing(2);
	textCol->addWidget(senderLabel);
	textCol->addWidget(messageLabel);
	textCol->addWidget(timeLabel, 0, Qt::AlignRight);

	QHBoxLayout* outer = new QHBoxLayout(this);
	outer->setContentsMargins(12, 8, 12, 8);
	outer->setSpacing(8);
	outer->addWidget(avatarLabel, 0, Qt::AlignTop);
	outer->addLayout(textCol, 1);

	setMaximumWidth(340);
}

void MessageBubble::applyPalette() {
	QString bg, fg, senderColor, timeColor;
	bool showAvatarCol = false;

	switch(bubbleStyle) {
	case BubbleStyle::Out:
	case BubbleStyle::PublicOut:
		bg = "#4f46e5"; fg = "#ffffff";
		senderColor = "#e0e7ff"; timeColor = "#c7d2fe";
		break;
	case BubbleStyle::In:
	case BubbleStyle::PublicIn:
		bg = "#f1f5f9"; fg = "#0f172a";
		senderColor = "#334155"; timeColor = "#94a3b8";
		showAvatarCol = true;
		break;
	case BubbleStyle::System:
		bg = "#e0e7ff"; fg = "#4f46e5";
		senderColor = "#4f46e5"; timeColor = "#818cf8";
		break;
	case BubbleStyle::Broadcast:
		bg = "#d1fae5"; fg = "#065f46";
		senderColor = "#059669"; timeColor = "#34d399";
		break;
	case BubbleStyle::File:
		bg = "#fef3c7"; fg = "#78350f";
		senderColor = "#d97706"; timeColor = "#f59e0b";
		break;
	case BubbleStyle::Error:
		bg = "#ffe4e6"; fg = "#9f1239";
		senderColor = "#e11d48"; timeColor = "#fb7185";
		break;
	}

	setStyleSheet(QString(
		"MessageBubble { background: %1; border-radius: 16px; }"
		"QLabel#bubbleSender { color: %2; font-weight: 700; font-size: 12px; background: transparent; }"
		"QLabel#bubbleMessage { color: %3; font-size: 13px; background: transparent; }"
		"QLabel#bubbleMessage a { color: %3; text-decoration: underline; }"
		"QLabel#bubbleTime { color: %4; font-size: 10px; background: transparent; }"
	).arg(bg, senderColor, fg, timeColor));

	avatarLabel->setVisible(showAvatarCol);
}

void MessageBubble::setStyle(BubbleStyle style) {
	bubbleStyle = style;
	applyPalette();
}

void MessageBubble::setSender(const QString& name) {
	senderLabel->setText(name);
	senderLabel->setVisible(!name.isEmpty() && showHeader);
}

void MessageBubble::setAvatar(const QPixmap& pixmap) {
	avatarLabel->setPixmap(pixmap);
	avatarLabel->setVisible(showHeader && (bubbleStyle == BubbleStyle::In || bubbleStyle == BubbleStyle::PublicIn));
}

void MessageBubble::setTimeText(const QString& text) {
	timeLabel->setText(text);
	timeLabel->setVisible(!text.isEmpty());
}

void MessageBubble::setMessageHtml(const QString& html) {
	messageLabel->setText(html);
}

void MessageBubble::setShowHeader(bool show) {
	showHeader = show;
	senderLabel->setVisible(show && !senderLabel->text().isEmpty());
	avatarLabel->setVisible(show && (bubbleStyle == BubbleStyle::In || bubbleStyle == BubbleStyle::PublicIn));
}

void MessageBubble::paintEvent(QPaintEvent* event) {
	//	QFrame + "background" in the stylesheet already paints the rounded
	//	rect via Qt's style-sheet engine (which, unlike the rich text
	//	engine, fully supports border-radius on real widgets -- verified
	//	empirically before starting this rewrite).
	QFrame::paintEvent(event);
}

/********************************************************************************
** Form generated from reading UI file 'historywindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORYWINDOW_H
#define UI_HISTORYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HistoryWindow
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QTreeWidget *tvMsgList;
    QFrame *fraMessageLog;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *logLayout;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnClearHistory;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnClose;

    void setupUi(QWidget *HistoryWindow)
    {
        if (HistoryWindow->objectName().isEmpty())
            HistoryWindow->setObjectName("HistoryWindow");
        HistoryWindow->resize(627, 412);
        verticalLayout = new QVBoxLayout(HistoryWindow);
        verticalLayout->setSpacing(3);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 3);
        splitter = new QSplitter(HistoryWindow);
        splitter->setObjectName("splitter");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setOrientation(Qt::Horizontal);
        splitter->setHandleWidth(7);
        splitter->setChildrenCollapsible(false);
        tvMsgList = new QTreeWidget(splitter);
        tvMsgList->setObjectName("tvMsgList");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tvMsgList->sizePolicy().hasHeightForWidth());
        tvMsgList->setSizePolicy(sizePolicy1);
        tvMsgList->setAlternatingRowColors(true);
        tvMsgList->setIndentation(0);
        tvMsgList->setItemsExpandable(false);
        tvMsgList->setSortingEnabled(true);
        tvMsgList->setExpandsOnDoubleClick(false);
        tvMsgList->setColumnCount(2);
        splitter->addWidget(tvMsgList);
        fraMessageLog = new QFrame(splitter);
        fraMessageLog->setObjectName("fraMessageLog");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy2.setHorizontalStretch(2);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(fraMessageLog->sizePolicy().hasHeightForWidth());
        fraMessageLog->setSizePolicy(sizePolicy2);
        fraMessageLog->setFrameShape(QFrame::StyledPanel);
        fraMessageLog->setFrameShadow(QFrame::Sunken);
        horizontalLayout_2 = new QHBoxLayout(fraMessageLog);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        logLayout = new QVBoxLayout();
        logLayout->setSpacing(6);
        logLayout->setObjectName("logLayout");

        horizontalLayout_2->addLayout(logLayout);

        splitter->addWidget(fraMessageLog);

        verticalLayout->addWidget(splitter);

        line = new QFrame(HistoryWindow);
        line->setObjectName("line");
        line->setMaximumSize(QSize(16777215, 2));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(3, -1, 3, -1);
        btnClearHistory = new QPushButton(HistoryWindow);
        btnClearHistory->setObjectName("btnClearHistory");

        horizontalLayout->addWidget(btnClearHistory);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnClose = new QPushButton(HistoryWindow);
        btnClose->setObjectName("btnClose");

        horizontalLayout->addWidget(btnClose);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(tvMsgList, btnClose);
        QWidget::setTabOrder(btnClose, btnClearHistory);

        retranslateUi(HistoryWindow);
        QObject::connect(btnClose, &QPushButton::clicked, HistoryWindow, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(HistoryWindow);
    } // setupUi

    void retranslateUi(QWidget *HistoryWindow)
    {
        HistoryWindow->setWindowTitle(QCoreApplication::translate("HistoryWindow", "Form", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = tvMsgList->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("HistoryWindow", "Date", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("HistoryWindow", "Name", nullptr));
        btnClearHistory->setText(QCoreApplication::translate("HistoryWindow", "Clear History", nullptr));
        btnClose->setText(QCoreApplication::translate("HistoryWindow", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HistoryWindow: public Ui_HistoryWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORYWINDOW_H

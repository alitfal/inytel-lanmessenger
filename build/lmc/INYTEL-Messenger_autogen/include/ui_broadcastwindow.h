/********************************************************************************
** Form generated from reading UI file 'broadcastwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BROADCASTWINDOW_H
#define UI_BROADCASTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "usertreewidget.h"

QT_BEGIN_NAMESPACE

class Ui_BroadcastWindow
{
public:
    QVBoxLayout *verticalLayout_3;
    QLabel *lblInfo;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QWidget *toolBarWidget;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *toolBarLayout;
    QTextEdit *txtMessage;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnSend;
    QPushButton *btnCancel;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    lmcUserTreeWidget *tvUserList;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnSelectAll;
    QPushButton *btnSelectNone;

    void setupUi(QWidget *BroadcastWindow)
    {
        if (BroadcastWindow->objectName().isEmpty())
            BroadcastWindow->setObjectName("BroadcastWindow");
        BroadcastWindow->resize(504, 215);
        verticalLayout_3 = new QVBoxLayout(BroadcastWindow);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 3);
        lblInfo = new QLabel(BroadcastWindow);
        lblInfo->setObjectName("lblInfo");
        lblInfo->setAutoFillBackground(true);
        lblInfo->setFrameShape(QFrame::Panel);
        lblInfo->setFrameShadow(QFrame::Raised);
        lblInfo->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(lblInfo);

        splitter = new QSplitter(BroadcastWindow);
        splitter->setObjectName("splitter");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setOrientation(Qt::Horizontal);
        splitter->setHandleWidth(7);
        splitter->setChildrenCollapsible(false);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName("layoutWidget");
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        toolBarWidget = new QWidget(layoutWidget);
        toolBarWidget->setObjectName("toolBarWidget");
        toolBarWidget->setMinimumSize(QSize(0, 24));
        toolBarWidget->setMaximumSize(QSize(16777215, 24));
        horizontalLayout_3 = new QHBoxLayout(toolBarWidget);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        toolBarLayout = new QHBoxLayout();
        toolBarLayout->setSpacing(6);
        toolBarLayout->setObjectName("toolBarLayout");

        horizontalLayout_3->addLayout(toolBarLayout);


        verticalLayout->addWidget(toolBarWidget);

        txtMessage = new QTextEdit(layoutWidget);
        txtMessage->setObjectName("txtMessage");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(4);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(txtMessage->sizePolicy().hasHeightForWidth());
        txtMessage->setSizePolicy(sizePolicy1);
        txtMessage->setMinimumSize(QSize(175, 0));
        txtMessage->setTabChangesFocus(true);
        txtMessage->setAcceptRichText(false);

        verticalLayout->addWidget(txtMessage);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(-1, 3, -1, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        btnSend = new QPushButton(layoutWidget);
        btnSend->setObjectName("btnSend");

        horizontalLayout_4->addWidget(btnSend);

        btnCancel = new QPushButton(layoutWidget);
        btnCancel->setObjectName("btnCancel");

        horizontalLayout_4->addWidget(btnCancel);


        verticalLayout->addLayout(horizontalLayout_4);

        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName("layoutWidget1");
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 3, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName("label");
        label->setMinimumSize(QSize(0, 20));

        verticalLayout_2->addWidget(label);

        tvUserList = new lmcUserTreeWidget(layoutWidget1);
        tvUserList->setObjectName("tvUserList");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tvUserList->sizePolicy().hasHeightForWidth());
        tvUserList->setSizePolicy(sizePolicy2);
        tvUserList->setMinimumSize(QSize(100, 0));
        tvUserList->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tvUserList->setIndentation(0);
        tvUserList->setAnimated(true);
        tvUserList->setAllColumnsShowFocus(true);
        tvUserList->header()->setVisible(false);

        verticalLayout_2->addWidget(tvUserList);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(-1, 3, -1, -1);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        btnSelectAll = new QPushButton(layoutWidget1);
        btnSelectAll->setObjectName("btnSelectAll");

        horizontalLayout->addWidget(btnSelectAll);

        btnSelectNone = new QPushButton(layoutWidget1);
        btnSelectNone->setObjectName("btnSelectNone");

        horizontalLayout->addWidget(btnSelectNone);


        verticalLayout_2->addLayout(horizontalLayout);

        splitter->addWidget(layoutWidget1);

        verticalLayout_3->addWidget(splitter);

        QWidget::setTabOrder(txtMessage, tvUserList);

        retranslateUi(BroadcastWindow);
        QObject::connect(btnCancel, &QPushButton::clicked, BroadcastWindow, qOverload<>(&QWidget::close));

        btnSend->setDefault(true);


        QMetaObject::connectSlotsByName(BroadcastWindow);
    } // setupUi

    void retranslateUi(QWidget *BroadcastWindow)
    {
        BroadcastWindow->setWindowTitle(QCoreApplication::translate("BroadcastWindow", "Form", nullptr));
        btnSend->setText(QCoreApplication::translate("BroadcastWindow", "Send", nullptr));
        btnCancel->setText(QCoreApplication::translate("BroadcastWindow", "Cancel", nullptr));
        label->setText(QCoreApplication::translate("BroadcastWindow", "Send To:", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = tvUserList->headerItem();
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("BroadcastWindow", "Send To:", nullptr));
        btnSelectAll->setText(QCoreApplication::translate("BroadcastWindow", "Select All", nullptr));
        btnSelectNone->setText(QCoreApplication::translate("BroadcastWindow", "Select None", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BroadcastWindow: public Ui_BroadcastWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BROADCASTWINDOW_H

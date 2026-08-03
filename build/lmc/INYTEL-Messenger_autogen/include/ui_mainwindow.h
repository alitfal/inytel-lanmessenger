/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "subcontrols.h"
#include "usertreewidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *statusLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *infoLayout;
    QHBoxLayout *horizontalLayout;
    lmcLabel *lblUserName;
    QSpacerItem *horizontalSpacer;
    QLabel *lblStatus;
    lmcLineEdit *txtNote;
    QSpacerItem *horizontalSpacer_5;
    lmcToolButton *btnAvatar;
    QSpacerItem *horizontalSpacer_4;
    QLabel *lblDividerTop;
    QWidget *wgtToolBar;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *toolBarLayout;
    lmcUserTreeWidget *tvUserList;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(265, 445);
        verticalLayout_2 = new QVBoxLayout(MainWindow);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        frame = new QFrame(MainWindow);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(0, 78));
        frame->setMaximumSize(QSize(16777215, 78));
        frame->setFrameShape(QFrame::NoFrame);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(14, 14, 14, 14);
        horizontalSpacer_2 = new QSpacerItem(2, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        statusLayout = new QVBoxLayout();
        statusLayout->setSpacing(0);
        statusLayout->setObjectName("statusLayout");
        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        statusLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(statusLayout);

        horizontalSpacer_3 = new QSpacerItem(0, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        infoLayout = new QVBoxLayout();
        infoLayout->setSpacing(4);
        infoLayout->setObjectName("infoLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        lblUserName = new lmcLabel(frame);
        lblUserName->setObjectName("lblUserName");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblUserName->sizePolicy().hasHeightForWidth());
        lblUserName->setSizePolicy(sizePolicy);
        lblUserName->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(lblUserName);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        lblStatus = new QLabel(frame);
        lblStatus->setObjectName("lblStatus");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblStatus->sizePolicy().hasHeightForWidth());
        lblStatus->setSizePolicy(sizePolicy1);
        lblStatus->setMinimumSize(QSize(0, 0));
        lblStatus->setMaximumSize(QSize(16777215, 16777215));
        lblStatus->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(lblStatus);


        infoLayout->addLayout(horizontalLayout);

        txtNote = new lmcLineEdit(frame);
        txtNote->setObjectName("txtNote");
        txtNote->setMaximumSize(QSize(16777215, 24));

        infoLayout->addWidget(txtNote);


        horizontalLayout_2->addLayout(infoLayout);

        horizontalSpacer_5 = new QSpacerItem(0, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        btnAvatar = new lmcToolButton(frame);
        btnAvatar->setObjectName("btnAvatar");
        btnAvatar->setIconSize(QSize(32, 32));
        btnAvatar->setPopupMode(QToolButton::InstantPopup);
        btnAvatar->setAutoRaise(true);

        horizontalLayout_2->addWidget(btnAvatar);

        horizontalSpacer_4 = new QSpacerItem(0, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_2->addWidget(frame);

        lblDividerTop = new QLabel(MainWindow);
        lblDividerTop->setObjectName("lblDividerTop");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lblDividerTop->sizePolicy().hasHeightForWidth());
        lblDividerTop->setSizePolicy(sizePolicy2);
        lblDividerTop->setMinimumSize(QSize(0, 2));
        lblDividerTop->setMaximumSize(QSize(16777215, 2));

        verticalLayout_2->addWidget(lblDividerTop);

        wgtToolBar = new QWidget(MainWindow);
        wgtToolBar->setObjectName("wgtToolBar");
        sizePolicy1.setHeightForWidth(wgtToolBar->sizePolicy().hasHeightForWidth());
        wgtToolBar->setSizePolicy(sizePolicy1);
        verticalLayout_4 = new QVBoxLayout(wgtToolBar);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4->setObjectName("verticalLayout_4");
        toolBarLayout = new QHBoxLayout();
        toolBarLayout->setSpacing(0);
        toolBarLayout->setObjectName("toolBarLayout");

        verticalLayout_4->addLayout(toolBarLayout);


        verticalLayout_2->addWidget(wgtToolBar);

        tvUserList = new lmcUserTreeWidget(MainWindow);
        tvUserList->setObjectName("tvUserList");
        tvUserList->setFrameShape(QFrame::NoFrame);
        tvUserList->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tvUserList->setDragEnabled(true);
        tvUserList->setDragDropMode(QAbstractItemView::InternalMove);
        tvUserList->setDefaultDropAction(Qt::MoveAction);
        tvUserList->setIndentation(0);
        tvUserList->setAnimated(true);
        tvUserList->setAllColumnsShowFocus(true);
        tvUserList->header()->setVisible(false);

        verticalLayout_2->addWidget(tvUserList);

        QWidget::setTabOrder(tvUserList, btnAvatar);
        QWidget::setTabOrder(btnAvatar, txtNote);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Form", nullptr));
        lblUserName->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        lblStatus->setText(QCoreApplication::translate("MainWindow", "Status", nullptr));
        txtNote->setPlaceholderText(QCoreApplication::translate("MainWindow", "Type a note", nullptr));
#if QT_CONFIG(tooltip)
        btnAvatar->setToolTip(QCoreApplication::translate("MainWindow", "Change avatar", nullptr));
#endif // QT_CONFIG(tooltip)
        QTreeWidgetItem *___qtreewidgetitem = tvUserList->headerItem();
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("MainWindow", "Contacts", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

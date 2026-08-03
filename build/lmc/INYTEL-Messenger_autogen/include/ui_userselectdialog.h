/********************************************************************************
** Form generated from reading UI file 'userselectdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERSELECTDIALOG_H
#define UI_USERSELECTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "usertreewidget.h"

QT_BEGIN_NAMESPACE

class Ui_UserSelectDialog
{
public:
    QVBoxLayout *verticalLayout;
    lmcUserTreeWidget *tvUserList;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnOK;
    QPushButton *btnCancel;

    void setupUi(QDialog *UserSelectDialog)
    {
        if (UserSelectDialog->objectName().isEmpty())
            UserSelectDialog->setObjectName("UserSelectDialog");
        UserSelectDialog->setWindowModality(Qt::WindowModal);
        UserSelectDialog->resize(291, 386);
        verticalLayout = new QVBoxLayout(UserSelectDialog);
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        verticalLayout->setObjectName("verticalLayout");
        tvUserList = new lmcUserTreeWidget(UserSelectDialog);
        tvUserList->setObjectName("tvUserList");
        tvUserList->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tvUserList->setIndentation(0);
        tvUserList->header()->setVisible(false);

        verticalLayout->addWidget(tvUserList);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnOK = new QPushButton(UserSelectDialog);
        btnOK->setObjectName("btnOK");

        horizontalLayout->addWidget(btnOK);

        btnCancel = new QPushButton(UserSelectDialog);
        btnCancel->setObjectName("btnCancel");

        horizontalLayout->addWidget(btnCancel);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(UserSelectDialog);
        QObject::connect(btnOK, &QPushButton::clicked, UserSelectDialog, qOverload<>(&QDialog::accept));
        QObject::connect(btnCancel, &QPushButton::clicked, UserSelectDialog, qOverload<>(&QDialog::reject));

        btnOK->setDefault(true);


        QMetaObject::connectSlotsByName(UserSelectDialog);
    } // setupUi

    void retranslateUi(QDialog *UserSelectDialog)
    {
        UserSelectDialog->setWindowTitle(QCoreApplication::translate("UserSelectDialog", "Dialog", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = tvUserList->headerItem();
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("UserSelectDialog", "Contacts", nullptr));
        btnOK->setText(QCoreApplication::translate("UserSelectDialog", "OK", nullptr));
        btnCancel->setText(QCoreApplication::translate("UserSelectDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserSelectDialog: public Ui_UserSelectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERSELECTDIALOG_H

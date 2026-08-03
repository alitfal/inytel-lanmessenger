/********************************************************************************
** Form generated from reading UI file 'userinfowindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERINFOWINDOW_H
#define UI_USERINFOWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserInfoWindow
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblAvatar;
    QVBoxLayout *verticalLayout;
    QLabel *lblUserName;
    QLabel *lblStatus;
    QSpacerItem *verticalSpacer;
    QTabWidget *tabWidget;
    QWidget *tabPersonal;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *lblFirstNameDesc;
    QLineEdit *txtFirstName;
    QVBoxLayout *verticalLayout_4;
    QLabel *lblLastNameDesc;
    QLineEdit *txtLastName;
    QVBoxLayout *verticalLayout_5;
    QLabel *lblAbout;
    QPlainTextEdit *txtAbout;
    QWidget *tabSystem;
    QFormLayout *formLayout;
    QLabel *lblIPAddressDesc;
    QLabel *lblIPAddress;
    QLabel *lblLogonNameDesc;
    QLabel *lblLogonName;
    QLabel *lblComputerNameDesc;
    QLabel *lblComputerName;
    QLabel *lblOSNameDesc;
    QLabel *lblOSName;
    QLabel *lblVersionDesc;
    QLabel *lblVersion;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnClose;

    void setupUi(QDialog *UserInfoWindow)
    {
        if (UserInfoWindow->objectName().isEmpty())
            UserInfoWindow->setObjectName("UserInfoWindow");
        UserInfoWindow->resize(329, 260);
        verticalLayout_2 = new QVBoxLayout(UserInfoWindow);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lblAvatar = new QLabel(UserInfoWindow);
        lblAvatar->setObjectName("lblAvatar");
        lblAvatar->setMinimumSize(QSize(48, 48));
        lblAvatar->setMaximumSize(QSize(48, 48));

        horizontalLayout_2->addWidget(lblAvatar);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        lblUserName = new QLabel(UserInfoWindow);
        lblUserName->setObjectName("lblUserName");

        verticalLayout->addWidget(lblUserName);

        lblStatus = new QLabel(UserInfoWindow);
        lblStatus->setObjectName("lblStatus");

        verticalLayout->addWidget(lblStatus);

        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_2);

        tabWidget = new QTabWidget(UserInfoWindow);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setMinimumSize(QSize(311, 151));
        tabPersonal = new QWidget();
        tabPersonal->setObjectName("tabPersonal");
        verticalLayout_6 = new QVBoxLayout(tabPersonal);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName("verticalLayout_6");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName("verticalLayout_3");
        lblFirstNameDesc = new QLabel(tabPersonal);
        lblFirstNameDesc->setObjectName("lblFirstNameDesc");

        verticalLayout_3->addWidget(lblFirstNameDesc);

        txtFirstName = new QLineEdit(tabPersonal);
        txtFirstName->setObjectName("txtFirstName");
        txtFirstName->setReadOnly(true);

        verticalLayout_3->addWidget(txtFirstName);


        horizontalLayout_3->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName("verticalLayout_4");
        lblLastNameDesc = new QLabel(tabPersonal);
        lblLastNameDesc->setObjectName("lblLastNameDesc");

        verticalLayout_4->addWidget(lblLastNameDesc);

        txtLastName = new QLineEdit(tabPersonal);
        txtLastName->setObjectName("txtLastName");
        txtLastName->setReadOnly(true);

        verticalLayout_4->addWidget(txtLastName);


        horizontalLayout_3->addLayout(verticalLayout_4);


        verticalLayout_6->addLayout(horizontalLayout_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName("verticalLayout_5");
        lblAbout = new QLabel(tabPersonal);
        lblAbout->setObjectName("lblAbout");

        verticalLayout_5->addWidget(lblAbout);

        txtAbout = new QPlainTextEdit(tabPersonal);
        txtAbout->setObjectName("txtAbout");
        txtAbout->setMaximumSize(QSize(16777215, 41));
        txtAbout->setTabChangesFocus(true);
        txtAbout->setUndoRedoEnabled(false);
        txtAbout->setReadOnly(true);

        verticalLayout_5->addWidget(txtAbout);


        verticalLayout_6->addLayout(verticalLayout_5);

        tabWidget->addTab(tabPersonal, QString());
        tabSystem = new QWidget();
        tabSystem->setObjectName("tabSystem");
        formLayout = new QFormLayout(tabSystem);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName("formLayout");
        lblIPAddressDesc = new QLabel(tabSystem);
        lblIPAddressDesc->setObjectName("lblIPAddressDesc");
        lblIPAddressDesc->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, lblIPAddressDesc);

        lblIPAddress = new QLabel(tabSystem);
        lblIPAddress->setObjectName("lblIPAddress");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, lblIPAddress);

        lblLogonNameDesc = new QLabel(tabSystem);
        lblLogonNameDesc->setObjectName("lblLogonNameDesc");
        lblLogonNameDesc->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, lblLogonNameDesc);

        lblLogonName = new QLabel(tabSystem);
        lblLogonName->setObjectName("lblLogonName");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, lblLogonName);

        lblComputerNameDesc = new QLabel(tabSystem);
        lblComputerNameDesc->setObjectName("lblComputerNameDesc");
        lblComputerNameDesc->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, lblComputerNameDesc);

        lblComputerName = new QLabel(tabSystem);
        lblComputerName->setObjectName("lblComputerName");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, lblComputerName);

        lblOSNameDesc = new QLabel(tabSystem);
        lblOSNameDesc->setObjectName("lblOSNameDesc");
        lblOSNameDesc->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, lblOSNameDesc);

        lblOSName = new QLabel(tabSystem);
        lblOSName->setObjectName("lblOSName");

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, lblOSName);

        lblVersionDesc = new QLabel(tabSystem);
        lblVersionDesc->setObjectName("lblVersionDesc");
        lblVersionDesc->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, lblVersionDesc);

        lblVersion = new QLabel(tabSystem);
        lblVersion->setObjectName("lblVersion");

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, lblVersion);

        tabWidget->addTab(tabSystem, QString());

        verticalLayout_2->addWidget(tabWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnClose = new QPushButton(UserInfoWindow);
        btnClose->setObjectName("btnClose");

        horizontalLayout->addWidget(btnClose);


        verticalLayout_2->addLayout(horizontalLayout);

        QWidget::setTabOrder(tabWidget, txtFirstName);
        QWidget::setTabOrder(txtFirstName, txtLastName);
        QWidget::setTabOrder(txtLastName, txtAbout);
        QWidget::setTabOrder(txtAbout, btnClose);

        retranslateUi(UserInfoWindow);
        QObject::connect(btnClose, &QPushButton::clicked, UserInfoWindow, qOverload<>(&QDialog::accept));

        tabWidget->setCurrentIndex(0);
        btnClose->setDefault(true);


        QMetaObject::connectSlotsByName(UserInfoWindow);
    } // setupUi

    void retranslateUi(QDialog *UserInfoWindow)
    {
        UserInfoWindow->setWindowTitle(QCoreApplication::translate("UserInfoWindow", "Dialog", nullptr));
        lblAvatar->setText(QCoreApplication::translate("UserInfoWindow", "<Avatar>", nullptr));
        lblUserName->setText(QCoreApplication::translate("UserInfoWindow", "<User Name>", nullptr));
        lblStatus->setText(QCoreApplication::translate("UserInfoWindow", "<Status>", nullptr));
        lblFirstNameDesc->setText(QCoreApplication::translate("UserInfoWindow", "First Name:", nullptr));
        txtFirstName->setText(QCoreApplication::translate("UserInfoWindow", "N/A", nullptr));
        lblLastNameDesc->setText(QCoreApplication::translate("UserInfoWindow", "Last Name:", nullptr));
        txtLastName->setText(QCoreApplication::translate("UserInfoWindow", "N/A", nullptr));
        lblAbout->setText(QCoreApplication::translate("UserInfoWindow", "About:", nullptr));
        txtAbout->setPlainText(QCoreApplication::translate("UserInfoWindow", "N/A", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabPersonal), QCoreApplication::translate("UserInfoWindow", "Personal Information", nullptr));
        lblIPAddressDesc->setText(QCoreApplication::translate("UserInfoWindow", "IP Address:", nullptr));
        lblIPAddress->setText(QCoreApplication::translate("UserInfoWindow", "<IP Address>", nullptr));
        lblLogonNameDesc->setText(QCoreApplication::translate("UserInfoWindow", "Logon Name:", nullptr));
        lblLogonName->setText(QCoreApplication::translate("UserInfoWindow", "<Logon Name>", nullptr));
        lblComputerNameDesc->setText(QCoreApplication::translate("UserInfoWindow", "Computer Name:", nullptr));
        lblComputerName->setText(QCoreApplication::translate("UserInfoWindow", "<Computer Name>", nullptr));
        lblOSNameDesc->setText(QCoreApplication::translate("UserInfoWindow", "Operating System:", nullptr));
        lblOSName->setText(QCoreApplication::translate("UserInfoWindow", "<Operating System>", nullptr));
        lblVersionDesc->setText(QCoreApplication::translate("UserInfoWindow", "Messenger Version:", nullptr));
        lblVersion->setText(QCoreApplication::translate("UserInfoWindow", "<Messenger Version>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabSystem), QCoreApplication::translate("UserInfoWindow", "System Information", nullptr));
        btnClose->setText(QCoreApplication::translate("UserInfoWindow", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserInfoWindow: public Ui_UserInfoWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERINFOWINDOW_H

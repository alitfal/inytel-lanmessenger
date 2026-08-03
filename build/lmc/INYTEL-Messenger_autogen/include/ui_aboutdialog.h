/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblLogoSmall;
    QLabel *lblTitle;
    QLabel *lblQtVersion;
    QTabWidget *tabWidget;
    QWidget *tabAbout;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *lblDescription;
    QSpacerItem *verticalSpacer_2;
    QWidget *tabThanks;
    QHBoxLayout *horizontalLayout_3;
    QPlainTextEdit *txtThanks;
    QWidget *tabLicense;
    QVBoxLayout *verticalLayout_2;
    QPlainTextEdit *txtLicense;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *btnClose;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName("AboutDialog");
        AboutDialog->setWindowModality(Qt::WindowModal);
        AboutDialog->resize(476, 334);
        verticalLayout_3 = new QVBoxLayout(AboutDialog);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(24);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lblLogoSmall = new QLabel(AboutDialog);
        lblLogoSmall->setObjectName("lblLogoSmall");
        lblLogoSmall->setMinimumSize(QSize(48, 48));
        lblLogoSmall->setMaximumSize(QSize(48, 48));

        horizontalLayout_2->addWidget(lblLogoSmall);

        lblTitle = new QLabel(AboutDialog);
        lblTitle->setObjectName("lblTitle");

        horizontalLayout_2->addWidget(lblTitle);

        lblQtVersion = new QLabel(AboutDialog);
        lblQtVersion->setObjectName("lblQtVersion");
        lblQtVersion->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(lblQtVersion);


        verticalLayout_3->addLayout(horizontalLayout_2);

        tabWidget = new QTabWidget(AboutDialog);
        tabWidget->setObjectName("tabWidget");
        tabAbout = new QWidget();
        tabAbout->setObjectName("tabAbout");
        verticalLayout = new QVBoxLayout(tabAbout);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        lblDescription = new QLabel(tabAbout);
        lblDescription->setObjectName("lblDescription");
        lblDescription->setWordWrap(true);

        horizontalLayout->addWidget(lblDescription);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        tabWidget->addTab(tabAbout, QString());
        tabThanks = new QWidget();
        tabThanks->setObjectName("tabThanks");
        horizontalLayout_3 = new QHBoxLayout(tabThanks);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(1, 1, 1, 1);
        txtThanks = new QPlainTextEdit(tabThanks);
        txtThanks->setObjectName("txtThanks");
        txtThanks->setTabChangesFocus(true);
        txtThanks->setUndoRedoEnabled(false);
        txtThanks->setReadOnly(true);

        horizontalLayout_3->addWidget(txtThanks);

        tabWidget->addTab(tabThanks, QString());
        tabLicense = new QWidget();
        tabLicense->setObjectName("tabLicense");
        verticalLayout_2 = new QVBoxLayout(tabLicense);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(1, 1, 1, 1);
        txtLicense = new QPlainTextEdit(tabLicense);
        txtLicense->setObjectName("txtLicense");
        txtLicense->setMinimumSize(QSize(450, 0));
        txtLicense->setTabChangesFocus(true);
        txtLicense->setUndoRedoEnabled(false);
        txtLicense->setReadOnly(true);

        verticalLayout_2->addWidget(txtLicense);

        tabWidget->addTab(tabLicense, QString());

        verticalLayout_3->addWidget(tabWidget);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName("hboxLayout");
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hboxLayout->addItem(spacerItem);

        btnClose = new QPushButton(AboutDialog);
        btnClose->setObjectName("btnClose");

        hboxLayout->addWidget(btnClose);


        verticalLayout_3->addLayout(hboxLayout);


        retranslateUi(AboutDialog);
        QObject::connect(btnClose, &QPushButton::clicked, AboutDialog, qOverload<>(&QDialog::accept));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QCoreApplication::translate("AboutDialog", "Dialog", nullptr));
        lblLogoSmall->setText(QCoreApplication::translate("AboutDialog", "<Logo>", nullptr));
        lblTitle->setText(QCoreApplication::translate("AboutDialog", "<Application Title>", nullptr));
        lblQtVersion->setText(QCoreApplication::translate("AboutDialog", "<_Qt Version>", nullptr));
        lblDescription->setText(QCoreApplication::translate("AboutDialog", "<Description>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabAbout), QCoreApplication::translate("AboutDialog", "About", nullptr));
        txtThanks->setPlainText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabThanks), QCoreApplication::translate("AboutDialog", "Thanks", nullptr));
        txtLicense->setPlainText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabLicense), QCoreApplication::translate("AboutDialog", "License", nullptr));
        btnClose->setText(QCoreApplication::translate("AboutDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H

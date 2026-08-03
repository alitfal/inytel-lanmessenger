/********************************************************************************
** Form generated from reading UI file 'settingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QListWidget *lvCategories;
    QStackedWidget *stackedWidget;
    QWidget *pageGeneral;
    QVBoxLayout *verticalLayout_5;
    QLabel *lblGeneralPage;
    QGroupBox *grpSystem;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *chkAutoStart;
    QCheckBox *chkAutoShow;
    QGroupBox *grpSysTray;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *chkSysTray;
    QCheckBox *chkMinimizeTray;
    QCheckBox *chkSingleClickTray;
    QCheckBox *chkSysTrayMsg;
    QCheckBox *chkAllowSysTrayMin;
    QGroupBox *grpLanguage;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblLanguageDesc;
    QSpacerItem *horizontalSpacer_9;
    QComboBox *cboLanguage;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lblUpdateLink;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QWidget *pageAccount;
    QVBoxLayout *verticalLayout_11;
    QLabel *lblAccountPage;
    QGroupBox *grpPersonal;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lblUserNameDesc;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *txtUserName;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_6;
    QLabel *lblFirstNameDesc;
    QLineEdit *txtFirstName;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_7;
    QLabel *lblLastNameDesc;
    QLineEdit *txtLastName;
    QVBoxLayout *verticalLayout_8;
    QLabel *lblAboutDesc;
    QPlainTextEdit *txtAbout;
    QGroupBox *grpContacts;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_6;
    QLabel *lblRefreshTimeDesc;
    QSpacerItem *horizontalSpacer_4;
    QSpinBox *spnRefreshTime;
    QLabel *lblSecondsDesc;
    QSpacerItem *verticalSpacer_2;
    QWidget *pageMessages;
    QVBoxLayout *verticalLayout_14;
    QLabel *lblMessagesPage;
    QGroupBox *grpMsgWindow;
    QVBoxLayout *verticalLayout_12;
    QRadioButton *rdbMessageTop;
    QRadioButton *rdbMessageBottom;
    QHBoxLayout *horizontalLayout_32;
    QSpacerItem *horizontalSpacer_30;
    QCheckBox *chkPublicMessagePop;
    QSpacerItem *verticalSpacer_3;
    QCheckBox *chkEmoticon;
    QCheckBox *chkMessageTime;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_5;
    QCheckBox *chkMessageDate;
    QCheckBox *chkAllowLinks;
    QHBoxLayout *horizontalLayout_28;
    QSpacerItem *horizontalSpacer_26;
    QCheckBox *chkPathToLink;
    QCheckBox *chkTrimMessage;
    QCheckBox *chkClearOnClose;
    QGroupBox *grpMsgFont;
    QVBoxLayout *verticalLayout_13;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *btnFont;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *btnColor;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_10;
    QLabel *lblFontSize;
    QSpacerItem *horizontalSpacer_8;
    QComboBox *cboFontSize;
    QSpacerItem *verticalSpacer_4;
    QWidget *pageHistory;
    QVBoxLayout *verticalLayout_18;
    QLabel *lblHistoryPage;
    QGroupBox *grpMsgHistory;
    QVBoxLayout *verticalLayout_15;
    QCheckBox *chkHistory;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *btnClearHistory;
    QSpacerItem *horizontalSpacer_10;
    QGroupBox *grpHistoryFile;
    QVBoxLayout *verticalLayout_16;
    QRadioButton *rdbSysHistoryPath;
    QRadioButton *rdbCustomHistoryPath;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_11;
    QLineEdit *txtHistoryPath;
    QPushButton *btnHistoryPath;
    QGroupBox *grpFileHistory;
    QVBoxLayout *verticalLayout_17;
    QCheckBox *chkFileHistory;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *btnClearFileHistory;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *verticalSpacer_5;
    QWidget *pageAlerts;
    QVBoxLayout *verticalLayout_22;
    QLabel *lblAlertsPage;
    QGroupBox *grpAlerts;
    QVBoxLayout *verticalLayout_19;
    QCheckBox *chkAlert;
    QCheckBox *chkNoBusyAlert;
    QCheckBox *chkNoDNDAlert;
    QGroupBox *grpSounds;
    QVBoxLayout *verticalLayout_21;
    QCheckBox *chkSound;
    QHBoxLayout *horizontalLayout_15;
    QSpacerItem *horizontalSpacer_14;
    QVBoxLayout *verticalLayout_20;
    QLabel *lblSoundEventsDesc;
    QListWidget *lvSounds;
    QHBoxLayout *horizontalLayout_14;
    QLineEdit *txtSoundFile;
    QPushButton *btnPlaySound;
    QPushButton *btnSoundPath;
    QSpacerItem *horizontalSpacer_31;
    QPushButton *btnResetSounds;
    QCheckBox *chkNoBusySound;
    QCheckBox *chkNoDNDSound;
    QSpacerItem *verticalSpacer_6;
    QWidget *pageNetwork;
    QVBoxLayout *verticalLayout_25;
    QLabel *lblNetworkPage;
    QGroupBox *grpConnection;
    QVBoxLayout *verticalLayout_23;
    QHBoxLayout *horizontalLayout_16;
    QLabel *lblTimeoutDesc;
    QSpacerItem *horizontalSpacer_15;
    QSpinBox *spnTimeout;
    QHBoxLayout *horizontalLayout_17;
    QLabel *lblMaxRetriesDesc;
    QSpacerItem *horizontalSpacer_16;
    QSpinBox *spnMaxRetries;
    QGroupBox *grpBroadcast;
    QVBoxLayout *verticalLayout_36;
    QLabel *lblBroadcastListDesc;
    QHBoxLayout *horizontalLayout_31;
    QListWidget *lvBroadcasts;
    QVBoxLayout *verticalLayout_24;
    QLabel *lblBroadcastDesc;
    QLineEdit *txtBroadcast;
    QHBoxLayout *horizontalLayout_29;
    QPushButton *btnAddBroadcast;
    QSpacerItem *horizontalSpacer_28;
    QHBoxLayout *horizontalLayout_30;
    QPushButton *btnDeleteBroadcast;
    QSpacerItem *horizontalSpacer_29;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_38;
    QHBoxLayout *horizontalLayout_18;
    QLabel *lblMulticastDesc;
    QSpacerItem *horizontalSpacer_17;
    QLineEdit *txtMulticast;
    QHBoxLayout *horizontalLayout_19;
    QLabel *lblUDPPortDesc;
    QSpacerItem *horizontalSpacer_18;
    QLineEdit *txtUDPPort;
    QHBoxLayout *horizontalLayout_20;
    QLabel *lblTCPPortDesc;
    QSpacerItem *horizontalSpacer_19;
    QLineEdit *txtTCPPort;
    QLabel *lblFinePrint;
    QSpacerItem *verticalSpacer_7;
    QWidget *pageFileTransfer;
    QVBoxLayout *verticalLayout_28;
    QLabel *lblFileTransferPage;
    QGroupBox *grpFileRequest;
    QVBoxLayout *verticalLayout_26;
    QCheckBox *chkAutoFile;
    QCheckBox *chkAutoShowFile;
    QHBoxLayout *horizontalLayout_21;
    QSpacerItem *horizontalSpacer_20;
    QRadioButton *rdbFileTop;
    QHBoxLayout *horizontalLayout_22;
    QSpacerItem *horizontalSpacer_21;
    QRadioButton *rdbFileBottom;
    QGroupBox *grpFileFolder;
    QVBoxLayout *verticalLayout_27;
    QHBoxLayout *horizontalLayout_23;
    QLineEdit *txtFilePath;
    QPushButton *btnFilePath;
    QHBoxLayout *horizontalLayout_24;
    QPushButton *btnViewFiles;
    QSpacerItem *horizontalSpacer_22;
    QSpacerItem *verticalSpacer_8;
    QWidget *pageThemes;
    QVBoxLayout *verticalLayout_31;
    QLabel *lblThemePage;
    QGroupBox *grpChatTheme;
    QVBoxLayout *verticalLayout_30;
    QHBoxLayout *horizontalLayout_25;
    QComboBox *cboTheme;
    QSpacerItem *horizontalSpacer_23;
    QPushButton *btnRefresfTheme;
    QFrame *fraMessageLog;
    QVBoxLayout *verticalLayout_29;
    QHBoxLayout *logLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_35;
    QHBoxLayout *horizontalLayout_27;
    QLabel *lblUserListView;
    QSpacerItem *horizontalSpacer_27;
    QComboBox *cboUserListView;
    QCheckBox *chkUserListToolTip;
    QSpacerItem *verticalSpacer_9;
    QWidget *pageHotkeys;
    QVBoxLayout *verticalLayout_34;
    QLabel *lblHotkeysPage;
    QGroupBox *grpMsgHotkeys;
    QVBoxLayout *verticalLayout_33;
    QVBoxLayout *verticalLayout_32;
    QLabel *lblSendModDesc;
    QHBoxLayout *horizontalLayout_26;
    QSpacerItem *horizontalSpacer_24;
    QRadioButton *rdbEnter;
    QRadioButton *rdbCmdEnter;
    QSpacerItem *horizontalSpacer_25;
    QSpacerItem *verticalSpacer_10;
    QFrame *line;
    QHBoxLayout *hboxLayout;
    QPushButton *btnReset;
    QSpacerItem *spacerItem;
    QPushButton *btnOK;
    QPushButton *btnCancel;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName("SettingsDialog");
        SettingsDialog->setWindowModality(Qt::WindowModal);
        SettingsDialog->resize(543, 508);
        verticalLayout = new QVBoxLayout(SettingsDialog);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(9, 9, 9, 3);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(12);
        horizontalLayout->setObjectName("horizontalLayout");
        lvCategories = new QListWidget(SettingsDialog);
        new QListWidgetItem(lvCategories);
        new QListWidgetItem(lvCategories);
        new QListWidgetItem(lvCategories);
        new QListWidgetItem(lvCategories);
        new QListWidgetItem(lvCategories);
        new QListWidgetItem(lvCategories);
        new QListWidgetItem(lvCategories);
        new QListWidgetItem(lvCategories);
        new QListWidgetItem(lvCategories);
        lvCategories->setObjectName("lvCategories");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lvCategories->sizePolicy().hasHeightForWidth());
        lvCategories->setSizePolicy(sizePolicy);
        lvCategories->setMaximumSize(QSize(150, 16777215));
        lvCategories->setSelectionBehavior(QAbstractItemView::SelectRows);

        horizontalLayout->addWidget(lvCategories);

        stackedWidget = new QStackedWidget(SettingsDialog);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setFrameShape(QFrame::NoFrame);
        stackedWidget->setFrameShadow(QFrame::Plain);
        pageGeneral = new QWidget();
        pageGeneral->setObjectName("pageGeneral");
        verticalLayout_5 = new QVBoxLayout(pageGeneral);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        lblGeneralPage = new QLabel(pageGeneral);
        lblGeneralPage->setObjectName("lblGeneralPage");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblGeneralPage->sizePolicy().hasHeightForWidth());
        lblGeneralPage->setSizePolicy(sizePolicy1);
        lblGeneralPage->setMinimumSize(QSize(0, 31));
        lblGeneralPage->setFrameShape(QFrame::NoFrame);

        verticalLayout_5->addWidget(lblGeneralPage);

        grpSystem = new QGroupBox(pageGeneral);
        grpSystem->setObjectName("grpSystem");
        verticalLayout_2 = new QVBoxLayout(grpSystem);
        verticalLayout_2->setObjectName("verticalLayout_2");
        chkAutoStart = new QCheckBox(grpSystem);
        chkAutoStart->setObjectName("chkAutoStart");

        verticalLayout_2->addWidget(chkAutoStart);

        chkAutoShow = new QCheckBox(grpSystem);
        chkAutoShow->setObjectName("chkAutoShow");

        verticalLayout_2->addWidget(chkAutoShow);


        verticalLayout_5->addWidget(grpSystem);

        grpSysTray = new QGroupBox(pageGeneral);
        grpSysTray->setObjectName("grpSysTray");
        verticalLayout_3 = new QVBoxLayout(grpSysTray);
        verticalLayout_3->setObjectName("verticalLayout_3");
        chkSysTray = new QCheckBox(grpSysTray);
        chkSysTray->setObjectName("chkSysTray");

        verticalLayout_3->addWidget(chkSysTray);

        chkMinimizeTray = new QCheckBox(grpSysTray);
        chkMinimizeTray->setObjectName("chkMinimizeTray");

        verticalLayout_3->addWidget(chkMinimizeTray);

        chkSingleClickTray = new QCheckBox(grpSysTray);
        chkSingleClickTray->setObjectName("chkSingleClickTray");

        verticalLayout_3->addWidget(chkSingleClickTray);

        chkSysTrayMsg = new QCheckBox(grpSysTray);
        chkSysTrayMsg->setObjectName("chkSysTrayMsg");

        verticalLayout_3->addWidget(chkSysTrayMsg);

        chkAllowSysTrayMin = new QCheckBox(grpSysTray);
        chkAllowSysTrayMin->setObjectName("chkAllowSysTrayMin");

        verticalLayout_3->addWidget(chkAllowSysTrayMin);


        verticalLayout_5->addWidget(grpSysTray);

        grpLanguage = new QGroupBox(pageGeneral);
        grpLanguage->setObjectName("grpLanguage");
        verticalLayout_4 = new QVBoxLayout(grpLanguage);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lblLanguageDesc = new QLabel(grpLanguage);
        lblLanguageDesc->setObjectName("lblLanguageDesc");

        horizontalLayout_2->addWidget(lblLanguageDesc);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_9);

        cboLanguage = new QComboBox(grpLanguage);
        cboLanguage->setObjectName("cboLanguage");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(cboLanguage->sizePolicy().hasHeightForWidth());
        cboLanguage->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(cboLanguage);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        lblUpdateLink = new QLabel(grpLanguage);
        lblUpdateLink->setObjectName("lblUpdateLink");
        lblUpdateLink->setFocusPolicy(Qt::StrongFocus);
        lblUpdateLink->setOpenExternalLinks(true);
        lblUpdateLink->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse);

        horizontalLayout_3->addWidget(lblUpdateLink);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_5->addWidget(grpLanguage);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        stackedWidget->addWidget(pageGeneral);
        pageAccount = new QWidget();
        pageAccount->setObjectName("pageAccount");
        verticalLayout_11 = new QVBoxLayout(pageAccount);
        verticalLayout_11->setObjectName("verticalLayout_11");
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        lblAccountPage = new QLabel(pageAccount);
        lblAccountPage->setObjectName("lblAccountPage");
        sizePolicy1.setHeightForWidth(lblAccountPage->sizePolicy().hasHeightForWidth());
        lblAccountPage->setSizePolicy(sizePolicy1);
        lblAccountPage->setMinimumSize(QSize(0, 31));
        lblAccountPage->setFrameShape(QFrame::NoFrame);

        verticalLayout_11->addWidget(lblAccountPage);

        grpPersonal = new QGroupBox(pageAccount);
        grpPersonal->setObjectName("grpPersonal");
        verticalLayout_9 = new QVBoxLayout(grpPersonal);
        verticalLayout_9->setObjectName("verticalLayout_9");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        lblUserNameDesc = new QLabel(grpPersonal);
        lblUserNameDesc->setObjectName("lblUserNameDesc");

        horizontalLayout_4->addWidget(lblUserNameDesc);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        txtUserName = new QLineEdit(grpPersonal);
        txtUserName->setObjectName("txtUserName");

        horizontalLayout_4->addWidget(txtUserName);


        verticalLayout_9->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        lblFirstNameDesc = new QLabel(grpPersonal);
        lblFirstNameDesc->setObjectName("lblFirstNameDesc");

        verticalLayout_6->addWidget(lblFirstNameDesc);

        txtFirstName = new QLineEdit(grpPersonal);
        txtFirstName->setObjectName("txtFirstName");

        verticalLayout_6->addWidget(txtFirstName);


        horizontalLayout_5->addLayout(verticalLayout_6);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        lblLastNameDesc = new QLabel(grpPersonal);
        lblLastNameDesc->setObjectName("lblLastNameDesc");

        verticalLayout_7->addWidget(lblLastNameDesc);

        txtLastName = new QLineEdit(grpPersonal);
        txtLastName->setObjectName("txtLastName");

        verticalLayout_7->addWidget(txtLastName);


        horizontalLayout_5->addLayout(verticalLayout_7);


        verticalLayout_9->addLayout(horizontalLayout_5);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        lblAboutDesc = new QLabel(grpPersonal);
        lblAboutDesc->setObjectName("lblAboutDesc");

        verticalLayout_8->addWidget(lblAboutDesc);

        txtAbout = new QPlainTextEdit(grpPersonal);
        txtAbout->setObjectName("txtAbout");
        sizePolicy2.setHeightForWidth(txtAbout->sizePolicy().hasHeightForWidth());
        txtAbout->setSizePolicy(sizePolicy2);
        txtAbout->setMaximumSize(QSize(16777215, 41));

        verticalLayout_8->addWidget(txtAbout);


        verticalLayout_9->addLayout(verticalLayout_8);


        verticalLayout_11->addWidget(grpPersonal);

        grpContacts = new QGroupBox(pageAccount);
        grpContacts->setObjectName("grpContacts");
        verticalLayout_10 = new QVBoxLayout(grpContacts);
        verticalLayout_10->setObjectName("verticalLayout_10");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        lblRefreshTimeDesc = new QLabel(grpContacts);
        lblRefreshTimeDesc->setObjectName("lblRefreshTimeDesc");

        horizontalLayout_6->addWidget(lblRefreshTimeDesc);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        spnRefreshTime = new QSpinBox(grpContacts);
        spnRefreshTime->setObjectName("spnRefreshTime");
        spnRefreshTime->setMinimum(1);
        spnRefreshTime->setMaximum(600);

        horizontalLayout_6->addWidget(spnRefreshTime);

        lblSecondsDesc = new QLabel(grpContacts);
        lblSecondsDesc->setObjectName("lblSecondsDesc");

        horizontalLayout_6->addWidget(lblSecondsDesc);


        verticalLayout_10->addLayout(horizontalLayout_6);


        verticalLayout_11->addWidget(grpContacts);

        verticalSpacer_2 = new QSpacerItem(20, 85, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_2);

        stackedWidget->addWidget(pageAccount);
        pageMessages = new QWidget();
        pageMessages->setObjectName("pageMessages");
        verticalLayout_14 = new QVBoxLayout(pageMessages);
        verticalLayout_14->setObjectName("verticalLayout_14");
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        lblMessagesPage = new QLabel(pageMessages);
        lblMessagesPage->setObjectName("lblMessagesPage");
        sizePolicy1.setHeightForWidth(lblMessagesPage->sizePolicy().hasHeightForWidth());
        lblMessagesPage->setSizePolicy(sizePolicy1);
        lblMessagesPage->setMinimumSize(QSize(0, 31));
        lblMessagesPage->setFrameShape(QFrame::NoFrame);

        verticalLayout_14->addWidget(lblMessagesPage);

        grpMsgWindow = new QGroupBox(pageMessages);
        grpMsgWindow->setObjectName("grpMsgWindow");
        verticalLayout_12 = new QVBoxLayout(grpMsgWindow);
        verticalLayout_12->setObjectName("verticalLayout_12");
        rdbMessageTop = new QRadioButton(grpMsgWindow);
        rdbMessageTop->setObjectName("rdbMessageTop");

        verticalLayout_12->addWidget(rdbMessageTop);

        rdbMessageBottom = new QRadioButton(grpMsgWindow);
        rdbMessageBottom->setObjectName("rdbMessageBottom");

        verticalLayout_12->addWidget(rdbMessageBottom);

        horizontalLayout_32 = new QHBoxLayout();
        horizontalLayout_32->setObjectName("horizontalLayout_32");
        horizontalSpacer_30 = new QSpacerItem(10, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_32->addItem(horizontalSpacer_30);

        chkPublicMessagePop = new QCheckBox(grpMsgWindow);
        chkPublicMessagePop->setObjectName("chkPublicMessagePop");

        horizontalLayout_32->addWidget(chkPublicMessagePop);


        verticalLayout_12->addLayout(horizontalLayout_32);

        verticalSpacer_3 = new QSpacerItem(20, 5, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_12->addItem(verticalSpacer_3);

        chkEmoticon = new QCheckBox(grpMsgWindow);
        chkEmoticon->setObjectName("chkEmoticon");

        verticalLayout_12->addWidget(chkEmoticon);

        chkMessageTime = new QCheckBox(grpMsgWindow);
        chkMessageTime->setObjectName("chkMessageTime");

        verticalLayout_12->addWidget(chkMessageTime);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalSpacer_5 = new QSpacerItem(10, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        chkMessageDate = new QCheckBox(grpMsgWindow);
        chkMessageDate->setObjectName("chkMessageDate");

        horizontalLayout_7->addWidget(chkMessageDate);


        verticalLayout_12->addLayout(horizontalLayout_7);

        chkAllowLinks = new QCheckBox(grpMsgWindow);
        chkAllowLinks->setObjectName("chkAllowLinks");

        verticalLayout_12->addWidget(chkAllowLinks);

        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setObjectName("horizontalLayout_28");
        horizontalSpacer_26 = new QSpacerItem(10, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_28->addItem(horizontalSpacer_26);

        chkPathToLink = new QCheckBox(grpMsgWindow);
        chkPathToLink->setObjectName("chkPathToLink");

        horizontalLayout_28->addWidget(chkPathToLink);


        verticalLayout_12->addLayout(horizontalLayout_28);

        chkTrimMessage = new QCheckBox(grpMsgWindow);
        chkTrimMessage->setObjectName("chkTrimMessage");

        verticalLayout_12->addWidget(chkTrimMessage);

        chkClearOnClose = new QCheckBox(grpMsgWindow);
        chkClearOnClose->setObjectName("chkClearOnClose");

        verticalLayout_12->addWidget(chkClearOnClose);


        verticalLayout_14->addWidget(grpMsgWindow);

        grpMsgFont = new QGroupBox(pageMessages);
        grpMsgFont->setObjectName("grpMsgFont");
        verticalLayout_13 = new QVBoxLayout(grpMsgFont);
        verticalLayout_13->setObjectName("verticalLayout_13");
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        btnFont = new QPushButton(grpMsgFont);
        btnFont->setObjectName("btnFont");

        horizontalLayout_8->addWidget(btnFont);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);


        verticalLayout_13->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        btnColor = new QPushButton(grpMsgFont);
        btnColor->setObjectName("btnColor");

        horizontalLayout_9->addWidget(btnColor);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_7);


        verticalLayout_13->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        lblFontSize = new QLabel(grpMsgFont);
        lblFontSize->setObjectName("lblFontSize");

        horizontalLayout_10->addWidget(lblFontSize);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_8);

        cboFontSize = new QComboBox(grpMsgFont);
        cboFontSize->setObjectName("cboFontSize");
        sizePolicy2.setHeightForWidth(cboFontSize->sizePolicy().hasHeightForWidth());
        cboFontSize->setSizePolicy(sizePolicy2);

        horizontalLayout_10->addWidget(cboFontSize);


        verticalLayout_13->addLayout(horizontalLayout_10);


        verticalLayout_14->addWidget(grpMsgFont);

        verticalSpacer_4 = new QSpacerItem(20, 34, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_14->addItem(verticalSpacer_4);

        stackedWidget->addWidget(pageMessages);
        pageHistory = new QWidget();
        pageHistory->setObjectName("pageHistory");
        verticalLayout_18 = new QVBoxLayout(pageHistory);
        verticalLayout_18->setObjectName("verticalLayout_18");
        verticalLayout_18->setContentsMargins(0, 0, 0, 0);
        lblHistoryPage = new QLabel(pageHistory);
        lblHistoryPage->setObjectName("lblHistoryPage");
        sizePolicy1.setHeightForWidth(lblHistoryPage->sizePolicy().hasHeightForWidth());
        lblHistoryPage->setSizePolicy(sizePolicy1);
        lblHistoryPage->setMinimumSize(QSize(0, 31));
        lblHistoryPage->setFrameShape(QFrame::NoFrame);

        verticalLayout_18->addWidget(lblHistoryPage);

        grpMsgHistory = new QGroupBox(pageHistory);
        grpMsgHistory->setObjectName("grpMsgHistory");
        verticalLayout_15 = new QVBoxLayout(grpMsgHistory);
        verticalLayout_15->setObjectName("verticalLayout_15");
        chkHistory = new QCheckBox(grpMsgHistory);
        chkHistory->setObjectName("chkHistory");

        verticalLayout_15->addWidget(chkHistory);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        btnClearHistory = new QPushButton(grpMsgHistory);
        btnClearHistory->setObjectName("btnClearHistory");

        horizontalLayout_11->addWidget(btnClearHistory);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_10);


        verticalLayout_15->addLayout(horizontalLayout_11);


        verticalLayout_18->addWidget(grpMsgHistory);

        grpHistoryFile = new QGroupBox(pageHistory);
        grpHistoryFile->setObjectName("grpHistoryFile");
        verticalLayout_16 = new QVBoxLayout(grpHistoryFile);
        verticalLayout_16->setObjectName("verticalLayout_16");
        rdbSysHistoryPath = new QRadioButton(grpHistoryFile);
        rdbSysHistoryPath->setObjectName("rdbSysHistoryPath");

        verticalLayout_16->addWidget(rdbSysHistoryPath);

        rdbCustomHistoryPath = new QRadioButton(grpHistoryFile);
        rdbCustomHistoryPath->setObjectName("rdbCustomHistoryPath");

        verticalLayout_16->addWidget(rdbCustomHistoryPath);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        horizontalSpacer_11 = new QSpacerItem(10, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_11);

        txtHistoryPath = new QLineEdit(grpHistoryFile);
        txtHistoryPath->setObjectName("txtHistoryPath");
        txtHistoryPath->setReadOnly(true);

        horizontalLayout_12->addWidget(txtHistoryPath);

        btnHistoryPath = new QPushButton(grpHistoryFile);
        btnHistoryPath->setObjectName("btnHistoryPath");
        btnHistoryPath->setMaximumSize(QSize(31, 16777215));

        horizontalLayout_12->addWidget(btnHistoryPath);


        verticalLayout_16->addLayout(horizontalLayout_12);


        verticalLayout_18->addWidget(grpHistoryFile);

        grpFileHistory = new QGroupBox(pageHistory);
        grpFileHistory->setObjectName("grpFileHistory");
        verticalLayout_17 = new QVBoxLayout(grpFileHistory);
        verticalLayout_17->setObjectName("verticalLayout_17");
        chkFileHistory = new QCheckBox(grpFileHistory);
        chkFileHistory->setObjectName("chkFileHistory");

        verticalLayout_17->addWidget(chkFileHistory);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        btnClearFileHistory = new QPushButton(grpFileHistory);
        btnClearFileHistory->setObjectName("btnClearFileHistory");

        horizontalLayout_13->addWidget(btnClearFileHistory);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_12);


        verticalLayout_17->addLayout(horizontalLayout_13);


        verticalLayout_18->addWidget(grpFileHistory);

        verticalSpacer_5 = new QSpacerItem(20, 73, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_18->addItem(verticalSpacer_5);

        stackedWidget->addWidget(pageHistory);
        pageAlerts = new QWidget();
        pageAlerts->setObjectName("pageAlerts");
        verticalLayout_22 = new QVBoxLayout(pageAlerts);
        verticalLayout_22->setObjectName("verticalLayout_22");
        verticalLayout_22->setContentsMargins(0, 0, 0, 0);
        lblAlertsPage = new QLabel(pageAlerts);
        lblAlertsPage->setObjectName("lblAlertsPage");
        sizePolicy1.setHeightForWidth(lblAlertsPage->sizePolicy().hasHeightForWidth());
        lblAlertsPage->setSizePolicy(sizePolicy1);
        lblAlertsPage->setMinimumSize(QSize(0, 31));
        lblAlertsPage->setFrameShape(QFrame::NoFrame);

        verticalLayout_22->addWidget(lblAlertsPage);

        grpAlerts = new QGroupBox(pageAlerts);
        grpAlerts->setObjectName("grpAlerts");
        verticalLayout_19 = new QVBoxLayout(grpAlerts);
        verticalLayout_19->setObjectName("verticalLayout_19");
        chkAlert = new QCheckBox(grpAlerts);
        chkAlert->setObjectName("chkAlert");

        verticalLayout_19->addWidget(chkAlert);

        chkNoBusyAlert = new QCheckBox(grpAlerts);
        chkNoBusyAlert->setObjectName("chkNoBusyAlert");

        verticalLayout_19->addWidget(chkNoBusyAlert);

        chkNoDNDAlert = new QCheckBox(grpAlerts);
        chkNoDNDAlert->setObjectName("chkNoDNDAlert");

        verticalLayout_19->addWidget(chkNoDNDAlert);


        verticalLayout_22->addWidget(grpAlerts);

        grpSounds = new QGroupBox(pageAlerts);
        grpSounds->setObjectName("grpSounds");
        verticalLayout_21 = new QVBoxLayout(grpSounds);
        verticalLayout_21->setObjectName("verticalLayout_21");
        chkSound = new QCheckBox(grpSounds);
        chkSound->setObjectName("chkSound");

        verticalLayout_21->addWidget(chkSound);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        horizontalSpacer_14 = new QSpacerItem(13, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_14);

        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setObjectName("verticalLayout_20");
        lblSoundEventsDesc = new QLabel(grpSounds);
        lblSoundEventsDesc->setObjectName("lblSoundEventsDesc");

        verticalLayout_20->addWidget(lblSoundEventsDesc);

        lvSounds = new QListWidget(grpSounds);
        lvSounds->setObjectName("lvSounds");
        sizePolicy2.setHeightForWidth(lvSounds->sizePolicy().hasHeightForWidth());
        lvSounds->setSizePolicy(sizePolicy2);
        lvSounds->setMaximumSize(QSize(16777215, 81));

        verticalLayout_20->addWidget(lvSounds);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        txtSoundFile = new QLineEdit(grpSounds);
        txtSoundFile->setObjectName("txtSoundFile");
        txtSoundFile->setReadOnly(true);

        horizontalLayout_14->addWidget(txtSoundFile);

        btnPlaySound = new QPushButton(grpSounds);
        btnPlaySound->setObjectName("btnPlaySound");
        btnPlaySound->setEnabled(false);

        horizontalLayout_14->addWidget(btnPlaySound);

        btnSoundPath = new QPushButton(grpSounds);
        btnSoundPath->setObjectName("btnSoundPath");
        btnSoundPath->setEnabled(false);
        btnSoundPath->setMaximumSize(QSize(31, 16777215));

        horizontalLayout_14->addWidget(btnSoundPath);

        horizontalSpacer_31 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_31);

        btnResetSounds = new QPushButton(grpSounds);
        btnResetSounds->setObjectName("btnResetSounds");

        horizontalLayout_14->addWidget(btnResetSounds);


        verticalLayout_20->addLayout(horizontalLayout_14);


        horizontalLayout_15->addLayout(verticalLayout_20);


        verticalLayout_21->addLayout(horizontalLayout_15);

        chkNoBusySound = new QCheckBox(grpSounds);
        chkNoBusySound->setObjectName("chkNoBusySound");

        verticalLayout_21->addWidget(chkNoBusySound);

        chkNoDNDSound = new QCheckBox(grpSounds);
        chkNoDNDSound->setObjectName("chkNoDNDSound");

        verticalLayout_21->addWidget(chkNoDNDSound);


        verticalLayout_22->addWidget(grpSounds);

        verticalSpacer_6 = new QSpacerItem(20, 41, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_22->addItem(verticalSpacer_6);

        stackedWidget->addWidget(pageAlerts);
        pageNetwork = new QWidget();
        pageNetwork->setObjectName("pageNetwork");
        verticalLayout_25 = new QVBoxLayout(pageNetwork);
        verticalLayout_25->setObjectName("verticalLayout_25");
        verticalLayout_25->setContentsMargins(0, 0, 0, 0);
        lblNetworkPage = new QLabel(pageNetwork);
        lblNetworkPage->setObjectName("lblNetworkPage");
        sizePolicy1.setHeightForWidth(lblNetworkPage->sizePolicy().hasHeightForWidth());
        lblNetworkPage->setSizePolicy(sizePolicy1);
        lblNetworkPage->setMinimumSize(QSize(0, 31));
        lblNetworkPage->setFrameShape(QFrame::NoFrame);

        verticalLayout_25->addWidget(lblNetworkPage);

        grpConnection = new QGroupBox(pageNetwork);
        grpConnection->setObjectName("grpConnection");
        verticalLayout_23 = new QVBoxLayout(grpConnection);
        verticalLayout_23->setObjectName("verticalLayout_23");
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        lblTimeoutDesc = new QLabel(grpConnection);
        lblTimeoutDesc->setObjectName("lblTimeoutDesc");

        horizontalLayout_16->addWidget(lblTimeoutDesc);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_15);

        spnTimeout = new QSpinBox(grpConnection);
        spnTimeout->setObjectName("spnTimeout");
        spnTimeout->setMinimum(5);
        spnTimeout->setMaximum(60);

        horizontalLayout_16->addWidget(spnTimeout);


        verticalLayout_23->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        lblMaxRetriesDesc = new QLabel(grpConnection);
        lblMaxRetriesDesc->setObjectName("lblMaxRetriesDesc");

        horizontalLayout_17->addWidget(lblMaxRetriesDesc);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_16);

        spnMaxRetries = new QSpinBox(grpConnection);
        spnMaxRetries->setObjectName("spnMaxRetries");
        spnMaxRetries->setMinimum(0);
        spnMaxRetries->setMaximum(9);

        horizontalLayout_17->addWidget(spnMaxRetries);


        verticalLayout_23->addLayout(horizontalLayout_17);


        verticalLayout_25->addWidget(grpConnection);

        grpBroadcast = new QGroupBox(pageNetwork);
        grpBroadcast->setObjectName("grpBroadcast");
        verticalLayout_36 = new QVBoxLayout(grpBroadcast);
        verticalLayout_36->setObjectName("verticalLayout_36");
        lblBroadcastListDesc = new QLabel(grpBroadcast);
        lblBroadcastListDesc->setObjectName("lblBroadcastListDesc");

        verticalLayout_36->addWidget(lblBroadcastListDesc);

        horizontalLayout_31 = new QHBoxLayout();
        horizontalLayout_31->setObjectName("horizontalLayout_31");
        lvBroadcasts = new QListWidget(grpBroadcast);
        lvBroadcasts->setObjectName("lvBroadcasts");

        horizontalLayout_31->addWidget(lvBroadcasts);

        verticalLayout_24 = new QVBoxLayout();
        verticalLayout_24->setObjectName("verticalLayout_24");
        lblBroadcastDesc = new QLabel(grpBroadcast);
        lblBroadcastDesc->setObjectName("lblBroadcastDesc");

        verticalLayout_24->addWidget(lblBroadcastDesc);

        txtBroadcast = new QLineEdit(grpBroadcast);
        txtBroadcast->setObjectName("txtBroadcast");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(txtBroadcast->sizePolicy().hasHeightForWidth());
        txtBroadcast->setSizePolicy(sizePolicy3);
        txtBroadcast->setMinimumSize(QSize(130, 0));
        txtBroadcast->setMaximumSize(QSize(130, 16777215));
        txtBroadcast->setInputMask(QString::fromUtf8("000.000.000.000;_"));

        verticalLayout_24->addWidget(txtBroadcast);

        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setObjectName("horizontalLayout_29");
        btnAddBroadcast = new QPushButton(grpBroadcast);
        btnAddBroadcast->setObjectName("btnAddBroadcast");
        btnAddBroadcast->setEnabled(false);

        horizontalLayout_29->addWidget(btnAddBroadcast);

        horizontalSpacer_28 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_29->addItem(horizontalSpacer_28);


        verticalLayout_24->addLayout(horizontalLayout_29);

        horizontalLayout_30 = new QHBoxLayout();
        horizontalLayout_30->setObjectName("horizontalLayout_30");
        btnDeleteBroadcast = new QPushButton(grpBroadcast);
        btnDeleteBroadcast->setObjectName("btnDeleteBroadcast");
        btnDeleteBroadcast->setEnabled(false);

        horizontalLayout_30->addWidget(btnDeleteBroadcast);

        horizontalSpacer_29 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_30->addItem(horizontalSpacer_29);


        verticalLayout_24->addLayout(horizontalLayout_30);


        horizontalLayout_31->addLayout(verticalLayout_24);


        verticalLayout_36->addLayout(horizontalLayout_31);


        verticalLayout_25->addWidget(grpBroadcast);

        groupBox_2 = new QGroupBox(pageNetwork);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_38 = new QVBoxLayout(groupBox_2);
        verticalLayout_38->setObjectName("verticalLayout_38");
        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        lblMulticastDesc = new QLabel(groupBox_2);
        lblMulticastDesc->setObjectName("lblMulticastDesc");

        horizontalLayout_18->addWidget(lblMulticastDesc);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_17);

        txtMulticast = new QLineEdit(groupBox_2);
        txtMulticast->setObjectName("txtMulticast");
        txtMulticast->setMinimumSize(QSize(130, 0));
        txtMulticast->setMaximumSize(QSize(130, 16777215));
        txtMulticast->setInputMask(QString::fromUtf8("000.000.000.000;_"));

        horizontalLayout_18->addWidget(txtMulticast);


        verticalLayout_38->addLayout(horizontalLayout_18);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        lblUDPPortDesc = new QLabel(groupBox_2);
        lblUDPPortDesc->setObjectName("lblUDPPortDesc");

        horizontalLayout_19->addWidget(lblUDPPortDesc);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_18);

        txtUDPPort = new QLineEdit(groupBox_2);
        txtUDPPort->setObjectName("txtUDPPort");
        sizePolicy3.setHeightForWidth(txtUDPPort->sizePolicy().hasHeightForWidth());
        txtUDPPort->setSizePolicy(sizePolicy3);
        txtUDPPort->setMaximumSize(QSize(80, 16777215));
        txtUDPPort->setInputMask(QString::fromUtf8("00000"));

        horizontalLayout_19->addWidget(txtUDPPort);


        verticalLayout_38->addLayout(horizontalLayout_19);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName("horizontalLayout_20");
        lblTCPPortDesc = new QLabel(groupBox_2);
        lblTCPPortDesc->setObjectName("lblTCPPortDesc");

        horizontalLayout_20->addWidget(lblTCPPortDesc);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_19);

        txtTCPPort = new QLineEdit(groupBox_2);
        txtTCPPort->setObjectName("txtTCPPort");
        sizePolicy3.setHeightForWidth(txtTCPPort->sizePolicy().hasHeightForWidth());
        txtTCPPort->setSizePolicy(sizePolicy3);
        txtTCPPort->setMaximumSize(QSize(80, 16777215));
        txtTCPPort->setInputMask(QString::fromUtf8("00000"));

        horizontalLayout_20->addWidget(txtTCPPort);


        verticalLayout_38->addLayout(horizontalLayout_20);


        verticalLayout_25->addWidget(groupBox_2);

        lblFinePrint = new QLabel(pageNetwork);
        lblFinePrint->setObjectName("lblFinePrint");

        verticalLayout_25->addWidget(lblFinePrint);

        verticalSpacer_7 = new QSpacerItem(20, 132, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_25->addItem(verticalSpacer_7);

        stackedWidget->addWidget(pageNetwork);
        pageFileTransfer = new QWidget();
        pageFileTransfer->setObjectName("pageFileTransfer");
        verticalLayout_28 = new QVBoxLayout(pageFileTransfer);
        verticalLayout_28->setObjectName("verticalLayout_28");
        verticalLayout_28->setContentsMargins(0, 0, 0, 0);
        lblFileTransferPage = new QLabel(pageFileTransfer);
        lblFileTransferPage->setObjectName("lblFileTransferPage");
        sizePolicy1.setHeightForWidth(lblFileTransferPage->sizePolicy().hasHeightForWidth());
        lblFileTransferPage->setSizePolicy(sizePolicy1);
        lblFileTransferPage->setMinimumSize(QSize(0, 31));
        lblFileTransferPage->setFrameShape(QFrame::NoFrame);

        verticalLayout_28->addWidget(lblFileTransferPage);

        grpFileRequest = new QGroupBox(pageFileTransfer);
        grpFileRequest->setObjectName("grpFileRequest");
        verticalLayout_26 = new QVBoxLayout(grpFileRequest);
        verticalLayout_26->setObjectName("verticalLayout_26");
        chkAutoFile = new QCheckBox(grpFileRequest);
        chkAutoFile->setObjectName("chkAutoFile");

        verticalLayout_26->addWidget(chkAutoFile);

        chkAutoShowFile = new QCheckBox(grpFileRequest);
        chkAutoShowFile->setObjectName("chkAutoShowFile");

        verticalLayout_26->addWidget(chkAutoShowFile);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName("horizontalLayout_21");
        horizontalSpacer_20 = new QSpacerItem(10, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_21->addItem(horizontalSpacer_20);

        rdbFileTop = new QRadioButton(grpFileRequest);
        rdbFileTop->setObjectName("rdbFileTop");

        horizontalLayout_21->addWidget(rdbFileTop);


        verticalLayout_26->addLayout(horizontalLayout_21);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName("horizontalLayout_22");
        horizontalSpacer_21 = new QSpacerItem(10, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer_21);

        rdbFileBottom = new QRadioButton(grpFileRequest);
        rdbFileBottom->setObjectName("rdbFileBottom");

        horizontalLayout_22->addWidget(rdbFileBottom);


        verticalLayout_26->addLayout(horizontalLayout_22);


        verticalLayout_28->addWidget(grpFileRequest);

        grpFileFolder = new QGroupBox(pageFileTransfer);
        grpFileFolder->setObjectName("grpFileFolder");
        verticalLayout_27 = new QVBoxLayout(grpFileFolder);
        verticalLayout_27->setObjectName("verticalLayout_27");
        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName("horizontalLayout_23");
        txtFilePath = new QLineEdit(grpFileFolder);
        txtFilePath->setObjectName("txtFilePath");
        txtFilePath->setReadOnly(true);

        horizontalLayout_23->addWidget(txtFilePath);

        btnFilePath = new QPushButton(grpFileFolder);
        btnFilePath->setObjectName("btnFilePath");
        btnFilePath->setMaximumSize(QSize(31, 16777215));

        horizontalLayout_23->addWidget(btnFilePath);


        verticalLayout_27->addLayout(horizontalLayout_23);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName("horizontalLayout_24");
        btnViewFiles = new QPushButton(grpFileFolder);
        btnViewFiles->setObjectName("btnViewFiles");

        horizontalLayout_24->addWidget(btnViewFiles);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_24->addItem(horizontalSpacer_22);


        verticalLayout_27->addLayout(horizontalLayout_24);


        verticalLayout_28->addWidget(grpFileFolder);

        verticalSpacer_8 = new QSpacerItem(20, 127, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_28->addItem(verticalSpacer_8);

        stackedWidget->addWidget(pageFileTransfer);
        pageThemes = new QWidget();
        pageThemes->setObjectName("pageThemes");
        verticalLayout_31 = new QVBoxLayout(pageThemes);
        verticalLayout_31->setObjectName("verticalLayout_31");
        verticalLayout_31->setContentsMargins(0, 0, 0, 0);
        lblThemePage = new QLabel(pageThemes);
        lblThemePage->setObjectName("lblThemePage");
        lblThemePage->setMinimumSize(QSize(0, 31));
        lblThemePage->setMaximumSize(QSize(16777215, 31));
        lblThemePage->setFrameShape(QFrame::NoFrame);

        verticalLayout_31->addWidget(lblThemePage);

        grpChatTheme = new QGroupBox(pageThemes);
        grpChatTheme->setObjectName("grpChatTheme");
        verticalLayout_30 = new QVBoxLayout(grpChatTheme);
        verticalLayout_30->setObjectName("verticalLayout_30");
        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setObjectName("horizontalLayout_25");
        cboTheme = new QComboBox(grpChatTheme);
        cboTheme->setObjectName("cboTheme");
        sizePolicy2.setHeightForWidth(cboTheme->sizePolicy().hasHeightForWidth());
        cboTheme->setSizePolicy(sizePolicy2);

        horizontalLayout_25->addWidget(cboTheme);

        horizontalSpacer_23 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_25->addItem(horizontalSpacer_23);

        btnRefresfTheme = new QPushButton(grpChatTheme);
        btnRefresfTheme->setObjectName("btnRefresfTheme");

        horizontalLayout_25->addWidget(btnRefresfTheme);


        verticalLayout_30->addLayout(horizontalLayout_25);

        fraMessageLog = new QFrame(grpChatTheme);
        fraMessageLog->setObjectName("fraMessageLog");
        fraMessageLog->setMinimumSize(QSize(341, 200));
        fraMessageLog->setFrameShape(QFrame::Panel);
        fraMessageLog->setFrameShadow(QFrame::Sunken);
        verticalLayout_29 = new QVBoxLayout(fraMessageLog);
        verticalLayout_29->setObjectName("verticalLayout_29");
        verticalLayout_29->setContentsMargins(0, 0, 0, 0);
        logLayout = new QHBoxLayout();
        logLayout->setObjectName("logLayout");

        verticalLayout_29->addLayout(logLayout);


        verticalLayout_30->addWidget(fraMessageLog);


        verticalLayout_31->addWidget(grpChatTheme);

        groupBox = new QGroupBox(pageThemes);
        groupBox->setObjectName("groupBox");
        verticalLayout_35 = new QVBoxLayout(groupBox);
        verticalLayout_35->setObjectName("verticalLayout_35");
        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setObjectName("horizontalLayout_27");
        lblUserListView = new QLabel(groupBox);
        lblUserListView->setObjectName("lblUserListView");

        horizontalLayout_27->addWidget(lblUserListView);

        horizontalSpacer_27 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_27->addItem(horizontalSpacer_27);

        cboUserListView = new QComboBox(groupBox);
        cboUserListView->setObjectName("cboUserListView");

        horizontalLayout_27->addWidget(cboUserListView);


        verticalLayout_35->addLayout(horizontalLayout_27);

        chkUserListToolTip = new QCheckBox(groupBox);
        chkUserListToolTip->setObjectName("chkUserListToolTip");

        verticalLayout_35->addWidget(chkUserListToolTip);


        verticalLayout_31->addWidget(groupBox);

        verticalSpacer_9 = new QSpacerItem(20, 313, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_31->addItem(verticalSpacer_9);

        stackedWidget->addWidget(pageThemes);
        pageHotkeys = new QWidget();
        pageHotkeys->setObjectName("pageHotkeys");
        verticalLayout_34 = new QVBoxLayout(pageHotkeys);
        verticalLayout_34->setObjectName("verticalLayout_34");
        verticalLayout_34->setContentsMargins(0, 0, 0, 0);
        lblHotkeysPage = new QLabel(pageHotkeys);
        lblHotkeysPage->setObjectName("lblHotkeysPage");
        lblHotkeysPage->setMinimumSize(QSize(0, 32));
        lblHotkeysPage->setMaximumSize(QSize(16777215, 32));
        lblHotkeysPage->setFrameShape(QFrame::NoFrame);

        verticalLayout_34->addWidget(lblHotkeysPage);

        grpMsgHotkeys = new QGroupBox(pageHotkeys);
        grpMsgHotkeys->setObjectName("grpMsgHotkeys");
        verticalLayout_33 = new QVBoxLayout(grpMsgHotkeys);
        verticalLayout_33->setObjectName("verticalLayout_33");
        verticalLayout_32 = new QVBoxLayout();
        verticalLayout_32->setSpacing(3);
        verticalLayout_32->setObjectName("verticalLayout_32");
        lblSendModDesc = new QLabel(grpMsgHotkeys);
        lblSendModDesc->setObjectName("lblSendModDesc");

        verticalLayout_32->addWidget(lblSendModDesc);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setObjectName("horizontalLayout_26");
        horizontalSpacer_24 = new QSpacerItem(10, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_26->addItem(horizontalSpacer_24);

        rdbEnter = new QRadioButton(grpMsgHotkeys);
        rdbEnter->setObjectName("rdbEnter");

        horizontalLayout_26->addWidget(rdbEnter);

        rdbCmdEnter = new QRadioButton(grpMsgHotkeys);
        rdbCmdEnter->setObjectName("rdbCmdEnter");

        horizontalLayout_26->addWidget(rdbCmdEnter);

        horizontalSpacer_25 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_26->addItem(horizontalSpacer_25);


        verticalLayout_32->addLayout(horizontalLayout_26);


        verticalLayout_33->addLayout(verticalLayout_32);


        verticalLayout_34->addWidget(grpMsgHotkeys);

        verticalSpacer_10 = new QSpacerItem(20, 233, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_34->addItem(verticalSpacer_10);

        stackedWidget->addWidget(pageHotkeys);

        horizontalLayout->addWidget(stackedWidget);


        verticalLayout->addLayout(horizontalLayout);

        line = new QFrame(SettingsDialog);
        line->setObjectName("line");
        line->setMinimumSize(QSize(0, 6));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(line);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName("hboxLayout");
        btnReset = new QPushButton(SettingsDialog);
        btnReset->setObjectName("btnReset");

        hboxLayout->addWidget(btnReset);

        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hboxLayout->addItem(spacerItem);

        btnOK = new QPushButton(SettingsDialog);
        btnOK->setObjectName("btnOK");

        hboxLayout->addWidget(btnOK);

        btnCancel = new QPushButton(SettingsDialog);
        btnCancel->setObjectName("btnCancel");

        hboxLayout->addWidget(btnCancel);


        verticalLayout->addLayout(hboxLayout);

        QWidget::setTabOrder(lvCategories, chkAutoStart);
        QWidget::setTabOrder(chkAutoStart, chkAutoShow);
        QWidget::setTabOrder(chkAutoShow, chkSysTray);
        QWidget::setTabOrder(chkSysTray, chkMinimizeTray);
        QWidget::setTabOrder(chkMinimizeTray, chkSingleClickTray);
        QWidget::setTabOrder(chkSingleClickTray, chkSysTrayMsg);
        QWidget::setTabOrder(chkSysTrayMsg, chkAllowSysTrayMin);
        QWidget::setTabOrder(chkAllowSysTrayMin, cboLanguage);
        QWidget::setTabOrder(cboLanguage, lblUpdateLink);
        QWidget::setTabOrder(lblUpdateLink, txtUserName);
        QWidget::setTabOrder(txtUserName, txtFirstName);
        QWidget::setTabOrder(txtFirstName, txtLastName);
        QWidget::setTabOrder(txtLastName, txtAbout);
        QWidget::setTabOrder(txtAbout, spnRefreshTime);
        QWidget::setTabOrder(spnRefreshTime, rdbMessageTop);
        QWidget::setTabOrder(rdbMessageTop, rdbMessageBottom);
        QWidget::setTabOrder(rdbMessageBottom, chkPublicMessagePop);
        QWidget::setTabOrder(chkPublicMessagePop, chkEmoticon);
        QWidget::setTabOrder(chkEmoticon, chkMessageTime);
        QWidget::setTabOrder(chkMessageTime, chkMessageDate);
        QWidget::setTabOrder(chkMessageDate, chkAllowLinks);
        QWidget::setTabOrder(chkAllowLinks, chkPathToLink);
        QWidget::setTabOrder(chkPathToLink, chkTrimMessage);
        QWidget::setTabOrder(chkTrimMessage, chkClearOnClose);
        QWidget::setTabOrder(chkClearOnClose, btnFont);
        QWidget::setTabOrder(btnFont, btnColor);
        QWidget::setTabOrder(btnColor, cboFontSize);
        QWidget::setTabOrder(cboFontSize, chkHistory);
        QWidget::setTabOrder(chkHistory, btnClearHistory);
        QWidget::setTabOrder(btnClearHistory, rdbSysHistoryPath);
        QWidget::setTabOrder(rdbSysHistoryPath, rdbCustomHistoryPath);
        QWidget::setTabOrder(rdbCustomHistoryPath, txtHistoryPath);
        QWidget::setTabOrder(txtHistoryPath, btnHistoryPath);
        QWidget::setTabOrder(btnHistoryPath, chkFileHistory);
        QWidget::setTabOrder(chkFileHistory, btnClearFileHistory);
        QWidget::setTabOrder(btnClearFileHistory, chkAlert);
        QWidget::setTabOrder(chkAlert, chkNoBusyAlert);
        QWidget::setTabOrder(chkNoBusyAlert, chkNoDNDAlert);
        QWidget::setTabOrder(chkNoDNDAlert, chkSound);
        QWidget::setTabOrder(chkSound, lvSounds);
        QWidget::setTabOrder(lvSounds, txtSoundFile);
        QWidget::setTabOrder(txtSoundFile, btnPlaySound);
        QWidget::setTabOrder(btnPlaySound, btnSoundPath);
        QWidget::setTabOrder(btnSoundPath, btnResetSounds);
        QWidget::setTabOrder(btnResetSounds, chkNoBusySound);
        QWidget::setTabOrder(chkNoBusySound, chkNoDNDSound);
        QWidget::setTabOrder(chkNoDNDSound, spnTimeout);
        QWidget::setTabOrder(spnTimeout, spnMaxRetries);
        QWidget::setTabOrder(spnMaxRetries, lvBroadcasts);
        QWidget::setTabOrder(lvBroadcasts, txtBroadcast);
        QWidget::setTabOrder(txtBroadcast, btnAddBroadcast);
        QWidget::setTabOrder(btnAddBroadcast, btnDeleteBroadcast);
        QWidget::setTabOrder(btnDeleteBroadcast, txtMulticast);
        QWidget::setTabOrder(txtMulticast, txtUDPPort);
        QWidget::setTabOrder(txtUDPPort, txtTCPPort);
        QWidget::setTabOrder(txtTCPPort, chkAutoFile);
        QWidget::setTabOrder(chkAutoFile, chkAutoShowFile);
        QWidget::setTabOrder(chkAutoShowFile, rdbFileTop);
        QWidget::setTabOrder(rdbFileTop, rdbFileBottom);
        QWidget::setTabOrder(rdbFileBottom, txtFilePath);
        QWidget::setTabOrder(txtFilePath, btnFilePath);
        QWidget::setTabOrder(btnFilePath, btnViewFiles);
        QWidget::setTabOrder(btnViewFiles, cboTheme);
        QWidget::setTabOrder(cboTheme, cboUserListView);
        QWidget::setTabOrder(cboUserListView, chkUserListToolTip);
        QWidget::setTabOrder(chkUserListToolTip, rdbEnter);
        QWidget::setTabOrder(rdbEnter, rdbCmdEnter);
        QWidget::setTabOrder(rdbCmdEnter, btnOK);
        QWidget::setTabOrder(btnOK, btnCancel);
        QWidget::setTabOrder(btnCancel, btnReset);

        retranslateUi(SettingsDialog);
        QObject::connect(btnOK, &QPushButton::clicked, SettingsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(btnCancel, &QPushButton::clicked, SettingsDialog, qOverload<>(&QDialog::reject));

        stackedWidget->setCurrentIndex(7);
        btnOK->setDefault(true);


        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QCoreApplication::translate("SettingsDialog", "Dialog", nullptr));

        const bool __sortingEnabled = lvCategories->isSortingEnabled();
        lvCategories->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = lvCategories->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("SettingsDialog", "General", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = lvCategories->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("SettingsDialog", "Account", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = lvCategories->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("SettingsDialog", "Messages", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = lvCategories->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("SettingsDialog", "History", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = lvCategories->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("SettingsDialog", "Alerts", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = lvCategories->item(5);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("SettingsDialog", "Network", nullptr));
        QListWidgetItem *___qlistwidgetitem6 = lvCategories->item(6);
        ___qlistwidgetitem6->setText(QCoreApplication::translate("SettingsDialog", "File Transfer", nullptr));
        QListWidgetItem *___qlistwidgetitem7 = lvCategories->item(7);
        ___qlistwidgetitem7->setText(QCoreApplication::translate("SettingsDialog", "Appearance", nullptr));
        QListWidgetItem *___qlistwidgetitem8 = lvCategories->item(8);
        ___qlistwidgetitem8->setText(QCoreApplication::translate("SettingsDialog", "Hotkeys", nullptr));
        lvCategories->setSortingEnabled(__sortingEnabled);

        lblGeneralPage->setText(QCoreApplication::translate("SettingsDialog", "General", nullptr));
        grpSystem->setTitle(QCoreApplication::translate("SettingsDialog", "System", nullptr));
        chkAutoStart->setText(QCoreApplication::translate("SettingsDialog", "Start %1 on system startup", nullptr));
        chkAutoShow->setText(QCoreApplication::translate("SettingsDialog", "Show main window when %1 starts", nullptr));
        grpSysTray->setTitle(QCoreApplication::translate("SettingsDialog", "System Tray", nullptr));
        chkSysTray->setText(QCoreApplication::translate("SettingsDialog", "Show system tray icon", nullptr));
        chkMinimizeTray->setText(QCoreApplication::translate("SettingsDialog", "Minimize main window to system tray", nullptr));
        chkSingleClickTray->setText(QCoreApplication::translate("SettingsDialog", "Single click on tray icon to open", nullptr));
        chkSysTrayMsg->setText(QCoreApplication::translate("SettingsDialog", "Show balloon notifications in tray", nullptr));
        chkAllowSysTrayMin->setText(QCoreApplication::translate("SettingsDialog", "Minimize main window using tray icon", nullptr));
        grpLanguage->setTitle(QCoreApplication::translate("SettingsDialog", "Language", nullptr));
        lblLanguageDesc->setText(QCoreApplication::translate("SettingsDialog", "Select language:", nullptr));
        lblUpdateLink->setText(QString());
        lblAccountPage->setText(QCoreApplication::translate("SettingsDialog", "Account", nullptr));
        grpPersonal->setTitle(QCoreApplication::translate("SettingsDialog", "Personal", nullptr));
        lblUserNameDesc->setText(QCoreApplication::translate("SettingsDialog", "User name as seen by contacts:", nullptr));
        lblFirstNameDesc->setText(QCoreApplication::translate("SettingsDialog", "First Name:", nullptr));
        lblLastNameDesc->setText(QCoreApplication::translate("SettingsDialog", "Last Name:", nullptr));
        lblAboutDesc->setText(QCoreApplication::translate("SettingsDialog", "About:", nullptr));
        grpContacts->setTitle(QCoreApplication::translate("SettingsDialog", "Contacts", nullptr));
        lblRefreshTimeDesc->setText(QCoreApplication::translate("SettingsDialog", "Refresh contacts list every", nullptr));
        lblSecondsDesc->setText(QCoreApplication::translate("SettingsDialog", "seconds", nullptr));
        lblMessagesPage->setText(QCoreApplication::translate("SettingsDialog", "Messages", nullptr));
        grpMsgWindow->setTitle(QCoreApplication::translate("SettingsDialog", "Message Window", nullptr));
        rdbMessageTop->setText(QCoreApplication::translate("SettingsDialog", "Set incoming messages foreground", nullptr));
        rdbMessageBottom->setText(QCoreApplication::translate("SettingsDialog", "Minimize incoming messages to taskbar", nullptr));
        chkPublicMessagePop->setText(QCoreApplication::translate("SettingsDialog", "Apply to public messages", nullptr));
        chkEmoticon->setText(QCoreApplication::translate("SettingsDialog", "Show emoticons in instant messages", nullptr));
        chkMessageTime->setText(QCoreApplication::translate("SettingsDialog", "Add time stamp to instant messages", nullptr));
        chkMessageDate->setText(QCoreApplication::translate("SettingsDialog", "Show date in time stamp", nullptr));
        chkAllowLinks->setText(QCoreApplication::translate("SettingsDialog", "Allow hyperlinks in instant messages", nullptr));
        chkPathToLink->setText(QCoreApplication::translate("SettingsDialog", "Convert network paths to links", nullptr));
        chkTrimMessage->setText(QCoreApplication::translate("SettingsDialog", "Remove whitespace from start and end of messages", nullptr));
        chkClearOnClose->setText(QCoreApplication::translate("SettingsDialog", "Clear messages when window is closed", nullptr));
        grpMsgFont->setTitle(QCoreApplication::translate("SettingsDialog", "Message Font", nullptr));
        btnFont->setText(QCoreApplication::translate("SettingsDialog", "Change Font...", nullptr));
        btnColor->setText(QCoreApplication::translate("SettingsDialog", "Change Color...", nullptr));
        lblFontSize->setText(QCoreApplication::translate("SettingsDialog", "Incoming message text size:", nullptr));
        lblHistoryPage->setText(QCoreApplication::translate("SettingsDialog", "History", nullptr));
        grpMsgHistory->setTitle(QCoreApplication::translate("SettingsDialog", "Message History", nullptr));
        chkHistory->setText(QCoreApplication::translate("SettingsDialog", "Keep a history of conversations", nullptr));
        btnClearHistory->setText(QCoreApplication::translate("SettingsDialog", "Clear Message History", nullptr));
        grpHistoryFile->setTitle(QCoreApplication::translate("SettingsDialog", "History File Location", nullptr));
        rdbSysHistoryPath->setText(QCoreApplication::translate("SettingsDialog", "System default location", nullptr));
        rdbCustomHistoryPath->setText(QCoreApplication::translate("SettingsDialog", "Custom location", nullptr));
        btnHistoryPath->setText(QCoreApplication::translate("SettingsDialog", "...", nullptr));
        grpFileHistory->setTitle(QCoreApplication::translate("SettingsDialog", "File Transfer History", nullptr));
        chkFileHistory->setText(QCoreApplication::translate("SettingsDialog", "Keep a history of file transfers", nullptr));
        btnClearFileHistory->setText(QCoreApplication::translate("SettingsDialog", "Clear Transfer History", nullptr));
        lblAlertsPage->setText(QCoreApplication::translate("SettingsDialog", "Alerts", nullptr));
        grpAlerts->setTitle(QCoreApplication::translate("SettingsDialog", "Status Alerts", nullptr));
        chkAlert->setText(QCoreApplication::translate("SettingsDialog", "Display status alerts", nullptr));
        chkNoBusyAlert->setText(QCoreApplication::translate("SettingsDialog", "Suspend alerts when my status is Busy", nullptr));
        chkNoDNDAlert->setText(QCoreApplication::translate("SettingsDialog", "Suspend alerts when my status is Do Not Disturb", nullptr));
        grpSounds->setTitle(QCoreApplication::translate("SettingsDialog", "Sounds", nullptr));
        chkSound->setText(QCoreApplication::translate("SettingsDialog", "Provide feedback with sounds", nullptr));
        lblSoundEventsDesc->setText(QCoreApplication::translate("SettingsDialog", "Play sounds for these events:", nullptr));
        btnPlaySound->setText(QString());
        btnSoundPath->setText(QCoreApplication::translate("SettingsDialog", "...", nullptr));
        btnResetSounds->setText(QCoreApplication::translate("SettingsDialog", "Reset All", nullptr));
        chkNoBusySound->setText(QCoreApplication::translate("SettingsDialog", "Suspend sounds when my status is Busy", nullptr));
        chkNoDNDSound->setText(QCoreApplication::translate("SettingsDialog", "Suspend sound when my status is Do Not Disturb", nullptr));
        lblNetworkPage->setText(QCoreApplication::translate("SettingsDialog", "Network", nullptr));
        grpConnection->setTitle(QCoreApplication::translate("SettingsDialog", "Connection", nullptr));
        lblTimeoutDesc->setText(QCoreApplication::translate("SettingsDialog", "Connection timeout (seconds):", nullptr));
        lblMaxRetriesDesc->setText(QCoreApplication::translate("SettingsDialog", "Maximum number of retries:", nullptr));
        grpBroadcast->setTitle(QCoreApplication::translate("SettingsDialog", "Broadcast", nullptr));
        lblBroadcastListDesc->setText(QCoreApplication::translate("SettingsDialog", "Broadcast list:", nullptr));
        lblBroadcastDesc->setText(QCoreApplication::translate("SettingsDialog", "Broadcast address:", nullptr));
        btnAddBroadcast->setText(QCoreApplication::translate("SettingsDialog", "<- Add", nullptr));
        btnDeleteBroadcast->setText(QCoreApplication::translate("SettingsDialog", "Delete", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("SettingsDialog", "Advanced", nullptr));
        lblMulticastDesc->setText(QCoreApplication::translate("SettingsDialog", "Multicast address:", nullptr));
        lblUDPPortDesc->setText(QCoreApplication::translate("SettingsDialog", "UDP Port*:", nullptr));
        lblTCPPortDesc->setText(QCoreApplication::translate("SettingsDialog", "TCP Port*:", nullptr));
        lblFinePrint->setText(QCoreApplication::translate("SettingsDialog", "* Takes effect after you restart %1.", nullptr));
        lblFileTransferPage->setText(QCoreApplication::translate("SettingsDialog", "File Transfer", nullptr));
        grpFileRequest->setTitle(QCoreApplication::translate("SettingsDialog", "Incoming File Request", nullptr));
        chkAutoFile->setText(QCoreApplication::translate("SettingsDialog", "Accept and start receiving files automatically", nullptr));
        chkAutoShowFile->setText(QCoreApplication::translate("SettingsDialog", "Show File Transfer window when sending or receiving files", nullptr));
        rdbFileTop->setText(QCoreApplication::translate("SettingsDialog", "Bring window to foreground", nullptr));
        rdbFileBottom->setText(QCoreApplication::translate("SettingsDialog", "Minimize window to taskbar", nullptr));
        grpFileFolder->setTitle(QCoreApplication::translate("SettingsDialog", "Store Received Files in this Folder", nullptr));
        btnFilePath->setText(QCoreApplication::translate("SettingsDialog", "...", nullptr));
        btnViewFiles->setText(QCoreApplication::translate("SettingsDialog", "View Files", nullptr));
        lblThemePage->setText(QCoreApplication::translate("SettingsDialog", "Appearance", nullptr));
        grpChatTheme->setTitle(QCoreApplication::translate("SettingsDialog", "Chat Theme", nullptr));
        btnRefresfTheme->setText(QCoreApplication::translate("SettingsDialog", "Refresh", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SettingsDialog", "Contacts List", nullptr));
        lblUserListView->setText(QCoreApplication::translate("SettingsDialog", "Contacts list view:", nullptr));
        chkUserListToolTip->setText(QCoreApplication::translate("SettingsDialog", "Show status as tooltip", nullptr));
        lblHotkeysPage->setText(QCoreApplication::translate("SettingsDialog", "Hotkeys", nullptr));
        grpMsgHotkeys->setTitle(QCoreApplication::translate("SettingsDialog", "Messages", nullptr));
        lblSendModDesc->setText(QCoreApplication::translate("SettingsDialog", "Send messages using:", nullptr));
        rdbEnter->setText(QCoreApplication::translate("SettingsDialog", "<Enter>", nullptr));
        rdbCmdEnter->setText(QCoreApplication::translate("SettingsDialog", "<Cmd + Enter>", nullptr));
        btnReset->setText(QCoreApplication::translate("SettingsDialog", "Reset Preferences", nullptr));
        btnOK->setText(QCoreApplication::translate("SettingsDialog", "OK", nullptr));
        btnCancel->setText(QCoreApplication::translate("SettingsDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H

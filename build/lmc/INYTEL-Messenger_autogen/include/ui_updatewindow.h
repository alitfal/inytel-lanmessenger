/********************************************************************************
** Form generated from reading UI file 'updatewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEWINDOW_H
#define UI_UPDATEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UpdateWindow
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lblOutput;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnClose;
    QPushButton *btnRecheck;

    void setupUi(QWidget *UpdateWindow)
    {
        if (UpdateWindow->objectName().isEmpty())
            UpdateWindow->setObjectName("UpdateWindow");
        UpdateWindow->resize(368, 118);
        verticalLayout = new QVBoxLayout(UpdateWindow);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName("verticalLayout");
        lblOutput = new QLabel(UpdateWindow);
        lblOutput->setObjectName("lblOutput");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblOutput->sizePolicy().hasHeightForWidth());
        lblOutput->setSizePolicy(sizePolicy);
        lblOutput->setMinimumSize(QSize(350, 60));
        lblOutput->setMargin(12);

        verticalLayout->addWidget(lblOutput);

        line = new QFrame(UpdateWindow);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(6, 3, 6, 6);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnClose = new QPushButton(UpdateWindow);
        btnClose->setObjectName("btnClose");

        horizontalLayout->addWidget(btnClose);

        btnRecheck = new QPushButton(UpdateWindow);
        btnRecheck->setObjectName("btnRecheck");

        horizontalLayout->addWidget(btnRecheck);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(UpdateWindow);
        QObject::connect(btnClose, &QPushButton::clicked, UpdateWindow, qOverload<>(&QWidget::close));

        btnClose->setDefault(true);


        QMetaObject::connectSlotsByName(UpdateWindow);
    } // setupUi

    void retranslateUi(QWidget *UpdateWindow)
    {
        UpdateWindow->setWindowTitle(QCoreApplication::translate("UpdateWindow", "Form", nullptr));
        btnClose->setText(QCoreApplication::translate("UpdateWindow", "Close", nullptr));
        btnRecheck->setText(QCoreApplication::translate("UpdateWindow", "Recheck Version", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdateWindow: public Ui_UpdateWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEWINDOW_H

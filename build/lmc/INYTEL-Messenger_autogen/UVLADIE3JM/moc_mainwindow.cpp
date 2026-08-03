/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../lmc/src/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN13lmcMainWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto lmcMainWindow::qt_create_metaobjectdata<qt_meta_tag_ZN13lmcMainWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lmcMainWindow",
        "appExiting",
        "",
        "messageSent",
        "MessageType",
        "type",
        "QString*",
        "lpszUserId",
        "XmlMessage*",
        "pMessage",
        "chatStarting",
        "chatRoomStarting",
        "lpszThreadId",
        "showTransfers",
        "showHistory",
        "showSettings",
        "showHelp",
        "QRect*",
        "pRect",
        "showUpdate",
        "showAbout",
        "showBroadcast",
        "showPublicChat",
        "groupUpdated",
        "GroupOp",
        "op",
        "QVariant",
        "value1",
        "value2",
        "sendMessage",
        "trayShowAction_triggered",
        "trayHistoryAction_triggered",
        "trayFileAction_triggered",
        "traySettingsAction_triggered",
        "trayAboutAction_triggered",
        "trayExitAction_triggered",
        "statusAction_triggered",
        "QAction*",
        "action",
        "avatarAction_triggered",
        "avatarBrowseAction_triggered",
        "helpAction_triggered",
        "homePageAction_triggered",
        "updateAction_triggered",
        "chatRoomAction_triggered",
        "publicChatAction_triggered",
        "refreshAction_triggered",
        "trayIcon_activated",
        "QSystemTrayIcon::ActivationReason",
        "reason",
        "trayMessage_clicked",
        "tvUserList_itemActivated",
        "QTreeWidgetItem*",
        "pItem",
        "column",
        "tvUserList_itemContextMenu",
        "QPoint&",
        "pos",
        "tvUserList_itemDragDropped",
        "tvUserList_currentItemChanged",
        "pCurrent",
        "pPrevious",
        "groupAddAction_triggered",
        "groupRenameAction_triggered",
        "groupDeleteAction_triggered",
        "userConversationAction_triggered",
        "userBroadcastAction_triggered",
        "userFileAction_triggered",
        "userFolderAction_triggered",
        "userInfoAction_triggered",
        "txtNote_returnPressed",
        "txtNote_lostFocus"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'appExiting'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'messageSent'
        QtMocHelpers::SignalData<void(MessageType, QString *, XmlMessage *)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 5 }, { 0x80000000 | 6, 7 }, { 0x80000000 | 8, 9 },
        }}),
        // Signal 'chatStarting'
        QtMocHelpers::SignalData<void(QString *)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Signal 'chatRoomStarting'
        QtMocHelpers::SignalData<void(QString *)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 12 },
        }}),
        // Signal 'showTransfers'
        QtMocHelpers::SignalData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'showHistory'
        QtMocHelpers::SignalData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'showSettings'
        QtMocHelpers::SignalData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'showHelp'
        QtMocHelpers::SignalData<void(QRect *)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 17, 18 },
        }}),
        // Signal 'showUpdate'
        QtMocHelpers::SignalData<void(QRect *)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 17, 18 },
        }}),
        // Signal 'showAbout'
        QtMocHelpers::SignalData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'showBroadcast'
        QtMocHelpers::SignalData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'showPublicChat'
        QtMocHelpers::SignalData<void()>(22, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'groupUpdated'
        QtMocHelpers::SignalData<void(GroupOp, QVariant, QVariant)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 24, 25 }, { 0x80000000 | 26, 27 }, { 0x80000000 | 26, 28 },
        }}),
        // Slot 'sendMessage'
        QtMocHelpers::SlotData<void(MessageType, QString *, XmlMessage *)>(29, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 4, 5 }, { 0x80000000 | 6, 7 }, { 0x80000000 | 8, 9 },
        }}),
        // Slot 'trayShowAction_triggered'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'trayHistoryAction_triggered'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'trayFileAction_triggered'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'traySettingsAction_triggered'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'trayAboutAction_triggered'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'trayExitAction_triggered'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'statusAction_triggered'
        QtMocHelpers::SlotData<void(QAction *)>(36, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 37, 38 },
        }}),
        // Slot 'avatarAction_triggered'
        QtMocHelpers::SlotData<void()>(39, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'avatarBrowseAction_triggered'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'helpAction_triggered'
        QtMocHelpers::SlotData<void()>(41, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'homePageAction_triggered'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateAction_triggered'
        QtMocHelpers::SlotData<void()>(43, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'chatRoomAction_triggered'
        QtMocHelpers::SlotData<void()>(44, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'publicChatAction_triggered'
        QtMocHelpers::SlotData<void()>(45, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'refreshAction_triggered'
        QtMocHelpers::SlotData<void()>(46, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'trayIcon_activated'
        QtMocHelpers::SlotData<void(QSystemTrayIcon::ActivationReason)>(47, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 48, 49 },
        }}),
        // Slot 'trayMessage_clicked'
        QtMocHelpers::SlotData<void()>(50, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'tvUserList_itemActivated'
        QtMocHelpers::SlotData<void(QTreeWidgetItem *, int)>(51, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 52, 53 }, { QMetaType::Int, 54 },
        }}),
        // Slot 'tvUserList_itemContextMenu'
        QtMocHelpers::SlotData<void(QTreeWidgetItem *, QPoint &)>(55, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 52, 53 }, { 0x80000000 | 56, 57 },
        }}),
        // Slot 'tvUserList_itemDragDropped'
        QtMocHelpers::SlotData<void(QTreeWidgetItem *)>(58, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 52, 53 },
        }}),
        // Slot 'tvUserList_currentItemChanged'
        QtMocHelpers::SlotData<void(QTreeWidgetItem *, QTreeWidgetItem *)>(59, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 52, 60 }, { 0x80000000 | 52, 61 },
        }}),
        // Slot 'groupAddAction_triggered'
        QtMocHelpers::SlotData<void()>(62, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'groupRenameAction_triggered'
        QtMocHelpers::SlotData<void()>(63, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'groupDeleteAction_triggered'
        QtMocHelpers::SlotData<void()>(64, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'userConversationAction_triggered'
        QtMocHelpers::SlotData<void()>(65, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'userBroadcastAction_triggered'
        QtMocHelpers::SlotData<void()>(66, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'userFileAction_triggered'
        QtMocHelpers::SlotData<void()>(67, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'userFolderAction_triggered'
        QtMocHelpers::SlotData<void()>(68, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'userInfoAction_triggered'
        QtMocHelpers::SlotData<void()>(69, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'txtNote_returnPressed'
        QtMocHelpers::SlotData<void()>(70, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'txtNote_lostFocus'
        QtMocHelpers::SlotData<void()>(71, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<lmcMainWindow, qt_meta_tag_ZN13lmcMainWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lmcMainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13lmcMainWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13lmcMainWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13lmcMainWindowE_t>.metaTypes,
    nullptr
} };

void lmcMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<lmcMainWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->appExiting(); break;
        case 1: _t->messageSent((*reinterpret_cast<std::add_pointer_t<MessageType>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString*>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<XmlMessage*>>(_a[3]))); break;
        case 2: _t->chatStarting((*reinterpret_cast<std::add_pointer_t<QString*>>(_a[1]))); break;
        case 3: _t->chatRoomStarting((*reinterpret_cast<std::add_pointer_t<QString*>>(_a[1]))); break;
        case 4: _t->showTransfers(); break;
        case 5: _t->showHistory(); break;
        case 6: _t->showSettings(); break;
        case 7: _t->showHelp((*reinterpret_cast<std::add_pointer_t<QRect*>>(_a[1]))); break;
        case 8: _t->showUpdate((*reinterpret_cast<std::add_pointer_t<QRect*>>(_a[1]))); break;
        case 9: _t->showAbout(); break;
        case 10: _t->showBroadcast(); break;
        case 11: _t->showPublicChat(); break;
        case 12: _t->groupUpdated((*reinterpret_cast<std::add_pointer_t<GroupOp>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[3]))); break;
        case 13: _t->sendMessage((*reinterpret_cast<std::add_pointer_t<MessageType>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString*>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<XmlMessage*>>(_a[3]))); break;
        case 14: _t->trayShowAction_triggered(); break;
        case 15: _t->trayHistoryAction_triggered(); break;
        case 16: _t->trayFileAction_triggered(); break;
        case 17: _t->traySettingsAction_triggered(); break;
        case 18: _t->trayAboutAction_triggered(); break;
        case 19: _t->trayExitAction_triggered(); break;
        case 20: _t->statusAction_triggered((*reinterpret_cast<std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 21: _t->avatarAction_triggered(); break;
        case 22: _t->avatarBrowseAction_triggered(); break;
        case 23: _t->helpAction_triggered(); break;
        case 24: _t->homePageAction_triggered(); break;
        case 25: _t->updateAction_triggered(); break;
        case 26: _t->chatRoomAction_triggered(); break;
        case 27: _t->publicChatAction_triggered(); break;
        case 28: _t->refreshAction_triggered(); break;
        case 29: _t->trayIcon_activated((*reinterpret_cast<std::add_pointer_t<QSystemTrayIcon::ActivationReason>>(_a[1]))); break;
        case 30: _t->trayMessage_clicked(); break;
        case 31: _t->tvUserList_itemActivated((*reinterpret_cast<std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 32: _t->tvUserList_itemContextMenu((*reinterpret_cast<std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QPoint&>>(_a[2]))); break;
        case 33: _t->tvUserList_itemDragDropped((*reinterpret_cast<std::add_pointer_t<QTreeWidgetItem*>>(_a[1]))); break;
        case 34: _t->tvUserList_currentItemChanged((*reinterpret_cast<std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QTreeWidgetItem*>>(_a[2]))); break;
        case 35: _t->groupAddAction_triggered(); break;
        case 36: _t->groupRenameAction_triggered(); break;
        case 37: _t->groupDeleteAction_triggered(); break;
        case 38: _t->userConversationAction_triggered(); break;
        case 39: _t->userBroadcastAction_triggered(); break;
        case 40: _t->userFileAction_triggered(); break;
        case 41: _t->userFolderAction_triggered(); break;
        case 42: _t->userInfoAction_triggered(); break;
        case 43: _t->txtNote_returnPressed(); break;
        case 44: _t->txtNote_lostFocus(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (lmcMainWindow::*)()>(_a, &lmcMainWindow::appExiting, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (lmcMainWindow::*)(MessageType , QString * , XmlMessage * )>(_a, &lmcMainWindow::messageSent, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (lmcMainWindow::*)(QString * )>(_a, &lmcMainWindow::chatStarting, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (lmcMainWindow::*)(QString * )>(_a, &lmcMainWindow::chatRoomStarting, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (lmcMainWindow::*)()>(_a, &lmcMainWindow::showTransfers, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (lmcMainWindow::*)()>(_a, &lmcMainWindow::showHistory, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (lmcMainWindow::*)()>(_a, &lmcMainWindow::showSettings, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (lmcMainWindow::*)(QRect * )>(_a, &lmcMainWindow::showHelp, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (lmcMainWindow::*)(QRect * )>(_a, &lmcMainWindow::showUpdate, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (lmcMainWindow::*)()>(_a, &lmcMainWindow::showAbout, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (lmcMainWindow::*)()>(_a, &lmcMainWindow::showBroadcast, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (lmcMainWindow::*)()>(_a, &lmcMainWindow::showPublicChat, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (lmcMainWindow::*)(GroupOp , QVariant , QVariant )>(_a, &lmcMainWindow::groupUpdated, 12))
            return;
    }
}

const QMetaObject *lmcMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lmcMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13lmcMainWindowE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int lmcMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 45)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 45;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 45)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 45;
    }
    return _id;
}

// SIGNAL 0
void lmcMainWindow::appExiting()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void lmcMainWindow::messageSent(MessageType _t1, QString * _t2, XmlMessage * _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2, _t3);
}

// SIGNAL 2
void lmcMainWindow::chatStarting(QString * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void lmcMainWindow::chatRoomStarting(QString * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void lmcMainWindow::showTransfers()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void lmcMainWindow::showHistory()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void lmcMainWindow::showSettings()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void lmcMainWindow::showHelp(QRect * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void lmcMainWindow::showUpdate(QRect * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void lmcMainWindow::showAbout()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void lmcMainWindow::showBroadcast()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void lmcMainWindow::showPublicChat()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void lmcMainWindow::groupUpdated(GroupOp _t1, QVariant _t2, QVariant _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 12, nullptr, _t1, _t2, _t3);
}
QT_WARNING_POP

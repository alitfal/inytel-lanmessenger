/****************************************************************************
** Meta object code from reading C++ file 'chatroomwindow.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../lmc/src/chatroomwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chatroomwindow.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN17lmcChatRoomWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto lmcChatRoomWindow::qt_create_metaobjectdata<qt_meta_tag_ZN17lmcChatRoomWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lmcChatRoomWindow",
        "messageSent",
        "",
        "MessageType",
        "type",
        "QString*",
        "lpszUserId",
        "XmlMessage*",
        "pMessage",
        "chatStarting",
        "contactsAdding",
        "QStringList*",
        "excludeList",
        "closed",
        "lpszThreadId",
        "userConversationAction_triggered",
        "userFileAction_triggered",
        "userInfoAction_triggered",
        "btnFont_clicked",
        "btnFontColor_clicked",
        "btnSave_clicked",
        "smileyAction_triggered",
        "addContactAction_triggered",
        "log_sendMessage",
        "tvUserList_itemActivated",
        "QTreeWidgetItem*",
        "pItem",
        "column",
        "tvUserList_itemContextMenu",
        "QPoint&",
        "pos"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'messageSent'
        QtMocHelpers::SignalData<void(MessageType, QString *, XmlMessage *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 }, { 0x80000000 | 7, 8 },
        }}),
        // Signal 'chatStarting'
        QtMocHelpers::SignalData<void(QString *)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Signal 'contactsAdding'
        QtMocHelpers::SignalData<void(QStringList *)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 12 },
        }}),
        // Signal 'closed'
        QtMocHelpers::SignalData<void(QString *)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 14 },
        }}),
        // Slot 'userConversationAction_triggered'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'userFileAction_triggered'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'userInfoAction_triggered'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'btnFont_clicked'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'btnFontColor_clicked'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'btnSave_clicked'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'smileyAction_triggered'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'addContactAction_triggered'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'log_sendMessage'
        QtMocHelpers::SlotData<void(MessageType, QString *, XmlMessage *)>(23, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 }, { 0x80000000 | 7, 8 },
        }}),
        // Slot 'tvUserList_itemActivated'
        QtMocHelpers::SlotData<void(QTreeWidgetItem *, int)>(24, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 25, 26 }, { QMetaType::Int, 27 },
        }}),
        // Slot 'tvUserList_itemContextMenu'
        QtMocHelpers::SlotData<void(QTreeWidgetItem *, QPoint &)>(28, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 25, 26 }, { 0x80000000 | 29, 30 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<lmcChatRoomWindow, qt_meta_tag_ZN17lmcChatRoomWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lmcChatRoomWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17lmcChatRoomWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17lmcChatRoomWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17lmcChatRoomWindowE_t>.metaTypes,
    nullptr
} };

void lmcChatRoomWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<lmcChatRoomWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->messageSent((*reinterpret_cast<std::add_pointer_t<MessageType>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString*>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<XmlMessage*>>(_a[3]))); break;
        case 1: _t->chatStarting((*reinterpret_cast<std::add_pointer_t<QString*>>(_a[1]))); break;
        case 2: _t->contactsAdding((*reinterpret_cast<std::add_pointer_t<QStringList*>>(_a[1]))); break;
        case 3: _t->closed((*reinterpret_cast<std::add_pointer_t<QString*>>(_a[1]))); break;
        case 4: _t->userConversationAction_triggered(); break;
        case 5: _t->userFileAction_triggered(); break;
        case 6: _t->userInfoAction_triggered(); break;
        case 7: _t->btnFont_clicked(); break;
        case 8: _t->btnFontColor_clicked(); break;
        case 9: _t->btnSave_clicked(); break;
        case 10: _t->smileyAction_triggered(); break;
        case 11: _t->addContactAction_triggered(); break;
        case 12: _t->log_sendMessage((*reinterpret_cast<std::add_pointer_t<MessageType>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString*>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<XmlMessage*>>(_a[3]))); break;
        case 13: _t->tvUserList_itemActivated((*reinterpret_cast<std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 14: _t->tvUserList_itemContextMenu((*reinterpret_cast<std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QPoint&>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (lmcChatRoomWindow::*)(MessageType , QString * , XmlMessage * )>(_a, &lmcChatRoomWindow::messageSent, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (lmcChatRoomWindow::*)(QString * )>(_a, &lmcChatRoomWindow::chatStarting, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (lmcChatRoomWindow::*)(QStringList * )>(_a, &lmcChatRoomWindow::contactsAdding, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (lmcChatRoomWindow::*)(QString * )>(_a, &lmcChatRoomWindow::closed, 3))
            return;
    }
}

const QMetaObject *lmcChatRoomWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lmcChatRoomWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17lmcChatRoomWindowE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int lmcChatRoomWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void lmcChatRoomWindow::messageSent(MessageType _t1, QString * _t2, XmlMessage * _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2, _t3);
}

// SIGNAL 1
void lmcChatRoomWindow::chatStarting(QString * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void lmcChatRoomWindow::contactsAdding(QStringList * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void lmcChatRoomWindow::closed(QString * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}
QT_WARNING_POP

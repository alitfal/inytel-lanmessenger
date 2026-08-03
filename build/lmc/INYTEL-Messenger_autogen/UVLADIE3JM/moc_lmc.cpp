/****************************************************************************
** Meta object code from reading C++ file 'lmc.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../lmc/src/lmc.h"
#include <QtNetwork/QSslError>
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lmc.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7lmcCoreE_t {};
} // unnamed namespace

template <> constexpr inline auto lmcCore::qt_create_metaobjectdata<qt_meta_tag_ZN7lmcCoreE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lmcCore",
        "receiveAppMessage",
        "",
        "szMessage",
        "exitApp",
        "aboutToExit",
        "timer_timeout",
        "startChat",
        "QString*",
        "lpszUserId",
        "startChatRoom",
        "lpszThreadId",
        "sendMessage",
        "MessageType",
        "type",
        "XmlMessage*",
        "pMessage",
        "receiveMessage",
        "connectionStateChanged",
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
        "historyCleared",
        "fileHistoryCleared",
        "showTrayMessage",
        "TrayMessageType",
        "szTitle",
        "TrayMessageIcon",
        "icon",
        "updateGroup",
        "GroupOp",
        "op",
        "QVariant",
        "value1",
        "value2",
        "addContacts",
        "QStringList*",
        "pExcludList",
        "chatWindow_closed",
        "chatRoomWindow_closed"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'receiveAppMessage'
        QtMocHelpers::SlotData<bool(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 3 },
        }}),
        // Slot 'exitApp'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'aboutToExit'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'timer_timeout'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'startChat'
        QtMocHelpers::SlotData<void(QString *)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Slot 'startChatRoom'
        QtMocHelpers::SlotData<void(QString *)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 8, 11 },
        }}),
        // Slot 'sendMessage'
        QtMocHelpers::SlotData<void(MessageType, QString *, XmlMessage *)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 13, 14 }, { 0x80000000 | 8, 9 }, { 0x80000000 | 15, 16 },
        }}),
        // Slot 'receiveMessage'
        QtMocHelpers::SlotData<void(MessageType, QString *, XmlMessage *)>(17, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 13, 14 }, { 0x80000000 | 8, 9 }, { 0x80000000 | 15, 16 },
        }}),
        // Slot 'connectionStateChanged'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showTransfers'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showHistory'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showSettings'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showHelp'
        QtMocHelpers::SlotData<void(QRect *)>(22, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 23, 24 },
        }}),
        // Slot 'showUpdate'
        QtMocHelpers::SlotData<void(QRect *)>(25, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 23, 24 },
        }}),
        // Slot 'showAbout'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showBroadcast'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showPublicChat'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'historyCleared'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'fileHistoryCleared'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showTrayMessage'
        QtMocHelpers::SlotData<void(TrayMessageType, QString, QString, TrayMessageIcon)>(31, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 32, 14 }, { QMetaType::QString, 3 }, { QMetaType::QString, 33 }, { 0x80000000 | 34, 35 },
        }}),
        // Slot 'showTrayMessage'
        QtMocHelpers::SlotData<void(TrayMessageType, QString, QString)>(31, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 32, 14 }, { QMetaType::QString, 3 }, { QMetaType::QString, 33 },
        }}),
        // Slot 'showTrayMessage'
        QtMocHelpers::SlotData<void(TrayMessageType, QString)>(31, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 32, 14 }, { QMetaType::QString, 3 },
        }}),
        // Slot 'updateGroup'
        QtMocHelpers::SlotData<void(GroupOp, QVariant, QVariant)>(36, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 37, 38 }, { 0x80000000 | 39, 40 }, { 0x80000000 | 39, 41 },
        }}),
        // Slot 'addContacts'
        QtMocHelpers::SlotData<void(QStringList *)>(42, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 43, 44 },
        }}),
        // Slot 'chatWindow_closed'
        QtMocHelpers::SlotData<void(QString *)>(45, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Slot 'chatRoomWindow_closed'
        QtMocHelpers::SlotData<void(QString *)>(46, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 8, 11 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<lmcCore, qt_meta_tag_ZN7lmcCoreE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lmcCore::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7lmcCoreE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7lmcCoreE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7lmcCoreE_t>.metaTypes,
    nullptr
} };

void lmcCore::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<lmcCore *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { bool _r = _t->receiveAppMessage((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->exitApp(); break;
        case 2: _t->aboutToExit(); break;
        case 3: _t->timer_timeout(); break;
        case 4: _t->startChat((*reinterpret_cast<std::add_pointer_t<QString*>>(_a[1]))); break;
        case 5: _t->startChatRoom((*reinterpret_cast<std::add_pointer_t<QString*>>(_a[1]))); break;
        case 6: _t->sendMessage((*reinterpret_cast<std::add_pointer_t<MessageType>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString*>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<XmlMessage*>>(_a[3]))); break;
        case 7: _t->receiveMessage((*reinterpret_cast<std::add_pointer_t<MessageType>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString*>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<XmlMessage*>>(_a[3]))); break;
        case 8: _t->connectionStateChanged(); break;
        case 9: _t->showTransfers(); break;
        case 10: _t->showHistory(); break;
        case 11: _t->showSettings(); break;
        case 12: _t->showHelp((*reinterpret_cast<std::add_pointer_t<QRect*>>(_a[1]))); break;
        case 13: _t->showUpdate((*reinterpret_cast<std::add_pointer_t<QRect*>>(_a[1]))); break;
        case 14: _t->showAbout(); break;
        case 15: _t->showBroadcast(); break;
        case 16: _t->showPublicChat(); break;
        case 17: _t->historyCleared(); break;
        case 18: _t->fileHistoryCleared(); break;
        case 19: _t->showTrayMessage((*reinterpret_cast<std::add_pointer_t<TrayMessageType>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<TrayMessageIcon>>(_a[4]))); break;
        case 20: _t->showTrayMessage((*reinterpret_cast<std::add_pointer_t<TrayMessageType>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3]))); break;
        case 21: _t->showTrayMessage((*reinterpret_cast<std::add_pointer_t<TrayMessageType>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 22: _t->updateGroup((*reinterpret_cast<std::add_pointer_t<GroupOp>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[3]))); break;
        case 23: _t->addContacts((*reinterpret_cast<std::add_pointer_t<QStringList*>>(_a[1]))); break;
        case 24: _t->chatWindow_closed((*reinterpret_cast<std::add_pointer_t<QString*>>(_a[1]))); break;
        case 25: _t->chatRoomWindow_closed((*reinterpret_cast<std::add_pointer_t<QString*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *lmcCore::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lmcCore::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7lmcCoreE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int lmcCore::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 26;
    }
    return _id;
}
QT_WARNING_POP

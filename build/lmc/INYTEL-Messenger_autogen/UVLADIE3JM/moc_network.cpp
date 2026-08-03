/****************************************************************************
** Meta object code from reading C++ file 'network.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../lmc/src/network.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'network.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10lmcNetworkE_t {};
} // unnamed namespace

template <> constexpr inline auto lmcNetwork::qt_create_metaobjectdata<qt_meta_tag_ZN10lmcNetworkE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lmcNetwork",
        "connectionStateChanged",
        "",
        "broadcastReceived",
        "DatagramHeader*",
        "pHeader",
        "QString*",
        "lpszData",
        "newConnection",
        "lpszUserId",
        "lpszAddress",
        "connectionLost",
        "messageReceived",
        "progressReceived",
        "webMessageReceived",
        "timer_timeout",
        "udp_receiveBroadcast",
        "tcp_newConnection",
        "tcp_connectionLost",
        "tcp_receiveMessage",
        "tcp_receiveProgress",
        "web_receiveMessage"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'connectionStateChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'broadcastReceived'
        QtMocHelpers::SignalData<void(DatagramHeader *, QString *)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 5 }, { 0x80000000 | 6, 7 },
        }}),
        // Signal 'newConnection'
        QtMocHelpers::SignalData<void(QString *, QString *)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 9 }, { 0x80000000 | 6, 10 },
        }}),
        // Signal 'connectionLost'
        QtMocHelpers::SignalData<void(QString *)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 9 },
        }}),
        // Signal 'messageReceived'
        QtMocHelpers::SignalData<void(DatagramHeader *, QString *)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 5 }, { 0x80000000 | 6, 7 },
        }}),
        // Signal 'progressReceived'
        QtMocHelpers::SignalData<void(QString *, QString *)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 9 }, { 0x80000000 | 6, 7 },
        }}),
        // Signal 'webMessageReceived'
        QtMocHelpers::SignalData<void(QString *)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Slot 'timer_timeout'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'udp_receiveBroadcast'
        QtMocHelpers::SlotData<void(DatagramHeader *, QString *)>(16, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 4, 5 }, { 0x80000000 | 6, 7 },
        }}),
        // Slot 'tcp_newConnection'
        QtMocHelpers::SlotData<void(QString *, QString *)>(17, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 6, 9 }, { 0x80000000 | 6, 10 },
        }}),
        // Slot 'tcp_connectionLost'
        QtMocHelpers::SlotData<void(QString *)>(18, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 6, 9 },
        }}),
        // Slot 'tcp_receiveMessage'
        QtMocHelpers::SlotData<void(DatagramHeader *, QString *)>(19, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 4, 5 }, { 0x80000000 | 6, 7 },
        }}),
        // Slot 'tcp_receiveProgress'
        QtMocHelpers::SlotData<void(QString *, QString *)>(20, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 6, 9 }, { 0x80000000 | 6, 7 },
        }}),
        // Slot 'web_receiveMessage'
        QtMocHelpers::SlotData<void(QString *)>(21, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<lmcNetwork, qt_meta_tag_ZN10lmcNetworkE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lmcNetwork::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10lmcNetworkE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10lmcNetworkE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10lmcNetworkE_t>.metaTypes,
    nullptr
} };

void lmcNetwork::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<lmcNetwork *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->connectionStateChanged(); break;
        case 1: _t->broadcastReceived((*reinterpret_cast<std::add_pointer_t<DatagramHeader*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString*>>(_a[2]))); break;
        case 2: _t->newConnection((*reinterpret_cast<std::add_pointer_t<QString*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString*>>(_a[2]))); break;
        case 3: _t->connectionLost((*reinterpret_cast<std::add_pointer_t<QString*>>(_a[1]))); break;
        case 4: _t->messageReceived((*reinterpret_cast<std::add_pointer_t<DatagramHeader*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString*>>(_a[2]))); break;
        case 5: _t->progressReceived((*reinterpret_cast<std::add_pointer_t<QString*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString*>>(_a[2]))); break;
        case 6: _t->webMessageReceived((*reinterpret_cast<std::add_pointer_t<QString*>>(_a[1]))); break;
        case 7: _t->timer_timeout(); break;
        case 8: _t->udp_receiveBroadcast((*reinterpret_cast<std::add_pointer_t<DatagramHeader*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString*>>(_a[2]))); break;
        case 9: _t->tcp_newConnection((*reinterpret_cast<std::add_pointer_t<QString*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString*>>(_a[2]))); break;
        case 10: _t->tcp_connectionLost((*reinterpret_cast<std::add_pointer_t<QString*>>(_a[1]))); break;
        case 11: _t->tcp_receiveMessage((*reinterpret_cast<std::add_pointer_t<DatagramHeader*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString*>>(_a[2]))); break;
        case 12: _t->tcp_receiveProgress((*reinterpret_cast<std::add_pointer_t<QString*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString*>>(_a[2]))); break;
        case 13: _t->web_receiveMessage((*reinterpret_cast<std::add_pointer_t<QString*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (lmcNetwork::*)()>(_a, &lmcNetwork::connectionStateChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (lmcNetwork::*)(DatagramHeader * , QString * )>(_a, &lmcNetwork::broadcastReceived, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (lmcNetwork::*)(QString * , QString * )>(_a, &lmcNetwork::newConnection, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (lmcNetwork::*)(QString * )>(_a, &lmcNetwork::connectionLost, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (lmcNetwork::*)(DatagramHeader * , QString * )>(_a, &lmcNetwork::messageReceived, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (lmcNetwork::*)(QString * , QString * )>(_a, &lmcNetwork::progressReceived, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (lmcNetwork::*)(QString * )>(_a, &lmcNetwork::webMessageReceived, 6))
            return;
    }
}

const QMetaObject *lmcNetwork::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lmcNetwork::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10lmcNetworkE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int lmcNetwork::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void lmcNetwork::connectionStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void lmcNetwork::broadcastReceived(DatagramHeader * _t1, QString * _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}

// SIGNAL 2
void lmcNetwork::newConnection(QString * _t1, QString * _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2);
}

// SIGNAL 3
void lmcNetwork::connectionLost(QString * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void lmcNetwork::messageReceived(DatagramHeader * _t1, QString * _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1, _t2);
}

// SIGNAL 5
void lmcNetwork::progressReceived(QString * _t1, QString * _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1, _t2);
}

// SIGNAL 6
void lmcNetwork::webMessageReceived(QString * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}
QT_WARNING_POP

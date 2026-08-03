/****************************************************************************
** Meta object code from reading C++ file 'tcpnetwork.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../lmc/src/tcpnetwork.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tcpnetwork.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13lmcTcpNetworkE_t {};
} // unnamed namespace

template <> constexpr inline auto lmcTcpNetwork::qt_create_metaobjectdata<qt_meta_tag_ZN13lmcTcpNetworkE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lmcTcpNetwork",
        "newConnection",
        "",
        "QString*",
        "lpszUserId",
        "lpszAddress",
        "connectionLost",
        "messageReceived",
        "DatagramHeader*",
        "pHeader",
        "lpszData",
        "progressReceived",
        "server_newConnection",
        "socket_readyRead",
        "msgStream_connectionLost",
        "update",
        "FileMode",
        "mode",
        "FileOp",
        "op",
        "FileType",
        "type",
        "lpszId",
        "receiveMessage",
        "QByteArray&",
        "data"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'newConnection'
        QtMocHelpers::SignalData<void(QString *, QString *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 3, 5 },
        }}),
        // Signal 'connectionLost'
        QtMocHelpers::SignalData<void(QString *)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'messageReceived'
        QtMocHelpers::SignalData<void(DatagramHeader *, QString *)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 }, { 0x80000000 | 3, 10 },
        }}),
        // Signal 'progressReceived'
        QtMocHelpers::SignalData<void(QString *, QString *)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 3, 10 },
        }}),
        // Slot 'server_newConnection'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'socket_readyRead'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'msgStream_connectionLost'
        QtMocHelpers::SlotData<void(QString *)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'update'
        QtMocHelpers::SlotData<void(FileMode, FileOp, FileType, QString *, QString *, QString *)>(15, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 16, 17 }, { 0x80000000 | 18, 19 }, { 0x80000000 | 20, 21 }, { 0x80000000 | 3, 22 },
            { 0x80000000 | 3, 4 }, { 0x80000000 | 3, 10 },
        }}),
        // Slot 'receiveMessage'
        QtMocHelpers::SlotData<void(QString *, QString *, QByteArray &)>(23, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 3, 5 }, { 0x80000000 | 24, 25 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<lmcTcpNetwork, qt_meta_tag_ZN13lmcTcpNetworkE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lmcTcpNetwork::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13lmcTcpNetworkE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13lmcTcpNetworkE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13lmcTcpNetworkE_t>.metaTypes,
    nullptr
} };

void lmcTcpNetwork::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<lmcTcpNetwork *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->newConnection((*reinterpret_cast<std::add_pointer_t<QString*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString*>>(_a[2]))); break;
        case 1: _t->connectionLost((*reinterpret_cast<std::add_pointer_t<QString*>>(_a[1]))); break;
        case 2: _t->messageReceived((*reinterpret_cast<std::add_pointer_t<DatagramHeader*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString*>>(_a[2]))); break;
        case 3: _t->progressReceived((*reinterpret_cast<std::add_pointer_t<QString*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString*>>(_a[2]))); break;
        case 4: _t->server_newConnection(); break;
        case 5: _t->socket_readyRead(); break;
        case 6: _t->msgStream_connectionLost((*reinterpret_cast<std::add_pointer_t<QString*>>(_a[1]))); break;
        case 7: _t->update((*reinterpret_cast<std::add_pointer_t<FileMode>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<FileOp>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<FileType>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QString*>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<QString*>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<QString*>>(_a[6]))); break;
        case 8: _t->receiveMessage((*reinterpret_cast<std::add_pointer_t<QString*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString*>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QByteArray&>>(_a[3]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (lmcTcpNetwork::*)(QString * , QString * )>(_a, &lmcTcpNetwork::newConnection, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (lmcTcpNetwork::*)(QString * )>(_a, &lmcTcpNetwork::connectionLost, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (lmcTcpNetwork::*)(DatagramHeader * , QString * )>(_a, &lmcTcpNetwork::messageReceived, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (lmcTcpNetwork::*)(QString * , QString * )>(_a, &lmcTcpNetwork::progressReceived, 3))
            return;
    }
}

const QMetaObject *lmcTcpNetwork::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lmcTcpNetwork::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13lmcTcpNetworkE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int lmcTcpNetwork::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void lmcTcpNetwork::newConnection(QString * _t1, QString * _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void lmcTcpNetwork::connectionLost(QString * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void lmcTcpNetwork::messageReceived(DatagramHeader * _t1, QString * _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2);
}

// SIGNAL 3
void lmcTcpNetwork::progressReceived(QString * _t1, QString * _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2);
}
QT_WARNING_POP

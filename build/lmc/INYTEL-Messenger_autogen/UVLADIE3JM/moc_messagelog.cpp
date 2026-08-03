/****************************************************************************
** Meta object code from reading C++ file 'messagelog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../lmc/src/messagelog.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'messagelog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13lmcMessageLogE_t {};
} // unnamed namespace

template <> constexpr inline auto lmcMessageLog::qt_create_metaobjectdata<qt_meta_tag_ZN13lmcMessageLogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lmcMessageLog",
        "messageSent",
        "",
        "MessageType",
        "type",
        "QString*",
        "lpszUserId",
        "XmlMessage*",
        "pMessage",
        "log_linkHovered",
        "link",
        "title",
        "textContent",
        "showContextMenu",
        "QPoint",
        "pos",
        "copyAction_triggered",
        "copyLinkAction_triggered",
        "selectAllAction_triggered",
        "onAnchorClicked",
        "QUrl",
        "arg1"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'messageSent'
        QtMocHelpers::SignalData<void(MessageType, QString *, XmlMessage *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 }, { 0x80000000 | 7, 8 },
        }}),
        // Slot 'log_linkHovered'
        QtMocHelpers::SlotData<void(const QString &, const QString &, const QString &)>(9, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 10 }, { QMetaType::QString, 11 }, { QMetaType::QString, 12 },
        }}),
        // Slot 'showContextMenu'
        QtMocHelpers::SlotData<void(const QPoint &)>(13, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 14, 15 },
        }}),
        // Slot 'copyAction_triggered'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'copyLinkAction_triggered'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'selectAllAction_triggered'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onAnchorClicked'
        QtMocHelpers::SlotData<void(const QUrl &)>(19, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 20, 21 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<lmcMessageLog, qt_meta_tag_ZN13lmcMessageLogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lmcMessageLog::staticMetaObject = { {
    QMetaObject::SuperData::link<QMessageBrowser::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13lmcMessageLogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13lmcMessageLogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13lmcMessageLogE_t>.metaTypes,
    nullptr
} };

void lmcMessageLog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<lmcMessageLog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->messageSent((*reinterpret_cast<std::add_pointer_t<MessageType>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString*>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<XmlMessage*>>(_a[3]))); break;
        case 1: _t->log_linkHovered((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3]))); break;
        case 2: _t->showContextMenu((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 3: _t->copyAction_triggered(); break;
        case 4: _t->copyLinkAction_triggered(); break;
        case 5: _t->selectAllAction_triggered(); break;
        case 6: _t->onAnchorClicked((*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (lmcMessageLog::*)(MessageType , QString * , XmlMessage * )>(_a, &lmcMessageLog::messageSent, 0))
            return;
    }
}

const QMetaObject *lmcMessageLog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lmcMessageLog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13lmcMessageLogE_t>.strings))
        return static_cast<void*>(this);
    return QMessageBrowser::qt_metacast(_clname);
}

int lmcMessageLog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMessageBrowser::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void lmcMessageLog::messageSent(MessageType _t1, QString * _t2, XmlMessage * _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2, _t3);
}
QT_WARNING_POP

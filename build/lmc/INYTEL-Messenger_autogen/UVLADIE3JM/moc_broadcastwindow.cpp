/****************************************************************************
** Meta object code from reading C++ file 'broadcastwindow.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../lmc/src/broadcastwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'broadcastwindow.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN18lmcBroadcastWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto lmcBroadcastWindow::qt_create_metaobjectdata<qt_meta_tag_ZN18lmcBroadcastWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lmcBroadcastWindow",
        "messageSent",
        "",
        "MessageType",
        "type",
        "QString*",
        "lpszUserId",
        "XmlMessage*",
        "pMessage",
        "btnFontSize_clicked",
        "fontAction_triggered",
        "QAction*",
        "action",
        "smileyAction_triggered",
        "btnSelectAll_clicked",
        "btnSelectNone_clicked",
        "tvUserList_itemChanged",
        "QTreeWidgetItem*",
        "item",
        "column",
        "btnSend_clicked"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'messageSent'
        QtMocHelpers::SignalData<void(MessageType, QString *, XmlMessage *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 }, { 0x80000000 | 7, 8 },
        }}),
        // Slot 'btnFontSize_clicked'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'fontAction_triggered'
        QtMocHelpers::SlotData<void(QAction *)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 11, 12 },
        }}),
        // Slot 'smileyAction_triggered'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'btnSelectAll_clicked'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'btnSelectNone_clicked'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'tvUserList_itemChanged'
        QtMocHelpers::SlotData<void(QTreeWidgetItem *, int)>(16, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 17, 18 }, { QMetaType::Int, 19 },
        }}),
        // Slot 'btnSend_clicked'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<lmcBroadcastWindow, qt_meta_tag_ZN18lmcBroadcastWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lmcBroadcastWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18lmcBroadcastWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18lmcBroadcastWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN18lmcBroadcastWindowE_t>.metaTypes,
    nullptr
} };

void lmcBroadcastWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<lmcBroadcastWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->messageSent((*reinterpret_cast<std::add_pointer_t<MessageType>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString*>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<XmlMessage*>>(_a[3]))); break;
        case 1: _t->btnFontSize_clicked(); break;
        case 2: _t->fontAction_triggered((*reinterpret_cast<std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 3: _t->smileyAction_triggered(); break;
        case 4: _t->btnSelectAll_clicked(); break;
        case 5: _t->btnSelectNone_clicked(); break;
        case 6: _t->tvUserList_itemChanged((*reinterpret_cast<std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 7: _t->btnSend_clicked(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (lmcBroadcastWindow::*)(MessageType , QString * , XmlMessage * )>(_a, &lmcBroadcastWindow::messageSent, 0))
            return;
    }
}

const QMetaObject *lmcBroadcastWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lmcBroadcastWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18lmcBroadcastWindowE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int lmcBroadcastWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void lmcBroadcastWindow::messageSent(MessageType _t1, QString * _t2, XmlMessage * _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2, _t3);
}
QT_WARNING_POP

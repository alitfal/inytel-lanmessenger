/****************************************************************************
** Meta object code from reading C++ file 'chatwindow.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../lmc/src/chatwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chatwindow.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13lmcChatWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto lmcChatWindow::qt_create_metaobjectdata<qt_meta_tag_ZN13lmcChatWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lmcChatWindow",
        "messageSent",
        "",
        "MessageType",
        "type",
        "QString*",
        "lpszUserId",
        "XmlMessage*",
        "pMessage",
        "showHistory",
        "showTransfers",
        "closed",
        "btnFont_clicked",
        "btnFontColor_clicked",
        "btnFile_clicked",
        "btnFolder_clicked",
        "btnSave_clicked",
        "btnHistory_clicked",
        "btnTransfers_clicked",
        "smileyAction_triggered",
        "log_sendMessage",
        "checkChatState"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'messageSent'
        QtMocHelpers::SignalData<void(MessageType, QString *, XmlMessage *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 }, { 0x80000000 | 7, 8 },
        }}),
        // Signal 'showHistory'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'showTransfers'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'closed'
        QtMocHelpers::SignalData<void(QString *)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Slot 'btnFont_clicked'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'btnFontColor_clicked'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'btnFile_clicked'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'btnFolder_clicked'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'btnSave_clicked'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'btnHistory_clicked'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'btnTransfers_clicked'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'smileyAction_triggered'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'log_sendMessage'
        QtMocHelpers::SlotData<void(MessageType, QString *, XmlMessage *)>(20, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 }, { 0x80000000 | 7, 8 },
        }}),
        // Slot 'checkChatState'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<lmcChatWindow, qt_meta_tag_ZN13lmcChatWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lmcChatWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13lmcChatWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13lmcChatWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13lmcChatWindowE_t>.metaTypes,
    nullptr
} };

void lmcChatWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<lmcChatWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->messageSent((*reinterpret_cast<std::add_pointer_t<MessageType>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString*>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<XmlMessage*>>(_a[3]))); break;
        case 1: _t->showHistory(); break;
        case 2: _t->showTransfers(); break;
        case 3: _t->closed((*reinterpret_cast<std::add_pointer_t<QString*>>(_a[1]))); break;
        case 4: _t->btnFont_clicked(); break;
        case 5: _t->btnFontColor_clicked(); break;
        case 6: _t->btnFile_clicked(); break;
        case 7: _t->btnFolder_clicked(); break;
        case 8: _t->btnSave_clicked(); break;
        case 9: _t->btnHistory_clicked(); break;
        case 10: _t->btnTransfers_clicked(); break;
        case 11: _t->smileyAction_triggered(); break;
        case 12: _t->log_sendMessage((*reinterpret_cast<std::add_pointer_t<MessageType>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString*>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<XmlMessage*>>(_a[3]))); break;
        case 13: _t->checkChatState(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (lmcChatWindow::*)(MessageType , QString * , XmlMessage * )>(_a, &lmcChatWindow::messageSent, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (lmcChatWindow::*)()>(_a, &lmcChatWindow::showHistory, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (lmcChatWindow::*)()>(_a, &lmcChatWindow::showTransfers, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (lmcChatWindow::*)(QString * )>(_a, &lmcChatWindow::closed, 3))
            return;
    }
}

const QMetaObject *lmcChatWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lmcChatWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13lmcChatWindowE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int lmcChatWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void lmcChatWindow::messageSent(MessageType _t1, QString * _t2, XmlMessage * _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2, _t3);
}

// SIGNAL 1
void lmcChatWindow::showHistory()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void lmcChatWindow::showTransfers()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void lmcChatWindow::closed(QString * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}
QT_WARNING_POP

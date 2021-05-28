/****************************************************************************
** Meta object code from reading C++ file 'talkwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "talkwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'talkwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TalkWindow_t {
    QByteArrayData data[21];
    char stringdata0[345];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TalkWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TalkWindow_t qt_meta_stringdata_TalkWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "TalkWindow"
QT_MOC_LITERAL(1, 11, 24), // "currentCharFormatChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 15), // "QTextCharFormat"
QT_MOC_LITERAL(4, 53, 6), // "format"
QT_MOC_LITERAL(5, 60, 20), // "onSignalWindowclosed"
QT_MOC_LITERAL(6, 81, 21), // "onSetEmotionBtnStatus"
QT_MOC_LITERAL(7, 103, 16), // "onSendBtnClicked"
QT_MOC_LITERAL(8, 120, 13), // "onEnterAction"
QT_MOC_LITERAL(9, 134, 17), // "onEnterCtrlAction"
QT_MOC_LITERAL(10, 152, 16), // "onFontBtnClicked"
QT_MOC_LITERAL(11, 169, 16), // "onBoldBtnCLicked"
QT_MOC_LITERAL(12, 186, 16), // "onItalBtnCLicked"
QT_MOC_LITERAL(13, 203, 17), // "onUnderBtnCLicked"
QT_MOC_LITERAL(14, 221, 17), // "onColorBtnCLicked"
QT_MOC_LITERAL(15, 239, 15), // "onCutBtnCLicked"
QT_MOC_LITERAL(16, 255, 31), // "onFontFamilycurrentIndexChanged"
QT_MOC_LITERAL(17, 287, 6), // "family"
QT_MOC_LITERAL(18, 294, 29), // "onFontSizecurrentIndexChanged"
QT_MOC_LITERAL(19, 324, 4), // "size"
QT_MOC_LITERAL(20, 329, 15) // "onCapturePixmap"

    },
    "TalkWindow\0currentCharFormatChanged\0"
    "\0QTextCharFormat\0format\0onSignalWindowclosed\0"
    "onSetEmotionBtnStatus\0onSendBtnClicked\0"
    "onEnterAction\0onEnterCtrlAction\0"
    "onFontBtnClicked\0onBoldBtnCLicked\0"
    "onItalBtnCLicked\0onUnderBtnCLicked\0"
    "onColorBtnCLicked\0onCutBtnCLicked\0"
    "onFontFamilycurrentIndexChanged\0family\0"
    "onFontSizecurrentIndexChanged\0size\0"
    "onCapturePixmap"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TalkWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x08 /* Private */,
       5,    0,   92,    2, 0x0a /* Public */,
       6,    0,   93,    2, 0x0a /* Public */,
       7,    1,   94,    2, 0x0a /* Public */,
       8,    0,   97,    2, 0x08 /* Private */,
       9,    0,   98,    2, 0x08 /* Private */,
      10,    1,   99,    2, 0x08 /* Private */,
      11,    1,  102,    2, 0x08 /* Private */,
      12,    1,  105,    2, 0x08 /* Private */,
      13,    1,  108,    2, 0x08 /* Private */,
      14,    1,  111,    2, 0x08 /* Private */,
      15,    1,  114,    2, 0x08 /* Private */,
      16,    1,  117,    2, 0x08 /* Private */,
      18,    1,  120,    2, 0x08 /* Private */,
      20,    1,  123,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QPixmap,    2,

       0        // eod
};

void TalkWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TalkWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentCharFormatChanged((*reinterpret_cast< const QTextCharFormat(*)>(_a[1]))); break;
        case 1: _t->onSignalWindowclosed(); break;
        case 2: _t->onSetEmotionBtnStatus(); break;
        case 3: _t->onSendBtnClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->onEnterAction(); break;
        case 5: _t->onEnterCtrlAction(); break;
        case 6: _t->onFontBtnClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->onBoldBtnCLicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->onItalBtnCLicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->onUnderBtnCLicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->onColorBtnCLicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->onCutBtnCLicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->onFontFamilycurrentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->onFontSizecurrentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->onCapturePixmap((*reinterpret_cast< const QPixmap(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TalkWindow::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_TalkWindow.data,
    qt_meta_data_TalkWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TalkWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TalkWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TalkWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TalkWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

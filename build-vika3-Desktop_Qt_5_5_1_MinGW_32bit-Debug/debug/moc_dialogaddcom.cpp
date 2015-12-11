/****************************************************************************
** Meta object code from reading C++ file 'dialogaddcom.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Vika3nytt/dialogaddcom.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogaddcom.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DialogAddCom_t {
    QByteArrayData data[8];
    char stringdata0[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DialogAddCom_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DialogAddCom_t qt_meta_stringdata_DialogAddCom = {
    {
QT_MOC_LITERAL(0, 0, 12), // "DialogAddCom"
QT_MOC_LITERAL(1, 13, 27), // "on_checkBox_created_clicked"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 27), // "on_confirmAddButton_clicked"
QT_MOC_LITERAL(4, 70, 49), // "on_lineEdit_addCreationYear_c..."
QT_MOC_LITERAL(5, 120, 4), // "arg1"
QT_MOC_LITERAL(6, 125, 4), // "arg2"
QT_MOC_LITERAL(7, 130, 41) // "on_lineEdit_addType_cursorPos..."

    },
    "DialogAddCom\0on_checkBox_created_clicked\0"
    "\0on_confirmAddButton_clicked\0"
    "on_lineEdit_addCreationYear_cursorPositionChanged\0"
    "arg1\0arg2\0on_lineEdit_addType_cursorPositionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DialogAddCom[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    2,   36,    2, 0x08 /* Private */,
       7,    2,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,

       0        // eod
};

void DialogAddCom::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DialogAddCom *_t = static_cast<DialogAddCom *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_checkBox_created_clicked(); break;
        case 1: _t->on_confirmAddButton_clicked(); break;
        //case 2: _t->on_lineEdit_addCreationYear_cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        //case 3: _t->on_lineEdit_addType_cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject DialogAddCom::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DialogAddCom.data,
      qt_meta_data_DialogAddCom,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DialogAddCom::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogAddCom::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DialogAddCom.stringdata0))
        return static_cast<void*>(const_cast< DialogAddCom*>(this));
    return QDialog::qt_metacast(_clname);
}

int DialogAddCom::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

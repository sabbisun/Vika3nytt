/****************************************************************************
** Meta object code from reading C++ file 'dialogaddsci.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Vika3nytt/dialogaddsci.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogaddsci.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DialogAddSci_t {
    QByteArrayData data[7];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DialogAddSci_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DialogAddSci_t qt_meta_stringdata_DialogAddSci = {
    {
QT_MOC_LITERAL(0, 0, 12), // "DialogAddSci"
QT_MOC_LITERAL(1, 13, 24), // "on_checkBox_male_clicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 7), // "checked"
QT_MOC_LITERAL(4, 47, 26), // "on_checkBox_female_clicked"
QT_MOC_LITERAL(5, 74, 25), // "on_checkBox_alive_clicked"
QT_MOC_LITERAL(6, 100, 27) // "on_confirmAddButton_clicked"

    },
    "DialogAddSci\0on_checkBox_male_clicked\0"
    "\0checked\0on_checkBox_female_clicked\0"
    "on_checkBox_alive_clicked\0"
    "on_confirmAddButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DialogAddSci[] = {

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
       1,    1,   34,    2, 0x08 /* Private */,
       4,    1,   37,    2, 0x08 /* Private */,
       5,    1,   40,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Bool, QMetaType::Bool,    3,
    QMetaType::Bool, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,

       0        // eod
};

void DialogAddSci::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DialogAddSci *_t = static_cast<DialogAddSci *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->on_checkBox_male_clicked((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->on_checkBox_female_clicked((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: _t->on_checkBox_alive_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_confirmAddButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject DialogAddSci::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DialogAddSci.data,
      qt_meta_data_DialogAddSci,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DialogAddSci::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogAddSci::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DialogAddSci.stringdata0))
        return static_cast<void*>(const_cast< DialogAddSci*>(this));
    return QDialog::qt_metacast(_clname);
}

int DialogAddSci::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

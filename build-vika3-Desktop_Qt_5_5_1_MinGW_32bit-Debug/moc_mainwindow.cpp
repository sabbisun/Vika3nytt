/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Vika3nytt/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[19];
    char stringdata0[515];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 26), // "on_tabWidget_tabBarClicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 5), // "index"
QT_MOC_LITERAL(4, 45, 33), // "on_lineEdit_searchSci_textCha..."
QT_MOC_LITERAL(5, 79, 4), // "arg1"
QT_MOC_LITERAL(6, 84, 41), // "on_comboBox_searchSci_current..."
QT_MOC_LITERAL(7, 126, 34), // "on_lineEdit_searchComp_textCh..."
QT_MOC_LITERAL(8, 161, 42), // "on_comboBox_searchComp_curren..."
QT_MOC_LITERAL(9, 204, 24), // "on_Button_addSci_clicked"
QT_MOC_LITERAL(10, 229, 25), // "on_Button_editSci_clicked"
QT_MOC_LITERAL(11, 255, 27), // "on_Button_removeSci_clicked"
QT_MOC_LITERAL(12, 283, 38), // "on_treeWidget_sci_itemSelecti..."
QT_MOC_LITERAL(13, 322, 28), // "on_Button_removeComp_clicked"
QT_MOC_LITERAL(14, 351, 39), // "on_treeWidget_comp_itemSelect..."
QT_MOC_LITERAL(15, 391, 26), // "on_Button_editComp_clicked"
QT_MOC_LITERAL(16, 418, 34), // "on_Button_addSciConnection_cl..."
QT_MOC_LITERAL(17, 453, 35), // "on_Button_addCompConnection_c..."
QT_MOC_LITERAL(18, 489, 25) // "on_Button_addComp_clicked"

    },
    "MainWindow\0on_tabWidget_tabBarClicked\0"
    "\0index\0on_lineEdit_searchSci_textChanged\0"
    "arg1\0on_comboBox_searchSci_currentIndexChanged\0"
    "on_lineEdit_searchComp_textChanged\0"
    "on_comboBox_searchComp_currentIndexChanged\0"
    "on_Button_addSci_clicked\0"
    "on_Button_editSci_clicked\0"
    "on_Button_removeSci_clicked\0"
    "on_treeWidget_sci_itemSelectionChanged\0"
    "on_Button_removeComp_clicked\0"
    "on_treeWidget_comp_itemSelectionChanged\0"
    "on_Button_editComp_clicked\0"
    "on_Button_addSciConnection_clicked\0"
    "on_Button_addCompConnection_clicked\0"
    "on_Button_addComp_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
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
       4,    1,   92,    2, 0x08 /* Private */,
       6,    1,   95,    2, 0x08 /* Private */,
       7,    1,   98,    2, 0x08 /* Private */,
       8,    1,  101,    2, 0x08 /* Private */,
       9,    0,  104,    2, 0x08 /* Private */,
      10,    0,  105,    2, 0x08 /* Private */,
      11,    0,  106,    2, 0x08 /* Private */,
      12,    0,  107,    2, 0x08 /* Private */,
      13,    0,  108,    2, 0x08 /* Private */,
      14,    0,  109,    2, 0x08 /* Private */,
      15,    0,  110,    2, 0x08 /* Private */,
      16,    0,  111,    2, 0x08 /* Private */,
      17,    0,  112,    2, 0x08 /* Private */,
      18,    0,  113,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_tabWidget_tabBarClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_lineEdit_searchSci_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_comboBox_searchSci_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_lineEdit_searchComp_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_comboBox_searchComp_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_Button_addSci_clicked(); break;
        case 6: _t->on_Button_editSci_clicked(); break;
        case 7: _t->on_Button_removeSci_clicked(); break;
        case 8: _t->on_treeWidget_sci_itemSelectionChanged(); break;
        case 9: _t->on_Button_removeComp_clicked(); break;
        case 10: _t->on_treeWidget_comp_itemSelectionChanged(); break;
        case 11: _t->on_Button_editComp_clicked(); break;
        case 12: _t->on_Button_addSciConnection_clicked(); break;
        case 13: _t->on_Button_addCompConnection_clicked(); break;
        case 14: _t->on_Button_addComp_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE

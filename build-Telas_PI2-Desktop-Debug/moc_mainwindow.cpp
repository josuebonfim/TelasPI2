/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../telas_Rasp/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[19];
    char stringdata0[388];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(4, 58, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(5, 82, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(6, 106, 11), // "clearMiddle"
QT_MOC_LITERAL(7, 118, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(8, 142, 24), // "textConnectMedidoresInfo"
QT_MOC_LITERAL(9, 167, 4), // "info"
QT_MOC_LITERAL(10, 172, 24), // "textBatteryMedidoresInfo"
QT_MOC_LITERAL(11, 197, 25), // "textMoistureMedidoresInfo"
QT_MOC_LITERAL(12, 223, 28), // "textTemperatureMedidoresInfo"
QT_MOC_LITERAL(13, 252, 19), // "textConnectHomeInfo"
QT_MOC_LITERAL(14, 272, 21), // "textAtuadoresHomeInfo"
QT_MOC_LITERAL(15, 294, 21), // "textMedidoresHomeInfo"
QT_MOC_LITERAL(16, 316, 24), // "textConnectAtuadoresInfo"
QT_MOC_LITERAL(17, 341, 21), // "textTankAtuadoresInfo"
QT_MOC_LITERAL(18, 363, 24) // "textWorkingAtuadoresInfo"

    },
    "MainWindow\0on_pushButton_clicked\0\0"
    "on_pushButton_2_clicked\0on_pushButton_3_clicked\0"
    "on_pushButton_4_clicked\0clearMiddle\0"
    "on_pushButton_5_clicked\0"
    "textConnectMedidoresInfo\0info\0"
    "textBatteryMedidoresInfo\0"
    "textMoistureMedidoresInfo\0"
    "textTemperatureMedidoresInfo\0"
    "textConnectHomeInfo\0textAtuadoresHomeInfo\0"
    "textMedidoresHomeInfo\0textConnectAtuadoresInfo\0"
    "textTankAtuadoresInfo\0textWorkingAtuadoresInfo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x08 /* Private */,
       3,    0,   95,    2, 0x08 /* Private */,
       4,    0,   96,    2, 0x08 /* Private */,
       5,    0,   97,    2, 0x08 /* Private */,
       6,    0,   98,    2, 0x08 /* Private */,
       7,    0,   99,    2, 0x08 /* Private */,
       8,    1,  100,    2, 0x0a /* Public */,
      10,    1,  103,    2, 0x0a /* Public */,
      11,    1,  106,    2, 0x0a /* Public */,
      12,    1,  109,    2, 0x0a /* Public */,
      13,    1,  112,    2, 0x0a /* Public */,
      14,    1,  115,    2, 0x0a /* Public */,
      15,    1,  118,    2, 0x0a /* Public */,
      16,    1,  121,    2, 0x0a /* Public */,
      17,    1,  124,    2, 0x0a /* Public */,
      18,    1,  127,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_pushButton_2_clicked(); break;
        case 2: _t->on_pushButton_3_clicked(); break;
        case 3: _t->on_pushButton_4_clicked(); break;
        case 4: _t->clearMiddle(); break;
        case 5: _t->on_pushButton_5_clicked(); break;
        case 6: _t->textConnectMedidoresInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->textBatteryMedidoresInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->textMoistureMedidoresInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->textTemperatureMedidoresInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->textConnectHomeInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->textAtuadoresHomeInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->textMedidoresHomeInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->textConnectAtuadoresInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->textTankAtuadoresInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->textWorkingAtuadoresInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
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
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'threadatuadores.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../telas_Rasp/threadatuadores.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'threadatuadores.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ThreadAtuadores_t {
    QByteArrayData data[6];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ThreadAtuadores_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ThreadAtuadores_t qt_meta_stringdata_ThreadAtuadores = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ThreadAtuadores"
QT_MOC_LITERAL(1, 16, 20), // "atuadoresConnectInfo"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 20), // "atuadoresBatteryInfo"
QT_MOC_LITERAL(4, 59, 21), // "atuadoresMoistureInfo"
QT_MOC_LITERAL(5, 81, 24) // "atuadoresTemperatureInfo"

    },
    "ThreadAtuadores\0atuadoresConnectInfo\0"
    "\0atuadoresBatteryInfo\0atuadoresMoistureInfo\0"
    "atuadoresTemperatureInfo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ThreadAtuadores[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       3,    1,   37,    2, 0x06 /* Public */,
       4,    1,   40,    2, 0x06 /* Public */,
       5,    1,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void ThreadAtuadores::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ThreadAtuadores *_t = static_cast<ThreadAtuadores *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->atuadoresConnectInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->atuadoresBatteryInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->atuadoresMoistureInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->atuadoresTemperatureInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ThreadAtuadores::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ThreadAtuadores::atuadoresConnectInfo)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ThreadAtuadores::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ThreadAtuadores::atuadoresBatteryInfo)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ThreadAtuadores::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ThreadAtuadores::atuadoresMoistureInfo)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ThreadAtuadores::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ThreadAtuadores::atuadoresTemperatureInfo)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject ThreadAtuadores::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_ThreadAtuadores.data,
      qt_meta_data_ThreadAtuadores,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ThreadAtuadores::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ThreadAtuadores::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ThreadAtuadores.stringdata0))
        return static_cast<void*>(const_cast< ThreadAtuadores*>(this));
    return QThread::qt_metacast(_clname);
}

int ThreadAtuadores::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ThreadAtuadores::atuadoresConnectInfo(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ThreadAtuadores::atuadoresBatteryInfo(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ThreadAtuadores::atuadoresMoistureInfo(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ThreadAtuadores::atuadoresTemperatureInfo(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE

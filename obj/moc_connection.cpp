/****************************************************************************
** Meta object code from reading C++ file 'connection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qredisclient/connection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'connection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RedisClient__Connection_t {
    QByteArrayData data[15];
    char stringdata0[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RedisClient__Connection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RedisClient__Connection_t qt_meta_stringdata_RedisClient__Connection = {
    {
QT_MOC_LITERAL(0, 0, 23), // "RedisClient::Connection"
QT_MOC_LITERAL(1, 24, 18), // "addCommandToWorker"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 7), // "Command"
QT_MOC_LITERAL(4, 52, 5), // "error"
QT_MOC_LITERAL(5, 58, 3), // "log"
QT_MOC_LITERAL(6, 62, 9), // "connected"
QT_MOC_LITERAL(7, 72, 13), // "shutdownStart"
QT_MOC_LITERAL(8, 86, 12), // "disconnected"
QT_MOC_LITERAL(9, 99, 6), // "authOk"
QT_MOC_LITERAL(10, 106, 9), // "authError"
QT_MOC_LITERAL(11, 116, 11), // "reconnectTo"
QT_MOC_LITERAL(12, 128, 4), // "host"
QT_MOC_LITERAL(13, 133, 4), // "port"
QT_MOC_LITERAL(14, 138, 4) // "auth"

    },
    "RedisClient::Connection\0addCommandToWorker\0"
    "\0Command\0error\0log\0connected\0shutdownStart\0"
    "disconnected\0authOk\0authError\0reconnectTo\0"
    "host\0port\0auth"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RedisClient__Connection[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    1,   67,    2, 0x06 /* Public */,
       5,    1,   70,    2, 0x06 /* Public */,
       6,    0,   73,    2, 0x06 /* Public */,
       7,    0,   74,    2, 0x06 /* Public */,
       8,    0,   75,    2, 0x06 /* Public */,
       9,    0,   76,    2, 0x06 /* Public */,
      10,    1,   77,    2, 0x06 /* Public */,
      11,    2,   80,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,   85,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   12,   13,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void RedisClient::Connection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Connection *_t = static_cast<Connection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addCommandToWorker((*reinterpret_cast< const Command(*)>(_a[1]))); break;
        case 1: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->log((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->connected(); break;
        case 4: _t->shutdownStart(); break;
        case 5: _t->disconnected(); break;
        case 6: _t->authOk(); break;
        case 7: _t->authError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->reconnectTo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->auth(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Connection::*)(const Command & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::addCommandToWorker)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Connection::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::error)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Connection::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::log)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Connection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::connected)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Connection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::shutdownStart)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Connection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::disconnected)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Connection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::authOk)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Connection::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::authError)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Connection::*)(const QString & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::reconnectTo)) {
                *result = 8;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RedisClient::Connection::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RedisClient__Connection.data,
      qt_meta_data_RedisClient__Connection,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RedisClient::Connection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RedisClient::Connection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RedisClient__Connection.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RedisClient::Connection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void RedisClient::Connection::addCommandToWorker(const Command & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RedisClient::Connection::error(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RedisClient::Connection::log(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void RedisClient::Connection::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void RedisClient::Connection::shutdownStart()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void RedisClient::Connection::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void RedisClient::Connection::authOk()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void RedisClient::Connection::authError(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void RedisClient::Connection::reconnectTo(const QString & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

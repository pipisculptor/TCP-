/****************************************************************************
** Meta object code from reading C++ file 'sendthread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../tcpTransferFile/sendthread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sendthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_sendThread_t {
    QByteArrayData data[20];
    char stringdata0[323];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_sendThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_sendThread_t qt_meta_stringdata_sendThread = {
    {
QT_MOC_LITERAL(0, 0, 10), // "sendThread"
QT_MOC_LITERAL(1, 11, 14), // "sendTransState"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 19), // "onSocketStateChange"
QT_MOC_LITERAL(4, 47, 28), // "QAbstractSocket::SocketState"
QT_MOC_LITERAL(5, 76, 19), // "onServerErrorOccurs"
QT_MOC_LITERAL(6, 96, 11), // "QTcpServer*"
QT_MOC_LITERAL(7, 108, 19), // "onClientErrorOccurs"
QT_MOC_LITERAL(8, 128, 11), // "QTcpSocket*"
QT_MOC_LITERAL(9, 140, 20), // "onNewClientconnected"
QT_MOC_LITERAL(10, 161, 20), // "onClientDisconnected"
QT_MOC_LITERAL(11, 182, 12), // "sendRecState"
QT_MOC_LITERAL(12, 195, 13), // "sendActionSig"
QT_MOC_LITERAL(13, 209, 9), // "handleCmd"
QT_MOC_LITERAL(14, 219, 8), // "cmd_type"
QT_MOC_LITERAL(15, 228, 13), // "onErrorOccurs"
QT_MOC_LITERAL(16, 242, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(17, 271, 15), // "onNewConnection"
QT_MOC_LITERAL(18, 287, 17), // "onServerReadyRead"
QT_MOC_LITERAL(19, 305, 17) // "onSocketReadyRead"

    },
    "sendThread\0sendTransState\0\0"
    "onSocketStateChange\0QAbstractSocket::SocketState\0"
    "onServerErrorOccurs\0QTcpServer*\0"
    "onClientErrorOccurs\0QTcpSocket*\0"
    "onNewClientconnected\0onClientDisconnected\0"
    "sendRecState\0sendActionSig\0handleCmd\0"
    "cmd_type\0onErrorOccurs\0"
    "QAbstractSocket::SocketError\0"
    "onNewConnection\0onServerReadyRead\0"
    "onSocketReadyRead"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_sendThread[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       3,    1,   82,    2, 0x06 /* Public */,
       5,    1,   85,    2, 0x06 /* Public */,
       7,    1,   88,    2, 0x06 /* Public */,
       9,    1,   91,    2, 0x06 /* Public */,
      10,    0,   94,    2, 0x06 /* Public */,
      11,    1,   95,    2, 0x06 /* Public */,
      12,    1,   98,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,  101,    2, 0x0a /* Public */,
      15,    1,  104,    2, 0x08 /* Private */,
      17,    0,  107,    2, 0x08 /* Private */,
      18,    0,  108,    2, 0x08 /* Private */,
      19,    0,  109,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, 0x80000000 | 16,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void sendThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<sendThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendTransState((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onSocketStateChange((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        case 2: _t->onServerErrorOccurs((*reinterpret_cast< QTcpServer*(*)>(_a[1]))); break;
        case 3: _t->onClientErrorOccurs((*reinterpret_cast< QTcpSocket*(*)>(_a[1]))); break;
        case 4: _t->onNewClientconnected((*reinterpret_cast< QTcpSocket*(*)>(_a[1]))); break;
        case 5: _t->onClientDisconnected(); break;
        case 6: _t->sendRecState((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->sendActionSig((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->handleCmd((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->onErrorOccurs((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 10: _t->onNewConnection(); break;
        case 11: _t->onServerReadyRead(); break;
        case 12: _t->onSocketReadyRead(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketState >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTcpServer* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTcpSocket* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTcpSocket* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (sendThread::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&sendThread::sendTransState)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (sendThread::*)(QAbstractSocket::SocketState );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&sendThread::onSocketStateChange)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (sendThread::*)(QTcpServer * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&sendThread::onServerErrorOccurs)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (sendThread::*)(QTcpSocket * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&sendThread::onClientErrorOccurs)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (sendThread::*)(QTcpSocket * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&sendThread::onNewClientconnected)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (sendThread::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&sendThread::onClientDisconnected)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (sendThread::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&sendThread::sendRecState)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (sendThread::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&sendThread::sendActionSig)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject sendThread::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_sendThread.data,
    qt_meta_data_sendThread,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *sendThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *sendThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_sendThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int sendThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void sendThread::sendTransState(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void sendThread::onSocketStateChange(QAbstractSocket::SocketState _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void sendThread::onServerErrorOccurs(QTcpServer * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void sendThread::onClientErrorOccurs(QTcpSocket * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void sendThread::onNewClientconnected(QTcpSocket * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void sendThread::onClientDisconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void sendThread::sendRecState(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void sendThread::sendActionSig(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../tcpTransferFile/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[33];
    char stringdata0[619];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 9), // "handleCmd"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 19), // "onSocketStateChange"
QT_MOC_LITERAL(4, 42, 28), // "QAbstractSocket::SocketState"
QT_MOC_LITERAL(5, 71, 5), // "state"
QT_MOC_LITERAL(6, 77, 19), // "onServerErrorOccurs"
QT_MOC_LITERAL(7, 97, 11), // "QTcpServer*"
QT_MOC_LITERAL(8, 109, 6), // "server"
QT_MOC_LITERAL(9, 116, 19), // "onClientErrorOccurs"
QT_MOC_LITERAL(10, 136, 11), // "QTcpSocket*"
QT_MOC_LITERAL(11, 148, 6), // "client"
QT_MOC_LITERAL(12, 155, 20), // "onNewClientconnected"
QT_MOC_LITERAL(13, 176, 20), // "onClientDisconnected"
QT_MOC_LITERAL(14, 197, 12), // "recActionSig"
QT_MOC_LITERAL(15, 210, 4), // "type"
QT_MOC_LITERAL(16, 215, 11), // "getRecState"
QT_MOC_LITERAL(17, 227, 13), // "getTransState"
QT_MOC_LITERAL(18, 241, 28), // "on_act_startListen_triggered"
QT_MOC_LITERAL(19, 270, 27), // "on_act_stopListen_triggered"
QT_MOC_LITERAL(20, 298, 24), // "on_act_connect_triggered"
QT_MOC_LITERAL(21, 323, 27), // "on_act_disconnect_triggered"
QT_MOC_LITERAL(22, 351, 23), // "on_act_server_triggered"
QT_MOC_LITERAL(23, 375, 23), // "on_act_client_triggered"
QT_MOC_LITERAL(24, 399, 31), // "on_stackedWidget_currentChanged"
QT_MOC_LITERAL(25, 431, 4), // "arg1"
QT_MOC_LITERAL(26, 436, 18), // "on_testBtn_clicked"
QT_MOC_LITERAL(27, 455, 23), // "on_clearTextBtn_clicked"
QT_MOC_LITERAL(28, 479, 23), // "on_chooseDirBtn_clicked"
QT_MOC_LITERAL(29, 503, 26), // "on_fileTransmitBtn_clicked"
QT_MOC_LITERAL(30, 530, 30), // "on_dirShowLineEdit_textChanged"
QT_MOC_LITERAL(31, 561, 22), // "on_stopSendBtn_clicked"
QT_MOC_LITERAL(32, 584, 34) // "on_spinBox_bufferSize_valueCh..."

    },
    "MainWindow\0handleCmd\0\0onSocketStateChange\0"
    "QAbstractSocket::SocketState\0state\0"
    "onServerErrorOccurs\0QTcpServer*\0server\0"
    "onClientErrorOccurs\0QTcpSocket*\0client\0"
    "onNewClientconnected\0onClientDisconnected\0"
    "recActionSig\0type\0getRecState\0"
    "getTransState\0on_act_startListen_triggered\0"
    "on_act_stopListen_triggered\0"
    "on_act_connect_triggered\0"
    "on_act_disconnect_triggered\0"
    "on_act_server_triggered\0on_act_client_triggered\0"
    "on_stackedWidget_currentChanged\0arg1\0"
    "on_testBtn_clicked\0on_clearTextBtn_clicked\0"
    "on_chooseDirBtn_clicked\0"
    "on_fileTransmitBtn_clicked\0"
    "on_dirShowLineEdit_textChanged\0"
    "on_stopSendBtn_clicked\0"
    "on_spinBox_bufferSize_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  129,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,  132,    2, 0x08 /* Private */,
       6,    1,  135,    2, 0x08 /* Private */,
       9,    1,  138,    2, 0x08 /* Private */,
      12,    1,  141,    2, 0x08 /* Private */,
      13,    0,  144,    2, 0x08 /* Private */,
      14,    1,  145,    2, 0x08 /* Private */,
      16,    1,  148,    2, 0x08 /* Private */,
      17,    1,  151,    2, 0x08 /* Private */,
      18,    0,  154,    2, 0x08 /* Private */,
      19,    0,  155,    2, 0x08 /* Private */,
      20,    0,  156,    2, 0x08 /* Private */,
      21,    0,  157,    2, 0x08 /* Private */,
      22,    0,  158,    2, 0x08 /* Private */,
      23,    0,  159,    2, 0x08 /* Private */,
      24,    1,  160,    2, 0x08 /* Private */,
      26,    0,  163,    2, 0x08 /* Private */,
      27,    0,  164,    2, 0x08 /* Private */,
      28,    0,  165,    2, 0x08 /* Private */,
      29,    0,  166,    2, 0x08 /* Private */,
      30,    1,  167,    2, 0x08 /* Private */,
      31,    0,  170,    2, 0x08 /* Private */,
      32,    1,  171,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   25,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleCmd((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onSocketStateChange((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        case 2: _t->onServerErrorOccurs((*reinterpret_cast< QTcpServer*(*)>(_a[1]))); break;
        case 3: _t->onClientErrorOccurs((*reinterpret_cast< QTcpSocket*(*)>(_a[1]))); break;
        case 4: _t->onNewClientconnected((*reinterpret_cast< QTcpSocket*(*)>(_a[1]))); break;
        case 5: _t->onClientDisconnected(); break;
        case 6: _t->recActionSig((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->getRecState((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->getTransState((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_act_startListen_triggered(); break;
        case 10: _t->on_act_stopListen_triggered(); break;
        case 11: _t->on_act_connect_triggered(); break;
        case 12: _t->on_act_disconnect_triggered(); break;
        case 13: _t->on_act_server_triggered(); break;
        case 14: _t->on_act_client_triggered(); break;
        case 15: _t->on_stackedWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->on_testBtn_clicked(); break;
        case 17: _t->on_clearTextBtn_clicked(); break;
        case 18: _t->on_chooseDirBtn_clicked(); break;
        case 19: _t->on_fileTransmitBtn_clicked(); break;
        case 20: _t->on_dirShowLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 21: _t->on_stopSendBtn_clicked(); break;
        case 22: _t->on_spinBox_bufferSize_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
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
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::handleCmd)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::handleCmd(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'mytcpserver.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mytcpserver.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mytcpserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_myTcpServer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   13,   12,   12, 0x05,
      64,   60,   12,   12, 0x05,
      97,   90,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     130,   13,   12,   12, 0x08,
     162,   60,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_myTcpServer[] = {
    "myTcpServer\0\0msg,data\0"
    "ClientReadData(addressMsg,QByteArray)\0"
    "msg\0ClientConnect(addressMsg)\0msg,id\0"
    "ClientDisConnect(addressMsg,int)\0"
    "ReadData(addressMsg,QByteArray)\0"
    "DisConnect(addressMsg)\0"
};

void myTcpServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        myTcpServer *_t = static_cast<myTcpServer *>(_o);
        switch (_id) {
        case 0: _t->ClientReadData((*reinterpret_cast< addressMsg(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 1: _t->ClientConnect((*reinterpret_cast< addressMsg(*)>(_a[1]))); break;
        case 2: _t->ClientDisConnect((*reinterpret_cast< addressMsg(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->ReadData((*reinterpret_cast< addressMsg(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 4: _t->DisConnect((*reinterpret_cast< addressMsg(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData myTcpServer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject myTcpServer::staticMetaObject = {
    { &QTcpServer::staticMetaObject, qt_meta_stringdata_myTcpServer,
      qt_meta_data_myTcpServer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &myTcpServer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *myTcpServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *myTcpServer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_myTcpServer))
        return static_cast<void*>(const_cast< myTcpServer*>(this));
    return QTcpServer::qt_metacast(_clname);
}

int myTcpServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void myTcpServer::ClientReadData(addressMsg _t1, QByteArray _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void myTcpServer::ClientConnect(addressMsg _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void myTcpServer::ClientDisConnect(addressMsg _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'myclientsocket.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "myclientsocket.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myclientsocket.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_myClientSocket[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   16,   15,   15, 0x05,
      63,   59,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      92,   15,   15,   15, 0x08,
     103,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_myClientSocket[] = {
    "myClientSocket\0\0msg,\0"
    "ClientReadData(addressMsg,QByteArray)\0"
    "msg\0ClientDisConnect(addressMsg)\0"
    "ReadData()\0DisConnect()\0"
};

void myClientSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        myClientSocket *_t = static_cast<myClientSocket *>(_o);
        switch (_id) {
        case 0: _t->ClientReadData((*reinterpret_cast< addressMsg(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 1: _t->ClientDisConnect((*reinterpret_cast< addressMsg(*)>(_a[1]))); break;
        case 2: _t->ReadData(); break;
        case 3: _t->DisConnect(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData myClientSocket::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject myClientSocket::staticMetaObject = {
    { &QTcpSocket::staticMetaObject, qt_meta_stringdata_myClientSocket,
      qt_meta_data_myClientSocket, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &myClientSocket::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *myClientSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *myClientSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_myClientSocket))
        return static_cast<void*>(const_cast< myClientSocket*>(this));
    return QTcpSocket::qt_metacast(_clname);
}

int myClientSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpSocket::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void myClientSocket::ClientReadData(addressMsg _t1, QByteArray _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void myClientSocket::ClientDisConnect(addressMsg _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE

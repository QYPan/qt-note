/****************************************************************************
** Meta object code from reading C++ file 'frmmain.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "frmmain.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'frmmain.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_frmMain[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,    9,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
      37,    8,    8,    8, 0x08,
      48,    8,    8,    8, 0x08,
      88,    8,    8,    8, 0x08,
     111,    9,    8,    8, 0x08,
     138,  133,    8,    8, 0x08,
     171,    9,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_frmMain[] = {
    "frmMain\0\0msg\0itemHasClicked(QString)\0"
    "ReadData()\0ReadError(QAbstractSocket::SocketError)\0"
    "ConnectButtonClicked()\0creatTalkWin(QString)\0"
    "item\0changeToString(QListWidgetItem*)\0"
    "sendButtonClicked(QString)\0"
};

void frmMain::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        frmMain *_t = static_cast<frmMain *>(_o);
        switch (_id) {
        case 0: _t->itemHasClicked((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->ReadData(); break;
        case 2: _t->ReadError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 3: _t->ConnectButtonClicked(); break;
        case 4: _t->creatTalkWin((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->changeToString((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 6: _t->sendButtonClicked((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData frmMain::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject frmMain::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_frmMain,
      qt_meta_data_frmMain, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &frmMain::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *frmMain::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *frmMain::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_frmMain))
        return static_cast<void*>(const_cast< frmMain*>(this));
    return QWidget::qt_metacast(_clname);
}

int frmMain::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void frmMain::itemHasClicked(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE

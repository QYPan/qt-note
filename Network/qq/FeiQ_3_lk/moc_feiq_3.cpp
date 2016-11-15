/****************************************************************************
** Meta object code from reading C++ file 'feiq_3.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "feiq_3.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'feiq_3.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FeiQ_3[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x08,
      24,    7,    7,    7, 0x08,
      38,    7,    7,    7, 0x08,
      62,    7,    7,    7, 0x08,
      89,    7,    7,    7, 0x08,
     117,    7,    7,    7, 0x08,
     129,  123,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FeiQ_3[] = {
    "FeiQ_3\0\0connectedSlot()\0readMessage()\0"
    "on_pushButton_clicked()\0"
    "on_pushButton_in_clicked()\0"
    "on_pushButton_out_clicked()\0acc()\0"
    "index\0on_listWidget_doubleClicked(QModelIndex)\0"
};

void FeiQ_3::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FeiQ_3 *_t = static_cast<FeiQ_3 *>(_o);
        switch (_id) {
        case 0: _t->connectedSlot(); break;
        case 1: _t->readMessage(); break;
        case 2: _t->on_pushButton_clicked(); break;
        case 3: _t->on_pushButton_in_clicked(); break;
        case 4: _t->on_pushButton_out_clicked(); break;
        case 5: _t->acc(); break;
        case 6: _t->on_listWidget_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FeiQ_3::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FeiQ_3::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FeiQ_3,
      qt_meta_data_FeiQ_3, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FeiQ_3::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FeiQ_3::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FeiQ_3::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FeiQ_3))
        return static_cast<void*>(const_cast< FeiQ_3*>(this));
    return QWidget::qt_metacast(_clname);
}

int FeiQ_3::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE

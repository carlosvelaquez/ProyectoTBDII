/****************************************************************************
** Meta object code from reading C++ file 'adminempleado.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../adminempleado.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adminempleado.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AdminEmpleado_t {
    QByteArrayData data[5];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AdminEmpleado_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AdminEmpleado_t qt_meta_stringdata_AdminEmpleado = {
    {
QT_MOC_LITERAL(0, 0, 13), // "AdminEmpleado"
QT_MOC_LITERAL(1, 14, 25), // "pushButtonAgregarEmpleado"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 26), // "pushButtonEliminarEmpleado"
QT_MOC_LITERAL(4, 68, 27) // "pushButtonModificarEmpleado"

    },
    "AdminEmpleado\0pushButtonAgregarEmpleado\0"
    "\0pushButtonEliminarEmpleado\0"
    "pushButtonModificarEmpleado"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AdminEmpleado[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    0,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AdminEmpleado::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AdminEmpleado *_t = static_cast<AdminEmpleado *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pushButtonAgregarEmpleado(); break;
        case 1: _t->pushButtonEliminarEmpleado(); break;
        case 2: _t->pushButtonModificarEmpleado(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AdminEmpleado::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AdminEmpleado.data,
      qt_meta_data_AdminEmpleado,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AdminEmpleado::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdminEmpleado::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AdminEmpleado.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AdminEmpleado::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

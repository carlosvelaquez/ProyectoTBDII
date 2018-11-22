/****************************************************************************
** Meta object code from reading C++ file 'adminalumno.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../adminalumno.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adminalumno.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AdminAlumno_t {
    QByteArrayData data[5];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AdminAlumno_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AdminAlumno_t qt_meta_stringdata_AdminAlumno = {
    {
QT_MOC_LITERAL(0, 0, 11), // "AdminAlumno"
QT_MOC_LITERAL(1, 12, 35), // "on_pushButtonEliminarAlumno_c..."
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 35), // "on_pushButtonAgregarAlumnos_c..."
QT_MOC_LITERAL(4, 85, 41) // "on_pushButtonAplicarCambiosAl..."

    },
    "AdminAlumno\0on_pushButtonEliminarAlumno_clicked\0"
    "\0on_pushButtonAgregarAlumnos_clicked\0"
    "on_pushButtonAplicarCambiosAlumno_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AdminAlumno[] = {

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

void AdminAlumno::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AdminAlumno *_t = static_cast<AdminAlumno *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButtonEliminarAlumno_clicked(); break;
        case 1: _t->on_pushButtonAgregarAlumnos_clicked(); break;
        case 2: _t->on_pushButtonAplicarCambiosAlumno_clicked(); break;
        case 3: _t->on_pushButtonAgregarTipoLicencia_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AdminAlumno::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AdminAlumno.data,
      qt_meta_data_AdminAlumno,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AdminAlumno::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdminAlumno::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AdminAlumno.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AdminAlumno::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

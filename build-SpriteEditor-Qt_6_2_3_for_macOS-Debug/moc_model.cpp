/****************************************************************************
** Meta object code from reading C++ file 'model.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../SpriteEditor/model.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'model.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_model_t {
    const uint offsetsAndSize[28];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_model_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_model_t qt_meta_stringdata_model = {
    {
QT_MOC_LITERAL(0, 5), // "model"
QT_MOC_LITERAL(6, 9), // "goToFrame"
QT_MOC_LITERAL(16, 0), // ""
QT_MOC_LITERAL(17, 11), // "addNewFrame"
QT_MOC_LITERAL(29, 11), // "deleteFrame"
QT_MOC_LITERAL(41, 6), // "zoomIn"
QT_MOC_LITERAL(48, 7), // "zoomOut"
QT_MOC_LITERAL(56, 9), // "updateFPS"
QT_MOC_LITERAL(66, 13), // "updatePenSize"
QT_MOC_LITERAL(80, 16), // "updateEraserSize"
QT_MOC_LITERAL(97, 15), // "setStartingArea"
QT_MOC_LITERAL(113, 11), // "updateColor"
QT_MOC_LITERAL(125, 7), // "getList"
QT_MOC_LITERAL(133, 13) // "QList<QImage>"

    },
    "model\0goToFrame\0\0addNewFrame\0deleteFrame\0"
    "zoomIn\0zoomOut\0updateFPS\0updatePenSize\0"
    "updateEraserSize\0setStartingArea\0"
    "updateColor\0getList\0QList<QImage>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_model[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   80,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   83,    2, 0x0a,    3 /* Public */,
       4,    0,   84,    2, 0x0a,    4 /* Public */,
       5,    0,   85,    2, 0x0a,    5 /* Public */,
       6,    0,   86,    2, 0x0a,    6 /* Public */,
       7,    1,   87,    2, 0x0a,    7 /* Public */,
       8,    1,   90,    2, 0x0a,    9 /* Public */,
       9,    1,   93,    2, 0x0a,   11 /* Public */,
      10,    2,   96,    2, 0x0a,   13 /* Public */,
      11,    1,  101,    2, 0x0a,   16 /* Public */,
      12,    1,  104,    2, 0x0a,   18 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void, 0x80000000 | 13,    2,

       0        // eod
};

void model::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<model *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->goToFrame((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->addNewFrame(); break;
        case 2: _t->deleteFrame(); break;
        case 3: _t->zoomIn(); break;
        case 4: _t->zoomOut(); break;
        case 5: _t->updateFPS((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->updatePenSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->updateEraserSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setStartingArea((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->updateColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 10: _t->getList((*reinterpret_cast< QList<QImage>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QImage> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (model::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::goToFrame)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject model::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_model.offsetsAndSize,
    qt_meta_data_model,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_model_t
, QtPrivate::TypeAndForceComplete<model, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QColor, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QList<QImage>, std::false_type>


>,
    nullptr
} };


const QMetaObject *model::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *model::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_model.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int model::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void model::goToFrame(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

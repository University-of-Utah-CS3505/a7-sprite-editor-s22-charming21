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
    const uint offsetsAndSize[32];
    char stringdata0[186];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_model_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_model_t qt_meta_stringdata_model = {
    {
QT_MOC_LITERAL(0, 5), // "model"
QT_MOC_LITERAL(6, 9), // "goToFrame"
QT_MOC_LITERAL(16, 0), // ""
QT_MOC_LITERAL(17, 19), // "disableDeleteButton"
QT_MOC_LITERAL(37, 18), // "enableDeleteButton"
QT_MOC_LITERAL(56, 11), // "addNewFrame"
QT_MOC_LITERAL(68, 11), // "deleteFrame"
QT_MOC_LITERAL(80, 6), // "zoomIn"
QT_MOC_LITERAL(87, 7), // "zoomOut"
QT_MOC_LITERAL(95, 9), // "updateFPS"
QT_MOC_LITERAL(105, 13), // "updatePenSize"
QT_MOC_LITERAL(119, 16), // "updateEraserSize"
QT_MOC_LITERAL(136, 15), // "setStartingArea"
QT_MOC_LITERAL(152, 11), // "updateColor"
QT_MOC_LITERAL(164, 7), // "getList"
QT_MOC_LITERAL(172, 13) // "QList<QImage>"

    },
    "model\0goToFrame\0\0disableDeleteButton\0"
    "enableDeleteButton\0addNewFrame\0"
    "deleteFrame\0zoomIn\0zoomOut\0updateFPS\0"
    "updatePenSize\0updateEraserSize\0"
    "setStartingArea\0updateColor\0getList\0"
    "QList<QImage>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_model[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   92,    2, 0x06,    1 /* Public */,
       3,    0,   95,    2, 0x06,    3 /* Public */,
       4,    0,   96,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   97,    2, 0x0a,    5 /* Public */,
       6,    0,   98,    2, 0x0a,    6 /* Public */,
       7,    0,   99,    2, 0x0a,    7 /* Public */,
       8,    0,  100,    2, 0x0a,    8 /* Public */,
       9,    1,  101,    2, 0x0a,    9 /* Public */,
      10,    1,  104,    2, 0x0a,   11 /* Public */,
      11,    1,  107,    2, 0x0a,   13 /* Public */,
      12,    2,  110,    2, 0x0a,   15 /* Public */,
      13,    1,  115,    2, 0x0a,   18 /* Public */,
      14,    1,  118,    2, 0x0a,   20 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPixmap,    2,
    QMetaType::Void,
    QMetaType::Void,

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
    QMetaType::Void, 0x80000000 | 15,    2,

       0        // eod
};

void model::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<model *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->goToFrame((*reinterpret_cast< QPixmap(*)>(_a[1]))); break;
        case 1: _t->disableDeleteButton(); break;
        case 2: _t->enableDeleteButton(); break;
        case 3: _t->addNewFrame(); break;
        case 4: _t->deleteFrame(); break;
        case 5: _t->zoomIn(); break;
        case 6: _t->zoomOut(); break;
        case 7: _t->updateFPS((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->updatePenSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->updateEraserSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->setStartingArea((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->updateColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 12: _t->getList((*reinterpret_cast< QList<QImage>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 12:
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
            using _t = void (model::*)(QPixmap );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::goToFrame)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::disableDeleteButton)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::enableDeleteButton)) {
                *result = 2;
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
, QtPrivate::TypeAndForceComplete<model, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPixmap, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
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
void model::goToFrame(QPixmap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void model::disableDeleteButton()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void model::enableDeleteButton()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

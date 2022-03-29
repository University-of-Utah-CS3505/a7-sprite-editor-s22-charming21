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
    const uint offsetsAndSize[70];
    char stringdata0[445];
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
QT_MOC_LITERAL(56, 17), // "disableNextButton"
QT_MOC_LITERAL(74, 16), // "enableNextButton"
QT_MOC_LITERAL(91, 17), // "disableLastButton"
QT_MOC_LITERAL(109, 16), // "enableLastButton"
QT_MOC_LITERAL(126, 8), // "sendList"
QT_MOC_LITERAL(135, 13), // "QList<QImage>"
QT_MOC_LITERAL(149, 22), // "updateFrameNumberCombo"
QT_MOC_LITERAL(172, 22), // "updateFrameNumberLabel"
QT_MOC_LITERAL(195, 13), // "setColorLabel"
QT_MOC_LITERAL(209, 9), // "setCanvas"
QT_MOC_LITERAL(219, 11), // "addNewFrame"
QT_MOC_LITERAL(231, 14), // "insertNewFrame"
QT_MOC_LITERAL(246, 9), // "nextFrame"
QT_MOC_LITERAL(256, 9), // "lastFrame"
QT_MOC_LITERAL(266, 11), // "deleteFrame"
QT_MOC_LITERAL(278, 6), // "zoomIn"
QT_MOC_LITERAL(285, 7), // "zoomOut"
QT_MOC_LITERAL(293, 9), // "updateFPS"
QT_MOC_LITERAL(303, 13), // "updatePenSize"
QT_MOC_LITERAL(317, 16), // "updateEraserSize"
QT_MOC_LITERAL(334, 15), // "setStartingArea"
QT_MOC_LITERAL(350, 11), // "updateColor"
QT_MOC_LITERAL(362, 10), // "updateTool"
QT_MOC_LITERAL(373, 11), // "std::string"
QT_MOC_LITERAL(385, 7), // "getList"
QT_MOC_LITERAL(393, 4), // "undo"
QT_MOC_LITERAL(398, 4), // "redo"
QT_MOC_LITERAL(403, 13), // "selectedFrame"
QT_MOC_LITERAL(417, 12), // "updatePixels"
QT_MOC_LITERAL(430, 14) // "updateToolSize"

    },
    "model\0goToFrame\0\0disableDeleteButton\0"
    "enableDeleteButton\0disableNextButton\0"
    "enableNextButton\0disableLastButton\0"
    "enableLastButton\0sendList\0QList<QImage>\0"
    "updateFrameNumberCombo\0updateFrameNumberLabel\0"
    "setColorLabel\0setCanvas\0addNewFrame\0"
    "insertNewFrame\0nextFrame\0lastFrame\0"
    "deleteFrame\0zoomIn\0zoomOut\0updateFPS\0"
    "updatePenSize\0updateEraserSize\0"
    "setStartingArea\0updateColor\0updateTool\0"
    "std::string\0getList\0undo\0redo\0"
    "selectedFrame\0updatePixels\0updateToolSize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_model[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  200,    2, 0x06,    1 /* Public */,
       3,    0,  203,    2, 0x06,    3 /* Public */,
       4,    0,  204,    2, 0x06,    4 /* Public */,
       5,    0,  205,    2, 0x06,    5 /* Public */,
       6,    0,  206,    2, 0x06,    6 /* Public */,
       7,    0,  207,    2, 0x06,    7 /* Public */,
       8,    0,  208,    2, 0x06,    8 /* Public */,
       9,    1,  209,    2, 0x06,    9 /* Public */,
      11,    2,  212,    2, 0x06,   11 /* Public */,
      12,    2,  217,    2, 0x06,   14 /* Public */,
      13,    1,  222,    2, 0x06,   17 /* Public */,
      14,    1,  225,    2, 0x06,   19 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      15,    0,  228,    2, 0x0a,   21 /* Public */,
      16,    0,  229,    2, 0x0a,   22 /* Public */,
      17,    0,  230,    2, 0x0a,   23 /* Public */,
      18,    0,  231,    2, 0x0a,   24 /* Public */,
      19,    0,  232,    2, 0x0a,   25 /* Public */,
      20,    0,  233,    2, 0x0a,   26 /* Public */,
      21,    0,  234,    2, 0x0a,   27 /* Public */,
      22,    1,  235,    2, 0x0a,   28 /* Public */,
      23,    1,  238,    2, 0x0a,   30 /* Public */,
      24,    1,  241,    2, 0x0a,   32 /* Public */,
      25,    2,  244,    2, 0x0a,   34 /* Public */,
      26,    1,  249,    2, 0x0a,   37 /* Public */,
      27,    1,  252,    2, 0x0a,   39 /* Public */,
      29,    1,  255,    2, 0x0a,   41 /* Public */,
      30,    0,  258,    2, 0x0a,   43 /* Public */,
      31,    0,  259,    2, 0x0a,   44 /* Public */,
      32,    1,  260,    2, 0x0a,   45 /* Public */,
      33,    2,  263,    2, 0x0a,   47 /* Public */,
      34,    1,  268,    2, 0x0a,   50 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPixmap,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void, QMetaType::QImage,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void, 0x80000000 | 28,    2,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,

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
        case 3: _t->disableNextButton(); break;
        case 4: _t->enableNextButton(); break;
        case 5: _t->disableLastButton(); break;
        case 6: _t->enableLastButton(); break;
        case 7: _t->sendList((*reinterpret_cast< QList<QImage>(*)>(_a[1]))); break;
        case 8: _t->updateFrameNumberCombo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->updateFrameNumberLabel((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->setColorLabel((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 11: _t->setCanvas((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 12: _t->addNewFrame(); break;
        case 13: _t->insertNewFrame(); break;
        case 14: _t->nextFrame(); break;
        case 15: _t->lastFrame(); break;
        case 16: _t->deleteFrame(); break;
        case 17: _t->zoomIn(); break;
        case 18: _t->zoomOut(); break;
        case 19: _t->updateFPS((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->updatePenSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->updateEraserSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->setStartingArea((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 23: _t->updateColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 24: _t->updateTool((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 25: _t->getList((*reinterpret_cast< QList<QImage>(*)>(_a[1]))); break;
        case 26: _t->undo(); break;
        case 27: _t->redo(); break;
        case 28: _t->selectedFrame((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->updatePixels((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 30: _t->updateToolSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QImage> >(); break;
            }
            break;
        case 25:
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
        {
            using _t = void (model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::disableNextButton)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::enableNextButton)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::disableLastButton)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::enableLastButton)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (model::*)(QList<QImage> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::sendList)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (model::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::updateFrameNumberCombo)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (model::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::updateFrameNumberLabel)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (model::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::setColorLabel)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (model::*)(QImage );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::setCanvas)) {
                *result = 11;
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
, QtPrivate::TypeAndForceComplete<model, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPixmap, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QList<QImage>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QColor, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QColor, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::string, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QList<QImage>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


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
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
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

// SIGNAL 3
void model::disableNextButton()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void model::enableNextButton()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void model::disableLastButton()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void model::enableLastButton()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void model::sendList(QList<QImage> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void model::updateFrameNumberCombo(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void model::updateFrameNumberLabel(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void model::setColorLabel(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void model::setCanvas(QImage _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'view.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../SpriteEditor/view.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'view.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_View_t {
    const uint offsetsAndSize[62];
    char stringdata0[455];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_View_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_View_t qt_meta_stringdata_View = {
    {
QT_MOC_LITERAL(0, 4), // "View"
QT_MOC_LITERAL(5, 8), // "addFrame"
QT_MOC_LITERAL(14, 0), // ""
QT_MOC_LITERAL(15, 11), // "deleteFrame"
QT_MOC_LITERAL(27, 7), // "setTool"
QT_MOC_LITERAL(35, 11), // "std::string"
QT_MOC_LITERAL(47, 11), // "updateColor"
QT_MOC_LITERAL(59, 10), // "editCanvas"
QT_MOC_LITERAL(70, 14), // "editCanvasSize"
QT_MOC_LITERAL(85, 11), // "editPenSize"
QT_MOC_LITERAL(97, 12), // "displayFrame"
QT_MOC_LITERAL(110, 19), // "disableDeleteButton"
QT_MOC_LITERAL(130, 18), // "enableDeleteButton"
QT_MOC_LITERAL(149, 17), // "disableNextButton"
QT_MOC_LITERAL(167, 17), // "disableLastButton"
QT_MOC_LITERAL(185, 16), // "enableNextButton"
QT_MOC_LITERAL(202, 16), // "enableLastButton"
QT_MOC_LITERAL(219, 8), // "mouseLoc"
QT_MOC_LITERAL(228, 7), // "QPoint&"
QT_MOC_LITERAL(236, 3), // "loc"
QT_MOC_LITERAL(240, 12), // "zoomInCanvas"
QT_MOC_LITERAL(253, 13), // "zoomOutCanvas"
QT_MOC_LITERAL(267, 20), // "on_penButton_clicked"
QT_MOC_LITERAL(288, 23), // "on_eraserButton_clicked"
QT_MOC_LITERAL(312, 23), // "on_bucketButton_clicked"
QT_MOC_LITERAL(336, 22), // "on_shapeButton_clicked"
QT_MOC_LITERAL(359, 22), // "on_clickMouse_released"
QT_MOC_LITERAL(382, 15), // "pushColorButton"
QT_MOC_LITERAL(398, 22), // "pushCanvasSizeIncrease"
QT_MOC_LITERAL(421, 19), // "pushPenSizeIncrease"
QT_MOC_LITERAL(441, 13) // "displaySprite"

    },
    "View\0addFrame\0\0deleteFrame\0setTool\0"
    "std::string\0updateColor\0editCanvas\0"
    "editCanvasSize\0editPenSize\0displayFrame\0"
    "disableDeleteButton\0enableDeleteButton\0"
    "disableNextButton\0disableLastButton\0"
    "enableNextButton\0enableLastButton\0"
    "mouseLoc\0QPoint&\0loc\0zoomInCanvas\0"
    "zoomOutCanvas\0on_penButton_clicked\0"
    "on_eraserButton_clicked\0on_bucketButton_clicked\0"
    "on_shapeButton_clicked\0on_clickMouse_released\0"
    "pushColorButton\0pushCanvasSizeIncrease\0"
    "pushPenSizeIncrease\0displaySprite"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_View[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  170,    2, 0x06,    1 /* Public */,
       3,    0,  171,    2, 0x06,    2 /* Public */,
       4,    1,  172,    2, 0x06,    3 /* Public */,
       6,    1,  175,    2, 0x06,    5 /* Public */,
       7,    1,  178,    2, 0x06,    7 /* Public */,
       8,    1,  181,    2, 0x06,    9 /* Public */,
       9,    1,  184,    2, 0x06,   11 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    1,  187,    2, 0x0a,   13 /* Public */,
      11,    0,  190,    2, 0x0a,   15 /* Public */,
      12,    0,  191,    2, 0x0a,   16 /* Public */,
      13,    0,  192,    2, 0x0a,   17 /* Public */,
      14,    0,  193,    2, 0x0a,   18 /* Public */,
      15,    0,  194,    2, 0x0a,   19 /* Public */,
      16,    0,  195,    2, 0x0a,   20 /* Public */,
      17,    1,  196,    2, 0x0a,   21 /* Public */,
      20,    1,  199,    2, 0x0a,   23 /* Public */,
      21,    1,  202,    2, 0x0a,   25 /* Public */,
      22,    0,  205,    2, 0x08,   27 /* Private */,
      23,    0,  206,    2, 0x08,   28 /* Private */,
      24,    0,  207,    2, 0x08,   29 /* Private */,
      25,    0,  208,    2, 0x08,   30 /* Private */,
      26,    1,  209,    2, 0x08,   31 /* Private */,
      27,    1,  212,    2, 0x08,   33 /* Private */,
      28,    0,  215,    2, 0x08,   35 /* Private */,
      29,    0,  216,    2, 0x08,   36 /* Private */,
      30,    1,  217,    2, 0x08,   37 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QPixmap,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, QMetaType::QImage,    2,
    QMetaType::Void, QMetaType::QImage,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QImage,    2,

       0        // eod
};

void View::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<View *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->addFrame(); break;
        case 1: _t->deleteFrame(); break;
        case 2: _t->setTool((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 3: _t->updateColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 4: _t->editCanvas((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 5: _t->editCanvasSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->editPenSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->displayFrame((*reinterpret_cast< QPixmap(*)>(_a[1]))); break;
        case 8: _t->disableDeleteButton(); break;
        case 9: _t->enableDeleteButton(); break;
        case 10: _t->disableNextButton(); break;
        case 11: _t->disableLastButton(); break;
        case 12: _t->enableNextButton(); break;
        case 13: _t->enableLastButton(); break;
        case 14: _t->mouseLoc((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 15: _t->zoomInCanvas((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 16: _t->zoomOutCanvas((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 17: _t->on_penButton_clicked(); break;
        case 18: _t->on_eraserButton_clicked(); break;
        case 19: _t->on_bucketButton_clicked(); break;
        case 20: _t->on_shapeButton_clicked(); break;
        case 21: _t->on_clickMouse_released((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 22: _t->pushColorButton((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 23: _t->pushCanvasSizeIncrease(); break;
        case 24: _t->pushPenSizeIncrease(); break;
        case 25: _t->displaySprite((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::addFrame)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::deleteFrame)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (View::*)(std::string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::setTool)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (View::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::updateColor)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (View::*)(QPoint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::editCanvas)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (View::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::editCanvasSize)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (View::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::editPenSize)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject View::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_View.offsetsAndSize,
    qt_meta_data_View,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_View_t
, QtPrivate::TypeAndForceComplete<View, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::string, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QColor, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPoint, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPixmap, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPoint &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPoint &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QColor, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage, std::false_type>


>,
    nullptr
} };


const QMetaObject *View::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *View::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_View.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int View::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 26;
    }
    return _id;
}

// SIGNAL 0
void View::addFrame()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void View::deleteFrame()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void View::setTool(std::string _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void View::updateColor(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void View::editCanvas(QPoint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void View::editCanvasSize(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void View::editPenSize(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

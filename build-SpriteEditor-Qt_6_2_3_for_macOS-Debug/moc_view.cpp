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
#include <QtCore/QList>
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
    const uint offsetsAndSize[70];
    char stringdata0[524];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_View_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_View_t qt_meta_stringdata_View = {
    {
QT_MOC_LITERAL(0, 4), // "View"
QT_MOC_LITERAL(5, 7), // "setTool"
QT_MOC_LITERAL(13, 0), // ""
QT_MOC_LITERAL(14, 11), // "std::string"
QT_MOC_LITERAL(26, 11), // "updateColor"
QT_MOC_LITERAL(38, 10), // "editCanvas"
QT_MOC_LITERAL(49, 20), // "on_penButton_clicked"
QT_MOC_LITERAL(70, 23), // "on_eraserButton_clicked"
QT_MOC_LITERAL(94, 23), // "on_bucketButton_clicked"
QT_MOC_LITERAL(118, 22), // "on_shapeButton_clicked"
QT_MOC_LITERAL(141, 22), // "on_clickMouse_released"
QT_MOC_LITERAL(164, 7), // "QPoint&"
QT_MOC_LITERAL(172, 3), // "loc"
QT_MOC_LITERAL(176, 8), // "mouseLoc"
QT_MOC_LITERAL(185, 15), // "pushColorButton"
QT_MOC_LITERAL(201, 16), // "updateColorWheel"
QT_MOC_LITERAL(218, 19), // "disableDeleteButton"
QT_MOC_LITERAL(238, 18), // "enableDeleteButton"
QT_MOC_LITERAL(257, 17), // "disableNextButton"
QT_MOC_LITERAL(275, 17), // "disableLastButton"
QT_MOC_LITERAL(293, 16), // "enableNextButton"
QT_MOC_LITERAL(310, 16), // "enableLastButton"
QT_MOC_LITERAL(327, 16), // "enableUndoButton"
QT_MOC_LITERAL(344, 17), // "disableUndoButton"
QT_MOC_LITERAL(362, 16), // "enableRedoButton"
QT_MOC_LITERAL(379, 17), // "disableRedoButton"
QT_MOC_LITERAL(397, 12), // "zoomInCanvas"
QT_MOC_LITERAL(410, 13), // "zoomOutCanvas"
QT_MOC_LITERAL(424, 12), // "updateCanvas"
QT_MOC_LITERAL(437, 15), // "updateFramesBox"
QT_MOC_LITERAL(453, 17), // "updateFramesLabel"
QT_MOC_LITERAL(471, 12), // "displayFrame"
QT_MOC_LITERAL(484, 13), // "displaySprite"
QT_MOC_LITERAL(498, 11), // "saveProject"
QT_MOC_LITERAL(510, 13) // "QList<QImage>"

    },
    "View\0setTool\0\0std::string\0updateColor\0"
    "editCanvas\0on_penButton_clicked\0"
    "on_eraserButton_clicked\0on_bucketButton_clicked\0"
    "on_shapeButton_clicked\0on_clickMouse_released\0"
    "QPoint&\0loc\0mouseLoc\0pushColorButton\0"
    "updateColorWheel\0disableDeleteButton\0"
    "enableDeleteButton\0disableNextButton\0"
    "disableLastButton\0enableNextButton\0"
    "enableLastButton\0enableUndoButton\0"
    "disableUndoButton\0enableRedoButton\0"
    "disableRedoButton\0zoomInCanvas\0"
    "zoomOutCanvas\0updateCanvas\0updateFramesBox\0"
    "updateFramesLabel\0displayFrame\0"
    "displaySprite\0saveProject\0QList<QImage>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_View[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  188,    2, 0x06,    1 /* Public */,
       4,    1,  191,    2, 0x06,    3 /* Public */,
       5,    1,  194,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,  197,    2, 0x08,    7 /* Private */,
       7,    0,  198,    2, 0x08,    8 /* Private */,
       8,    0,  199,    2, 0x08,    9 /* Private */,
       9,    0,  200,    2, 0x08,   10 /* Private */,
      10,    1,  201,    2, 0x08,   11 /* Private */,
      13,    1,  204,    2, 0x08,   13 /* Private */,
      14,    1,  207,    2, 0x08,   15 /* Private */,
      15,    1,  210,    2, 0x08,   17 /* Private */,
      16,    0,  213,    2, 0x08,   19 /* Private */,
      17,    0,  214,    2, 0x08,   20 /* Private */,
      18,    0,  215,    2, 0x08,   21 /* Private */,
      19,    0,  216,    2, 0x08,   22 /* Private */,
      20,    0,  217,    2, 0x08,   23 /* Private */,
      21,    0,  218,    2, 0x08,   24 /* Private */,
      22,    0,  219,    2, 0x08,   25 /* Private */,
      23,    0,  220,    2, 0x08,   26 /* Private */,
      24,    0,  221,    2, 0x08,   27 /* Private */,
      25,    0,  222,    2, 0x08,   28 /* Private */,
      26,    1,  223,    2, 0x08,   29 /* Private */,
      27,    1,  226,    2, 0x08,   31 /* Private */,
      28,    1,  229,    2, 0x08,   33 /* Private */,
      29,    2,  232,    2, 0x08,   35 /* Private */,
      30,    2,  237,    2, 0x08,   38 /* Private */,
      31,    1,  242,    2, 0x08,   41 /* Private */,
      32,    1,  245,    2, 0x08,   43 /* Private */,
      33,    1,  248,    2, 0x08,   45 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void, QMetaType::QPoint,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QImage,    2,
    QMetaType::Void, QMetaType::QImage,    2,
    QMetaType::Void, QMetaType::QPixmap,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::QPixmap,    2,
    QMetaType::Void, QMetaType::QImage,    2,
    QMetaType::Void, 0x80000000 | 34,    2,

       0        // eod
};

void View::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<View *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setTool((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 1: _t->updateColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 2: _t->editCanvas((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 3: _t->on_penButton_clicked(); break;
        case 4: _t->on_eraserButton_clicked(); break;
        case 5: _t->on_bucketButton_clicked(); break;
        case 6: _t->on_shapeButton_clicked(); break;
        case 7: _t->on_clickMouse_released((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 8: _t->mouseLoc((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 9: _t->pushColorButton((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 10: _t->updateColorWheel((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 11: _t->disableDeleteButton(); break;
        case 12: _t->enableDeleteButton(); break;
        case 13: _t->disableNextButton(); break;
        case 14: _t->disableLastButton(); break;
        case 15: _t->enableNextButton(); break;
        case 16: _t->enableLastButton(); break;
        case 17: _t->enableUndoButton(); break;
        case 18: _t->disableUndoButton(); break;
        case 19: _t->enableRedoButton(); break;
        case 20: _t->disableRedoButton(); break;
        case 21: _t->zoomInCanvas((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 22: _t->zoomOutCanvas((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 23: _t->updateCanvas((*reinterpret_cast< QPixmap(*)>(_a[1]))); break;
        case 24: _t->updateFramesBox((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 25: _t->updateFramesLabel((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 26: _t->displayFrame((*reinterpret_cast< QPixmap(*)>(_a[1]))); break;
        case 27: _t->displaySprite((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 28: _t->saveProject((*reinterpret_cast< QList<QImage>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 28:
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
            using _t = void (View::*)(std::string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::setTool)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (View::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::updateColor)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (View::*)(QPoint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::editCanvas)) {
                *result = 2;
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
, QtPrivate::TypeAndForceComplete<View, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::string, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QColor, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPoint, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPoint &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPoint &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QColor, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QColor, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPixmap, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPixmap, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QList<QImage>, std::false_type>


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
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    }
    return _id;
}

// SIGNAL 0
void View::setTool(std::string _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void View::updateColor(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void View::editCanvas(QPoint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

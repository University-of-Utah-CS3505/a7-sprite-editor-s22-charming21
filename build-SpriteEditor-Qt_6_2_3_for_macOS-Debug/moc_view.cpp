/****************************************************************************
** Meta object code from reading C++ file 'view.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../SpriteEditor/view.h"
#include <QtGui/qtextcursor.h>
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
    const uint offsetsAndSize[92];
    char stringdata0[691];
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
QT_MOC_LITERAL(49, 4), // "save"
QT_MOC_LITERAL(54, 4), // "open"
QT_MOC_LITERAL(59, 20), // "on_penButton_clicked"
QT_MOC_LITERAL(80, 23), // "on_eraserButton_clicked"
QT_MOC_LITERAL(104, 23), // "on_bucketButton_clicked"
QT_MOC_LITERAL(128, 22), // "on_clickMouse_released"
QT_MOC_LITERAL(151, 7), // "QPoint&"
QT_MOC_LITERAL(159, 3), // "loc"
QT_MOC_LITERAL(163, 8), // "mouseLoc"
QT_MOC_LITERAL(172, 15), // "pushColorButton"
QT_MOC_LITERAL(188, 16), // "updateColorWheel"
QT_MOC_LITERAL(205, 19), // "disableDeleteButton"
QT_MOC_LITERAL(225, 18), // "enableDeleteButton"
QT_MOC_LITERAL(244, 17), // "disableNextButton"
QT_MOC_LITERAL(262, 17), // "disableLastButton"
QT_MOC_LITERAL(280, 16), // "enableNextButton"
QT_MOC_LITERAL(297, 16), // "enableLastButton"
QT_MOC_LITERAL(314, 16), // "enableUndoButton"
QT_MOC_LITERAL(331, 17), // "disableUndoButton"
QT_MOC_LITERAL(349, 16), // "enableRedoButton"
QT_MOC_LITERAL(366, 17), // "disableRedoButton"
QT_MOC_LITERAL(384, 19), // "disableSwapUpButton"
QT_MOC_LITERAL(404, 21), // "disableSwapDownButton"
QT_MOC_LITERAL(426, 18), // "enableSwapUpButton"
QT_MOC_LITERAL(445, 20), // "enableSwapDownButton"
QT_MOC_LITERAL(466, 10), // "zoomCanvas"
QT_MOC_LITERAL(477, 18), // "disableZoomButtons"
QT_MOC_LITERAL(496, 18), // "enableZoomInButton"
QT_MOC_LITERAL(515, 19), // "enableZoomOutButton"
QT_MOC_LITERAL(535, 12), // "updateCanvas"
QT_MOC_LITERAL(548, 15), // "updateFramesBox"
QT_MOC_LITERAL(564, 17), // "updateFramesLabel"
QT_MOC_LITERAL(582, 13), // "displaySprite"
QT_MOC_LITERAL(596, 18), // "enableStartButtons"
QT_MOC_LITERAL(615, 8), // "saveFile"
QT_MOC_LITERAL(624, 8), // "openFile"
QT_MOC_LITERAL(633, 27), // "on_actualSizeButton_clicked"
QT_MOC_LITERAL(661, 10), // "closeEvent"
QT_MOC_LITERAL(672, 12), // "QCloseEvent*"
QT_MOC_LITERAL(685, 5) // "event"

    },
    "View\0setTool\0\0std::string\0updateColor\0"
    "editCanvas\0save\0open\0on_penButton_clicked\0"
    "on_eraserButton_clicked\0on_bucketButton_clicked\0"
    "on_clickMouse_released\0QPoint&\0loc\0"
    "mouseLoc\0pushColorButton\0updateColorWheel\0"
    "disableDeleteButton\0enableDeleteButton\0"
    "disableNextButton\0disableLastButton\0"
    "enableNextButton\0enableLastButton\0"
    "enableUndoButton\0disableUndoButton\0"
    "enableRedoButton\0disableRedoButton\0"
    "disableSwapUpButton\0disableSwapDownButton\0"
    "enableSwapUpButton\0enableSwapDownButton\0"
    "zoomCanvas\0disableZoomButtons\0"
    "enableZoomInButton\0enableZoomOutButton\0"
    "updateCanvas\0updateFramesBox\0"
    "updateFramesLabel\0displaySprite\0"
    "enableStartButtons\0saveFile\0openFile\0"
    "on_actualSizeButton_clicked\0closeEvent\0"
    "QCloseEvent*\0event"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_View[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      39,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  248,    2, 0x06,    1 /* Public */,
       4,    1,  251,    2, 0x06,    3 /* Public */,
       5,    1,  254,    2, 0x06,    5 /* Public */,
       6,    1,  257,    2, 0x06,    7 /* Public */,
       7,    1,  260,    2, 0x06,    9 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,  263,    2, 0x08,   11 /* Private */,
       9,    0,  264,    2, 0x08,   12 /* Private */,
      10,    0,  265,    2, 0x08,   13 /* Private */,
      11,    1,  266,    2, 0x08,   14 /* Private */,
      14,    1,  269,    2, 0x08,   16 /* Private */,
      15,    1,  272,    2, 0x08,   18 /* Private */,
      16,    1,  275,    2, 0x08,   20 /* Private */,
      17,    0,  278,    2, 0x08,   22 /* Private */,
      18,    0,  279,    2, 0x08,   23 /* Private */,
      19,    0,  280,    2, 0x08,   24 /* Private */,
      20,    0,  281,    2, 0x08,   25 /* Private */,
      21,    0,  282,    2, 0x08,   26 /* Private */,
      22,    0,  283,    2, 0x08,   27 /* Private */,
      23,    0,  284,    2, 0x08,   28 /* Private */,
      24,    0,  285,    2, 0x08,   29 /* Private */,
      25,    0,  286,    2, 0x08,   30 /* Private */,
      26,    0,  287,    2, 0x08,   31 /* Private */,
      27,    0,  288,    2, 0x08,   32 /* Private */,
      28,    0,  289,    2, 0x08,   33 /* Private */,
      29,    0,  290,    2, 0x08,   34 /* Private */,
      30,    0,  291,    2, 0x08,   35 /* Private */,
      31,    3,  292,    2, 0x08,   36 /* Private */,
      32,    1,  299,    2, 0x08,   40 /* Private */,
      33,    0,  302,    2, 0x08,   42 /* Private */,
      34,    0,  303,    2, 0x08,   43 /* Private */,
      35,    1,  304,    2, 0x08,   44 /* Private */,
      36,    2,  307,    2, 0x08,   46 /* Private */,
      37,    2,  312,    2, 0x08,   49 /* Private */,
      38,    1,  317,    2, 0x08,   52 /* Private */,
      39,    0,  320,    2, 0x08,   54 /* Private */,
      40,    0,  321,    2, 0x08,   55 /* Private */,
      41,    0,  322,    2, 0x08,   56 /* Private */,
      42,    1,  323,    2, 0x08,   57 /* Private */,
      43,    1,  326,    2, 0x08,   59 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12,   13,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPixmap, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPixmap,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::QImage,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QImage,    2,
    QMetaType::Void, 0x80000000 | 44,   45,

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
        case 3: _t->save((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->open((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->on_penButton_clicked(); break;
        case 6: _t->on_eraserButton_clicked(); break;
        case 7: _t->on_bucketButton_clicked(); break;
        case 8: _t->on_clickMouse_released((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 9: _t->mouseLoc((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 10: _t->pushColorButton((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 11: _t->updateColorWheel((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 12: _t->disableDeleteButton(); break;
        case 13: _t->enableDeleteButton(); break;
        case 14: _t->disableNextButton(); break;
        case 15: _t->disableLastButton(); break;
        case 16: _t->enableNextButton(); break;
        case 17: _t->enableLastButton(); break;
        case 18: _t->enableUndoButton(); break;
        case 19: _t->disableUndoButton(); break;
        case 20: _t->enableRedoButton(); break;
        case 21: _t->disableRedoButton(); break;
        case 22: _t->disableSwapUpButton(); break;
        case 23: _t->disableSwapDownButton(); break;
        case 24: _t->enableSwapUpButton(); break;
        case 25: _t->enableSwapDownButton(); break;
        case 26: _t->zoomCanvas((*reinterpret_cast< QPixmap(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 27: _t->disableZoomButtons((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 28: _t->enableZoomInButton(); break;
        case 29: _t->enableZoomOutButton(); break;
        case 30: _t->updateCanvas((*reinterpret_cast< QPixmap(*)>(_a[1]))); break;
        case 31: _t->updateFramesBox((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 32: _t->updateFramesLabel((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 33: _t->displaySprite((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 34: _t->enableStartButtons(); break;
        case 35: _t->saveFile(); break;
        case 36: _t->openFile(); break;
        case 37: _t->on_actualSizeButton_clicked((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 38: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        default: ;
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
        {
            using _t = void (View::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::save)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (View::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::open)) {
                *result = 4;
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
, QtPrivate::TypeAndForceComplete<View, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::string, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QColor, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPoint, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPoint &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPoint &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QColor, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QColor, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPixmap, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::string, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPixmap, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QCloseEvent *, std::false_type>


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
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 39)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 39;
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

// SIGNAL 3
void View::save(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void View::open(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

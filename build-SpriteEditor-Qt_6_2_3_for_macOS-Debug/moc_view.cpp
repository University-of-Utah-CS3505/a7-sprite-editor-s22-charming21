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
    const uint offsetsAndSize[92];
    char stringdata0[710];
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
QT_MOC_LITERAL(128, 22), // "on_shapeButton_clicked"
QT_MOC_LITERAL(151, 22), // "on_clickMouse_released"
QT_MOC_LITERAL(174, 7), // "QPoint&"
QT_MOC_LITERAL(182, 3), // "loc"
QT_MOC_LITERAL(186, 8), // "mouseLoc"
QT_MOC_LITERAL(195, 15), // "pushColorButton"
QT_MOC_LITERAL(211, 16), // "updateColorWheel"
QT_MOC_LITERAL(228, 19), // "disableDeleteButton"
QT_MOC_LITERAL(248, 18), // "enableDeleteButton"
QT_MOC_LITERAL(267, 17), // "disableNextButton"
QT_MOC_LITERAL(285, 17), // "disableLastButton"
QT_MOC_LITERAL(303, 16), // "enableNextButton"
QT_MOC_LITERAL(320, 16), // "enableLastButton"
QT_MOC_LITERAL(337, 16), // "enableUndoButton"
QT_MOC_LITERAL(354, 17), // "disableUndoButton"
QT_MOC_LITERAL(372, 16), // "enableRedoButton"
QT_MOC_LITERAL(389, 17), // "disableRedoButton"
QT_MOC_LITERAL(407, 19), // "disableSwapUpButton"
QT_MOC_LITERAL(427, 21), // "disableSwapDownButton"
QT_MOC_LITERAL(449, 18), // "enableSwapUpButton"
QT_MOC_LITERAL(468, 20), // "enableSwapDownButton"
QT_MOC_LITERAL(489, 10), // "zoomCanvas"
QT_MOC_LITERAL(500, 18), // "disableZoomButtons"
QT_MOC_LITERAL(519, 18), // "enableZoomInButton"
QT_MOC_LITERAL(538, 19), // "enableZoomOutButton"
QT_MOC_LITERAL(558, 12), // "updateCanvas"
QT_MOC_LITERAL(571, 15), // "updateFramesBox"
QT_MOC_LITERAL(587, 17), // "updateFramesLabel"
QT_MOC_LITERAL(605, 13), // "displaySprite"
QT_MOC_LITERAL(619, 18), // "enableStartButtons"
QT_MOC_LITERAL(638, 11), // "saveProject"
QT_MOC_LITERAL(650, 13), // "QList<QImage>"
QT_MOC_LITERAL(664, 8), // "saveFile"
QT_MOC_LITERAL(673, 8), // "openFile"
QT_MOC_LITERAL(682, 27) // "on_actualSizeButton_clicked"

    },
    "View\0setTool\0\0std::string\0updateColor\0"
    "editCanvas\0save\0open\0on_penButton_clicked\0"
    "on_eraserButton_clicked\0on_bucketButton_clicked\0"
    "on_shapeButton_clicked\0on_clickMouse_released\0"
    "QPoint&\0loc\0mouseLoc\0pushColorButton\0"
    "updateColorWheel\0disableDeleteButton\0"
    "enableDeleteButton\0disableNextButton\0"
    "disableLastButton\0enableNextButton\0"
    "enableLastButton\0enableUndoButton\0"
    "disableUndoButton\0enableRedoButton\0"
    "disableRedoButton\0disableSwapUpButton\0"
    "disableSwapDownButton\0enableSwapUpButton\0"
    "enableSwapDownButton\0zoomCanvas\0"
    "disableZoomButtons\0enableZoomInButton\0"
    "enableZoomOutButton\0updateCanvas\0"
    "updateFramesBox\0updateFramesLabel\0"
    "displaySprite\0enableStartButtons\0"
    "saveProject\0QList<QImage>\0saveFile\0"
    "openFile\0on_actualSizeButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_View[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      40,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  254,    2, 0x06,    1 /* Public */,
       4,    1,  257,    2, 0x06,    3 /* Public */,
       5,    1,  260,    2, 0x06,    5 /* Public */,
       6,    1,  263,    2, 0x06,    7 /* Public */,
       7,    1,  266,    2, 0x06,    9 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,  269,    2, 0x08,   11 /* Private */,
       9,    0,  270,    2, 0x08,   12 /* Private */,
      10,    0,  271,    2, 0x08,   13 /* Private */,
      11,    0,  272,    2, 0x08,   14 /* Private */,
      12,    1,  273,    2, 0x08,   15 /* Private */,
      15,    1,  276,    2, 0x08,   17 /* Private */,
      16,    1,  279,    2, 0x08,   19 /* Private */,
      17,    1,  282,    2, 0x08,   21 /* Private */,
      18,    0,  285,    2, 0x08,   23 /* Private */,
      19,    0,  286,    2, 0x08,   24 /* Private */,
      20,    0,  287,    2, 0x08,   25 /* Private */,
      21,    0,  288,    2, 0x08,   26 /* Private */,
      22,    0,  289,    2, 0x08,   27 /* Private */,
      23,    0,  290,    2, 0x08,   28 /* Private */,
      24,    0,  291,    2, 0x08,   29 /* Private */,
      25,    0,  292,    2, 0x08,   30 /* Private */,
      26,    0,  293,    2, 0x08,   31 /* Private */,
      27,    0,  294,    2, 0x08,   32 /* Private */,
      28,    0,  295,    2, 0x08,   33 /* Private */,
      29,    0,  296,    2, 0x08,   34 /* Private */,
      30,    0,  297,    2, 0x08,   35 /* Private */,
      31,    0,  298,    2, 0x08,   36 /* Private */,
      32,    3,  299,    2, 0x08,   37 /* Private */,
      33,    1,  306,    2, 0x08,   41 /* Private */,
      34,    0,  309,    2, 0x08,   43 /* Private */,
      35,    0,  310,    2, 0x08,   44 /* Private */,
      36,    1,  311,    2, 0x08,   45 /* Private */,
      37,    2,  314,    2, 0x08,   47 /* Private */,
      38,    2,  319,    2, 0x08,   50 /* Private */,
      39,    1,  324,    2, 0x08,   53 /* Private */,
      40,    0,  327,    2, 0x08,   55 /* Private */,
      41,    1,  328,    2, 0x08,   56 /* Private */,
      43,    0,  331,    2, 0x08,   58 /* Private */,
      44,    0,  332,    2, 0x08,   59 /* Private */,
      45,    1,  333,    2, 0x08,   60 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 13,   14,
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
    QMetaType::Void, 0x80000000 | 42,    2,
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
        case 0: _t->setTool((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 1: _t->updateColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 2: _t->editCanvas((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 3: _t->save((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->open((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->on_penButton_clicked(); break;
        case 6: _t->on_eraserButton_clicked(); break;
        case 7: _t->on_bucketButton_clicked(); break;
        case 8: _t->on_shapeButton_clicked(); break;
        case 9: _t->on_clickMouse_released((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 10: _t->mouseLoc((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 11: _t->pushColorButton((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 12: _t->updateColorWheel((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 13: _t->disableDeleteButton(); break;
        case 14: _t->enableDeleteButton(); break;
        case 15: _t->disableNextButton(); break;
        case 16: _t->disableLastButton(); break;
        case 17: _t->enableNextButton(); break;
        case 18: _t->enableLastButton(); break;
        case 19: _t->enableUndoButton(); break;
        case 20: _t->disableUndoButton(); break;
        case 21: _t->enableRedoButton(); break;
        case 22: _t->disableRedoButton(); break;
        case 23: _t->disableSwapUpButton(); break;
        case 24: _t->disableSwapDownButton(); break;
        case 25: _t->enableSwapUpButton(); break;
        case 26: _t->enableSwapDownButton(); break;
        case 27: _t->zoomCanvas((*reinterpret_cast< QPixmap(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 28: _t->disableZoomButtons((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 29: _t->enableZoomInButton(); break;
        case 30: _t->enableZoomOutButton(); break;
        case 31: _t->updateCanvas((*reinterpret_cast< QPixmap(*)>(_a[1]))); break;
        case 32: _t->updateFramesBox((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 33: _t->updateFramesLabel((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 34: _t->displaySprite((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 35: _t->enableStartButtons(); break;
        case 36: _t->saveProject((*reinterpret_cast< QList<QImage>(*)>(_a[1]))); break;
        case 37: _t->saveFile(); break;
        case 38: _t->openFile(); break;
        case 39: _t->on_actualSizeButton_clicked((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 36:
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
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPoint &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPoint &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QColor, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QColor, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPixmap, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::string, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPixmap, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QList<QImage>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage, std::false_type>


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
        if (_id < 40)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 40)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
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

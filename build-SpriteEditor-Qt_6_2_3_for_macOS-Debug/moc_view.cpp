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
    const uint offsetsAndSize[104];
    char stringdata0[773];
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
QT_MOC_LITERAL(59, 12), // "updateCanvas"
QT_MOC_LITERAL(72, 15), // "updateFramesBox"
QT_MOC_LITERAL(88, 17), // "updateFramesLabel"
QT_MOC_LITERAL(106, 20), // "on_penButton_clicked"
QT_MOC_LITERAL(127, 23), // "on_eraserButton_clicked"
QT_MOC_LITERAL(151, 23), // "on_bucketButton_clicked"
QT_MOC_LITERAL(175, 30), // "on_shapeToolComboBox_activated"
QT_MOC_LITERAL(206, 8), // "mouseLoc"
QT_MOC_LITERAL(215, 7), // "QPoint&"
QT_MOC_LITERAL(223, 3), // "loc"
QT_MOC_LITERAL(227, 15), // "pushColorButton"
QT_MOC_LITERAL(243, 16), // "updateColorWheel"
QT_MOC_LITERAL(260, 19), // "disableDeleteButton"
QT_MOC_LITERAL(280, 18), // "enableDeleteButton"
QT_MOC_LITERAL(299, 17), // "disableNextButton"
QT_MOC_LITERAL(317, 17), // "disableLastButton"
QT_MOC_LITERAL(335, 16), // "enableNextButton"
QT_MOC_LITERAL(352, 16), // "enableLastButton"
QT_MOC_LITERAL(369, 16), // "enableUndoButton"
QT_MOC_LITERAL(386, 17), // "disableUndoButton"
QT_MOC_LITERAL(404, 16), // "enableRedoButton"
QT_MOC_LITERAL(421, 17), // "disableRedoButton"
QT_MOC_LITERAL(439, 19), // "disableSwapUpButton"
QT_MOC_LITERAL(459, 21), // "disableSwapDownButton"
QT_MOC_LITERAL(481, 18), // "enableSwapUpButton"
QT_MOC_LITERAL(500, 20), // "enableSwapDownButton"
QT_MOC_LITERAL(521, 10), // "zoomCanvas"
QT_MOC_LITERAL(532, 18), // "disableZoomButtons"
QT_MOC_LITERAL(551, 18), // "enableZoomInButton"
QT_MOC_LITERAL(570, 19), // "enableZoomOutButton"
QT_MOC_LITERAL(590, 8), // "saveFile"
QT_MOC_LITERAL(599, 8), // "openFile"
QT_MOC_LITERAL(608, 12), // "errorMessage"
QT_MOC_LITERAL(621, 8), // "errorMsg"
QT_MOC_LITERAL(630, 20), // "updateCanvasComboBox"
QT_MOC_LITERAL(651, 10), // "closeEvent"
QT_MOC_LITERAL(662, 12), // "QCloseEvent*"
QT_MOC_LITERAL(675, 5), // "event"
QT_MOC_LITERAL(681, 9), // "newWindow"
QT_MOC_LITERAL(691, 9), // "showAbout"
QT_MOC_LITERAL(701, 10), // "showHelpMe"
QT_MOC_LITERAL(712, 13), // "displaySprite"
QT_MOC_LITERAL(726, 27), // "on_actualSizeButton_clicked"
QT_MOC_LITERAL(754, 18) // "enableStartButtons"

    },
    "View\0setTool\0\0std::string\0updateColor\0"
    "editCanvas\0save\0open\0updateCanvas\0"
    "updateFramesBox\0updateFramesLabel\0"
    "on_penButton_clicked\0on_eraserButton_clicked\0"
    "on_bucketButton_clicked\0"
    "on_shapeToolComboBox_activated\0mouseLoc\0"
    "QPoint&\0loc\0pushColorButton\0"
    "updateColorWheel\0disableDeleteButton\0"
    "enableDeleteButton\0disableNextButton\0"
    "disableLastButton\0enableNextButton\0"
    "enableLastButton\0enableUndoButton\0"
    "disableUndoButton\0enableRedoButton\0"
    "disableRedoButton\0disableSwapUpButton\0"
    "disableSwapDownButton\0enableSwapUpButton\0"
    "enableSwapDownButton\0zoomCanvas\0"
    "disableZoomButtons\0enableZoomInButton\0"
    "enableZoomOutButton\0saveFile\0openFile\0"
    "errorMessage\0errorMsg\0updateCanvasComboBox\0"
    "closeEvent\0QCloseEvent*\0event\0newWindow\0"
    "showAbout\0showHelpMe\0displaySprite\0"
    "on_actualSizeButton_clicked\0"
    "enableStartButtons"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_View[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      44,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  278,    2, 0x06,    1 /* Public */,
       4,    1,  281,    2, 0x06,    3 /* Public */,
       5,    1,  284,    2, 0x06,    5 /* Public */,
       6,    1,  287,    2, 0x06,    7 /* Public */,
       7,    1,  290,    2, 0x06,    9 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    1,  293,    2, 0x08,   11 /* Private */,
       9,    2,  296,    2, 0x08,   13 /* Private */,
      10,    2,  301,    2, 0x08,   16 /* Private */,
      11,    0,  306,    2, 0x08,   19 /* Private */,
      12,    0,  307,    2, 0x08,   20 /* Private */,
      13,    0,  308,    2, 0x08,   21 /* Private */,
      14,    0,  309,    2, 0x08,   22 /* Private */,
      15,    1,  310,    2, 0x08,   23 /* Private */,
      18,    1,  313,    2, 0x08,   25 /* Private */,
      19,    1,  316,    2, 0x08,   27 /* Private */,
      20,    0,  319,    2, 0x08,   29 /* Private */,
      21,    0,  320,    2, 0x08,   30 /* Private */,
      22,    0,  321,    2, 0x08,   31 /* Private */,
      23,    0,  322,    2, 0x08,   32 /* Private */,
      24,    0,  323,    2, 0x08,   33 /* Private */,
      25,    0,  324,    2, 0x08,   34 /* Private */,
      26,    0,  325,    2, 0x08,   35 /* Private */,
      27,    0,  326,    2, 0x08,   36 /* Private */,
      28,    0,  327,    2, 0x08,   37 /* Private */,
      29,    0,  328,    2, 0x08,   38 /* Private */,
      30,    0,  329,    2, 0x08,   39 /* Private */,
      31,    0,  330,    2, 0x08,   40 /* Private */,
      32,    0,  331,    2, 0x08,   41 /* Private */,
      33,    0,  332,    2, 0x08,   42 /* Private */,
      34,    3,  333,    2, 0x08,   43 /* Private */,
      35,    1,  340,    2, 0x08,   47 /* Private */,
      36,    0,  343,    2, 0x08,   49 /* Private */,
      37,    0,  344,    2, 0x08,   50 /* Private */,
      38,    0,  345,    2, 0x08,   51 /* Private */,
      39,    0,  346,    2, 0x08,   52 /* Private */,
      40,    1,  347,    2, 0x08,   53 /* Private */,
      42,    1,  350,    2, 0x08,   55 /* Private */,
      43,    1,  353,    2, 0x08,   57 /* Private */,
      46,    0,  356,    2, 0x08,   59 /* Private */,
      47,    0,  357,    2, 0x08,   60 /* Private */,
      48,    0,  358,    2, 0x08,   61 /* Private */,
      49,    1,  359,    2, 0x08,   62 /* Private */,
      50,    1,  362,    2, 0x08,   64 /* Private */,
      51,    0,  365,    2, 0x08,   66 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QPixmap,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   41,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 44,   45,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QImage,    2,
    QMetaType::Void, QMetaType::QImage,    2,
    QMetaType::Void,

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
        case 5: _t->updateCanvas((*reinterpret_cast< QPixmap(*)>(_a[1]))); break;
        case 6: _t->updateFramesBox((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->updateFramesLabel((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->on_penButton_clicked(); break;
        case 9: _t->on_eraserButton_clicked(); break;
        case 10: _t->on_bucketButton_clicked(); break;
        case 11: _t->on_shapeToolComboBox_activated(); break;
        case 12: _t->mouseLoc((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 13: _t->pushColorButton((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 14: _t->updateColorWheel((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 15: _t->disableDeleteButton(); break;
        case 16: _t->enableDeleteButton(); break;
        case 17: _t->disableNextButton(); break;
        case 18: _t->disableLastButton(); break;
        case 19: _t->enableNextButton(); break;
        case 20: _t->enableLastButton(); break;
        case 21: _t->enableUndoButton(); break;
        case 22: _t->disableUndoButton(); break;
        case 23: _t->enableRedoButton(); break;
        case 24: _t->disableRedoButton(); break;
        case 25: _t->disableSwapUpButton(); break;
        case 26: _t->disableSwapDownButton(); break;
        case 27: _t->enableSwapUpButton(); break;
        case 28: _t->enableSwapDownButton(); break;
        case 29: _t->zoomCanvas((*reinterpret_cast< QPixmap(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 30: _t->disableZoomButtons((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 31: _t->enableZoomInButton(); break;
        case 32: _t->enableZoomOutButton(); break;
        case 33: _t->saveFile(); break;
        case 34: _t->openFile(); break;
        case 35: _t->errorMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 36: _t->updateCanvasComboBox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 37: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 38: _t->newWindow(); break;
        case 39: _t->showAbout(); break;
        case 40: _t->showHelpMe(); break;
        case 41: _t->displaySprite((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 42: _t->on_actualSizeButton_clicked((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 43: _t->enableStartButtons(); break;
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
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPixmap, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPoint &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QColor, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QColor, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPixmap, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::string, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QCloseEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


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
        if (_id < 44)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 44;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 44)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 44;
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

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
    const uint offsetsAndSize[48];
    char stringdata0[341];
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
QT_MOC_LITERAL(59, 12), // "displayFrame"
QT_MOC_LITERAL(72, 19), // "disableDeleteButton"
QT_MOC_LITERAL(92, 18), // "enableDeleteButton"
QT_MOC_LITERAL(111, 17), // "disableNextButton"
QT_MOC_LITERAL(129, 17), // "disableLastButton"
QT_MOC_LITERAL(147, 16), // "enableNextButton"
QT_MOC_LITERAL(164, 16), // "enableLastButton"
QT_MOC_LITERAL(181, 12), // "showMouseLoc"
QT_MOC_LITERAL(194, 7), // "QPoint&"
QT_MOC_LITERAL(202, 3), // "loc"
QT_MOC_LITERAL(206, 12), // "zoomInCanvas"
QT_MOC_LITERAL(219, 13), // "zoomOutCanvas"
QT_MOC_LITERAL(233, 20), // "on_penButton_clicked"
QT_MOC_LITERAL(254, 23), // "on_eraserButton_clicked"
QT_MOC_LITERAL(278, 23), // "on_bucketButton_clicked"
QT_MOC_LITERAL(302, 22), // "on_shapeButton_clicked"
QT_MOC_LITERAL(325, 15) // "pushColorButton"

    },
    "View\0addFrame\0\0deleteFrame\0setTool\0"
    "std::string\0updateColor\0displayFrame\0"
    "disableDeleteButton\0enableDeleteButton\0"
    "disableNextButton\0disableLastButton\0"
    "enableNextButton\0enableLastButton\0"
    "showMouseLoc\0QPoint&\0loc\0zoomInCanvas\0"
    "zoomOutCanvas\0on_penButton_clicked\0"
    "on_eraserButton_clicked\0on_bucketButton_clicked\0"
    "on_shapeButton_clicked\0pushColorButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_View[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  128,    2, 0x06,    1 /* Public */,
       3,    0,  129,    2, 0x06,    2 /* Public */,
       4,    1,  130,    2, 0x06,    3 /* Public */,
       6,    1,  133,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    1,  136,    2, 0x0a,    7 /* Public */,
       8,    0,  139,    2, 0x0a,    9 /* Public */,
       9,    0,  140,    2, 0x0a,   10 /* Public */,
      10,    0,  141,    2, 0x0a,   11 /* Public */,
      11,    0,  142,    2, 0x0a,   12 /* Public */,
      12,    0,  143,    2, 0x0a,   13 /* Public */,
      13,    0,  144,    2, 0x0a,   14 /* Public */,
      14,    1,  145,    2, 0x0a,   15 /* Public */,
      17,    1,  148,    2, 0x0a,   17 /* Public */,
      18,    1,  151,    2, 0x0a,   19 /* Public */,
      19,    0,  154,    2, 0x08,   21 /* Private */,
      20,    0,  155,    2, 0x08,   22 /* Private */,
      21,    0,  156,    2, 0x08,   23 /* Private */,
      22,    0,  157,    2, 0x08,   24 /* Private */,
      23,    0,  158,    2, 0x08,   25 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, QMetaType::QColor,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QPixmap,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, QMetaType::QImage,    2,
    QMetaType::Void, QMetaType::QImage,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

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
        case 4: _t->displayFrame((*reinterpret_cast< QPixmap(*)>(_a[1]))); break;
        case 5: _t->disableDeleteButton(); break;
        case 6: _t->enableDeleteButton(); break;
        case 7: _t->disableNextButton(); break;
        case 8: _t->disableLastButton(); break;
        case 9: _t->enableNextButton(); break;
        case 10: _t->enableLastButton(); break;
        case 11: _t->showMouseLoc((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 12: _t->zoomInCanvas((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 13: _t->zoomOutCanvas((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 14: _t->on_penButton_clicked(); break;
        case 15: _t->on_eraserButton_clicked(); break;
        case 16: _t->on_bucketButton_clicked(); break;
        case 17: _t->on_shapeButton_clicked(); break;
        case 18: _t->pushColorButton(); break;
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
    }
}

const QMetaObject View::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_View.offsetsAndSize,
    qt_meta_data_View,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_View_t
, QtPrivate::TypeAndForceComplete<View, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::string, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QColor, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPixmap, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPoint &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


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
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 19;
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE

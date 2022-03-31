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
    const uint offsetsAndSize[106];
    char stringdata0[678];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_model_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_model_t qt_meta_stringdata_model = {
    {
QT_MOC_LITERAL(0, 5), // "model"
QT_MOC_LITERAL(6, 19), // "disableDeleteButton"
QT_MOC_LITERAL(26, 0), // ""
QT_MOC_LITERAL(27, 18), // "enableDeleteButton"
QT_MOC_LITERAL(46, 17), // "disableNextButton"
QT_MOC_LITERAL(64, 16), // "enableNextButton"
QT_MOC_LITERAL(81, 17), // "disableLastButton"
QT_MOC_LITERAL(99, 16), // "enableLastButton"
QT_MOC_LITERAL(116, 16), // "sendCurrentColor"
QT_MOC_LITERAL(133, 8), // "sendList"
QT_MOC_LITERAL(142, 13), // "QList<QImage>"
QT_MOC_LITERAL(156, 22), // "updateFrameNumberCombo"
QT_MOC_LITERAL(179, 22), // "updateFrameNumberLabel"
QT_MOC_LITERAL(202, 13), // "setColorLabel"
QT_MOC_LITERAL(216, 10), // "enableUndo"
QT_MOC_LITERAL(227, 11), // "disableUndo"
QT_MOC_LITERAL(239, 10), // "enableRedo"
QT_MOC_LITERAL(250, 11), // "disableRedo"
QT_MOC_LITERAL(262, 9), // "setCanvas"
QT_MOC_LITERAL(272, 10), // "showSprite"
QT_MOC_LITERAL(283, 8), // "toZoomIn"
QT_MOC_LITERAL(292, 9), // "toZoomOut"
QT_MOC_LITERAL(302, 11), // "disableZoom"
QT_MOC_LITERAL(314, 11), // "std::string"
QT_MOC_LITERAL(326, 11), // "addNewFrame"
QT_MOC_LITERAL(338, 14), // "insertNewFrame"
QT_MOC_LITERAL(353, 9), // "nextFrame"
QT_MOC_LITERAL(363, 9), // "lastFrame"
QT_MOC_LITERAL(373, 11), // "deleteFrame"
QT_MOC_LITERAL(385, 6), // "zoomIn"
QT_MOC_LITERAL(392, 7), // "zoomOut"
QT_MOC_LITERAL(400, 9), // "updateFPS"
QT_MOC_LITERAL(410, 13), // "updatePenSize"
QT_MOC_LITERAL(424, 16), // "updateEraserSize"
QT_MOC_LITERAL(441, 15), // "setStartingArea"
QT_MOC_LITERAL(457, 14), // "updatePenColor"
QT_MOC_LITERAL(472, 10), // "updateTool"
QT_MOC_LITERAL(483, 7), // "getList"
QT_MOC_LITERAL(491, 17), // "checkCurrentColor"
QT_MOC_LITERAL(509, 11), // "clearCanvas"
QT_MOC_LITERAL(521, 9), // "copyFrame"
QT_MOC_LITERAL(531, 4), // "undo"
QT_MOC_LITERAL(536, 4), // "redo"
QT_MOC_LITERAL(541, 13), // "selectedFrame"
QT_MOC_LITERAL(555, 12), // "updatePixels"
QT_MOC_LITERAL(568, 14), // "updateToolSize"
QT_MOC_LITERAL(583, 12), // "drawOnCanvas"
QT_MOC_LITERAL(596, 16), // "updateCanvasSize"
QT_MOC_LITERAL(613, 15), // "previewOfFrames"
QT_MOC_LITERAL(629, 17), // "updateActualLabel"
QT_MOC_LITERAL(647, 4), // "save"
QT_MOC_LITERAL(652, 8), // "fileName"
QT_MOC_LITERAL(661, 16) // "saveFrameToStack"

    },
    "model\0disableDeleteButton\0\0"
    "enableDeleteButton\0disableNextButton\0"
    "enableNextButton\0disableLastButton\0"
    "enableLastButton\0sendCurrentColor\0"
    "sendList\0QList<QImage>\0updateFrameNumberCombo\0"
    "updateFrameNumberLabel\0setColorLabel\0"
    "enableUndo\0disableUndo\0enableRedo\0"
    "disableRedo\0setCanvas\0showSprite\0"
    "toZoomIn\0toZoomOut\0disableZoom\0"
    "std::string\0addNewFrame\0insertNewFrame\0"
    "nextFrame\0lastFrame\0deleteFrame\0zoomIn\0"
    "zoomOut\0updateFPS\0updatePenSize\0"
    "updateEraserSize\0setStartingArea\0"
    "updatePenColor\0updateTool\0getList\0"
    "checkCurrentColor\0clearCanvas\0copyFrame\0"
    "undo\0redo\0selectedFrame\0updatePixels\0"
    "updateToolSize\0drawOnCanvas\0"
    "updateCanvasSize\0previewOfFrames\0"
    "updateActualLabel\0save\0fileName\0"
    "saveFrameToStack"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_model[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      50,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      20,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  314,    2, 0x06,    1 /* Public */,
       3,    0,  315,    2, 0x06,    2 /* Public */,
       4,    0,  316,    2, 0x06,    3 /* Public */,
       5,    0,  317,    2, 0x06,    4 /* Public */,
       6,    0,  318,    2, 0x06,    5 /* Public */,
       7,    0,  319,    2, 0x06,    6 /* Public */,
       8,    1,  320,    2, 0x06,    7 /* Public */,
       9,    1,  323,    2, 0x06,    9 /* Public */,
      11,    2,  326,    2, 0x06,   11 /* Public */,
      12,    2,  331,    2, 0x06,   14 /* Public */,
      13,    1,  336,    2, 0x06,   17 /* Public */,
      14,    0,  339,    2, 0x06,   19 /* Public */,
      15,    0,  340,    2, 0x06,   20 /* Public */,
      16,    0,  341,    2, 0x06,   21 /* Public */,
      17,    0,  342,    2, 0x06,   22 /* Public */,
      18,    1,  343,    2, 0x06,   23 /* Public */,
      19,    1,  346,    2, 0x06,   25 /* Public */,
      20,    3,  349,    2, 0x06,   27 /* Public */,
      21,    3,  356,    2, 0x06,   31 /* Public */,
      22,    1,  363,    2, 0x06,   35 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      24,    0,  366,    2, 0x0a,   37 /* Public */,
      25,    0,  367,    2, 0x0a,   38 /* Public */,
      26,    0,  368,    2, 0x0a,   39 /* Public */,
      27,    0,  369,    2, 0x0a,   40 /* Public */,
      28,    0,  370,    2, 0x0a,   41 /* Public */,
      29,    0,  371,    2, 0x0a,   42 /* Public */,
      30,    0,  372,    2, 0x0a,   43 /* Public */,
      31,    1,  373,    2, 0x0a,   44 /* Public */,
      32,    1,  376,    2, 0x0a,   46 /* Public */,
      33,    1,  379,    2, 0x0a,   48 /* Public */,
      34,    2,  382,    2, 0x0a,   50 /* Public */,
      35,    1,  387,    2, 0x0a,   53 /* Public */,
      36,    1,  390,    2, 0x0a,   55 /* Public */,
      37,    1,  393,    2, 0x0a,   57 /* Public */,
      38,    1,  396,    2, 0x0a,   59 /* Public */,
      39,    0,  399,    2, 0x0a,   61 /* Public */,
      40,    0,  400,    2, 0x0a,   62 /* Public */,
      41,    0,  401,    2, 0x0a,   63 /* Public */,
      42,    0,  402,    2, 0x0a,   64 /* Public */,
      43,    1,  403,    2, 0x0a,   65 /* Public */,
      44,    4,  406,    2, 0x0a,   67 /* Public */,
      44,    3,  415,    2, 0x2a,   72 /* Public | MethodCloned */,
      44,    2,  422,    2, 0x2a,   76 /* Public | MethodCloned */,
      45,    1,  427,    2, 0x0a,   79 /* Public */,
      46,    1,  430,    2, 0x0a,   81 /* Public */,
      47,    0,  433,    2, 0x0a,   83 /* Public */,
      48,    0,  434,    2, 0x0a,   84 /* Public */,
      49,    0,  435,    2, 0x0a,   85 /* Public */,
      50,    1,  436,    2, 0x0a,   86 /* Public */,
      52,    0,  439,    2, 0x0a,   88 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPixmap,    2,
    QMetaType::Void, QMetaType::QImage,    2,
    QMetaType::Void, QMetaType::QPixmap, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, QMetaType::QPixmap, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 23,    2,

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
    QMetaType::Void, 0x80000000 | 23,    2,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   51,
    QMetaType::Void,

       0        // eod
};

void model::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<model *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->disableDeleteButton(); break;
        case 1: _t->enableDeleteButton(); break;
        case 2: _t->disableNextButton(); break;
        case 3: _t->enableNextButton(); break;
        case 4: _t->disableLastButton(); break;
        case 5: _t->enableLastButton(); break;
        case 6: _t->sendCurrentColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 7: _t->sendList((*reinterpret_cast< QList<QImage>(*)>(_a[1]))); break;
        case 8: _t->updateFrameNumberCombo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->updateFrameNumberLabel((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->setColorLabel((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 11: _t->enableUndo(); break;
        case 12: _t->disableUndo(); break;
        case 13: _t->enableRedo(); break;
        case 14: _t->disableRedo(); break;
        case 15: _t->setCanvas((*reinterpret_cast< QPixmap(*)>(_a[1]))); break;
        case 16: _t->showSprite((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 17: _t->toZoomIn((*reinterpret_cast< QPixmap(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 18: _t->toZoomOut((*reinterpret_cast< QPixmap(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 19: _t->disableZoom((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 20: _t->addNewFrame(); break;
        case 21: _t->insertNewFrame(); break;
        case 22: _t->nextFrame(); break;
        case 23: _t->lastFrame(); break;
        case 24: _t->deleteFrame(); break;
        case 25: _t->zoomIn(); break;
        case 26: _t->zoomOut(); break;
        case 27: _t->updateFPS((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->updatePenSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->updateEraserSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->setStartingArea((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 31: _t->updatePenColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 32: _t->updateTool((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 33: _t->getList((*reinterpret_cast< QList<QImage>(*)>(_a[1]))); break;
        case 34: _t->checkCurrentColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 35: _t->clearCanvas(); break;
        case 36: _t->copyFrame(); break;
        case 37: _t->undo(); break;
        case 38: _t->redo(); break;
        case 39: _t->selectedFrame((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 40: _t->updatePixels((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 41: _t->updatePixels((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 42: _t->updatePixels((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 43: _t->updateToolSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 44: _t->drawOnCanvas((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 45: _t->updateCanvasSize(); break;
        case 46: _t->previewOfFrames(); break;
        case 47: _t->updateActualLabel(); break;
        case 48: _t->save((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 49: _t->saveFrameToStack(); break;
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
        case 33:
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
            using _t = void (model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::disableDeleteButton)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::enableDeleteButton)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::disableNextButton)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::enableNextButton)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::disableLastButton)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::enableLastButton)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (model::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::sendCurrentColor)) {
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
            using _t = void (model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::enableUndo)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::disableUndo)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::enableRedo)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::disableRedo)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (model::*)(QPixmap );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::setCanvas)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (model::*)(QImage );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::showSprite)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (model::*)(QPixmap , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::toZoomIn)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (model::*)(QPixmap , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::toZoomOut)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (model::*)(std::string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::disableZoom)) {
                *result = 19;
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
, QtPrivate::TypeAndForceComplete<model, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QColor, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QList<QImage>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QColor, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPixmap, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPixmap, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPixmap, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::string, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QColor, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::string, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QList<QImage>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QColor, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPoint, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


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
        if (_id < 50)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 50;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 50)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 50;
    }
    return _id;
}

// SIGNAL 0
void model::disableDeleteButton()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void model::enableDeleteButton()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void model::disableNextButton()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void model::enableNextButton()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void model::disableLastButton()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void model::enableLastButton()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void model::sendCurrentColor(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
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
void model::enableUndo()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void model::disableUndo()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void model::enableRedo()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void model::disableRedo()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void model::setCanvas(QPixmap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void model::showSprite(QImage _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void model::toZoomIn(QPixmap _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void model::toZoomOut(QPixmap _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void model::disableZoom(std::string _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

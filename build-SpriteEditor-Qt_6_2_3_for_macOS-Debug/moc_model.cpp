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
    const uint offsetsAndSize[136];
    char stringdata0[863];
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
QT_MOC_LITERAL(116, 12), // "enableSwapUp"
QT_MOC_LITERAL(129, 14), // "enableSwapDown"
QT_MOC_LITERAL(144, 13), // "disableSwapUp"
QT_MOC_LITERAL(158, 15), // "disableSwapDown"
QT_MOC_LITERAL(174, 16), // "sendCurrentColor"
QT_MOC_LITERAL(191, 8), // "sendList"
QT_MOC_LITERAL(200, 13), // "QList<QImage>"
QT_MOC_LITERAL(214, 22), // "updateFrameNumberCombo"
QT_MOC_LITERAL(237, 22), // "updateFrameNumberLabel"
QT_MOC_LITERAL(260, 13), // "setColorLabel"
QT_MOC_LITERAL(274, 10), // "enableUndo"
QT_MOC_LITERAL(285, 11), // "disableUndo"
QT_MOC_LITERAL(297, 10), // "enableRedo"
QT_MOC_LITERAL(308, 11), // "disableRedo"
QT_MOC_LITERAL(320, 12), // "startButtons"
QT_MOC_LITERAL(333, 9), // "setCanvas"
QT_MOC_LITERAL(343, 10), // "showSprite"
QT_MOC_LITERAL(354, 8), // "toZoomIn"
QT_MOC_LITERAL(363, 9), // "toZoomOut"
QT_MOC_LITERAL(373, 11), // "disableZoom"
QT_MOC_LITERAL(385, 11), // "std::string"
QT_MOC_LITERAL(397, 12), // "enableZoomIn"
QT_MOC_LITERAL(410, 13), // "enableZoomOut"
QT_MOC_LITERAL(424, 11), // "addNewFrame"
QT_MOC_LITERAL(436, 14), // "insertNewFrame"
QT_MOC_LITERAL(451, 9), // "nextFrame"
QT_MOC_LITERAL(461, 9), // "lastFrame"
QT_MOC_LITERAL(471, 11), // "deleteFrame"
QT_MOC_LITERAL(483, 6), // "zoomIn"
QT_MOC_LITERAL(490, 7), // "zoomOut"
QT_MOC_LITERAL(498, 9), // "updateFPS"
QT_MOC_LITERAL(508, 13), // "updatePenSize"
QT_MOC_LITERAL(522, 16), // "updateEraserSize"
QT_MOC_LITERAL(539, 15), // "setStartingArea"
QT_MOC_LITERAL(555, 14), // "updatePenColor"
QT_MOC_LITERAL(570, 10), // "updateTool"
QT_MOC_LITERAL(581, 7), // "getList"
QT_MOC_LITERAL(589, 17), // "checkCurrentColor"
QT_MOC_LITERAL(607, 11), // "clearCanvas"
QT_MOC_LITERAL(619, 9), // "copyFrame"
QT_MOC_LITERAL(629, 6), // "swapUp"
QT_MOC_LITERAL(636, 8), // "swapDown"
QT_MOC_LITERAL(645, 4), // "undo"
QT_MOC_LITERAL(650, 4), // "redo"
QT_MOC_LITERAL(655, 13), // "selectedFrame"
QT_MOC_LITERAL(669, 12), // "updatePixels"
QT_MOC_LITERAL(682, 14), // "updateToolSize"
QT_MOC_LITERAL(697, 12), // "drawOnCanvas"
QT_MOC_LITERAL(710, 16), // "updateCanvasSize"
QT_MOC_LITERAL(727, 20), // "initializeCanvasSize"
QT_MOC_LITERAL(748, 19), // "initializeShapeTool"
QT_MOC_LITERAL(768, 15), // "previewOfFrames"
QT_MOC_LITERAL(784, 17), // "updateActualLabel"
QT_MOC_LITERAL(802, 4), // "save"
QT_MOC_LITERAL(807, 8), // "fileName"
QT_MOC_LITERAL(816, 4), // "open"
QT_MOC_LITERAL(821, 16), // "saveFrameToStack"
QT_MOC_LITERAL(838, 12), // "mouseRelease"
QT_MOC_LITERAL(851, 7), // "QPoint&"
QT_MOC_LITERAL(859, 3) // "loc"

    },
    "model\0disableDeleteButton\0\0"
    "enableDeleteButton\0disableNextButton\0"
    "enableNextButton\0disableLastButton\0"
    "enableLastButton\0enableSwapUp\0"
    "enableSwapDown\0disableSwapUp\0"
    "disableSwapDown\0sendCurrentColor\0"
    "sendList\0QList<QImage>\0updateFrameNumberCombo\0"
    "updateFrameNumberLabel\0setColorLabel\0"
    "enableUndo\0disableUndo\0enableRedo\0"
    "disableRedo\0startButtons\0setCanvas\0"
    "showSprite\0toZoomIn\0toZoomOut\0disableZoom\0"
    "std::string\0enableZoomIn\0enableZoomOut\0"
    "addNewFrame\0insertNewFrame\0nextFrame\0"
    "lastFrame\0deleteFrame\0zoomIn\0zoomOut\0"
    "updateFPS\0updatePenSize\0updateEraserSize\0"
    "setStartingArea\0updatePenColor\0"
    "updateTool\0getList\0checkCurrentColor\0"
    "clearCanvas\0copyFrame\0swapUp\0swapDown\0"
    "undo\0redo\0selectedFrame\0updatePixels\0"
    "updateToolSize\0drawOnCanvas\0"
    "updateCanvasSize\0initializeCanvasSize\0"
    "initializeShapeTool\0previewOfFrames\0"
    "updateActualLabel\0save\0fileName\0open\0"
    "saveFrameToStack\0mouseRelease\0QPoint&\0"
    "loc"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_model[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      63,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      27,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  392,    2, 0x06,    1 /* Public */,
       3,    0,  393,    2, 0x06,    2 /* Public */,
       4,    0,  394,    2, 0x06,    3 /* Public */,
       5,    0,  395,    2, 0x06,    4 /* Public */,
       6,    0,  396,    2, 0x06,    5 /* Public */,
       7,    0,  397,    2, 0x06,    6 /* Public */,
       8,    0,  398,    2, 0x06,    7 /* Public */,
       9,    0,  399,    2, 0x06,    8 /* Public */,
      10,    0,  400,    2, 0x06,    9 /* Public */,
      11,    0,  401,    2, 0x06,   10 /* Public */,
      12,    1,  402,    2, 0x06,   11 /* Public */,
      13,    1,  405,    2, 0x06,   13 /* Public */,
      15,    2,  408,    2, 0x06,   15 /* Public */,
      16,    2,  413,    2, 0x06,   18 /* Public */,
      17,    1,  418,    2, 0x06,   21 /* Public */,
      18,    0,  421,    2, 0x06,   23 /* Public */,
      19,    0,  422,    2, 0x06,   24 /* Public */,
      20,    0,  423,    2, 0x06,   25 /* Public */,
      21,    0,  424,    2, 0x06,   26 /* Public */,
      22,    0,  425,    2, 0x06,   27 /* Public */,
      23,    1,  426,    2, 0x06,   28 /* Public */,
      24,    1,  429,    2, 0x06,   30 /* Public */,
      25,    3,  432,    2, 0x06,   32 /* Public */,
      26,    3,  439,    2, 0x06,   36 /* Public */,
      27,    1,  446,    2, 0x06,   40 /* Public */,
      29,    0,  449,    2, 0x06,   42 /* Public */,
      30,    0,  450,    2, 0x06,   43 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      31,    0,  451,    2, 0x0a,   44 /* Public */,
      32,    0,  452,    2, 0x0a,   45 /* Public */,
      33,    0,  453,    2, 0x0a,   46 /* Public */,
      34,    0,  454,    2, 0x0a,   47 /* Public */,
      35,    0,  455,    2, 0x0a,   48 /* Public */,
      36,    0,  456,    2, 0x0a,   49 /* Public */,
      37,    0,  457,    2, 0x0a,   50 /* Public */,
      38,    1,  458,    2, 0x0a,   51 /* Public */,
      39,    1,  461,    2, 0x0a,   53 /* Public */,
      40,    1,  464,    2, 0x0a,   55 /* Public */,
      41,    2,  467,    2, 0x0a,   57 /* Public */,
      42,    1,  472,    2, 0x0a,   60 /* Public */,
      43,    1,  475,    2, 0x0a,   62 /* Public */,
      44,    1,  478,    2, 0x0a,   64 /* Public */,
      45,    1,  481,    2, 0x0a,   66 /* Public */,
      46,    0,  484,    2, 0x0a,   68 /* Public */,
      47,    0,  485,    2, 0x0a,   69 /* Public */,
      48,    0,  486,    2, 0x0a,   70 /* Public */,
      49,    0,  487,    2, 0x0a,   71 /* Public */,
      50,    0,  488,    2, 0x0a,   72 /* Public */,
      51,    0,  489,    2, 0x0a,   73 /* Public */,
      52,    1,  490,    2, 0x0a,   74 /* Public */,
      53,    4,  493,    2, 0x0a,   76 /* Public */,
      53,    3,  502,    2, 0x2a,   81 /* Public | MethodCloned */,
      53,    2,  509,    2, 0x2a,   85 /* Public | MethodCloned */,
      54,    1,  514,    2, 0x0a,   88 /* Public */,
      55,    1,  517,    2, 0x0a,   90 /* Public */,
      56,    0,  520,    2, 0x0a,   92 /* Public */,
      57,    1,  521,    2, 0x0a,   93 /* Public */,
      58,    1,  524,    2, 0x0a,   95 /* Public */,
      59,    0,  527,    2, 0x0a,   97 /* Public */,
      60,    0,  528,    2, 0x0a,   98 /* Public */,
      61,    1,  529,    2, 0x0a,   99 /* Public */,
      63,    1,  532,    2, 0x0a,  101 /* Public */,
      64,    0,  535,    2, 0x0a,  103 /* Public */,
      65,    1,  536,    2, 0x0a,  104 /* Public */,

 // signals: parameters
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
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPixmap,    2,
    QMetaType::Void, QMetaType::QImage,    2,
    QMetaType::Void, QMetaType::QPixmap, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, QMetaType::QPixmap, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 28,    2,
    QMetaType::Void,
    QMetaType::Void,

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
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void,
    QMetaType::Void,
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
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   62,
    QMetaType::Void, QMetaType::QString,   62,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 66,   67,

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
        case 6: _t->enableSwapUp(); break;
        case 7: _t->enableSwapDown(); break;
        case 8: _t->disableSwapUp(); break;
        case 9: _t->disableSwapDown(); break;
        case 10: _t->sendCurrentColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 11: _t->sendList((*reinterpret_cast< QList<QImage>(*)>(_a[1]))); break;
        case 12: _t->updateFrameNumberCombo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->updateFrameNumberLabel((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: _t->setColorLabel((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 15: _t->enableUndo(); break;
        case 16: _t->disableUndo(); break;
        case 17: _t->enableRedo(); break;
        case 18: _t->disableRedo(); break;
        case 19: _t->startButtons(); break;
        case 20: _t->setCanvas((*reinterpret_cast< QPixmap(*)>(_a[1]))); break;
        case 21: _t->showSprite((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 22: _t->toZoomIn((*reinterpret_cast< QPixmap(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 23: _t->toZoomOut((*reinterpret_cast< QPixmap(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 24: _t->disableZoom((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 25: _t->enableZoomIn(); break;
        case 26: _t->enableZoomOut(); break;
        case 27: _t->addNewFrame(); break;
        case 28: _t->insertNewFrame(); break;
        case 29: _t->nextFrame(); break;
        case 30: _t->lastFrame(); break;
        case 31: _t->deleteFrame(); break;
        case 32: _t->zoomIn(); break;
        case 33: _t->zoomOut(); break;
        case 34: _t->updateFPS((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 35: _t->updatePenSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->updateEraserSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 37: _t->setStartingArea((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 38: _t->updatePenColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 39: _t->updateTool((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 40: _t->getList((*reinterpret_cast< QList<QImage>(*)>(_a[1]))); break;
        case 41: _t->checkCurrentColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 42: _t->clearCanvas(); break;
        case 43: _t->copyFrame(); break;
        case 44: _t->swapUp(); break;
        case 45: _t->swapDown(); break;
        case 46: _t->undo(); break;
        case 47: _t->redo(); break;
        case 48: _t->selectedFrame((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 49: _t->updatePixels((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 50: _t->updatePixels((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 51: _t->updatePixels((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 52: _t->updateToolSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 53: _t->drawOnCanvas((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 54: _t->updateCanvasSize(); break;
        case 55: _t->initializeCanvasSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 56: _t->initializeShapeTool((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 57: _t->previewOfFrames(); break;
        case 58: _t->updateActualLabel(); break;
        case 59: _t->save((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 60: _t->open((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 61: _t->saveFrameToStack(); break;
        case 62: _t->mouseRelease((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QImage> >(); break;
            }
            break;
        case 40:
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
            using _t = void (model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::enableSwapUp)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::enableSwapDown)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::disableSwapUp)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::disableSwapDown)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (model::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::sendCurrentColor)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (model::*)(QList<QImage> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::sendList)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (model::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::updateFrameNumberCombo)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (model::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::updateFrameNumberLabel)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (model::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::setColorLabel)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::enableUndo)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::disableUndo)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::enableRedo)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::disableRedo)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::startButtons)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (model::*)(QPixmap );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::setCanvas)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (model::*)(QImage );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::showSprite)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (model::*)(QPixmap , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::toZoomIn)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (model::*)(QPixmap , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::toZoomOut)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (model::*)(std::string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::disableZoom)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::enableZoomIn)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::enableZoomOut)) {
                *result = 26;
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
, QtPrivate::TypeAndForceComplete<model, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QColor, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QList<QImage>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QColor, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPixmap, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPixmap, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPixmap, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::string, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QColor, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::string, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QList<QImage>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QColor, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPoint, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPoint &, std::false_type>


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
        if (_id < 63)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 63;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 63)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 63;
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
void model::enableSwapUp()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void model::enableSwapDown()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void model::disableSwapUp()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void model::disableSwapDown()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void model::sendCurrentColor(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void model::sendList(QList<QImage> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void model::updateFrameNumberCombo(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void model::updateFrameNumberLabel(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void model::setColorLabel(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void model::enableUndo()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void model::disableUndo()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void model::enableRedo()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void model::disableRedo()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void model::startButtons()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void model::setCanvas(QPixmap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void model::showSprite(QImage _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void model::toZoomIn(QPixmap _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void model::toZoomOut(QPixmap _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void model::disableZoom(std::string _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void model::enableZoomIn()
{
    QMetaObject::activate(this, &staticMetaObject, 25, nullptr);
}

// SIGNAL 26
void model::enableZoomOut()
{
    QMetaObject::activate(this, &staticMetaObject, 26, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

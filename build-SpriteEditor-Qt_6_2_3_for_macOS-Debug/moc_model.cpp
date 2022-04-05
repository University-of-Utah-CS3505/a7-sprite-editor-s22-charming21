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
    const uint offsetsAndSize[140];
    char stringdata0[923];
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
QT_MOC_LITERAL(174, 10), // "enableUndo"
QT_MOC_LITERAL(185, 11), // "disableUndo"
QT_MOC_LITERAL(197, 10), // "enableRedo"
QT_MOC_LITERAL(208, 11), // "disableRedo"
QT_MOC_LITERAL(220, 12), // "enableZoomIn"
QT_MOC_LITERAL(233, 13), // "enableZoomOut"
QT_MOC_LITERAL(247, 11), // "disableZoom"
QT_MOC_LITERAL(259, 11), // "std::string"
QT_MOC_LITERAL(271, 18), // "enableStartButtons"
QT_MOC_LITERAL(290, 22), // "updateFrameNumberCombo"
QT_MOC_LITERAL(313, 22), // "updateFrameNumberLabel"
QT_MOC_LITERAL(336, 20), // "updateCanvasComboBox"
QT_MOC_LITERAL(357, 13), // "setColorLabel"
QT_MOC_LITERAL(371, 16), // "sendCurrentColor"
QT_MOC_LITERAL(388, 8), // "sendList"
QT_MOC_LITERAL(397, 13), // "QList<QImage>"
QT_MOC_LITERAL(411, 12), // "errorMessage"
QT_MOC_LITERAL(424, 8), // "errorMsg"
QT_MOC_LITERAL(433, 9), // "setCanvas"
QT_MOC_LITERAL(443, 11), // "editPenSize"
QT_MOC_LITERAL(455, 10), // "showSprite"
QT_MOC_LITERAL(466, 8), // "toZoomIn"
QT_MOC_LITERAL(475, 9), // "toZoomOut"
QT_MOC_LITERAL(485, 20), // "initializeCanvasSize"
QT_MOC_LITERAL(506, 19), // "initializeShapeTool"
QT_MOC_LITERAL(526, 6), // "zoomIn"
QT_MOC_LITERAL(533, 7), // "zoomOut"
QT_MOC_LITERAL(541, 4), // "undo"
QT_MOC_LITERAL(546, 4), // "redo"
QT_MOC_LITERAL(551, 16), // "saveFrameToStack"
QT_MOC_LITERAL(568, 12), // "drawOnCanvas"
QT_MOC_LITERAL(581, 12), // "updatePixels"
QT_MOC_LITERAL(594, 14), // "updateToolSize"
QT_MOC_LITERAL(609, 13), // "updatePenSize"
QT_MOC_LITERAL(623, 16), // "updateEraserSize"
QT_MOC_LITERAL(640, 15), // "updateShapeSize"
QT_MOC_LITERAL(656, 14), // "updatePenColor"
QT_MOC_LITERAL(671, 17), // "checkCurrentColor"
QT_MOC_LITERAL(689, 10), // "updateTool"
QT_MOC_LITERAL(700, 12), // "mouseRelease"
QT_MOC_LITERAL(713, 7), // "QPoint&"
QT_MOC_LITERAL(721, 3), // "loc"
QT_MOC_LITERAL(725, 17), // "addFrameAfterCurr"
QT_MOC_LITERAL(743, 18), // "addFrameBeforeCurr"
QT_MOC_LITERAL(762, 9), // "nextFrame"
QT_MOC_LITERAL(772, 13), // "previousFrame"
QT_MOC_LITERAL(786, 6), // "swapUp"
QT_MOC_LITERAL(793, 8), // "swapDown"
QT_MOC_LITERAL(802, 9), // "copyFrame"
QT_MOC_LITERAL(812, 11), // "clearCanvas"
QT_MOC_LITERAL(824, 11), // "deleteFrame"
QT_MOC_LITERAL(836, 13), // "selectedFrame"
QT_MOC_LITERAL(850, 9), // "updateFPS"
QT_MOC_LITERAL(860, 15), // "previewOfFrames"
QT_MOC_LITERAL(876, 17), // "updateActualLabel"
QT_MOC_LITERAL(894, 10), // "saveToFile"
QT_MOC_LITERAL(905, 8), // "fileName"
QT_MOC_LITERAL(914, 8) // "openFile"

    },
    "model\0disableDeleteButton\0\0"
    "enableDeleteButton\0disableNextButton\0"
    "enableNextButton\0disableLastButton\0"
    "enableLastButton\0enableSwapUp\0"
    "enableSwapDown\0disableSwapUp\0"
    "disableSwapDown\0enableUndo\0disableUndo\0"
    "enableRedo\0disableRedo\0enableZoomIn\0"
    "enableZoomOut\0disableZoom\0std::string\0"
    "enableStartButtons\0updateFrameNumberCombo\0"
    "updateFrameNumberLabel\0updateCanvasComboBox\0"
    "setColorLabel\0sendCurrentColor\0sendList\0"
    "QList<QImage>\0errorMessage\0errorMsg\0"
    "setCanvas\0editPenSize\0showSprite\0"
    "toZoomIn\0toZoomOut\0initializeCanvasSize\0"
    "initializeShapeTool\0zoomIn\0zoomOut\0"
    "undo\0redo\0saveFrameToStack\0drawOnCanvas\0"
    "updatePixels\0updateToolSize\0updatePenSize\0"
    "updateEraserSize\0updateShapeSize\0"
    "updatePenColor\0checkCurrentColor\0"
    "updateTool\0mouseRelease\0QPoint&\0loc\0"
    "addFrameAfterCurr\0addFrameBeforeCurr\0"
    "nextFrame\0previousFrame\0swapUp\0swapDown\0"
    "copyFrame\0clearCanvas\0deleteFrame\0"
    "selectedFrame\0updateFPS\0previewOfFrames\0"
    "updateActualLabel\0saveToFile\0fileName\0"
    "openFile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_model[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      62,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      30,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  386,    2, 0x06,    1 /* Public */,
       3,    0,  387,    2, 0x06,    2 /* Public */,
       4,    0,  388,    2, 0x06,    3 /* Public */,
       5,    0,  389,    2, 0x06,    4 /* Public */,
       6,    0,  390,    2, 0x06,    5 /* Public */,
       7,    0,  391,    2, 0x06,    6 /* Public */,
       8,    0,  392,    2, 0x06,    7 /* Public */,
       9,    0,  393,    2, 0x06,    8 /* Public */,
      10,    0,  394,    2, 0x06,    9 /* Public */,
      11,    0,  395,    2, 0x06,   10 /* Public */,
      12,    0,  396,    2, 0x06,   11 /* Public */,
      13,    0,  397,    2, 0x06,   12 /* Public */,
      14,    0,  398,    2, 0x06,   13 /* Public */,
      15,    0,  399,    2, 0x06,   14 /* Public */,
      16,    0,  400,    2, 0x06,   15 /* Public */,
      17,    0,  401,    2, 0x06,   16 /* Public */,
      18,    1,  402,    2, 0x06,   17 /* Public */,
      20,    0,  405,    2, 0x06,   19 /* Public */,
      21,    2,  406,    2, 0x06,   20 /* Public */,
      22,    2,  411,    2, 0x06,   23 /* Public */,
      23,    1,  416,    2, 0x06,   26 /* Public */,
      24,    1,  419,    2, 0x06,   28 /* Public */,
      25,    1,  422,    2, 0x06,   30 /* Public */,
      26,    1,  425,    2, 0x06,   32 /* Public */,
      28,    1,  428,    2, 0x06,   34 /* Public */,
      30,    1,  431,    2, 0x06,   36 /* Public */,
      31,    1,  434,    2, 0x06,   38 /* Public */,
      32,    1,  437,    2, 0x06,   40 /* Public */,
      33,    3,  440,    2, 0x06,   42 /* Public */,
      34,    3,  447,    2, 0x06,   46 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      35,    1,  454,    2, 0x0a,   50 /* Public */,
      36,    1,  457,    2, 0x0a,   52 /* Public */,
      37,    0,  460,    2, 0x0a,   54 /* Public */,
      38,    0,  461,    2, 0x0a,   55 /* Public */,
      39,    0,  462,    2, 0x0a,   56 /* Public */,
      40,    0,  463,    2, 0x0a,   57 /* Public */,
      41,    0,  464,    2, 0x0a,   58 /* Public */,
      42,    1,  465,    2, 0x0a,   59 /* Public */,
      43,    2,  468,    2, 0x0a,   61 /* Public */,
      44,    1,  473,    2, 0x0a,   64 /* Public */,
      45,    1,  476,    2, 0x0a,   66 /* Public */,
      46,    1,  479,    2, 0x0a,   68 /* Public */,
      47,    1,  482,    2, 0x0a,   70 /* Public */,
      48,    1,  485,    2, 0x0a,   72 /* Public */,
      49,    0,  488,    2, 0x0a,   74 /* Public */,
      50,    1,  489,    2, 0x0a,   75 /* Public */,
      51,    1,  492,    2, 0x0a,   77 /* Public */,
      54,    0,  495,    2, 0x0a,   79 /* Public */,
      55,    0,  496,    2, 0x0a,   80 /* Public */,
      56,    0,  497,    2, 0x0a,   81 /* Public */,
      57,    0,  498,    2, 0x0a,   82 /* Public */,
      58,    0,  499,    2, 0x0a,   83 /* Public */,
      59,    0,  500,    2, 0x0a,   84 /* Public */,
      60,    0,  501,    2, 0x0a,   85 /* Public */,
      61,    0,  502,    2, 0x0a,   86 /* Public */,
      62,    0,  503,    2, 0x0a,   87 /* Public */,
      63,    1,  504,    2, 0x0a,   88 /* Public */,
      64,    1,  507,    2, 0x0a,   90 /* Public */,
      65,    0,  510,    2, 0x0a,   92 /* Public */,
      66,    0,  511,    2, 0x0a,   93 /* Public */,
      67,    1,  512,    2, 0x0a,   94 /* Public */,
      69,    1,  515,    2, 0x0a,   96 /* Public */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void, 0x80000000 | 27,    2,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void, QMetaType::QPixmap,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QImage,    2,
    QMetaType::Void, QMetaType::QPixmap, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, QMetaType::QPixmap, QMetaType::Int, QMetaType::Int,    2,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,    2,
    QMetaType::Void, 0x80000000 | 52,   53,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   68,
    QMetaType::Void, QMetaType::QString,   68,

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
        case 10: _t->enableUndo(); break;
        case 11: _t->disableUndo(); break;
        case 12: _t->enableRedo(); break;
        case 13: _t->disableRedo(); break;
        case 14: _t->enableZoomIn(); break;
        case 15: _t->enableZoomOut(); break;
        case 16: _t->disableZoom((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 17: _t->enableStartButtons(); break;
        case 18: _t->updateFrameNumberCombo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 19: _t->updateFrameNumberLabel((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 20: _t->updateCanvasComboBox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->setColorLabel((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 22: _t->sendCurrentColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 23: _t->sendList((*reinterpret_cast< QList<QImage>(*)>(_a[1]))); break;
        case 24: _t->errorMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 25: _t->setCanvas((*reinterpret_cast< QPixmap(*)>(_a[1]))); break;
        case 26: _t->editPenSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->showSprite((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 28: _t->toZoomIn((*reinterpret_cast< QPixmap(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 29: _t->toZoomOut((*reinterpret_cast< QPixmap(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 30: _t->initializeCanvasSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: _t->initializeShapeTool((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->zoomIn(); break;
        case 33: _t->zoomOut(); break;
        case 34: _t->undo(); break;
        case 35: _t->redo(); break;
        case 36: _t->saveFrameToStack(); break;
        case 37: _t->drawOnCanvas((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 38: _t->updatePixels((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 39: _t->updateToolSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 40: _t->updatePenSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 41: _t->updateEraserSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 42: _t->updateShapeSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 43: _t->updatePenColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 44: _t->checkCurrentColor(); break;
        case 45: _t->updateTool((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 46: _t->mouseRelease((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 47: _t->addFrameAfterCurr(); break;
        case 48: _t->addFrameBeforeCurr(); break;
        case 49: _t->nextFrame(); break;
        case 50: _t->previousFrame(); break;
        case 51: _t->swapUp(); break;
        case 52: _t->swapDown(); break;
        case 53: _t->copyFrame(); break;
        case 54: _t->clearCanvas(); break;
        case 55: _t->deleteFrame(); break;
        case 56: _t->selectedFrame((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 57: _t->updateFPS((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 58: _t->previewOfFrames(); break;
        case 59: _t->updateActualLabel(); break;
        case 60: _t->saveToFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 61: _t->openFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 23:
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
            using _t = void (model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::enableUndo)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::disableUndo)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::enableRedo)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::disableRedo)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::enableZoomIn)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::enableZoomOut)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (model::*)(std::string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::disableZoom)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::enableStartButtons)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (model::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::updateFrameNumberCombo)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (model::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::updateFrameNumberLabel)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (model::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::updateCanvasComboBox)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (model::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::setColorLabel)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (model::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::sendCurrentColor)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (model::*)(QList<QImage> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::sendList)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (model::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::errorMessage)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (model::*)(QPixmap );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::setCanvas)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (model::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::editPenSize)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (model::*)(QImage );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::showSprite)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (model::*)(QPixmap , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::toZoomIn)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (model::*)(QPixmap , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::toZoomOut)) {
                *result = 29;
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
, QtPrivate::TypeAndForceComplete<model, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::string, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QColor, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QColor, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QList<QImage>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPixmap, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPixmap, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPixmap, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPoint, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QColor, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::string, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPoint &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>


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
        if (_id < 62)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 62;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 62)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 62;
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
void model::enableUndo()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void model::disableUndo()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void model::enableRedo()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void model::disableRedo()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void model::enableZoomIn()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void model::enableZoomOut()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void model::disableZoom(std::string _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void model::enableStartButtons()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void model::updateFrameNumberCombo(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void model::updateFrameNumberLabel(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void model::updateCanvasComboBox(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void model::setColorLabel(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void model::sendCurrentColor(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void model::sendList(QList<QImage> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void model::errorMessage(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void model::setCanvas(QPixmap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void model::editPenSize(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void model::showSprite(QImage _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void model::toZoomIn(QPixmap _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void model::toZoomOut(QPixmap _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

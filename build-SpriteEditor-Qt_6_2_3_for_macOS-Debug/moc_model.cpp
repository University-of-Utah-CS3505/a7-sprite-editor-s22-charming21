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
    const uint offsetsAndSize[104];
    char stringdata0[666];
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
QT_MOC_LITERAL(126, 16), // "sendCurrentColor"
QT_MOC_LITERAL(143, 8), // "sendList"
QT_MOC_LITERAL(152, 13), // "QList<QImage>"
QT_MOC_LITERAL(166, 22), // "updateFrameNumberCombo"
QT_MOC_LITERAL(189, 22), // "updateFrameNumberLabel"
QT_MOC_LITERAL(212, 13), // "setColorLabel"
QT_MOC_LITERAL(226, 10), // "enableUndo"
QT_MOC_LITERAL(237, 11), // "disableUndo"
QT_MOC_LITERAL(249, 10), // "enableRedo"
QT_MOC_LITERAL(260, 11), // "disableRedo"
QT_MOC_LITERAL(272, 9), // "setCanvas"
QT_MOC_LITERAL(282, 10), // "showSprite"
QT_MOC_LITERAL(293, 8), // "toZoomIn"
QT_MOC_LITERAL(302, 9), // "toZoomOut"
QT_MOC_LITERAL(312, 11), // "disableZoom"
QT_MOC_LITERAL(324, 11), // "std::string"
QT_MOC_LITERAL(336, 11), // "addNewFrame"
QT_MOC_LITERAL(348, 14), // "insertNewFrame"
QT_MOC_LITERAL(363, 9), // "nextFrame"
QT_MOC_LITERAL(373, 9), // "lastFrame"
QT_MOC_LITERAL(383, 11), // "deleteFrame"
QT_MOC_LITERAL(395, 6), // "zoomIn"
QT_MOC_LITERAL(402, 7), // "zoomOut"
QT_MOC_LITERAL(410, 9), // "updateFPS"
QT_MOC_LITERAL(420, 13), // "updatePenSize"
QT_MOC_LITERAL(434, 16), // "updateEraserSize"
QT_MOC_LITERAL(451, 15), // "setStartingArea"
QT_MOC_LITERAL(467, 14), // "updatePenColor"
QT_MOC_LITERAL(482, 10), // "updateTool"
QT_MOC_LITERAL(493, 7), // "getList"
QT_MOC_LITERAL(501, 17), // "checkCurrentColor"
QT_MOC_LITERAL(519, 4), // "undo"
QT_MOC_LITERAL(524, 4), // "redo"
QT_MOC_LITERAL(529, 13), // "selectedFrame"
QT_MOC_LITERAL(543, 12), // "updatePixels"
QT_MOC_LITERAL(556, 14), // "updateToolSize"
QT_MOC_LITERAL(571, 12), // "drawOnCanvas"
QT_MOC_LITERAL(584, 16), // "updateCanvasSize"
QT_MOC_LITERAL(601, 15), // "previewOfFrames"
QT_MOC_LITERAL(617, 17), // "updateActualLabel"
QT_MOC_LITERAL(635, 4), // "save"
QT_MOC_LITERAL(640, 8), // "fileName"
QT_MOC_LITERAL(649, 16) // "saveFrameToStack"

    },
    "model\0goToFrame\0\0disableDeleteButton\0"
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
    "checkCurrentColor\0undo\0redo\0selectedFrame\0"
    "updatePixels\0updateToolSize\0drawOnCanvas\0"
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
      49,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      21,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  308,    2, 0x06,    1 /* Public */,
       3,    0,  311,    2, 0x06,    3 /* Public */,
       4,    0,  312,    2, 0x06,    4 /* Public */,
       5,    0,  313,    2, 0x06,    5 /* Public */,
       6,    0,  314,    2, 0x06,    6 /* Public */,
       7,    0,  315,    2, 0x06,    7 /* Public */,
       8,    0,  316,    2, 0x06,    8 /* Public */,
       9,    1,  317,    2, 0x06,    9 /* Public */,
      10,    1,  320,    2, 0x06,   11 /* Public */,
      12,    2,  323,    2, 0x06,   13 /* Public */,
      13,    2,  328,    2, 0x06,   16 /* Public */,
      14,    1,  333,    2, 0x06,   19 /* Public */,
      15,    0,  336,    2, 0x06,   21 /* Public */,
      16,    0,  337,    2, 0x06,   22 /* Public */,
      17,    0,  338,    2, 0x06,   23 /* Public */,
      18,    0,  339,    2, 0x06,   24 /* Public */,
      19,    1,  340,    2, 0x06,   25 /* Public */,
      20,    1,  343,    2, 0x06,   27 /* Public */,
      21,    3,  346,    2, 0x06,   29 /* Public */,
      22,    3,  353,    2, 0x06,   33 /* Public */,
      23,    1,  360,    2, 0x06,   37 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      25,    0,  363,    2, 0x0a,   39 /* Public */,
      26,    0,  364,    2, 0x0a,   40 /* Public */,
      27,    0,  365,    2, 0x0a,   41 /* Public */,
      28,    0,  366,    2, 0x0a,   42 /* Public */,
      29,    0,  367,    2, 0x0a,   43 /* Public */,
      30,    0,  368,    2, 0x0a,   44 /* Public */,
      31,    0,  369,    2, 0x0a,   45 /* Public */,
      32,    1,  370,    2, 0x0a,   46 /* Public */,
      33,    1,  373,    2, 0x0a,   48 /* Public */,
      34,    1,  376,    2, 0x0a,   50 /* Public */,
      35,    2,  379,    2, 0x0a,   52 /* Public */,
      36,    1,  384,    2, 0x0a,   55 /* Public */,
      37,    1,  387,    2, 0x0a,   57 /* Public */,
      38,    1,  390,    2, 0x0a,   59 /* Public */,
      39,    1,  393,    2, 0x0a,   61 /* Public */,
      40,    0,  396,    2, 0x0a,   63 /* Public */,
      41,    0,  397,    2, 0x0a,   64 /* Public */,
      42,    1,  398,    2, 0x0a,   65 /* Public */,
      43,    4,  401,    2, 0x0a,   67 /* Public */,
      43,    3,  410,    2, 0x2a,   72 /* Public | MethodCloned */,
      43,    2,  417,    2, 0x2a,   76 /* Public | MethodCloned */,
      44,    1,  422,    2, 0x0a,   79 /* Public */,
      45,    1,  425,    2, 0x0a,   81 /* Public */,
      46,    0,  428,    2, 0x0a,   83 /* Public */,
      47,    0,  429,    2, 0x0a,   84 /* Public */,
      48,    0,  430,    2, 0x0a,   85 /* Public */,
      49,    1,  431,    2, 0x0a,   86 /* Public */,
      51,    0,  434,    2, 0x0a,   88 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPixmap,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void, 0x80000000 | 11,    2,
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
    QMetaType::Void, 0x80000000 | 24,    2,

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
    QMetaType::Void, 0x80000000 | 24,    2,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void, QMetaType::QColor,    2,
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
    QMetaType::Void, QMetaType::QString,   50,
    QMetaType::Void,

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
        case 7: _t->sendCurrentColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 8: _t->sendList((*reinterpret_cast< QList<QImage>(*)>(_a[1]))); break;
        case 9: _t->updateFrameNumberCombo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->updateFrameNumberLabel((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->setColorLabel((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 12: _t->enableUndo(); break;
        case 13: _t->disableUndo(); break;
        case 14: _t->enableRedo(); break;
        case 15: _t->disableRedo(); break;
        case 16: _t->setCanvas((*reinterpret_cast< QPixmap(*)>(_a[1]))); break;
        case 17: _t->showSprite((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 18: _t->toZoomIn((*reinterpret_cast< QPixmap(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 19: _t->toZoomOut((*reinterpret_cast< QPixmap(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 20: _t->disableZoom((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 21: _t->addNewFrame(); break;
        case 22: _t->insertNewFrame(); break;
        case 23: _t->nextFrame(); break;
        case 24: _t->lastFrame(); break;
        case 25: _t->deleteFrame(); break;
        case 26: _t->zoomIn(); break;
        case 27: _t->zoomOut(); break;
        case 28: _t->updateFPS((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->updatePenSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->updateEraserSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: _t->setStartingArea((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 32: _t->updatePenColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 33: _t->updateTool((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 34: _t->getList((*reinterpret_cast< QList<QImage>(*)>(_a[1]))); break;
        case 35: _t->checkCurrentColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 36: _t->undo(); break;
        case 37: _t->redo(); break;
        case 38: _t->selectedFrame((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 39: _t->updatePixels((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 40: _t->updatePixels((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 41: _t->updatePixels((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 42: _t->updateToolSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 43: _t->drawOnCanvas((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 44: _t->updateCanvasSize(); break;
        case 45: _t->previewOfFrames(); break;
        case 46: _t->updateActualLabel(); break;
        case 47: _t->save((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 48: _t->saveFrameToStack(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QImage> >(); break;
            }
            break;
        case 34:
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
            using _t = void (model::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::sendCurrentColor)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (model::*)(QList<QImage> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::sendList)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (model::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::updateFrameNumberCombo)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (model::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::updateFrameNumberLabel)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (model::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::setColorLabel)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::enableUndo)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::disableUndo)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::enableRedo)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::disableRedo)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (model::*)(QPixmap );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::setCanvas)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (model::*)(QImage );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::showSprite)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (model::*)(QPixmap , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::toZoomIn)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (model::*)(QPixmap , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::toZoomOut)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (model::*)(std::string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&model::disableZoom)) {
                *result = 20;
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
, QtPrivate::TypeAndForceComplete<model, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPixmap, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QColor, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QList<QImage>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QColor, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPixmap, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPixmap, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPixmap, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::string, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QColor, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::string, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QList<QImage>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QColor, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPoint, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


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
        if (_id < 49)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 49;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 49)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 49;
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
void model::sendCurrentColor(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void model::sendList(QList<QImage> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void model::updateFrameNumberCombo(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void model::updateFrameNumberLabel(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void model::setColorLabel(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void model::enableUndo()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void model::disableUndo()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void model::enableRedo()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void model::disableRedo()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void model::setCanvas(QPixmap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void model::showSprite(QImage _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void model::toZoomIn(QPixmap _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void model::toZoomOut(QPixmap _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void model::disableZoom(std::string _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

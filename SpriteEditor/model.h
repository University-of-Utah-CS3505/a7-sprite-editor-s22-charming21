#ifndef MODEL_H
#define MODEL_H

#include <QObject>
#include <QColor>
#include <QPen>
#include <QImage>
/**
 * Team: BAGJL
 * Students: Brittney Morales, Adriana Salazar, Xing Liu, Jinwen Lei, Gonzalo Tello
 * Course: CS3505
 * Date: April 5, 2022
 *
 **/
#include <QPainter>
#include <QPixmap>
#include <iostream>
#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonArray>
#include <QFile>
#include <QStack>

enum class SelectedTool{
    SC_Pen,
    SC_Eraser,
    SC_Bucket,
    SC_ShapeCreator
};

enum class ShapeCreator{
    SC_Line,
    SC_Ciecle,
    SC_Rectangle
};

class model : public QObject
{
    Q_OBJECT
public:
    explicit model(QObject *parent = nullptr);

private:

    QStack<QList<QImage>> undoStack;
    QStack<QList<QImage>> redoStack;
    SelectedTool currentTool;
    ShapeCreator currentShape;
    QList<QImage> frames;
    QList<QPoint> startEndLoc;
    QColor penColor;
    int canvasSize;
    int zoomSize;
    int zoomIndex;
    int framesPerSec;
    int currentFrame;
    int penSize;
    int eraserSize;
    int shapeSize;
    double ratio;
    int numOfPixels;
    int pixelLength;
    int currentIndex; //index counter to access frames.
    bool isChanged = false; // checks if there were any changes on the frame.

    //Canvas Set up
    void initializeFrame();

    //Tools
    void updatePixelsByPen(int, int);
    void updatePixelsByEraser(int, int);
    void updatePixelsByBucketFiller(int, int);
    void updatePixelsByShapeCreator(int, int, int, int);

    //Save and Open
    void saveFramesInfoToJson(QJsonObject& jsonObj) const;
    void read(QString fileName);
    bool loadInfoFromJson(QJsonObject& jsonObj, QList<QColor>& colorList, int& imageSize, int& zoom, SelectedTool & tool, int& numberOfFrames) const;
    void addPixelColorToFrames(int numberOfFrames, QList<QColor> colorList);



signals:

    // Enable and Disable
    void disableDeleteButton();
    void enableDeleteButton();
    void disableNextButton();
    void enableNextButton();
    void disableLastButton();
    void enableLastButton();
    void enableSwapUp();
    void enableSwapDown();
    void disableSwapUp();
    void disableSwapDown();
    void enableUndo();
    void disableUndo();
    void enableRedo();
    void disableRedo();
    void enableZoomIn();
    void enableZoomOut();
    void disableZoom(std::string);
    void enableStartButtons();

    //Updates and sets
    void updateFrameNumberCombo(int, int);
    void updateFrameNumberLabel(int, int);
    void updateCanvasComboBox(int);
    void setColorLabel(QColor);


    //Sends
    void sendCurrentColor(QColor);
    void sendList(QList<QImage>);
    void errorMessage(QString errorMsg);


    //Call to action
    void setCanvas(QPixmap);
    void editPenSize(int);
    void showSprite(QImage);
    void toZoomIn(QPixmap, int, int);
    void toZoomOut(QPixmap, int, int);



public slots:

    //Canvas Set up
    void initializeCanvasSize(int);
    void initializeShapeTool(int);

    //Tools
    void zoomIn();
    void zoomOut();
    void undo();
    void redo();
    void saveFrameToStack();

    void drawOnCanvas(QPoint);
    void updatePixels(int,int);
    void updateToolSize(int);
    void updatePenSize(int);
    void updateEraserSize(int);
    void updateShapeSize(int);

    void updatePenColor(QColor);
    void checkCurrentColor();

    void updateTool(std::string);
    void mouseRelease(QPoint& loc);

    //Frames
    void addFrameAfterCurr();
    void addFrameBeforeCurr();
    void nextFrame();
    void previousFrame();
    void swapUp();
    void swapDown();
    void copyFrame();
    void clearCanvas();
    void deleteFrame();
    void selectedFrame(int);

    // Preview
    void updateFPS(int);
    void previewOfFrames();
    void updateActualLabel();

    //Save and Open
    void saveToFile(QString fileName);
    void openFile(QString fileName);



};

#endif // MODEL_H

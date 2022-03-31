#ifndef MODEL_H
#define MODEL_H

#include <QObject>
#include <QColor>
#include <QPen>
#include <QImage>
#include <QPainter>
#include <QPixmap>
#include <iostream>
#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonArray>
#include <QFile>

//We add enum (jinwen)
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
    SelectedTool currentTool;
    ShapeCreator currentShape;
    QList<QImage> frames;
    QColor penColor;
    int canvasHeight;
    int canvasWidth;
    int zoomHeight; //for the zoom
    int zoomWidth; //for the zoom
    int framesPerSec;
    int currentFrame;
    int penSize;
    int eraserSize;
    double ratio;

    //
    int numOfPixels;
    int pixelLength;

    int currentIndex; //index counter to access frames.

    void updatePixelsByPen(int, int);
    void updatePixelsByEraser(int, int);
    void updatePixelsByBucketFiller(int, int);
    void updatePixelsByShapeCreator(int, int, int, int);

    QList<std::tuple<int,int>> FindPixelsWithTheSameColorInBound(QList<std::tuple<int,int>>, QColor, int, int);

//    //gon
//    void updatePixelsByPen2(int, int, int, int);
//    //
    //Save file
    void save(); //do i need to make it const? (Brittney)
    //Read/Open file //still in testing phase, need to work on.
    void read(QString fileName);

signals:
    //Add methods (emit)
    void goToFrame(QPixmap);

    // control buttons
    void disableDeleteButton();
    void enableDeleteButton();
    void disableNextButton();
    void enableNextButton();
    void disableLastButton();
    void enableLastButton();
    void sendCurrentColor(QColor);
    void sendList(QList<QImage>);
    void updateFrameNumberCombo(int, int);
    void updateFrameNumberLabel(int, int);
    void setColorLabel(QColor);


    void setCanvas(QPixmap);

    void showSprite(QImage);

public slots:
    void addNewFrame();
    void insertNewFrame();
    void nextFrame();
    void lastFrame();
    void deleteFrame();
    void zoomIn();
    void zoomOut();
    void updateFPS(int);
    void updatePenSize(int);
    void updateEraserSize(int);
    void setStartingArea(int, int);
    void updatePenColor(QColor);
    void updateTool(std::string); //Change parameter from Selected tools to std::string
    void getList(QList<QImage>);
    void checkCurrentColor(QColor);
    //Added
    void undo(); //need change parameters?
    void redo(); //need change parameters?
    void selectedFrame(int);
    void updatePixels(int,int,int = 0,int = 0);
//    //gon
//    void updatePixels2(int, int, int , int);
//    //
    void updateToolSize(int);
    void drawOnCanvas(QPoint);
    void updateCanvasSize();

    //Preview
    void previewOfFrames();
    void updateActualLabel();

    //calls method to save frames as json
    void savebtn(bool);
};

#endif // MODEL_H

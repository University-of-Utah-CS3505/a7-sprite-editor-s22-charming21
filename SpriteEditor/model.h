#ifndef MODEL_H
#define MODEL_H

#include <QObject>
#include <QColor>

//We add enum (jinwen)
enum class SelectedTool{
    Tool_Pen,
    Tool_Eraser,
    Tool_Bucket,
    Tool_ShapeCreator
};

class model : public QObject
{
    Q_OBJECT
public:
    explicit model(QObject *parent = nullptr);

private:
    SelectedTool currentTool;
    QList<QImage> frames;
    QColor penColor;
    int canvasHeight;
    int canvasWidth;
    int framesPerSec;
    int currentFrame;
    int penSize;
    int eraserSize;

signals:
    //Add methods (emit)

private slots:
    void addNewFrame();
    void deleteFrame();
    void zoomIn();
    void zoomOut();
    void updateFPS(int);
    void updatePenSize(int);
    void updateEraserSize(int);
    void setStartingArea(int, int);
    void updateColor(QColor);
    //void updateTool(Selected Tool);
    void getList(QList<QImage>);


};

#endif // MODEL_H

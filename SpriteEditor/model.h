#ifndef MODEL_H
#define MODEL_H

#include <QObject>
#include <QColor>

//We add enum (jinwen)

class model : public QObject
{
    Q_OBJECT
public:
    explicit model(QObject *parent = nullptr);

private:
    QList<QImage> frames;
    int canvasHeight;
    int canvasWidth;
    int framesPerSec;
    int currentFrame;
    QColor penColor;
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

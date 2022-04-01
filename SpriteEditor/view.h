#ifndef VIEW_H
#define VIEW_H

#include <QMainWindow>
#include <QColorDialog>
#include <QPixmap>
#include "model.h"

QT_BEGIN_NAMESPACE
namespace Ui { class View; }
QT_END_NAMESPACE

class View : public QMainWindow
{
    Q_OBJECT

public:
    View(model& m,QWidget *parent = nullptr);
    ~View();


signals:
    void setTool(std::string);
    void updateColor(QColor);
    void editCanvas(QPoint);
    void save(QString);
    void open(QString);


private slots:
    //Tool selection
    void on_penButton_clicked();
    void on_eraserButton_clicked();
    void on_bucketButton_clicked();
    void on_shapeButton_clicked();

    //Mouse events
    void on_clickMouse_released(QPoint& loc);
    void mouseLoc(QPoint& loc);

    //Update Color
    void pushColorButton(QColor);
    void updateColorWheel(QColor);


    //Control buttons
    void disableDeleteButton();
    void enableDeleteButton();
    void disableNextButton();
    void disableLastButton();
    void enableNextButton();
    void enableLastButton();

    //Zoom
    void zoomInCanvas(QImage);
    void zoomOutCanvas(QImage);

    //Canvas
    void updateCanvas(QPixmap);

    //Frame
    void updateFramesBox(int, int);
    void updateFramesLabel(int, int);
    void displayFrame(QPixmap);
    void displaySprite(QImage);


     //Save and Load
     void saveProject(QList<QImage>);
     void saveFile();
     void openFile();


private:
    Ui::View *ui;

};
#endif // VIEW_H

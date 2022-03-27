#ifndef VIEW_H
#define VIEW_H

#include <QMainWindow>
#include <QColorDialog>
#include "model.h"
#include <QPixmap>

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
    void addFrame();
    void deleteFrame();
    void setTool(std::string);
    void updateColor(QColor);

public slots:
    void displayFrame(QPixmap);

    // control buttons
    void disableDeleteButton();
    void enableDeleteButton();
    void disableNextButton();
    void disableLastButton();
    void enableNextButton();
    void enableLastButton();

    void showMouseLoc(QPoint& loc);
    void zoomInCanvas(QImage);
    void zoomOutCanvas(QImage);

private slots:
    //Added to set the tool
    void on_penButton_clicked();
    void on_eraserButton_clicked();
    void on_bucketButton_clicked();
    void on_shapeButton_clicked();

private:
    Ui::View *ui;
    void updateCanvas();
    void updateFramesBoxAndLabel(int, int);
    void updatePreview();
    void updateSelectionTool();
    void updateColorWheel(QColor);
    void updateToolSize(int);
    void saveProject(QList<QImage>);

private slots:
    void pushColorButton();
};
#endif // VIEW_H

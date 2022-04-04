#ifndef VIEW_H
#define VIEW_H

#include <QMainWindow>
#include <QColorDialog>
#include <QWidget>
#include <QPixmap>
#include <QIcon>
#include "model.h"
#include "canvaspreview.h"
#include <QCloseEvent>

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

    //Mouse events

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
    void enableUndoButton();
    void disableUndoButton();
    void enableRedoButton();
    void disableRedoButton();
    void disableSwapUpButton();
    void disableSwapDownButton();
    void enableSwapUpButton();
    void enableSwapDownButton();

    //Zoom
    void zoomCanvas(QPixmap, int, int);
    void disableZoomButtons(std::string);
    void enableZoomInButton();
    void enableZoomOutButton();

    //Canvas
    void updateCanvas(QPixmap);

    //Frame
    void updateFramesBox(int, int);
    void updateFramesLabel(int, int);
    void displaySprite(QImage);
    void enableStartButtons();

     //Save and Load
     void saveFile();
     void openFile();

     void on_actualSizeButton_clicked(QImage);

     //check before closing
     void closeEvent(QCloseEvent *event);

private:
    Ui::View *ui;

    int canvasLabelSize;
    void initCanvasSizesComboBox();
    void initShapeToolComboBox();
    canvaspreview canvasPreview;

    //second Window
    model secWindowModel;
    View *secWindow;
};
#endif // VIEW_H

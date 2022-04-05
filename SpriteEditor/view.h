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
    //Canvas
    void updateCanvas(QPixmap);

    //Frame
    void updateFramesBox(int, int);
    void updateFramesLabel(int, int);

    //Tool selection
    void on_penButton_clicked();
    void on_eraserButton_clicked();
    void on_bucketButton_clicked();
    void on_shapeToolComboBox_activated();

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


    //Save and Load
    void saveFile();
    void openFile();
    void errorMessage(QString errorMsg);
    void updateCanvasComboBox(int);

    //Check before closing
    void closeEvent(QCloseEvent *event);

    //New Window open
    void newWindow();

    //about menu open
    void showAbout();

    //help me menu open
    void showHelpMe();

    //Preview
    void displaySprite(QImage);
    void on_actualSizeButton_clicked(QImage);
    void enableStartButtons();

private:
    Ui::View *ui;
    int canvasLabelSize;
    canvaspreview canvasPreview;

//    //Second Window
    model secWindowModel;
    View *secWindow;

    //Helper Methods
    void createNewWindow();
    void initCanvasSizesComboBox();
    void initShapeToolComboBox();
};
#endif // VIEW_H

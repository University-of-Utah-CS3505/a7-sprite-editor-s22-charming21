#ifndef VIEW_H
#define VIEW_H

#include <QMainWindow>
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
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *releaseEvent);

signals:
    void addFrame();
    void setTool(std::string);

public slots:

private slots:
    //Added to set the tool
    void on_penButton_clicked();
    void on_eraserButton_clicked();
    void on_bucketButton_clicked();
    void on_shapeButton_clicked();

private:
    Ui::View *ui;
    void updateCanvas();
    void updateFramesBox(int);
    void updatePreview();
    void updateSelectionTool(); //No Need, done in ui?
    void updateColorWheel(QColor);
    void updateToolSize(int); //No Need, done in ui?
    void saveProject(QList<QImage>);
};
#endif // VIEW_H

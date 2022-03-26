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
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *releaseEvent);

signals:
    void addFrame();
    void deleteFrame();
    void updateColor(QColor);


public slots:
    void displayFrame(QPixmap);

    void disableDeleteButton();
    void enableDeleteButton();

private:
    Ui::View *ui;

private slots:
    void pushColorButton();
};
#endif // VIEW_H

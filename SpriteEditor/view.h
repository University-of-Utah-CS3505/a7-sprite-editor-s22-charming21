#ifndef VIEW_H
#define VIEW_H

#include <QMainWindow>
#include <QColorDialog>
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
    void updateColor(QColor);

public slots:

private:
    Ui::View *ui;

private slots:
    void pushColorButton();
};
#endif // VIEW_H

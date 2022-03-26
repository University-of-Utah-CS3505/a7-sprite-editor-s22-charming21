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

signals:
    void addFrame();

public slots:

private:
    Ui::View *ui;
};
#endif // VIEW_H

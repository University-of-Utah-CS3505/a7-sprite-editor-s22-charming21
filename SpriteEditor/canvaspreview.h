#ifndef CANVASPREVIEW_H
#define CANVASPREVIEW_H

#include <QDialog>

namespace Ui {
class canvaspreview;
}

class canvaspreview : public QDialog
{
    Q_OBJECT

public:
    explicit canvaspreview(QWidget *parent = nullptr);
    ~canvaspreview();
    void updateCanvas(QImage&);


private:
    Ui::canvaspreview *ui;
};

#endif // CANVASPREVIEW_H

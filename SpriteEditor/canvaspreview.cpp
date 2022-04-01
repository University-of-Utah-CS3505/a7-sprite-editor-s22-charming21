#include "canvaspreview.h"
#include "ui_canvaspreview.h"

canvaspreview::canvaspreview(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::canvaspreview)
{
    ui->setupUi(this);
}

canvaspreview::~canvaspreview()
{
    delete ui;
}

void canvaspreview::updateCanvas(QImage & currentFrame)
{
    ui->label->setPixmap(QPixmap::fromImage(currentFrame).scaled(ui->label->width(),
                                                                            ui->label->height()));
}

#include "view.h"
#include "ui_view.h"
#include <QtWidgets>
#include <QPixmap>

#include <iostream> // delete later

View::View(model& model, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::View)
{

    ui->setupUi(this);
    disableDeleteButton();

    //connections

    // add new frame
    connect(ui->addFrameButton, &QPushButton::clicked, &model, &model::addNewFrame);

    // delete frame
    connect(ui->deleteFrameButton, &QPushButton::clicked, &model, &model::deleteFrame);

    // disable and enable delete button
    connect(&model, &model::disableDeleteButton, this, &View::disableDeleteButton);
    connect(&model, &model::enableDeleteButton, this, &View::enableDeleteButton);

    // change frame
    connect(&model, &model::goToFrame, this, &View::displayFrame);

    //ColorUpdate
    connect(ui->colorButton, &QPushButton::clicked, this, &View::pushColorButton);
    connect(this, &View::updateColor, &model, &model::updateColor);

}

View::~View()
{
    delete ui;
}
//methods for view

void View::mousePressEvent(QMouseEvent *pressEvent){
    if(pressEvent->button() == Qt::LeftButton){
        //std::cout << "x: " << pressEvent->pos().x() << " y: " <<  pressEvent->pos().y() << std::endl;
        // pressEvent->event->pos(); returns a QPoint
        //send to model
    }
}


void View::mouseMoveEvent(QMouseEvent *moveEvent){
    if(moveEvent->button() == Qt::LeftButton){
        //constantly send to model for drawing
    }
}

void View::mouseReleaseEvent(QMouseEvent *releaseEvent){
    if(releaseEvent->button() == Qt::LeftButton){
        //std::cout << "Mouse Released x: " << releaseEvent->pos().x() << " y: "  << releaseEvent->pos().y() << std::endl;
        //send to model
    }
}

void View::pushColorButton(){

    bool ok;
    QColor color = QColorDialog::getColor(Qt::blue, this);
    if(&ok)
    {
        //this code was for testing purposes
        //ui->colorButton->setStyleSheet(QString("QPushButton{background-color:" + color.name(QColor::HexArgb) + ";}"));
        emit updateColor(color);
    }
    //TODO : testing
    //1. when we click cancel , changes color to black by default
}

void View::displayFrame(QPixmap map){
    ui->canvasLabel->setPixmap(map);
}

void View::disableDeleteButton(){
    ui->deleteFrameButton->setEnabled(false);
}

void View::enableDeleteButton(){
    ui->deleteFrameButton->setEnabled(true);
}



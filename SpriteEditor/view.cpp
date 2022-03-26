#include "view.h"
#include "ui_view.h"
#include <QtWidgets>

#include <iostream> // delete later

View::View(model& model, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::View)
{
    ui->setupUi(this);

    //connections
    connect(ui->addFrameButton, &QPushButton::clicked, &model, &model::addNewFrame);
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



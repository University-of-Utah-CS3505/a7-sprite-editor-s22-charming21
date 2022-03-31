#include "canvas.h"
#include <iostream>

Canvas::Canvas(QWidget* parent) :QLabel(parent)
{

}

void Canvas::mouseMoveEvent(QMouseEvent *moveEvent)
{
    QPoint mouseLoc = moveEvent->pos();
    if (mouseLoc.x() <= this->size().width() && mouseLoc.y() <= this->size().height()
        && mouseLoc.x() > 0 && mouseLoc.y() > 0){
       //emit sendMouseMoveLoc(mouseLoc);
        emit sendMouseLoc(mouseLoc);

    }

}

void Canvas::mousePressEvent(QMouseEvent *pressEvent){
    QPoint mouseLoc = pressEvent->pos();

    if(pressEvent->button() == Qt::LeftButton){
        emit sendMouseLoc(mouseLoc);
    }
}

void Canvas::mouseReleaseEvent(QMouseEvent *releaseEvent){
    emit saveToStack();
    if(releaseEvent->button() == Qt::LeftButton){
        //std::cout << "Mouse Released x: " << releaseEvent->pos().x() << " y: "  << releaseEvent->pos().y() << std::endl;
        //send to model
    }
}



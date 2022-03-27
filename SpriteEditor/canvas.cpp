#include "canvas.h"

Canvas::Canvas(QWidget* parent) :QLabel(parent)
{

}

void Canvas::mouseMoveEvent(QMouseEvent *moveEvent)
{
    QPoint mouseLoc = moveEvent->pos();
    if (mouseLoc.x() <= this->size().width() && mouseLoc.y() <= this->size().height()
        && mouseLoc.x() > 0 && mouseLoc.y() > 0){
       emit sendMouseLoc(mouseLoc);
    }

}

void Canvas::mousePressEvent(QMouseEvent *pressEvent){
    if(pressEvent->button() == Qt::LeftButton){
        //std::cout << "x: " << pressEvent->pos().x() << " y: " <<  pressEvent->pos().y() << std::endl;
        // pressEvent->event->pos(); returns a QPoint
        //send to model
    }
}

void Canvas::mouseReleaseEvent(QMouseEvent *releaseEvent){
    if(releaseEvent->button() == Qt::LeftButton){
        //std::cout << "Mouse Released x: " << releaseEvent->pos().x() << " y: "  << releaseEvent->pos().y() << std::endl;
        //send to model
    }
}

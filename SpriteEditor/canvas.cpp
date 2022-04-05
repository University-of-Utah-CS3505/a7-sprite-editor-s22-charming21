#include "canvas.h"
/**
 * @brief Canvas::Canvas
 * Constructor that inherits from the base class QLabel
 * @param parent
 *
 */
Canvas::Canvas(QWidget* parent) :QLabel(parent)
{
}


/**
 * @brief Canvas::mouseMoveEvent
 * Keeps track of all mouse drag movements within the Canvas QLabel.  Then emits a
 * signal with the a QPoint mouse coordinate in x,y axis. It is bounded by the actual
 * size of the label.
 * @param moveEvent
 */
void Canvas::mouseMoveEvent(QMouseEvent *moveEvent)
{
    QPoint mouseLoc = moveEvent->pos();
    if (mouseLoc.x() <= this->size().width() && mouseLoc.y() <= this->size().height()
        && mouseLoc.x() > 0 && mouseLoc.y() > 0){
        emit sendMouseLoc(mouseLoc);
    }
}

/**
 * @brief Canvas::mousePressEvent
 * Keeps track of all mouse clicks within the Qlabel Canvas.  Then emits a signal with the
 * coordinates in QPoint x,y axis.
 * @param pressEvent
 */
void Canvas::mousePressEvent(QMouseEvent *pressEvent){
    QPoint mouseLoc = pressEvent->pos();
    if(pressEvent->button() == Qt::LeftButton){
        emit sendMouseLoc(mouseLoc);
    }
}

/**
 * @brief Canvas::mouseReleaseEvent
 * Keeps track of all mouse click release within the Qlabel Canvas.  Then emits two signals, one
 * for an update to the view on when to update the stack for undo/redo.  Two, to give the mouse
 * coordinate to when it was released.
 * @param releaseEvent
 */
void Canvas::mouseReleaseEvent(QMouseEvent *releaseEvent){
    QPoint mouseRleaseLoc = releaseEvent->pos();
    if(releaseEvent->button() == Qt::LeftButton){
        emit saveToStack();
        emit sendMouseReleaseLoc(mouseRleaseLoc);
    }
}



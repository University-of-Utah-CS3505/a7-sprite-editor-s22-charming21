/**
 * Team: BAGJL
 * Students: Brittney Morales, Adriana Salazar, Xing Liu, Jinwen Lei, Gonzalo Tello
 * Course: CS3505
 * Date: April 5, 2022
 *
 **/

#ifndef CANVAS_H
#define CANVAS_H

#include <QLabel>
#include <QObject>
#include <QWidget>
#include <QMouseEvent>
#include <QPixmap>



/**
 * @brief The Canvas class
 * The canvas class represents the drawing area for the sprite editor. Aligned in the middle
 * of the screen.  It's made from a QLabel and is used for all mouse events that our system
 * requires.  Such as mouse click, move, and release event.  That willi help keeping track of
 * the coordinates of the user's mouse location.  All data is send to the view for display.
 */
class Canvas : public QLabel
{
    Q_OBJECT
public:
    Canvas(QWidget *parent = 0);

protected:
    void mouseMoveEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *event) ;
    void mouseReleaseEvent(QMouseEvent *releaseEvent) ;

signals:
    void sendMouseLoc(QPoint&);
    void saveToStack();
    void sendMouseReleaseLoc(QPoint&);
};

#endif // CANVAS_H

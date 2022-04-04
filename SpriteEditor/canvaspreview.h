/**
 * Team: BAGJL
 * Students: Brittney Morales, Adriana Salazar, Xing Liu, Jinwen Lei, Gonzalo Tello
 * Course: CS3505
 * Date: April 5, 2022
 *
 **/

#ifndef CANVASPREVIEW_H
#define CANVASPREVIEW_H

#include <QDialog>
#include "ui_canvaspreview.h"

namespace Ui {
class canvaspreview;
}

/**
 * @brief The canvaspreview class
 * Class that is used to show the user the actual size preview of the sprite drawing.  Since
 * our system allows for difference sizes of sprite. This is a helpful feature to allow the user
 * to check it's actual size based on px by px.
 */
class canvaspreview : public QDialog
{
    Q_OBJECT

public:
    explicit canvaspreview(QWidget *parent = nullptr);
    ~canvaspreview();

public slots:
    void updateCanvas(QImage&);

private slots:
    void on_pushButton_clicked();

private:
    Ui::canvaspreview *ui;
};

#endif // CANVASPREVIEW_H

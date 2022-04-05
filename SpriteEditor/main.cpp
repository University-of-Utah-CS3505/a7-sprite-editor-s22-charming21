/**
 * Team: BAGJL
 * Students: Brittney Morales, Adriana Salazar, Xing Liu, Jinwen Lei, Gonzalo Tello
 * Course: CS3505
 * Date: April 5, 2022
 *
 **/
#include "view.h"
#include "model.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    model model;
    View w(model);
    w.show();
    return a.exec();
}

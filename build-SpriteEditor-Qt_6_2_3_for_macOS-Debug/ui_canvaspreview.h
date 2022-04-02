/********************************************************************************
** Form generated from reading UI file 'canvaspreview.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CANVASPREVIEW_H
#define UI_CANVASPREVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_canvaspreview
{
public:
    QLabel *label;

    void setupUi(QDialog *canvaspreview)
    {
        if (canvaspreview->objectName().isEmpty())
            canvaspreview->setObjectName(QString::fromUtf8("canvaspreview"));
        canvaspreview->resize(480, 640);
        label = new QLabel(canvaspreview);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 50, 400, 400));

        retranslateUi(canvaspreview);

        QMetaObject::connectSlotsByName(canvaspreview);
    } // setupUi

    void retranslateUi(QDialog *canvaspreview)
    {
        canvaspreview->setWindowTitle(QCoreApplication::translate("canvaspreview", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("canvaspreview", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class canvaspreview: public Ui_canvaspreview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CANVASPREVIEW_H

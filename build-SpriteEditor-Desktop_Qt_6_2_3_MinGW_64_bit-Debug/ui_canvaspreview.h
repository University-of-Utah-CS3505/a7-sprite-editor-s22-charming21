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
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_canvaspreview
{
public:
    QLabel *actualPreviewLabel;
    QLabel *titleLabel;
    QPushButton *pushButton;
    QLabel *boxSizeLabel;
    QLabel *actualSizeLabel;
    QLabel *label;

    void setupUi(QDialog *canvaspreview)
    {
        if (canvaspreview->objectName().isEmpty())
            canvaspreview->setObjectName(QString::fromUtf8("canvaspreview"));
        canvaspreview->resize(480, 640);
        actualPreviewLabel = new QLabel(canvaspreview);
        actualPreviewLabel->setObjectName(QString::fromUtf8("actualPreviewLabel"));
        actualPreviewLabel->setGeometry(QRect(40, 110, 400, 400));
        actualPreviewLabel->setFrameShape(QFrame::Box);
        titleLabel = new QLabel(canvaspreview);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        titleLabel->setGeometry(QRect(110, 20, 271, 61));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        titleLabel->setFont(font);
        titleLabel->setLayoutDirection(Qt::LeftToRight);
        pushButton = new QPushButton(canvaspreview);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(200, 560, 80, 27));
        boxSizeLabel = new QLabel(canvaspreview);
        boxSizeLabel->setObjectName(QString::fromUtf8("boxSizeLabel"));
        boxSizeLabel->setGeometry(QRect(140, 70, 241, 51));
        actualSizeLabel = new QLabel(canvaspreview);
        actualSizeLabel->setObjectName(QString::fromUtf8("actualSizeLabel"));
        actualSizeLabel->setGeometry(QRect(240, 520, 131, 19));
        label = new QLabel(canvaspreview);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 520, 101, 19));

        retranslateUi(canvaspreview);

        QMetaObject::connectSlotsByName(canvaspreview);
    } // setupUi

    void retranslateUi(QDialog *canvaspreview)
    {
        canvaspreview->setWindowTitle(QCoreApplication::translate("canvaspreview", "Dialog", nullptr));
        actualPreviewLabel->setText(QString());
        titleLabel->setText(QCoreApplication::translate("canvaspreview", "Actual Size Preview", nullptr));
        pushButton->setText(QCoreApplication::translate("canvaspreview", "CLOSE", nullptr));
        boxSizeLabel->setText(QCoreApplication::translate("canvaspreview", "Box Reference Size: 400px by 400px", nullptr));
        actualSizeLabel->setText(QString());
        label->setText(QCoreApplication::translate("canvaspreview", "Your Image Size:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class canvaspreview: public Ui_canvaspreview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CANVASPREVIEW_H

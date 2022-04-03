/********************************************************************************
** Form generated from reading UI file 'view.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_H
#define UI_VIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <canvas.h>

QT_BEGIN_NAMESPACE

class Ui_View
{
public:
    QAction *actionSave;
    QAction *actionOpen;
    QWidget *centralwidget;
    Canvas *canvasLabel;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *previewLayout;
    QLabel *actualSizeLabel;
    QPushButton *previewButton;
    QSlider *playBackSpeedSlider;
    QPushButton *colorButton;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *increaseCanvasButton;
    QPushButton *pushButton;
    QLabel *colorLabel;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *toolBarAndFrame;
    QVBoxLayout *toolBarVerticalLayout;
    QHBoxLayout *penAndEraser;
    QPushButton *penButton;
    QPushButton *eraserButton;
    QHBoxLayout *bucketAndShape;
    QPushButton *bucketButton;
    QComboBox *shapeToolComboBox;
    QSpinBox *toolSizeBox;
    QVBoxLayout *frameLayout;
    QComboBox *framesComboBox;
    QLabel *frameNumberLabel;
    QPushButton *lastFrameButton;
    QPushButton *nextFrameButton;
    QPushButton *addFrameButton;
    QPushButton *insertFrameButton;
    QPushButton *swapUpButton;
    QPushButton *swapDownButton;
    QPushButton *copyButton;
    QPushButton *ClearButton;
    QPushButton *deleteFrameButton;
    QLabel *posLabel;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *zoomInButton;
    QPushButton *zoomOutButton;
    QPushButton *undoButton;
    QPushButton *redoButton;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *canvasSizeLabel;
    QComboBox *canvasSizeComboBox;
    QLabel *modifiedLabel;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuAbout;
    QMenu *menuHelp_me;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *View)
    {
        if (View->objectName().isEmpty())
            View->setObjectName(QString::fromUtf8("View"));
        View->resize(800, 658);
        actionSave = new QAction(View);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionOpen = new QAction(View);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        centralwidget = new QWidget(View);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        canvasLabel = new Canvas(centralwidget);
        canvasLabel->setObjectName(QString::fromUtf8("canvasLabel"));
        canvasLabel->setGeometry(QRect(190, 20, 400, 400));
        canvasLabel->setFrameShape(QFrame::Box);
        canvasLabel->setAlignment(Qt::AlignCenter);
        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(640, 21, 170, 261));
        previewLayout = new QVBoxLayout(verticalLayoutWidget_2);
        previewLayout->setObjectName(QString::fromUtf8("previewLayout"));
        previewLayout->setContentsMargins(0, 0, 0, 0);
        actualSizeLabel = new QLabel(verticalLayoutWidget_2);
        actualSizeLabel->setObjectName(QString::fromUtf8("actualSizeLabel"));

        previewLayout->addWidget(actualSizeLabel);

        previewButton = new QPushButton(verticalLayoutWidget_2);
        previewButton->setObjectName(QString::fromUtf8("previewButton"));

        previewLayout->addWidget(previewButton);

        playBackSpeedSlider = new QSlider(verticalLayoutWidget_2);
        playBackSpeedSlider->setObjectName(QString::fromUtf8("playBackSpeedSlider"));
        playBackSpeedSlider->setMinimum(1);
        playBackSpeedSlider->setMaximum(60);
        playBackSpeedSlider->setOrientation(Qt::Horizontal);

        previewLayout->addWidget(playBackSpeedSlider);

        colorButton = new QPushButton(verticalLayoutWidget_2);
        colorButton->setObjectName(QString::fromUtf8("colorButton"));

        previewLayout->addWidget(colorButton);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        increaseCanvasButton = new QPushButton(verticalLayoutWidget_2);
        increaseCanvasButton->setObjectName(QString::fromUtf8("increaseCanvasButton"));

        horizontalLayout_3->addWidget(increaseCanvasButton);

        pushButton = new QPushButton(verticalLayoutWidget_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_3->addWidget(pushButton);


        previewLayout->addLayout(horizontalLayout_3);

        colorLabel = new QLabel(verticalLayoutWidget_2);
        colorLabel->setObjectName(QString::fromUtf8("colorLabel"));
        colorLabel->setMaximumSize(QSize(162, 16));
        colorLabel->setStyleSheet(QString::fromUtf8(""));

        previewLayout->addWidget(colorLabel);

        verticalLayoutWidget_4 = new QWidget(centralwidget);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(0, 110, 181, 487));
        toolBarAndFrame = new QVBoxLayout(verticalLayoutWidget_4);
        toolBarAndFrame->setObjectName(QString::fromUtf8("toolBarAndFrame"));
        toolBarAndFrame->setContentsMargins(0, 0, 0, 0);
        toolBarVerticalLayout = new QVBoxLayout();
        toolBarVerticalLayout->setObjectName(QString::fromUtf8("toolBarVerticalLayout"));
        penAndEraser = new QHBoxLayout();
        penAndEraser->setObjectName(QString::fromUtf8("penAndEraser"));
        penButton = new QPushButton(verticalLayoutWidget_4);
        penButton->setObjectName(QString::fromUtf8("penButton"));

        penAndEraser->addWidget(penButton);

        eraserButton = new QPushButton(verticalLayoutWidget_4);
        eraserButton->setObjectName(QString::fromUtf8("eraserButton"));

        penAndEraser->addWidget(eraserButton);


        toolBarVerticalLayout->addLayout(penAndEraser);

        bucketAndShape = new QHBoxLayout();
        bucketAndShape->setObjectName(QString::fromUtf8("bucketAndShape"));
        bucketButton = new QPushButton(verticalLayoutWidget_4);
        bucketButton->setObjectName(QString::fromUtf8("bucketButton"));

        bucketAndShape->addWidget(bucketButton);

        shapeToolComboBox = new QComboBox(verticalLayoutWidget_4);
        shapeToolComboBox->setObjectName(QString::fromUtf8("shapeToolComboBox"));

        bucketAndShape->addWidget(shapeToolComboBox);


        toolBarVerticalLayout->addLayout(bucketAndShape);

        toolSizeBox = new QSpinBox(verticalLayoutWidget_4);
        toolSizeBox->setObjectName(QString::fromUtf8("toolSizeBox"));
        toolSizeBox->setAlignment(Qt::AlignCenter);
        toolSizeBox->setMinimum(1);
        toolSizeBox->setMaximum(10);

        toolBarVerticalLayout->addWidget(toolSizeBox);

        frameLayout = new QVBoxLayout();
        frameLayout->setObjectName(QString::fromUtf8("frameLayout"));
        framesComboBox = new QComboBox(verticalLayoutWidget_4);
        framesComboBox->addItem(QString());
        framesComboBox->setObjectName(QString::fromUtf8("framesComboBox"));
        framesComboBox->setLayoutDirection(Qt::LeftToRight);
        framesComboBox->setStyleSheet(QString::fromUtf8(""));

        frameLayout->addWidget(framesComboBox);

        frameNumberLabel = new QLabel(verticalLayoutWidget_4);
        frameNumberLabel->setObjectName(QString::fromUtf8("frameNumberLabel"));
        frameNumberLabel->setMaximumSize(QSize(162, 16));
        frameNumberLabel->setAlignment(Qt::AlignCenter);

        frameLayout->addWidget(frameNumberLabel);

        lastFrameButton = new QPushButton(verticalLayoutWidget_4);
        lastFrameButton->setObjectName(QString::fromUtf8("lastFrameButton"));
        lastFrameButton->setEnabled(false);

        frameLayout->addWidget(lastFrameButton);

        nextFrameButton = new QPushButton(verticalLayoutWidget_4);
        nextFrameButton->setObjectName(QString::fromUtf8("nextFrameButton"));
        nextFrameButton->setEnabled(false);

        frameLayout->addWidget(nextFrameButton);

        addFrameButton = new QPushButton(verticalLayoutWidget_4);
        addFrameButton->setObjectName(QString::fromUtf8("addFrameButton"));
        addFrameButton->setEnabled(false);

        frameLayout->addWidget(addFrameButton);

        insertFrameButton = new QPushButton(verticalLayoutWidget_4);
        insertFrameButton->setObjectName(QString::fromUtf8("insertFrameButton"));
        insertFrameButton->setEnabled(false);

        frameLayout->addWidget(insertFrameButton);

        swapUpButton = new QPushButton(verticalLayoutWidget_4);
        swapUpButton->setObjectName(QString::fromUtf8("swapUpButton"));
        swapUpButton->setEnabled(false);

        frameLayout->addWidget(swapUpButton);

        swapDownButton = new QPushButton(verticalLayoutWidget_4);
        swapDownButton->setObjectName(QString::fromUtf8("swapDownButton"));
        swapDownButton->setEnabled(false);

        frameLayout->addWidget(swapDownButton);

        copyButton = new QPushButton(verticalLayoutWidget_4);
        copyButton->setObjectName(QString::fromUtf8("copyButton"));
        copyButton->setEnabled(false);

        frameLayout->addWidget(copyButton);

        ClearButton = new QPushButton(verticalLayoutWidget_4);
        ClearButton->setObjectName(QString::fromUtf8("ClearButton"));
        ClearButton->setEnabled(false);

        frameLayout->addWidget(ClearButton);

        deleteFrameButton = new QPushButton(verticalLayoutWidget_4);
        deleteFrameButton->setObjectName(QString::fromUtf8("deleteFrameButton"));
        deleteFrameButton->setEnabled(false);

        frameLayout->addWidget(deleteFrameButton);


        toolBarVerticalLayout->addLayout(frameLayout);


        toolBarAndFrame->addLayout(toolBarVerticalLayout);

        posLabel = new QLabel(centralwidget);
        posLabel->setObjectName(QString::fromUtf8("posLabel"));
        posLabel->setGeometry(QRect(640, 350, 91, 19));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(200, 470, 411, 61));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        zoomInButton = new QPushButton(horizontalLayoutWidget);
        zoomInButton->setObjectName(QString::fromUtf8("zoomInButton"));
        zoomInButton->setEnabled(false);

        horizontalLayout->addWidget(zoomInButton);

        zoomOutButton = new QPushButton(horizontalLayoutWidget);
        zoomOutButton->setObjectName(QString::fromUtf8("zoomOutButton"));
        zoomOutButton->setEnabled(false);

        horizontalLayout->addWidget(zoomOutButton);

        undoButton = new QPushButton(horizontalLayoutWidget);
        undoButton->setObjectName(QString::fromUtf8("undoButton"));
        undoButton->setEnabled(false);

        horizontalLayout->addWidget(undoButton);

        redoButton = new QPushButton(horizontalLayoutWidget);
        redoButton->setObjectName(QString::fromUtf8("redoButton"));
        redoButton->setEnabled(false);

        horizontalLayout->addWidget(redoButton);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 20, 181, 80));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        canvasSizeLabel = new QLabel(verticalLayoutWidget);
        canvasSizeLabel->setObjectName(QString::fromUtf8("canvasSizeLabel"));

        verticalLayout->addWidget(canvasSizeLabel);

        canvasSizeComboBox = new QComboBox(verticalLayoutWidget);
        canvasSizeComboBox->setObjectName(QString::fromUtf8("canvasSizeComboBox"));

        verticalLayout->addWidget(canvasSizeComboBox);

        modifiedLabel = new QLabel(centralwidget);
        modifiedLabel->setObjectName(QString::fromUtf8("modifiedLabel"));
        modifiedLabel->setGeometry(QRect(210, 560, 271, 16));
        View->setCentralWidget(centralwidget);
        menubar = new QMenuBar(View);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        menuHelp_me = new QMenu(menubar);
        menuHelp_me->setObjectName(QString::fromUtf8("menuHelp_me"));
        View->setMenuBar(menubar);
        statusbar = new QStatusBar(View);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        View->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menubar->addAction(menuHelp_me->menuAction());
        menuFile->addAction(actionSave);
        menuFile->addAction(actionOpen);

        retranslateUi(View);

        QMetaObject::connectSlotsByName(View);
    } // setupUi

    void retranslateUi(QMainWindow *View)
    {
        View->setWindowTitle(QCoreApplication::translate("View", "View", nullptr));
        actionSave->setText(QCoreApplication::translate("View", "Save", nullptr));
        actionOpen->setText(QCoreApplication::translate("View", "Open", nullptr));
        canvasLabel->setText(QCoreApplication::translate("View", "CANVAS", nullptr));
        actualSizeLabel->setText(QCoreApplication::translate("View", "Actual Size Preview", nullptr));
        previewButton->setText(QCoreApplication::translate("View", "Preview", nullptr));
        colorButton->setText(QCoreApplication::translate("View", "Choose Color", nullptr));
        increaseCanvasButton->setText(QCoreApplication::translate("View", "+", nullptr));
        pushButton->setText(QCoreApplication::translate("View", "-", nullptr));
        colorLabel->setText(QString());
        penButton->setText(QCoreApplication::translate("View", "Pen", nullptr));
        eraserButton->setText(QCoreApplication::translate("View", "Eraser", nullptr));
        bucketButton->setText(QCoreApplication::translate("View", "Bucket", nullptr));
        framesComboBox->setItemText(0, QCoreApplication::translate("View", "1", nullptr));

        frameNumberLabel->setText(QCoreApplication::translate("View", "1/1", nullptr));
        lastFrameButton->setText(QCoreApplication::translate("View", "Previous Frame", nullptr));
        nextFrameButton->setText(QCoreApplication::translate("View", "Next Frame", nullptr));
        addFrameButton->setText(QCoreApplication::translate("View", "Insert After", nullptr));
        insertFrameButton->setText(QCoreApplication::translate("View", "Insert Before", nullptr));
        swapUpButton->setText(QCoreApplication::translate("View", "Swap(up)", nullptr));
        swapDownButton->setText(QCoreApplication::translate("View", "Swap(down)", nullptr));
        copyButton->setText(QCoreApplication::translate("View", "Copy", nullptr));
        ClearButton->setText(QCoreApplication::translate("View", "Clear", nullptr));
        deleteFrameButton->setText(QCoreApplication::translate("View", "Delete Frame", nullptr));
        posLabel->setText(QString());
        zoomInButton->setText(QCoreApplication::translate("View", "Zoom In", nullptr));
        zoomOutButton->setText(QCoreApplication::translate("View", "Zoom Out", nullptr));
        undoButton->setText(QCoreApplication::translate("View", "Undo", nullptr));
        redoButton->setText(QCoreApplication::translate("View", "Redo", nullptr));
        canvasSizeLabel->setText(QCoreApplication::translate("View", "Canvas Size ", nullptr));
        modifiedLabel->setText(QCoreApplication::translate("View", "No Changes", nullptr));
        menuFile->setTitle(QCoreApplication::translate("View", "File", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("View", "About", nullptr));
        menuHelp_me->setTitle(QCoreApplication::translate("View", "Help me", nullptr));
    } // retranslateUi

};

namespace Ui {
    class View: public Ui_View {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_H

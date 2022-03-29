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
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *toolBarAndFrame;
    QVBoxLayout *toolBarVerticalLayout;
    QHBoxLayout *penAndEraser;
    QPushButton *penButton;
    QPushButton *eraserButton;
    QHBoxLayout *bucketAndShape;
    QPushButton *bucketButton;
    QPushButton *shapeButton;
    QSpinBox *toolSizeBox;
    QVBoxLayout *frameLayout;
    QComboBox *framesComboBox;
    QLabel *frameNumberLabel;
    QPushButton *lastFrameButton;
    QPushButton *nextFrameButton;
    QPushButton *addFrameButton;
    QPushButton *insertFrameButton;
    QPushButton *deleteFrameButton;
    QLabel *posLabel;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *zoomInButton;
    QPushButton *zoomOutButton;
    QPushButton *redoButton;
    QPushButton *undoButton;
    QLabel *testLabel;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuAbout;
    QMenu *menuHelp_me;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *View)
    {
        if (View->objectName().isEmpty())
            View->setObjectName(QString::fromUtf8("View"));
        View->resize(800, 600);
        actionSave = new QAction(View);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionOpen = new QAction(View);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        centralwidget = new QWidget(View);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        canvasLabel = new Canvas(centralwidget);
        canvasLabel->setObjectName(QString::fromUtf8("canvasLabel"));
        canvasLabel->setGeometry(QRect(190, 20, 360, 360));
        canvasLabel->setFrameShape(QFrame::Box);
        canvasLabel->setAlignment(Qt::AlignCenter);
        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(640, 21, 160, 261));
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
        playBackSpeedSlider->setOrientation(Qt::Horizontal);

        previewLayout->addWidget(playBackSpeedSlider);

        colorButton = new QPushButton(verticalLayoutWidget_2);
        colorButton->setObjectName(QString::fromUtf8("colorButton"));

        previewLayout->addWidget(colorButton);

        verticalLayoutWidget_4 = new QWidget(centralwidget);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(0, 20, 172, 521));
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

        shapeButton = new QPushButton(verticalLayoutWidget_4);
        shapeButton->setObjectName(QString::fromUtf8("shapeButton"));

        bucketAndShape->addWidget(shapeButton);


        toolBarVerticalLayout->addLayout(bucketAndShape);

        toolSizeBox = new QSpinBox(verticalLayoutWidget_4);
        toolSizeBox->setObjectName(QString::fromUtf8("toolSizeBox"));
        toolSizeBox->setAlignment(Qt::AlignCenter);

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

        frameLayout->addWidget(addFrameButton);

        insertFrameButton = new QPushButton(verticalLayoutWidget_4);
        insertFrameButton->setObjectName(QString::fromUtf8("insertFrameButton"));

        frameLayout->addWidget(insertFrameButton);

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

        horizontalLayout->addWidget(zoomInButton);

        zoomOutButton = new QPushButton(horizontalLayoutWidget);
        zoomOutButton->setObjectName(QString::fromUtf8("zoomOutButton"));

        horizontalLayout->addWidget(zoomOutButton);

        redoButton = new QPushButton(horizontalLayoutWidget);
        redoButton->setObjectName(QString::fromUtf8("redoButton"));

        horizontalLayout->addWidget(redoButton);

        undoButton = new QPushButton(horizontalLayoutWidget);
        undoButton->setObjectName(QString::fromUtf8("undoButton"));

        horizontalLayout->addWidget(undoButton);

        testLabel = new QLabel(centralwidget);
        testLabel->setObjectName(QString::fromUtf8("testLabel"));
        testLabel->setGeometry(QRect(640, 430, 141, 91));
        View->setCentralWidget(centralwidget);
        menubar = new QMenuBar(View);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 17));
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
        colorButton->setText(QCoreApplication::translate("View", "PushButton", nullptr));
        penButton->setText(QCoreApplication::translate("View", "Pen", nullptr));
        eraserButton->setText(QCoreApplication::translate("View", "Eraser", nullptr));
        bucketButton->setText(QCoreApplication::translate("View", "Bucket", nullptr));
        shapeButton->setText(QCoreApplication::translate("View", "Shape", nullptr));
        framesComboBox->setItemText(0, QCoreApplication::translate("View", "1", nullptr));

        frameNumberLabel->setText(QCoreApplication::translate("View", "1/1", nullptr));
        lastFrameButton->setText(QCoreApplication::translate("View", "Previous Frame", nullptr));
        nextFrameButton->setText(QCoreApplication::translate("View", "Next Frame", nullptr));
        addFrameButton->setText(QCoreApplication::translate("View", "Insert After", nullptr));
        insertFrameButton->setText(QCoreApplication::translate("View", "Insert Before", nullptr));
        deleteFrameButton->setText(QCoreApplication::translate("View", "Delete Frame", nullptr));
        posLabel->setText(QString());
        zoomInButton->setText(QCoreApplication::translate("View", "Zoom In", nullptr));
        zoomOutButton->setText(QCoreApplication::translate("View", "Zoom Out", nullptr));
        redoButton->setText(QCoreApplication::translate("View", "Redo", nullptr));
        undoButton->setText(QCoreApplication::translate("View", "Undo", nullptr));
        testLabel->setText(QCoreApplication::translate("View", "TextLabel", nullptr));
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

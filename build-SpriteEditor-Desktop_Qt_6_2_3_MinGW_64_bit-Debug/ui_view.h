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
    QAction *actionNew;
    QWidget *centralwidget;
    Canvas *canvasLabel;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *previewLayout;
    QLabel *actualSizeLabel;
    QPushButton *previewButton;
    QSlider *playBackSpeedSlider;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *toolBarAndFrame;
    QPushButton *penButton;
    QPushButton *eraserButton;
    QPushButton *bucketButton;
    QComboBox *shapeToolComboBox;
    QSpinBox *toolSizeBox;
    QPushButton *zoomInButton;
    QPushButton *zoomOutButton;
    QPushButton *undoButton;
    QPushButton *redoButton;
    QLabel *posLabel;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *canvasSizeLabel;
    QComboBox *canvasSizeComboBox;
    QLabel *modifiedLabel;
    QLabel *frameNumberLabel;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_11;
    QComboBox *framesComboBox;
    QPushButton *lastFrameButton;
    QPushButton *nextFrameButton;
    QVBoxLayout *verticalLayout_8;
    QPushButton *insertFrameButton;
    QPushButton *addFrameButton;
    QVBoxLayout *verticalLayout_7;
    QPushButton *swapUpButton;
    QPushButton *swapDownButton;
    QVBoxLayout *verticalLayout_10;
    QPushButton *copyButton;
    QPushButton *ClearButton;
    QPushButton *deleteFrameButton;
    QLabel *colorLabel;
    QPushButton *colorButton;
    QLabel *currentFrameLabel;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuAbout;
    QMenu *menuHelp_me;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *View)
    {
        if (View->objectName().isEmpty())
            View->setObjectName(QString::fromUtf8("View"));
        View->resize(800, 631);
        actionSave = new QAction(View);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave->setEnabled(false);
        actionOpen = new QAction(View);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionNew = new QAction(View);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        centralwidget = new QWidget(View);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        canvasLabel = new Canvas(centralwidget);
        canvasLabel->setObjectName(QString::fromUtf8("canvasLabel"));
        canvasLabel->setGeometry(QRect(190, 20, 400, 400));
        canvasLabel->setFrameShape(QFrame::Box);
        canvasLabel->setAlignment(Qt::AlignCenter);
        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(610, 20, 171, 221));
        previewLayout = new QVBoxLayout(verticalLayoutWidget_2);
        previewLayout->setObjectName(QString::fromUtf8("previewLayout"));
        previewLayout->setContentsMargins(0, 0, 0, 0);
        actualSizeLabel = new QLabel(verticalLayoutWidget_2);
        actualSizeLabel->setObjectName(QString::fromUtf8("actualSizeLabel"));
        QFont font;
        font.setBold(true);
        actualSizeLabel->setFont(font);
        actualSizeLabel->setAlignment(Qt::AlignCenter);

        previewLayout->addWidget(actualSizeLabel);

        previewButton = new QPushButton(verticalLayoutWidget_2);
        previewButton->setObjectName(QString::fromUtf8("previewButton"));
        previewButton->setFont(font);

        previewLayout->addWidget(previewButton);

        playBackSpeedSlider = new QSlider(verticalLayoutWidget_2);
        playBackSpeedSlider->setObjectName(QString::fromUtf8("playBackSpeedSlider"));
        playBackSpeedSlider->setMinimum(1);
        playBackSpeedSlider->setMaximum(60);
        playBackSpeedSlider->setOrientation(Qt::Horizontal);

        previewLayout->addWidget(playBackSpeedSlider);

        verticalLayoutWidget_4 = new QWidget(centralwidget);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(20, 120, 151, 281));
        toolBarAndFrame = new QVBoxLayout(verticalLayoutWidget_4);
        toolBarAndFrame->setObjectName(QString::fromUtf8("toolBarAndFrame"));
        toolBarAndFrame->setContentsMargins(0, 0, 0, 0);
        penButton = new QPushButton(verticalLayoutWidget_4);
        penButton->setObjectName(QString::fromUtf8("penButton"));
        penButton->setFont(font);

        toolBarAndFrame->addWidget(penButton);

        eraserButton = new QPushButton(verticalLayoutWidget_4);
        eraserButton->setObjectName(QString::fromUtf8("eraserButton"));
        eraserButton->setFont(font);

        toolBarAndFrame->addWidget(eraserButton);

        bucketButton = new QPushButton(verticalLayoutWidget_4);
        bucketButton->setObjectName(QString::fromUtf8("bucketButton"));
        bucketButton->setFont(font);

        toolBarAndFrame->addWidget(bucketButton);

        shapeToolComboBox = new QComboBox(verticalLayoutWidget_4);
        shapeToolComboBox->setObjectName(QString::fromUtf8("shapeToolComboBox"));
        shapeToolComboBox->setFont(font);

        toolBarAndFrame->addWidget(shapeToolComboBox);

        toolSizeBox = new QSpinBox(verticalLayoutWidget_4);
        toolSizeBox->setObjectName(QString::fromUtf8("toolSizeBox"));
        toolSizeBox->setFont(font);
        toolSizeBox->setAlignment(Qt::AlignCenter);
        toolSizeBox->setMinimum(1);
        toolSizeBox->setMaximum(10);

        toolBarAndFrame->addWidget(toolSizeBox);

        zoomInButton = new QPushButton(verticalLayoutWidget_4);
        zoomInButton->setObjectName(QString::fromUtf8("zoomInButton"));
        zoomInButton->setEnabled(false);
        zoomInButton->setFont(font);

        toolBarAndFrame->addWidget(zoomInButton);

        zoomOutButton = new QPushButton(verticalLayoutWidget_4);
        zoomOutButton->setObjectName(QString::fromUtf8("zoomOutButton"));
        zoomOutButton->setEnabled(false);
        zoomOutButton->setFont(font);

        toolBarAndFrame->addWidget(zoomOutButton);

        undoButton = new QPushButton(verticalLayoutWidget_4);
        undoButton->setObjectName(QString::fromUtf8("undoButton"));
        undoButton->setEnabled(false);
        undoButton->setFont(font);

        toolBarAndFrame->addWidget(undoButton);

        redoButton = new QPushButton(verticalLayoutWidget_4);
        redoButton->setObjectName(QString::fromUtf8("redoButton"));
        redoButton->setEnabled(false);
        redoButton->setFont(font);

        toolBarAndFrame->addWidget(redoButton);

        posLabel = new QLabel(centralwidget);
        posLabel->setObjectName(QString::fromUtf8("posLabel"));
        posLabel->setGeometry(QRect(610, 350, 171, 20));
        posLabel->setFont(font);
        posLabel->setAlignment(Qt::AlignCenter);
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 20, 151, 51));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        canvasSizeLabel = new QLabel(verticalLayoutWidget);
        canvasSizeLabel->setObjectName(QString::fromUtf8("canvasSizeLabel"));
        canvasSizeLabel->setFont(font);
        canvasSizeLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(canvasSizeLabel);

        canvasSizeComboBox = new QComboBox(verticalLayoutWidget);
        canvasSizeComboBox->setObjectName(QString::fromUtf8("canvasSizeComboBox"));
        canvasSizeComboBox->setFont(font);

        verticalLayout->addWidget(canvasSizeComboBox);

        modifiedLabel = new QLabel(centralwidget);
        modifiedLabel->setObjectName(QString::fromUtf8("modifiedLabel"));
        modifiedLabel->setGeometry(QRect(620, 380, 151, 20));
        QFont font1;
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setStrikeOut(false);
        modifiedLabel->setFont(font1);
        modifiedLabel->setAlignment(Qt::AlignCenter);
        frameNumberLabel = new QLabel(centralwidget);
        frameNumberLabel->setObjectName(QString::fromUtf8("frameNumberLabel"));
        frameNumberLabel->setGeometry(QRect(410, 430, 121, 16));
        frameNumberLabel->setMaximumSize(QSize(162, 16));
        frameNumberLabel->setFont(font);
        frameNumberLabel->setAlignment(Qt::AlignCenter);
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(40, 470, 721, 88));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        framesComboBox = new QComboBox(horizontalLayoutWidget);
        framesComboBox->addItem(QString());
        framesComboBox->setObjectName(QString::fromUtf8("framesComboBox"));
        framesComboBox->setFont(font);
        framesComboBox->setLayoutDirection(Qt::LeftToRight);
        framesComboBox->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_11->addWidget(framesComboBox);

        lastFrameButton = new QPushButton(horizontalLayoutWidget);
        lastFrameButton->setObjectName(QString::fromUtf8("lastFrameButton"));
        lastFrameButton->setEnabled(false);
        lastFrameButton->setFont(font);

        verticalLayout_11->addWidget(lastFrameButton);

        nextFrameButton = new QPushButton(horizontalLayoutWidget);
        nextFrameButton->setObjectName(QString::fromUtf8("nextFrameButton"));
        nextFrameButton->setEnabled(false);
        nextFrameButton->setFont(font);

        verticalLayout_11->addWidget(nextFrameButton);


        horizontalLayout_2->addLayout(verticalLayout_11);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        insertFrameButton = new QPushButton(horizontalLayoutWidget);
        insertFrameButton->setObjectName(QString::fromUtf8("insertFrameButton"));
        insertFrameButton->setEnabled(false);
        insertFrameButton->setFont(font);

        verticalLayout_8->addWidget(insertFrameButton);

        addFrameButton = new QPushButton(horizontalLayoutWidget);
        addFrameButton->setObjectName(QString::fromUtf8("addFrameButton"));
        addFrameButton->setEnabled(false);
        addFrameButton->setFont(font);

        verticalLayout_8->addWidget(addFrameButton);


        horizontalLayout_2->addLayout(verticalLayout_8);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        swapUpButton = new QPushButton(horizontalLayoutWidget);
        swapUpButton->setObjectName(QString::fromUtf8("swapUpButton"));
        swapUpButton->setEnabled(false);
        swapUpButton->setFont(font);

        verticalLayout_7->addWidget(swapUpButton);

        swapDownButton = new QPushButton(horizontalLayoutWidget);
        swapDownButton->setObjectName(QString::fromUtf8("swapDownButton"));
        swapDownButton->setEnabled(false);
        swapDownButton->setFont(font);

        verticalLayout_7->addWidget(swapDownButton);


        horizontalLayout_2->addLayout(verticalLayout_7);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        copyButton = new QPushButton(horizontalLayoutWidget);
        copyButton->setObjectName(QString::fromUtf8("copyButton"));
        copyButton->setEnabled(false);
        copyButton->setFont(font);

        verticalLayout_10->addWidget(copyButton);

        ClearButton = new QPushButton(horizontalLayoutWidget);
        ClearButton->setObjectName(QString::fromUtf8("ClearButton"));
        ClearButton->setEnabled(false);
        ClearButton->setFont(font);

        verticalLayout_10->addWidget(ClearButton);

        deleteFrameButton = new QPushButton(horizontalLayoutWidget);
        deleteFrameButton->setObjectName(QString::fromUtf8("deleteFrameButton"));
        deleteFrameButton->setEnabled(false);
        deleteFrameButton->setFont(font);

        verticalLayout_10->addWidget(deleteFrameButton);


        horizontalLayout_2->addLayout(verticalLayout_10);

        colorLabel = new QLabel(centralwidget);
        colorLabel->setObjectName(QString::fromUtf8("colorLabel"));
        colorLabel->setGeometry(QRect(610, 310, 162, 16));
        colorLabel->setMaximumSize(QSize(162, 16));
        colorLabel->setStyleSheet(QString::fromUtf8(""));
        colorButton = new QPushButton(centralwidget);
        colorButton->setObjectName(QString::fromUtf8("colorButton"));
        colorButton->setGeometry(QRect(610, 250, 171, 51));
        colorButton->setFont(font);
        currentFrameLabel = new QLabel(centralwidget);
        currentFrameLabel->setObjectName(QString::fromUtf8("currentFrameLabel"));
        currentFrameLabel->setGeometry(QRect(280, 430, 111, 20));
        currentFrameLabel->setFont(font);
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
        menuFile->addAction(actionNew);

        retranslateUi(View);

        QMetaObject::connectSlotsByName(View);
    } // setupUi

    void retranslateUi(QMainWindow *View)
    {
        View->setWindowTitle(QCoreApplication::translate("View", "View", nullptr));
        actionSave->setText(QCoreApplication::translate("View", "Save", nullptr));
        actionOpen->setText(QCoreApplication::translate("View", "Open", nullptr));
        actionNew->setText(QCoreApplication::translate("View", "New", nullptr));
        canvasLabel->setText(QCoreApplication::translate("View", "CANVAS", nullptr));
        actualSizeLabel->setText(QCoreApplication::translate("View", "Actual Size Preview", nullptr));
        previewButton->setText(QCoreApplication::translate("View", "Preview", nullptr));
        penButton->setText(QCoreApplication::translate("View", "Pen", nullptr));
        eraserButton->setText(QCoreApplication::translate("View", "Eraser", nullptr));
        bucketButton->setText(QCoreApplication::translate("View", "Bucket", nullptr));
        zoomInButton->setText(QCoreApplication::translate("View", "Zoom In", nullptr));
        zoomOutButton->setText(QCoreApplication::translate("View", "Zoom Out", nullptr));
        undoButton->setText(QCoreApplication::translate("View", "Undo", nullptr));
        redoButton->setText(QCoreApplication::translate("View", "Redo", nullptr));
        posLabel->setText(QString());
        canvasSizeLabel->setText(QCoreApplication::translate("View", "Canvas Size ", nullptr));
        modifiedLabel->setText(QCoreApplication::translate("View", "No Changes", nullptr));
        frameNumberLabel->setText(QCoreApplication::translate("View", "1/1", nullptr));
        framesComboBox->setItemText(0, QCoreApplication::translate("View", "1", nullptr));

        lastFrameButton->setText(QCoreApplication::translate("View", "Move (up)", nullptr));
        nextFrameButton->setText(QCoreApplication::translate("View", "Move (down)", nullptr));
        insertFrameButton->setText(QCoreApplication::translate("View", "Add (above)", nullptr));
        addFrameButton->setText(QCoreApplication::translate("View", "Add (below)", nullptr));
        swapUpButton->setText(QCoreApplication::translate("View", "Swap (up)", nullptr));
        swapDownButton->setText(QCoreApplication::translate("View", "Swap (down)", nullptr));
        copyButton->setText(QCoreApplication::translate("View", "Copy", nullptr));
        ClearButton->setText(QCoreApplication::translate("View", "Clear", nullptr));
        deleteFrameButton->setText(QCoreApplication::translate("View", "Delete", nullptr));
        colorLabel->setText(QString());
        colorButton->setText(QCoreApplication::translate("View", "Choose Color", nullptr));
        currentFrameLabel->setText(QCoreApplication::translate("View", "Current Frame", nullptr));
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

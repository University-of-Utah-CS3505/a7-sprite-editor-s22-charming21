#include "view.h"
#include "ui_view.h"
#include <QtWidgets>

#include <iostream> // delete later

View::View(model& model, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::View)
{
    ui->setupUi(this);   

    //Buttons' Connections

    //Tools
    connect(this,
            &View::setTool,
            &model,
            &model::updateTool);//UpdateTools

    //Frames
    connect(ui->addFrameButton,
            &QPushButton::clicked,
            &model,
            &model::addNewFrame);
    connect(ui->deleteFrameButton,
            &QPushButton::clicked,
            &model,
            &model::deleteFrame);
    connect(&model,
            &model::goToFrame,
            this,
            &View::updateFramesBox);

    connect(ui->framesComboBox,
            &QComboBox::activated,
            &model,
            &model::selectedFrame);



    //Save Project
//    connect(ui->actionSave,
//            &QAction::triggered,
//            &model,
//            &model::getList);
    connect(&model,
            &model::sendList,
            this,
            &View::saveProject);

    //Open a Project
//    connect(ui->actionOpen,
//            &QAction::triggered,
//            &model,
//            &model::openProject); //create slot in model
//    connect(&model,
//            &model::sendList,
//            this,
//            &View::setUpProject); //create method in view

    //Zoom in/out, Redo and Undo
    //Change to Buttons
//        connect(ui->menuZoom_In,
//                &QAction::trigger,
//                &model,
//                &model::zoomIn);
//        connect(ui->menuZoom_Out,
//                &QAction::trigger,
//                &model,
//                &model::zoomOut);
//        connect(ui->menuRedo,
//                &QAction::trigger,
//                &model,
//                &model::redo);
//        connect(ui->menuUndo,
//                &QAction::trigger,
//                &model,
//                &model::undo);
}


View::~View()
{
    delete ui;
}
//methods for view

void View::mousePressEvent(QMouseEvent *pressEvent){
    if(pressEvent->button() == Qt::LeftButton){
        //std::cout << "x: " << pressEvent->pos().x() << " y: " <<  pressEvent->pos().y() << std::endl;
        // pressEvent->event->pos(); returns a QPoint
        //send to model
    }
}


void View::mouseMoveEvent(QMouseEvent *moveEvent){
    if(moveEvent->button() == Qt::LeftButton){
        //constantly send to model for drawing
    }
}

void View::mouseReleaseEvent(QMouseEvent *releaseEvent){
    if(releaseEvent->button() == Qt::LeftButton){
        //std::cout << "Mouse Released x: " << releaseEvent->pos().x() << " y: "  << releaseEvent->pos().y() << std::endl;
        //send to model
    }
}



//Methods from the UML for View
void updateCanvas(){
    //TODO
}
void updateFramesBox(int){
    //TODO
}
void updatePreview(){
    //TODO
}
void updateSelectionTool(){
    //TODO
}
void updateColorWheel(QColor){
    //TODO
}
void updateToolSize(int){
    //TODO
}
void saveProject(QList<QImage>){
    //TODO
}



//This is to update the current tool, and let know
//the model which tool we are using
void View::on_penButton_clicked()
{
    emit setTool("pen");
}


void View::on_eraserButton_clicked()
{
    emit setTool("eraser");
}


void View::on_bucketButton_clicked()
{
    emit setTool("bucket");
}


void View::on_shapeButton_clicked()
{
    emit setTool("shapeCreator");
}


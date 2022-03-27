#include "view.h"
#include "ui_view.h"
#include <QtWidgets>
#include <QPixmap>

#include <iostream> // delete later

View::View(model& model, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::View)
{

    ui->setupUi(this);

    //connections

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

    connect(ui->insertFrameButton,
            &QPushButton::clicked,
            &model,
            &model::insertNewFrame);

    connect(ui->nextFrameButton,
            &QPushButton::clicked,
            &model,
            &model::nextFrame);

    connect(ui->lastFrameButton,
            &QPushButton::clicked,
            &model,
            &model::lastFrame);

    connect(&model,
            &model::disableNextButton,
            this,
            &View::disableNextButton);

    connect(&model,
            &model::disableLastButton,
            this,
            &View::disableLastButton);

    connect(&model,
            &model::enableNextButton,
            this,
            &View::enableNextButton);

    connect(&model,
            &model::enableLastButton,
            this,
            &View::enableLastButton);

    connect(&model,
            &model::disableDeleteButton,
            this,
            &View::disableDeleteButton);

    connect(&model,
            &model::enableDeleteButton,
            this,
            &View::enableDeleteButton);

    connect(ui->deleteFrameButton,
            &QPushButton::clicked,
            &model,
            &model::deleteFrame);

    connect(ui->framesComboBox,
            &QComboBox::activated,
            &model,
            &model::selectedFrame);

    connect(&model,
            &model::updateFrameNumberCombo,
            this,
            &View::updateFramesBoxAndLabel);

    // change frame
    connect(&model,
            &model::goToFrame,
            this,
            &View::displayFrame);

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







    //ColorUpdate
    connect(ui->colorButton,
            &QPushButton::clicked,
            this,
            &View::pushColorButton);

    connect(this,
            &View::updateColor,
            &model,
            &model::updateColor);

    connect(ui->colorButton,
            &QPushButton::clicked,
            this,
            &View::pushColorButton);

    connect(this,
            &View::updateColor,
            &model,
            &model::updateColor);

    //updateToolSize
    connect(ui->toolSizeBox,
            &QSpinBox::valueChanged,
            &model,
            &model::updateToolSize);

    connect(ui->canvasLabel,
            &Canvas::sendMouseLoc,
            this,
            &View::showMouseLoc);
}


View::~View()
{
    delete ui;
}
//methods for view

void View::pushColorButton(){

    bool ok;
    QColor color = QColorDialog::getColor(Qt::blue, this);
    if(&ok)
    {
        //this code was for testing purposes
        //ui->colorButton->setStyleSheet(QString("QPushButton{background-color:" + color.name(QColor::HexArgb) + ";}"));
        emit updateColor(color);
    }
    //TODO : testing
    //1. when we click cancel , changes color to black by default
}

void View::displayFrame(QPixmap map){
    ui->canvasLabel->setPixmap(map);
}

void View::disableDeleteButton(){
    ui->deleteFrameButton->setEnabled(false);
}

void View::enableDeleteButton(){
    ui->deleteFrameButton->setEnabled(true);
}

void View::enableNextButton(){
    ui->nextFrameButton->setEnabled(true);
}

void View::enableLastButton(){
    ui->lastFrameButton->setEnabled(true);
}

void View::disableNextButton(){
    ui->nextFrameButton->setEnabled(false);
}

void View::disableLastButton(){
    ui->lastFrameButton->setEnabled(false);
}

void View::showMouseLoc(QPoint &loc) // can delete later
{
    ui->posLabel->setText("x: " + QString::number(loc.x()) + " y: " + QString::number(loc.y()));

}



//Methods from the UML for View
void View::updateCanvas(){
    //TODO
}
void View::updateFramesBoxAndLabel(int page, int size){
    if(size > ui->framesComboBox->count()){
        ui->framesComboBox->addItem(QString::number(size));
    }

    if(size < ui->framesComboBox->count()){
        ui->framesComboBox->removeItem(ui->framesComboBox->count() - 1);
    }

    QString str = QString::number(page);
    str.append("/");
    str.append(QString::number(size));

    ui->frameNumberLabel->setText(str);
    ui->framesComboBox->setCurrentText(QString::number(page));
}
void View::updatePreview(){
    //TODO
}
void View::updateSelectionTool(){
    //TODO
}
void View::updateColorWheel(QColor){
    //TODO
}
void View::updateToolSize(int){
    //TODO
}
void View::saveProject(QList<QImage>){
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


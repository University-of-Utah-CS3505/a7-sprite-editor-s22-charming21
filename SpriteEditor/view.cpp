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

   //A white image to start with in the canvas
   QPixmap startImage(ui->canvasLabel->width(), ui->canvasLabel->height());
   QPainter paint(&startImage);
   startImage.fill(Qt::white );
   ui->canvasLabel->setPixmap(startImage);


    // set frame combo box alliment
    ui->framesComboBox->setEditable(true);
    ui->framesComboBox->lineEdit()->setReadOnly(true);
    ui->framesComboBox->lineEdit()->setAlignment(Qt::AlignCenter);


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
            &View::updateFramesBox);

    connect(&model,
            &model::updateFrameNumberLabel,
            this,
            &View::updateFramesLabel);

    connect(&model,
            &model::goToFrame,
            this,
            &View::displayFrame);

    //connects slider with update fps method in model
    connect(ui->playBackSpeedSlider,
            &QSlider::valueChanged,
            &model,
            &model::updateFPS);

    // color wheel
    connect(&model,
            &model::setColorLabel,
            this,
            &View::updateColorWheel);


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

        //Zoom in/out,
        connect(ui->zoomInButton,
                &QPushButton::clicked,
                &model,
                &model::zoomIn);
        connect(ui->zoomOutButton,
                &QPushButton::clicked,
                &model,
                &model::zoomOut);

        //Redo and Undo
        connect(ui->redoButton,
                &QPushButton::clicked,
                &model,
                &model::redo);
        connect(ui->undoButton,
                &QPushButton::clicked,
                &model,
                &model::undo);


    //ColorUpdate
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

    //Canvas Connect
    connect(ui->canvasLabel,
            &Canvas::sendMouseLoc,
            this,
            &View::mouseLoc);

    connect(ui->canvasLabel,
            &Canvas::sendMouseLoc,
            this,
            &View::on_clickMouse_released);

    //Test
    connect(this,
            &View::editCanvas,
            &model,
            &model::drawOnCanvas);
    connect(&model,
            &model::setCanvas,
            this,
            &View::updateCanvas);

    // gon
    // connections for increasing and decreasing canvas button and pen size
    connect(ui->increaseCanvasButton,
            &QPushButton::clicked,
            this,
            &View::pushCanvasSizeIncrease);

    connect(this,
            &View::editCanvasSize,
            &model,
            &model::updateCanvasSize);

    connect(ui->increasePenButton,
            &QPushButton::clicked,
            this,
            &View::pushPenSizeIncrease);

    connect(this,
            &View::editPenSize,
            &model,
            &model::updatePenSize);


}


View::~View()
{
    delete ui;
}
//methods for view

void View::pushColorButton(){

    QColor color = QColorDialog::getColor(QColor(255,255,255), nullptr, QString(), {QColorDialog::DontUseNativeDialog, QColorDialog::ShowAlphaChannel});
    emit updateColor(color);

    //TODO : testing
    //1. when we click cancel, changes color to black by default
}

void View::pushCanvasSizeIncrease()
{
    emit editCanvasSize(1);
}

void View::pushPenSizeIncrease()
{
    emit editPenSize(1);
}

void View::displayFrame(QPixmap map){
    ui->canvasLabel->setPixmap(map.scaled(ui->canvasLabel->width(), ui->canvasLabel->height()));
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

void View::mouseLoc(QPoint &loc) // can delete later
{
    ui->posLabel->setText("x: " + QString::number(loc.x()) + " y: " + QString::number(loc.y()));
    //send the location of out mouse to our model
    emit editCanvas(loc);
}


//Update the canvas by outputing the QPixmap that
//was tranformed into QImage and edited in model
void View::updateCanvas(QPixmap currentPic){
    int height = ui->canvasLabel->height();
    int width = ui->canvasLabel->width();
    //display our QPixmap into our canvas size
    ui->canvasLabel->setPixmap(currentPic.scaled(width, height));

//    //gon
//    ui->canvasLabel->setPixmap(currentPic);
}

void View::updateFramesBox(int page, int size){
    if(size > ui->framesComboBox->count()){
        ui->framesComboBox->addItem(QString::number(size));
    }

    if(size < ui->framesComboBox->count()){
        ui->framesComboBox->removeItem(ui->framesComboBox->count() - 1);
    }

    ui->framesComboBox->setCurrentText(QString::number(page));
}

void View::updateFramesLabel(int page, int size){
    QString str = QString::number(page);
    str.append("/");
    str.append(QString::number(size));

    ui->frameNumberLabel->setText(str);
}
void View::updatePreview(){
    //TODO
}
void View::updateSelectionTool(){
    //TODO
}
void View::updateColorWheel(QColor color){
    QString style = "background: rgba(%1, %2, %3, %4);";

    ui->colorLabel->setStyleSheet(style.arg(color.red()).arg(color.green()).arg(color.blue()).arg(color.alpha()));
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

//Zoom Mehtod -> Maybe remove??
void View::zoomInCanvas(QImage image){
}
void View::zoomOutCanvas(QImage){
}

void View::on_clickMouse_released(QPoint &loc) {

}

#include "view.h"
#include "ui_view.h"
#include <QtWidgets>
#include <QPixmap>
#include <QFileDialog>

#include <iostream> // delete later

View::View(model& model, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::View)
{
    ui->setupUi(this);

    initCanvasSizesComboBox();

   //A white image to start with in the canvas
   QPixmap startImage(ui->canvasLabel->width(), ui->canvasLabel->height());
   QPainter paint(&startImage);
   startImage.fill(Qt::white );
   ui->canvasLabel->setPixmap(startImage);

   //Set height and width
   canvasLabelHeight = ui->canvasLabel->height();
   canvasLabelWidth = ui->canvasLabel->width();

    // set frame combo box alliment
    ui->framesComboBox->setEditable(true);
    ui->framesComboBox->lineEdit()->setReadOnly(true);
    ui->framesComboBox->lineEdit()->setAlignment(Qt::AlignCenter);


    // set color label
    ui->colorLabel->setStyleSheet("background-color: black");

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

    //connects slider with update fps method in model
    connect(ui->playBackSpeedSlider,
            &QSlider::valueChanged,
            &model,
            &model::updateFPS);

    // enable and disable buttons
    connect(&model,
            &model::enableRedo,
            this,
            &View::enableRedoButton);

    connect(&model,
            &model::enableUndo,
            this,
            &View::enableUndoButton);

    connect(&model,
            &model::disableRedo,
            this,
            &View::disableRedoButton);

    connect(&model,
            &model::disableUndo,
            this,
            &View::disableUndoButton);

    // color wheel
    connect(&model,
            &model::setColorLabel,
            this,
            &View::updateColorWheel);

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
        connect(&model,
                &model::toZoomIn,
                this,
                &View::zoomInCanvas);
        connect(&model,
                &model::toZoomOut,
                this,
                &View::zoomOutCanvas);

        //Redo and Undo
        connect(ui->redoButton,
                &QPushButton::clicked,
                &model,
                &model::redo);
        connect(ui->undoButton,
                &QPushButton::clicked,
                &model,
                &model::undo);

        connect(ui->canvasLabel, // mouse click
                &Canvas::saveToStack,
                &model,
                &model::saveFrameToStack);


    //ColorUpdate
    connect(ui->colorButton,
            &QPushButton::clicked,
            &model,
            &model::checkCurrentColor);

    connect(&model,
            &model::sendCurrentColor,
            this,
            &View::pushColorButton);

    connect(this,
            &View::updateColor,
            &model,
            &model::updatePenColor);

    //updateToolSize
    connect(ui->toolSizeBox,
            &QSpinBox::valueChanged,
            &model,
            &model::updateToolSize);

    //Initialize Zanvas Size
    connect(ui->canvasSizeComboBox,
            &QComboBox::activated,
            &model,
            &model::initializeCanvasSize);

    //Canvas Connect
    connect(ui->canvasLabel, // mouse click
            &Canvas::sendMouseLoc,
            this,
            &View::mouseLoc);

    connect(ui->canvasLabel,
            &Canvas::sendMouseLoc,
            this,
            &View::on_clickMouse_released);
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
//    connect(ui->increaseCanvasButton,
//            &QPushButton::clicked,
//            this,
//            &View::pushCanvasSizeIncrease);


    //Preview actual canvas
    connect(ui->previewButton,
            &QPushButton::clicked,
            &model,
            &model::previewOfFrames);
    connect(&model,
            &model::showSprite,
            this,
            &View::displaySprite);

    // save file
    connect(ui->actionSave,
            &QAction::triggered,
            this,
            &View::saveFile);

    connect(this,
            &View::save,
            &model,
            &model::save);
    // open file
    connect(ui->actionOpen,
            &QAction::triggered,
            this,
            &View::openFile);

}

void View::displaySprite(QImage currentFrame){
    //fix scaling issue of the qimage
    ui->actualSizeLabel->setPixmap(QPixmap::fromImage(currentFrame).scaled(ui->actualSizeLabel->width(),
                                                                            ui->actualSizeLabel->height()));
}
View::~View()
{
    delete ui;
}
//methods for view

void View::pushColorButton(QColor currentColor){

    QColor newColor = QColorDialog::getColor(currentColor, nullptr, QString(), {QColorDialog::DontUseNativeDialog, QColorDialog::ShowAlphaChannel});

    if(newColor.isValid()){

        emit updateColor(newColor);
    }
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

void View::enableUndoButton(){
    ui->undoButton->setEnabled(true);
}

void View::enableRedoButton(){
    ui->redoButton->setEnabled(true);
}

void View::disableUndoButton(){
    ui->undoButton->setEnabled(false);
}

void View::disableRedoButton(){
    ui->redoButton->setEnabled(false);
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

    //display our QPixmap into our canvas size
    ui->canvasLabel->setPixmap(currentPic.scaled(canvasLabelWidth, canvasLabelHeight));
    //display on actualsize label
    ui->actualSizeLabel->setPixmap(currentPic.scaled(ui->actualSizeLabel->width(),
                                                     ui->actualSizeLabel->height()));
    //Disable cobo box to set up size
    if(ui->canvasSizeComboBox->isEnabled()){
        ui->canvasSizeComboBox->setEnabled(false);
    }
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

void View::updateColorWheel(QColor color){
    QString style = "background: rgba(%1, %2, %3, %4);";

    ui->colorLabel->setStyleSheet(style.arg(color.red()).arg(color.green()).arg(color.blue()).arg(color.alpha()));
}

void View::saveProject(QList<QImage>){
    //TODO
}

void View::saveFile()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Save file", "C://");
    emit save(fileName);
}

void View::openFile()
{
    QFileDialog::getOpenFileName(this, "Open file", "C://");
    // will have to do an emit to the model

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


//Displays the image with the given ratio to increase the size
void View::zoomInCanvas(QPixmap currentPic, int canvasSize, int zoomIndex){
    int ratio = ui->canvasLabel->height()/canvasSize;


    canvasLabelHeight = 400 +(ratio*(2*zoomIndex));
    canvasLabelWidth = 400 +(ratio*(2*zoomIndex));
    //display our QPixmap into our canvas size

    ui->canvasLabel->setPixmap(currentPic.scaled(canvasLabelWidth, canvasLabelHeight, Qt::KeepAspectRatioByExpanding));
}

//Displays the image with the given ratio to decrease the size
void View::zoomOutCanvas(QPixmap currentPic, int canvasSize, int zoomIndex){
    int ratio = ui->canvasLabel->height()/canvasSize;


    canvasLabelHeight =400 +(ratio*(2*zoomIndex));
    canvasLabelWidth = 400 +(ratio*(2*zoomIndex));
    //display our QPixmap into our canvas size

    ui->canvasLabel->setPixmap(currentPic.scaled(canvasLabelWidth, canvasLabelHeight));
}



//It disables the buttons when in the model we notice that
//zooming  in is out of bounds.
void View::disableZoomButtons(std::string zoomType){
    if(zoomType == "zoomIn")
        ui->zoomInButton->setEnabled(false);
    else
        ui->zoomOutButton->setEnabled(false);
}



void View::initCanvasSizesComboBox(){
    ui->canvasSizeComboBox->addItem("2 x 2");
    ui->canvasSizeComboBox->addItem("4 x 4");
    ui->canvasSizeComboBox->addItem("5 x 5");
    ui->canvasSizeComboBox->addItem("8 x 8");
    ui->canvasSizeComboBox->addItem("10 x 10");
    ui->canvasSizeComboBox->addItem("16 x 16");
    ui->canvasSizeComboBox->addItem("20 x 20");
    ui->canvasSizeComboBox->addItem("25 x 25");
    ui->canvasSizeComboBox->addItem("40 x 40");
    ui->canvasSizeComboBox->addItem("50 x 50");
    ui->canvasSizeComboBox->addItem("80 x 80");
    ui->canvasSizeComboBox->addItem("100 x 100");
    ui->canvasSizeComboBox->addItem("200 x 200");
    ui->canvasSizeComboBox->addItem("400 x 400");

    ui->canvasSizeComboBox->setCurrentIndex(6);
}




void View::on_clickMouse_released(QPoint &loc) {

}


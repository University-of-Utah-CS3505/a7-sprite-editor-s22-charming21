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
    initShapeToolComboBox();

    //Set Style For the main window
    setStyleSheet(QString("QMainWindow {background: rgb(32,42,68);}"));
    ui->canvasSizeLabel->setStyleSheet("color:white");
    ui->frameNumberLabel->setStyleSheet("color:white");
    ui->currentFrameLabel->setStyleSheet("color:white");
    ui->posLabel->setStyleSheet("color:white");
    ui->actualSizeLabel->setStyleSheet("color:white");
    ui->modifiedLabel->setStyleSheet("color:white");


    // Set icons
    ui->penButton->setIcon(QIcon(":/new/UI_Icons/Tool_Pen.png"));
    ui->eraserButton->setIcon(QIcon(":/new/UI_Icons/Tool_Eraser.png"));
    ui->bucketButton->setIcon(QIcon(":/new/UI_Icons/Tool_Bucket.png"));
    //ui->shapeButton->setIcon(QIcon(":/new/UI_Icons/Tool_ShapeCreator.png"));
    ui->undoButton->setIcon(QIcon(":/new/UI_Icons/Button_Undo.png"));
    ui->redoButton->setIcon(QIcon(":/new/UI_Icons/Button_Redo.png"));
    ui->zoomInButton->setIcon(QIcon(":/new/UI_Icons/Button_ZoomIn.png"));
    ui->zoomOutButton->setIcon(QIcon(":/new/UI_Icons/Button_ZoomOut.png"));

    // A white image to start with in the canvas
    QPixmap startImage(ui->canvasLabel->width(), ui->canvasLabel->height());
    QPainter paint(&startImage);
    startImage.fill(Qt::white );
    ui->canvasLabel->setPixmap(startImage);

    // Set height and width
    canvasLabelSize = ui->canvasLabel->height();

    // set frame combo box alliment & functionalities
    ui->framesComboBox->setEditable(true);
    ui->framesComboBox->lineEdit()->setReadOnly(true);
    ui->framesComboBox->lineEdit()->setAlignment(Qt::AlignCenter);
    ui->toolSizeBox->setDisabled(true);

    ui->shapeToolComboBox->setEditable(true);
    ui->shapeToolComboBox->lineEdit()->setReadOnly(true);
    ui->shapeToolComboBox->lineEdit()->setAlignment(Qt::AlignCenter);

    ui->canvasSizeComboBox->setEditable(true);
    ui->canvasSizeComboBox->lineEdit()->setReadOnly(true);
    ui->canvasSizeComboBox->lineEdit()->setAlignment(Qt::AlignCenter);

    // set color label
    ui->colorLabel->setStyleSheet("background-color: black");

    //connections
    //Tools
    connect(this,
            &View::setTool,
            &model,
            &model::updateTool);//UpdateTools

    connect(&model,
            &model::editPenSize,
            ui->toolSizeBox,
            &QSpinBox::setValue);

    //Frames
    connect(ui->addFrameButton,
            &QPushButton::clicked,
            &model,
            &model::addFrameBeforeCurr);

    connect(ui->insertFrameButton,
            &QPushButton::clicked,
            &model,
            &model::addFrameBeforeCurr);

    connect(ui->nextFrameButton,
            &QPushButton::clicked,
            &model,
            &model::nextFrame);

    connect(ui->lastFrameButton,
            &QPushButton::clicked,
            &model,
            &model::previousFrame);

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

    connect(ui->swapUpButton,
            &QPushButton::clicked,
            &model,
            &model::swapUp);

    connect(ui->swapDownButton,
            &QPushButton::clicked,
            &model,
            &model::swapDown);

    connect(&model,
            &model::enableSwapUp,
            this,
            &View::enableSwapUpButton);

    connect(&model,
            &model::disableSwapUp,
            this,
            &View::disableSwapUpButton);

    connect(&model,
            &model::enableSwapDown,
            this,
            &View::enableSwapDownButton);

    connect(&model,
            &model::disableSwapDown,
            this,
            &View::disableSwapDownButton);

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
    connect(&model,
            &model::enableStartButtons,
            this,
            &View::enableStartButtons);

    // color wheel
    connect(&model,
            &model::setColorLabel,
            this,
            &View::updateColorWheel);

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
            &View::zoomCanvas);
    connect(&model,
            &model::toZoomOut,
            this,
            &View::zoomCanvas);
    connect(&model,
            &model::enableZoomIn,
            this,
            &View::enableZoomInButton);
    connect(&model,
            &model::enableZoomOut,
            this,
            &View::enableZoomOutButton);

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

    //Initialize Shape Tool
    connect(ui->shapeToolComboBox,
            &QComboBox::activated,
            &model,
            &model::initializeShapeTool);

    //Canvas Connect
    connect(ui->canvasLabel, // mouse click
            &Canvas::sendMouseLoc,
            this,
            &View::mouseLoc);

    connect(this,
            &View::editCanvas,
            &model,
            &model::drawOnCanvas);
    connect(&model,
            &model::setCanvas,
            this,
            &View::updateCanvas);
    connect(ui->ClearButton,
            &QPushButton::clicked,
            &model,
            &model::clearCanvas);
    connect(ui->copyButton,
            &QPushButton::clicked,
            &model,
            &model::copyFrame);

    //Preview actual canvas
    connect(ui->previewButton,
            &QPushButton::clicked,
            &model,
            &model::previewOfFrames);
    connect(&model,
            &model::showSprite,
            this,
            &View::displaySprite);
    connect(&model,
            &model::showSprite,
            this,
            &View::on_actualSizeButton_clicked);

    // save file
    connect(ui->actionSave,
            &QAction::triggered,
            this,
            &View::saveFile);

    connect(this,
            &View::save,
            &model,
            &model::saveToFile);
    // open file
    connect(ui->actionOpen,
            &QAction::triggered,
            this,
            &View::openFile);
    connect(this,
            &View::open,
            &secWindowModel,
            &model::openFile);
    connect(&model,
            &model::updateCanvasComboBox,
            this,
            &View::updateCanvasComboBox);
    //new file
    connect(ui->actionNew,
            &QAction::triggered,
            this,
            &View::newWindow);

    //Warning for saving or opening file
    connect(&model,
            &model::errorMessage,
            this,
            &View::errorMessage);

    // mouse release for shapes
    connect(ui->canvasLabel, // mouse click
            &Canvas::sendMouseReleaseLoc,
            &model,
            &model::mouseRelease);
}

/********************View's Methods *****************************/
/**
 * @brief View::~View
 * destructor
 */
View::~View()
{
    delete ui;
}
/*************Canvas Updates **********************/
/**
 * @brief View::updateCanvas
 * Update's the canvas by outputing the QPixmap that
 * was tranformed into QImage and edited in model
 * @param currentPic
 */
void View::updateCanvas(QPixmap currentPic){

    //display our QPixmap into our canvas size
    ui->canvasLabel->setPixmap(currentPic.scaled(canvasLabelSize, canvasLabelSize));
    //display on actualsize label
    ui->actualSizeLabel->setPixmap(currentPic.scaled(ui->actualSizeLabel->width(),
                                                     ui->actualSizeLabel->height()));
    //Disable cobo box to set up size
    if(ui->canvasSizeComboBox->isEnabled()){
        ui->canvasSizeComboBox->setEnabled(false);
    }

    //updates the modified label
    ui->modifiedLabel->setText("Has been modified");
}

/***********Frame Updates **************/
/**
 * @brief View::updateFramesBox
 * Updates the combobox for the frames, when deleting or adding frames to the View.
 * @param page
 * Current Frame index
 * @param size
 * Total number of frames.
 */
void View::updateFramesBox(int page, int size){
    if(size > ui->framesComboBox->count()){
        ui->framesComboBox->addItem(QString::number(size));
    }

    if(size < ui->framesComboBox->count()){
        ui->framesComboBox->removeItem(ui->framesComboBox->count() - 1);
    }

    ui->framesComboBox->setCurrentText(QString::number(page));
    ui->framesComboBox->setCurrentIndex(page - 1);
}

/**
 * @brief View::updateFramesLabel
 * Updates the FramesLabel, current postion out of the total number of frames.
 * @param page
 * current index
 * @param size
 * total number of frames.
 */
void View::updateFramesLabel(int page, int size){
    QString str = QString::number(page);
    str.append("/");
    str.append(QString::number(size));

    ui->frameNumberLabel->setText(str);
}

/***** Tool Selection ****/
/**
 * @brief View::on_penButton_clicked
 *  Updates the current tool to pen, and sends it to the model.
 */
void View::on_penButton_clicked()
{
    emit setTool("pen");
}

/**
 * @brief View::on_eraserButton_clicked
 * Updates the current tool to eraser, and sends it to the model.
 */
void View::on_eraserButton_clicked()
{
    emit setTool("eraser");
}

/**
 * @brief View::on_bucketButton_clicked
 * Updates the current tool to bucket, and sends it to the model.
 */
void View::on_bucketButton_clicked()
{
    emit setTool("bucket");
}

/**
 * @brief View::on_shapeToolComboBox_activated
 * TODO:
 */
void View::on_shapeToolComboBox_activated()
{
    ui->toolSizeBox->setDisabled(false);
}

/************** Updates Color ***********/
/**
 * @brief View::pushColorButton
 * Opens Color Dialog, and returns the color selected, and sets that color to our tool in the model.
 * @param currentColor
 * currentColor we have from the model
 */
void View::pushColorButton(QColor currentColor){

    QColor newColor = QColorDialog::getColor(currentColor, nullptr, QString(), {QColorDialog::DontUseNativeDialog, QColorDialog::ShowAlphaChannel});

    if(newColor.isValid()){

        emit updateColor(newColor);
    }
}

/**
 * @brief View::updateColorWheel
 * Displays the color selected in the colorLabel.
 * @param color
 */
void View::updateColorWheel(QColor color){
    QString style = "background: rgba(%1, %2, %3, %4);";

    ui->colorLabel->setStyleSheet(style.arg(color.red()).arg(color.green()).arg(color.blue()).arg(color.alpha()));
}

/******* Enable and Disable Control Buttons *********/
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

void View::enableSwapUpButton(){
    ui->swapUpButton->setEnabled(true);
}

void View::enableSwapDownButton(){
    ui->swapDownButton->setEnabled(true);
}

void View::disableSwapUpButton(){
    ui->swapUpButton->setEnabled(false);
}

void View::disableSwapDownButton(){
    ui->swapDownButton->setEnabled(false);
}

void View::mouseLoc(QPoint &loc) // can delete later
{
    ui->posLabel->setText("x: " + QString::number(loc.x()) + " y: " + QString::number(loc.y()));
    //send the location of out mouse to our model
    emit editCanvas(loc);
}

/********************** Zoom Updates **************/

/**
 * @brief View::zoomCanvas
 * Displays the image with the given ratio to increase the size
 * @param currentPic
 * currentFrame
 * @param canvasSize
 * canvas current Size
 * @param zoomIndex
 * zoom current index
 */
void View::zoomCanvas(QPixmap currentPic, int canvasSize, int zoomIndex){
    int ratio = ui->canvasLabel->height()/canvasSize;

    canvasLabelSize = 400 +(ratio*(2*zoomIndex));
    //display our QPixmap into our canvas size

    ui->canvasLabel->setPixmap(currentPic.scaled(canvasLabelSize, canvasLabelSize, Qt::KeepAspectRatioByExpanding));
}

void View::enableZoomInButton(){
    ui->zoomInButton->setEnabled(true);
}
void View::enableZoomOutButton(){
    ui->zoomOutButton->setEnabled(true);
}

/**
 * @brief View::disableZoomButtons
 * It disables the buttons when in the model when
 * zooming is out of bounds.
 * @param zoomType
 */
void View::disableZoomButtons(std::string zoomType){
    if(zoomType == "zoomIn")
        ui->zoomInButton->setEnabled(false);
    else
        ui->zoomOutButton->setEnabled(false);
}

/**************** Save and Load ********************/
/**
 * @brief View::saveFile
 * Opens the file dialog and only allows user to save as .ssp file, and updates the view to no changes.
 */
void View::saveFile()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Save file", "C://",  tr("Sprite Sheet Project (*.ssp)"));
    emit save(fileName);

    //updates the text in the modified label to "no changes"
    ui->modifiedLabel->setText("No Changes");
}

/**
 * @brief View::openFile
 * Opens the file dialog and only allows user to open .ssp file extensions and opens it in a new window.
 */
void View::openFile()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Open file", "C://", tr("Sprite Sheet Project (*.ssp)"));
    createNewWindow();
    emit open(fileName);
}

/**
 * @brief View::errorMessage
 * Opens a warning message box, and displays passed message from model.
 * The message is an issue related to opening or saving a file locally.
 * @param message
 */
void View::errorMessage(QString message){

    QMessageBox::StandardButton errorBtn = QMessageBox::warning(this, "Sprite Editor",
                                                                message,
                                                                QMessageBox::Cancel | QMessageBox::Ok,
                                                                QMessageBox::Ok);
}

/**
 * @brief View::updateCanvasComboBox
 * updates the Canvas Size combobox in the view to be what our current canvasSize
 * @param canvasSize
 * canvasSize is from the model
 */
void View::updateCanvasComboBox(int canvasSize){

    int comboBoxIndex = 0;
    if(canvasSize == 2)
        comboBoxIndex = 0;
    else if(canvasSize == 4)
        comboBoxIndex = 1;
    else if(canvasSize == 5)
        comboBoxIndex = 2;
    else if(canvasSize == 8)
        comboBoxIndex = 3;
    else if(canvasSize == 10)
        comboBoxIndex = 4;
    else if(canvasSize == 16)
        comboBoxIndex = 5;
    else if(canvasSize == 20)
        comboBoxIndex = 6;
    else if(canvasSize == 25)
        comboBoxIndex = 7;
    else if(canvasSize == 40)
        comboBoxIndex = 8;
    else if(canvasSize == 50)
        comboBoxIndex = 9;
    else if(canvasSize == 80)
        comboBoxIndex = 10;
    else if(canvasSize == 100)
        comboBoxIndex = 11;
    else if(canvasSize == 200)
        comboBoxIndex = 12;
    else if(canvasSize == 400)
        comboBoxIndex = 13;

    ui->canvasSizeComboBox->setCurrentIndex(comboBoxIndex);
}

/******************* Checks before closing application **********/
/**
 * @brief View::closeEvent
 * Opens a warning message, letting the user know the file wasn't saved and giving them the choice to exit out or cancel the action.
 * @param event
 */
void View::closeEvent(QCloseEvent *event){

    if(ui->modifiedLabel->text() == "Has been modified"){
        QMessageBox::StandardButton closeBtn = QMessageBox::warning(this, "Sprite Editor",
                                                                    tr("Are you sure you want to close the Sprite Editor? \n Your work won't be saved."),
                                                                    QMessageBox::Cancel | QMessageBox::No | QMessageBox::Yes,
                                                                    QMessageBox::No);
        if(closeBtn != QMessageBox::Yes){
            event->ignore();
        }
        else{
            event->accept();
        }
    }
}

/********* Preview **************/
/**
 * @brief View::displaySprite
 * Displays the animation of all the frames in one cycle, in the actualSizeLabel.
 * @param currentFrame
 */
void View::displaySprite(QImage currentFrame){
    ui->actualSizeLabel->setPixmap(QPixmap::fromImage(currentFrame).scaled(ui->actualSizeLabel->width(),
                                                                           ui->actualSizeLabel->height()));
}

/**
 * @brief View::on_actualSizeButton_clicked
 * Previews the animation of the sprite on the CanvasPreview window.
 * @param currentFrame
 */
void View::on_actualSizeButton_clicked(QImage currentFrame)
{
    canvasPreview.updateCanvas(currentFrame);
    canvasPreview.show();
}

/**
 * @brief View::enableStartButtons
 * Enables buttons for the user once deciding on the canvasSize.
 */
void View::enableStartButtons(){
    ui->insertFrameButton->setEnabled(true);
    ui->addFrameButton->setEnabled(true);
    ui->copyButton->setEnabled(true);
    ui->ClearButton->setEnabled(true);
    ui->zoomInButton->setEnabled(true);
    ui->actionSave->setEnabled(true);
}

/****************** New Window *************/
/**
 * @brief View::newWindow
 * creates a new window
 */
void View::newWindow(){
    createNewWindow();
}

/****************** Helper Method's *****************/

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

void View::initShapeToolComboBox(){
    ui->shapeToolComboBox->addItem("Line");
    ui->shapeToolComboBox->addItem("Ellipse");
    ui->shapeToolComboBox->addItem("Rectangle");
}

/**
 * @brief View::createNewWindow
 * creates a new window. This is a helper method.
 */
void View::createNewWindow(){
    secWindow = new View(secWindowModel);
    secWindow->show();
}



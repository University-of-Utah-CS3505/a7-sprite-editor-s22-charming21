#include "model.h"
#include "qtimer.h"

model::model(QObject *parent)
    : QObject{parent}
{

    penColor.setRgb(0, 0, 0, 255);

    zoomIndex = 0;
    ratio = 400/20; //change to have it initialized
    framesPerSec = 1;
    currentFrame = 1;
    penSize = 1;
    eraserSize = 1;
    currentIndex = 0; //for keeping track of our current index in the list when displaying a sprite.
    canvasSize = 0; //Initialize with 0
}


void model::initializeCanvasSize(int index){
    switch(index){
    case 0:
        canvasSize = 2;
        zoomSize = 2;
        break;
    case 1:
        canvasSize = 4;
        zoomSize = 4;
        break;
    case 2:
        canvasSize = 5;
        zoomSize = 5;
        break;
    case 3:
        canvasSize = 8;
        zoomSize = 8;
        break;
    case 4:
        canvasSize = 10;
        zoomSize = 10;
        break;
    case 5:
        canvasSize = 16;
        zoomSize = 16;
        break;
    case 6:
        canvasSize = 20;
        zoomSize = 20;
        break;
    case 7:
        canvasSize = 25;
        zoomSize = 25;
        break;
    case 8:
        canvasSize = 40;
        zoomSize = 40;
        break;
    case 9:
        canvasSize = 50;
        zoomSize = 50;
        break;
    case 10:
        canvasSize = 80;
        zoomSize = 80;
        break;
    case 11:
        canvasSize = 100;
        zoomSize = 100;
        break;
    case 12:
        canvasSize = 200;
        zoomSize = 200;
        break;
    case 13:
        canvasSize = 400;
        zoomSize = 400;
        break;
    }

    //set up default values
    frames.append(QImage (canvasSize, canvasSize, QImage::Format_ARGB32));
    currentTool = SelectedTool::SC_Pen;

    //Make the first inage to have a white background
    frames[currentFrame-1].fill(Qt::white);
    undoStack.push(frames);
    emit startButtons();

}



// Add a new frame to the position next to the current frame
void model::addNewFrame(){
    QImage frame(canvasSize, canvasSize, QImage::Format_ARGB32);
    frame.fill(Qt::white);
    frames.insert(currentFrame, frame);

    // move to the new frame
    currentFrame++;

    emit updateFrameNumberCombo(currentFrame, frames.size());
    emit updateFrameNumberLabel(currentFrame, frames.size());
    emit enableDeleteButton();
    emit enableLastButton();
    emit enableSwapUp();

    emit enableUndo();
    undoStack.push(frames);

    // if the new frame is at the end of the list, disale next button
    if(currentFrame == frames.size()){
        emit disableNextButton();
    }

    //frames[currentFrame-1].fill(Qt::white);
    QPixmap map = QPixmap::fromImage(frames.at(currentFrame - 1));
    emit setCanvas(map);
}

// insert a new frame to the position before current frame
void model::insertNewFrame(){
    QImage frame(canvasSize, canvasSize, QImage::Format_ARGB32);
    frame.fill(Qt::white);
    frames.insert(currentFrame - 1, frame);

    emit updateFrameNumberCombo(currentFrame, frames.size());
    emit updateFrameNumberLabel(currentFrame, frames.size());
    emit enableDeleteButton();
    emit enableNextButton();
    emit enableSwapDown();

    emit enableUndo();
    undoStack.push(frames);

    if(currentFrame == 1){
        emit disableLastButton();
    }

    //frames[currentFrame-1].fill(Qt::white);
    QPixmap map = QPixmap::fromImage(frames.at(currentFrame - 1));
    emit setCanvas(map);
}

void model::nextFrame(){
    emit updateFrameNumberCombo(++currentFrame, frames.size());
    emit updateFrameNumberLabel(currentFrame, frames.size());

    emit enableLastButton();
    emit enableSwapUp();

    if(currentFrame == frames.size()){
        emit disableNextButton();
        emit disableSwapDown();
    }

     QPixmap map = QPixmap::fromImage(frames.at(currentFrame - 1));
     emit setCanvas(map);
}

void model::lastFrame(){
    emit updateFrameNumberCombo(--currentFrame, frames.size());
    emit updateFrameNumberLabel(currentFrame, frames.size());

    emit enableNextButton();
    emit enableSwapDown();

    if(currentFrame == 1){
        emit disableLastButton();
        emit disableSwapUp();
    }

    QPixmap map = QPixmap::fromImage(frames.at(currentFrame - 1));
    emit setCanvas(map);
}

void model::deleteFrame(){
    frames.removeAt(currentFrame - 1);

    if(frames.size() == 1){
        emit disableNextButton();
        emit disableLastButton();
        emit disableDeleteButton();
        emit disableSwapDown();
        emit disableSwapUp();
    }

    // if the last frame is deleted
    if(currentFrame - 1 == frames.size()){
        currentFrame--;
        emit disableNextButton();
        emit disableSwapDown();
    }

    emit enableUndo();
    undoStack.push(frames);

    QPixmap map = QPixmap::fromImage(frames.at(currentFrame - 1));
    emit setCanvas(map);

    emit updateFrameNumberCombo(currentFrame, frames.size());
    emit updateFrameNumberLabel(currentFrame, frames.size());
}

void model::swapUp(){
    frames.swapItemsAt(currentFrame - 1, currentFrame - 2);
    currentFrame--;

    undoStack.push(frames);
    emit enableUndo();

    emit enableNextButton();
    emit enableSwapDown();

    if(currentFrame == 1){
        emit disableLastButton();
        emit disableSwapUp();
    }

    emit updateFrameNumberCombo(currentFrame, frames.size());
    emit updateFrameNumberLabel(currentFrame, frames.size());

    QPixmap map = QPixmap::fromImage(frames.at(currentFrame - 1));
    emit setCanvas(map);
}

void model::swapDown(){
    frames.swapItemsAt(currentFrame - 1, currentFrame);
    currentFrame++;

    undoStack.push(frames);
    emit enableUndo();

    emit enableLastButton();
    emit enableSwapUp();

    if(currentFrame == frames.size()){
        emit disableNextButton();
        emit disableSwapDown();
    }

    emit updateFrameNumberCombo(currentFrame, frames.size());
    emit updateFrameNumberLabel(currentFrame, frames.size());

    QPixmap map = QPixmap::fromImage(frames.at(currentFrame - 1));
    emit setCanvas(map);
}

void model::clearCanvas(){
    QImage frame(canvasSize, canvasSize, QImage::Format_ARGB32);
    frame.fill(Qt::white);
    frames.replace(currentFrame - 1, frame);

    emit enableUndo();
    undoStack.push(frames);

    QPixmap map = QPixmap::fromImage(frame);
    emit setCanvas(map); 
}

void model::copyFrame(){
    QImage frame = QImage(frames.at(currentFrame - 1));
    frames.insert(currentFrame++, frame);

    emit updateFrameNumberCombo(currentFrame, frames.size());
    emit updateFrameNumberLabel(currentFrame, frames.size());
    emit enableDeleteButton();
    emit enableSwapUp();
    emit enableLastButton();
    emit enableUndo();
    undoStack.push(frames);

    //frames[currentFrame-1].fill(Qt::white);
    QPixmap map = QPixmap::fromImage(frame);
    emit setCanvas(map);
}

//Need to implement the change of pixels to edit
//This method increases the size of the image, and sends it back to the
//view  to be displayed in the canvas
void model::zoomIn(){

    //Check if it is within bounds
    if(zoomSize > 2 ){
        //canvas height and width changes (the display will be different)
        zoomSize = zoomSize -2;
        zoomIndex++;

        QPixmap currentPic;
        //Convert QImage to QPixmap
        currentPic.convertFromImage(frames[currentFrame-1]); //maybe resize?
        //Return the pixmap of our QImage with the scaled version
        emit toZoomIn(currentPic, zoomSize, zoomIndex);
        emit enableZoomOut();
    }
    else
        emit disableZoom("zoomIn");

}


void model::zoomOut(){

    //Check if is within bounds
    if(zoomSize < canvasSize){
        zoomSize = zoomSize +2;
        zoomIndex--;

        QPixmap currentPic;
        //Convert QImage to QPixmap
        currentPic.convertFromImage(frames[currentFrame-1]);
        //Return the pixmap of our QImage with the scaled version
        emit toZoomOut(currentPic, zoomSize, zoomIndex);
        emit enableZoomIn();
    }
    else
        emit disableZoom("zoomOut");

}



void model::updateFPS(int fps){
    framesPerSec = fps;
}

void model::updatePenSize(int size){
    //penSize = size;
    penSize += size;
}

void model::updateEraserSize(int size){
    eraserSize = size;   
}

void model::setStartingArea(int, int){
    //TODO:
}

void model::checkCurrentColor(QColor){
    emit sendCurrentColor(penColor);
}

void model::updatePenColor(QColor color){
    penColor = color;
    emit setColorLabel(penColor);
}

//updates our current tool we are using
void model::updateTool(std::string tool){
    //Should we do a switch case? if we do, we have to change parameters (bri)
    if(tool == "pen")
        currentTool = SelectedTool::SC_Pen;
    else if(tool == "eraser")
        currentTool = SelectedTool::SC_Eraser;
    else if(tool == "bucket")
        currentTool = SelectedTool::SC_Bucket;
    else if(tool == "shapeCreator")
        currentTool = SelectedTool::SC_ShapeCreator;
}

//Don't need the QList as Parameter??
void model::getList(QList<QImage>){
    //TODO:
    emit sendList(frames);
}

//need change parameters?
void model::undo(){
    redoStack.push(undoStack.pop());
    emit enableRedo();
    if(undoStack.size() == 1){
        emit disableUndo();
    }


    QList<QImage> previousFrames = undoStack.at(undoStack.size() - 1);

    if(previousFrames.size() > frames.size()){
        currentFrame++;
    }

    if(frames.size() > previousFrames.size() && currentFrame == previousFrames.size() + 1){
        currentFrame--;
    }

    frames = previousFrames;

    if(frames.size() == 1){
        emit disableDeleteButton();
    }
    else{
        emit enableDeleteButton();
    }


    if(frames.size() > currentFrame){
        emit enableNextButton();
        emit enableSwapDown();
    }
    else if(frames.size() == currentFrame){
        emit disableNextButton();
        emit disableSwapDown();
    }

    if(currentFrame > 1){
        emit enableLastButton();
        emit enableSwapUp();
    }
    else{
        emit disableLastButton();
        emit disableSwapUp();
        emit disableSwapDown();
    }

    QPixmap map = QPixmap::fromImage(frames.at(currentFrame - 1));
    emit updateFrameNumberLabel(currentFrame, frames.size());
    emit updateFrameNumberCombo(currentFrame, frames.size());
    emit setCanvas(map);
}

//need change parameters?
void model::redo(){
    frames = redoStack.pop();

    undoStack.push(frames);

    emit enableUndo();

    if(frames.size() > currentFrame){
        currentFrame++;
        emit disableNextButton();
        emit disableSwapDown();
    }
    else if(frames.size() == currentFrame){
        emit disableNextButton();
        emit disableSwapDown();
    }
    else{
        currentFrame = frames.size();
        emit disableSwapDown();
    }

    if(frames.size() == 1){
        emit disableDeleteButton();
        emit disableSwapUp();
        emit disableSwapDown();
    }
    else{
        emit enableDeleteButton();
    }

    if(redoStack.size() == 0){
        emit disableRedo();
    }

    if(currentFrame > 1){
        emit enableLastButton();
        emit enableSwapUp();
    }
    else{
        emit disableLastButton();
    }

    emit updateFrameNumberLabel(currentFrame, frames.size());
    emit updateFrameNumberCombo(currentFrame, frames.size());
    QPixmap map = QPixmap::fromImage(frames.at(currentFrame - 1));
    emit setCanvas(map);
}

void model::saveFrameToStack(){
    emit enableUndo();
    undoStack.push(frames);
}

//Frame that we are currently in
void model::selectedFrame(int index){
    currentFrame = index + 1;

    QPixmap map = QPixmap::fromImage(frames.at(currentFrame - 1));
    emit setCanvas(map);
    emit updateFrameNumberLabel(currentFrame, frames.size());

    if(currentFrame == frames.size()){
        emit disableNextButton();
        emit disableSwapDown();
    }
    else if(currentFrame < frames.size()){
        emit enableNextButton();
        emit enableSwapDown();
    }

    if(currentFrame == 1){
        emit disableLastButton();
        emit disableSwapUp();
    }
    else if(currentFrame > 1){
        emit enableLastButton();
        emit enableSwapUp();
    }
}

//updates the toolsize, we first check our selected tool
void model::updateToolSize(int size){

    //change to a switch case if we add more brushes
    if(currentTool == SelectedTool::SC_Eraser)
        updateEraserSize(size);
    else if(currentTool == SelectedTool::SC_Pen)
        updatePenSize(size);
}

void model::updatePixels(int initialX, int initialY, int endX, int endY){
    switch(currentTool){
        case SelectedTool::SC_Pen:
            updatePixelsByPen(initialX,initialY);
            break;
        case SelectedTool::SC_Eraser:
            updatePixelsByEraser(initialX, initialY);
            break;
        case SelectedTool::SC_Bucket:
            updatePixelsByBucketFiller(initialX, initialY);
            break;
        case SelectedTool::SC_ShapeCreator:
            updatePixelsByShapeCreator(initialX, initialY, endX, endY);
            break;
        default:
            break;
    }
}

void model::updatePixelsByPen(int x, int y){
    QImage* AFrame = &frames[currentFrame -1];
    QPainter Painter(AFrame);
    QPen Pen(penColor);
    Pen.setWidth(penSize);
    Painter.setPen(Pen);
    Painter.drawPoint(x,y);
    Painter.end();
}

void model::updatePixelsByEraser(int x, int y){
    QImage* AFrame = &frames[currentFrame -1];
    QPainter Painter(AFrame);
    // Give QPen a white color to act as eraser
    QPen Pen(QColor(255,255,255));
    Pen.setWidth(eraserSize);
    Painter.setPen(Pen);
    Painter.drawPoint(x,y);
    Painter.end();
}

void model::updatePixelsByShapeCreator(int initialX, int initialY, int endX, int endY){
    // Set pen specs for shape creator
    QImage* AFrame = &frames[currentFrame -1];
    QPainter Painter(AFrame);
    QPen Pen(penColor);
    Pen.setWidth(penSize);
    Painter.setPen(Pen);

    switch(currentShape){
        case ShapeCreator::SC_Line:
            Painter.drawLine(initialX, initialY, endX, endY);
            Painter.end();
            break;
        case ShapeCreator::SC_Ciecle:
            Painter.drawEllipse(initialX, initialY, initialX-endX, initialY-endY);
            Painter.end();
            break;
        case ShapeCreator::SC_Rectangle:
            Painter.drawRect(initialX, initialY, initialX-endX, initialY-endY);
            Painter.end();
            break;
        default:
            break;
    }
}

void model::updatePixelsByBucketFiller(int x, int y){
    QColor colorToBeChanged = (frames[currentFrame -1]).pixelColor(x,y);

    QSize sizeOfFrame = frames[currentFrame-1].size();

    for(int pixelX=0; pixelX<sizeOfFrame.width(); pixelX++){
        for(int pixelY=0; pixelY<sizeOfFrame.height(); pixelY++){
            if(frames[currentFrame-1].pixelColor(pixelX, pixelY) == colorToBeChanged)
                frames[currentFrame-1].setPixelColor(pixelX, pixelY, penColor);
        }
    }
}


//This method obtains where the current position of the mouse is in our canvas
//then it optains the ratio
void model::drawOnCanvas(QPoint pixelPoint){

    //Check it it has been initialized with a size
    if(canvasSize == 0){
        //Default Values
        canvasSize = 20;
        zoomSize = 20;
        // default values to be determined        
        frames.append(QImage (canvasSize, canvasSize, QImage::Format_ARGB32));
        currentTool = SelectedTool::SC_Pen;
        //Make the first inage to have a white background
        frames[currentFrame-1].fill(Qt::white);
        undoStack.push(frames);
        emit startButtons();
    }

    //Get the position to paint
     ratio = 400/ zoomSize;
     int x = (pixelPoint.x()/ratio) + zoomIndex;
     int y = (pixelPoint.y()/ratio) + zoomIndex;

    updatePixels(x,y);
    //Create a Pixmap to return to view
    QPixmap currentPic;
    //Convert QImage to QPixmap
    currentPic.convertFromImage(frames[currentFrame-1]);
    //Return the pixmap of our QImage
    emit setCanvas(currentPic);
}


void model::updateCanvasSize()
{
    canvasSize += 1;
}

void model::previewOfFrames(){
    int time = 2000/framesPerSec;

    for(int i = 0; i < frames.size(); i++)
    {
        QTimer::singleShot(time * i, this, &model::updateActualLabel);
    }
}

void model::updateActualLabel(){

    emit showSprite(frames[currentIndex]);

    //is there a way to access an index in frames without a instance current variable.
    currentIndex++;
    if(currentIndex == frames.size())
        currentIndex = 0;
}

//save file
void model::save(QString fileName){//QJsonObject &json) const{ //change parameters
    QJsonObject json;

    int n = 0;
    json["height"] = canvasSize;
    json["width"] = canvasSize;
    json["numberOfFrames"] = frames.size();

    //*******Important******//
    // x and y coordinate are switched, x is columns and y is rows, to fix this
    // i will have rowNum go in the Y in the forloo for pixel when we get pixelcolor
    // and pixelNum will go in the X in the forloop for pixe when we get pixelcolor.
    //I'm doing this so it can fit the requirements in Q6 //
    //*******Important*******//
    QJsonObject framesObj;
    for(QImage a : frames)
    {
        QJsonArray frame;
        for(int rowNum = 0 ; rowNum < canvasSize; rowNum++)
        {
            QJsonArray row;
            for(int pixelNum = 0; pixelNum < canvasSize; pixelNum++)
            {
                QJsonObject pixel;
                QString pixelName = "pixel" + QString::number(pixelNum);
                pixel["r"] = a.pixelColor(pixelNum,rowNum).red();
                pixel["g"] = a.pixelColor(pixelNum,rowNum).green();
                pixel["b"] = a.pixelColor(pixelNum,rowNum).blue();
                pixel["a"] = a.pixelColor(pixelNum,rowNum).alpha();
                row.append(pixel);
            }
            QString rowName = "row" + QString::number(rowNum);
            frame.append(row);
        }
        QString frameName = "Frame" + QString::number(n);
        framesObj[frameName] = frame;
        n++;
    }

    json["frames"] = framesObj;
    QJsonDocument doc(json);

    //to print our in application output (testing)
    //QString strJson(doc.toJson(QJsonDocument::Compact));
    //std::cout<<strJson.toStdString()<<std::endl;

    QFile jsonFile(fileName + ".ssp");
    jsonFile.open(QFile::WriteOnly);
    jsonFile.write(doc.toJson());


}

//Read/Open file
void model::read(QString filePath){
//    TODO: Still trying to figure this out (Brittney)
//    QJsonDocument doc;

//    QFile loadFile(filePath);
//    if(loadFile.open(QIODevice::ReadOnly))
//        doc = QJsonDocument().fromJson(loadFile.readAll());
//    if(!doc.isEmpty())
//    {

//    }
}

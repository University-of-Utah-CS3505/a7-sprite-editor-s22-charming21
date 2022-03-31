#include "model.h"
#include "qtimer.h"

model::model(QObject *parent)
    : QObject{parent}
{
    penColor.setRgb(0, 0, 0, 255);
    canvasHeight = 20;
    canvasWidth = 20;
    zoomHeight = 20;
    zoomWidth = 20;
    framesPerSec = 1;
    currentFrame = 1;
    penSize = 1;
    eraserSize = 1;
    currentIndex = 0; //for keeping track of our current index in the list when displaying a sprite.
    // default values to be determined
    frames.append(QImage (canvasHeight, canvasWidth, QImage::Format_ARGB32));

//    //gon
//    frames.append(QImage (360, 360, QImage::Format_ARGB32));
//    //

    //Make the first inage to have a white background
    frames[currentFrame-1].fill(Qt::white);



}

// add a new frame to the position next to the current frame
void model::addNewFrame(){
    QImage frame(canvasHeight, canvasWidth, QImage::Format_ARGB32);
    frames.insert(currentFrame, frame);

    // move to the new frame
    currentFrame++;

    emit updateFrameNumberCombo(currentFrame, frames.size());
    emit updateFrameNumberLabel(currentFrame, frames.size());
    emit enableDeleteButton();
    emit enableLastButton();

    // if the new frame is at the end of the list, disale next button
    if(currentFrame == frames.size()){
        emit disableNextButton();
    }
    frames[currentFrame-1].fill(Qt::white);
    QPixmap map = QPixmap::fromImage(frames.at(currentFrame - 1));
    emit goToFrame(map);
}

// insert a new frame to the position before current frame
void model::insertNewFrame(){
    QImage frame(canvasHeight, canvasWidth, QImage::Format_ARGB32);
    frames.insert(currentFrame - 1, frame);

    emit updateFrameNumberCombo(currentFrame, frames.size());
    emit updateFrameNumberLabel(currentFrame, frames.size());
    emit enableDeleteButton();
    emit enableNextButton();

    if(currentFrame == 1){
        emit disableLastButton();
    }

    frames[currentFrame-1].fill(Qt::white);
    QPixmap map = QPixmap::fromImage(frames.at(currentFrame - 1));
    emit goToFrame(map);
}

void model::nextFrame(){
    emit updateFrameNumberCombo(++currentFrame, frames.size());
    emit updateFrameNumberLabel(currentFrame, frames.size());

    emit enableLastButton();
    if(currentFrame == frames.size()){
        emit disableNextButton();
    }

     QPixmap map = QPixmap::fromImage(frames.at(currentFrame - 1));
     emit goToFrame(map);
}

void model::lastFrame(){
    emit updateFrameNumberCombo(--currentFrame, frames.size());
    emit updateFrameNumberLabel(currentFrame, frames.size());

    emit enableNextButton();
    if(currentFrame == 1){
        emit disableLastButton();
    }

    QPixmap map = QPixmap::fromImage(frames.at(currentFrame - 1));
    emit goToFrame(map);
}

void model::deleteFrame(){
    frames.removeAt(currentFrame - 1);

    if(frames.size() == 1){
        emit disableNextButton();
        emit disableLastButton();
        emit disableDeleteButton();
    }

    if(currentFrame == frames.size()){
        emit disableNextButton();
    }

    // if the last frame is deleted
    if(currentFrame - 1 == frames.size()){
        currentFrame--;
        QPixmap map = QPixmap::fromImage(frames.at(currentFrame - 1));
        emit goToFrame(map);
    }
    else{
        QPixmap map = QPixmap::fromImage(frames.at(currentFrame - 1));
        emit goToFrame(map);
    }

    emit updateFrameNumberCombo(currentFrame, frames.size());
    emit updateFrameNumberLabel(currentFrame, frames.size());
}

//Need to Fix
//This method increases the size of the image, and sends it back to the
//view  to be displayed in the canvas
void model::zoomIn(){    

    //Decrease our height and Width if is not out of bounds
    //CHANGE: Make another emit that sends message to vew and it desable zoom Out button
    if(zoomHeight - 5 < 4 || zoomWidth - 5 < 4){
        zoomHeight = zoomHeight - 5;
        zoomWidth = zoomWidth - 5;
    }

    //Set our Image to the scaled version
    //frames[currentFrame-1] = frames[currentFrame-1].scaled(canvasWidth, canvasHeight);

    //setWorldTransform
    //Create a Pixmap to return to view
    QPixmap currentPic;
    //Convert QImage to QPixmap
    currentPic.convertFromImage(frames[currentFrame-1]);
    //Return the pixmap of our QImage with the scaled version

    emit setCanvas(currentPic.scaled(zoomWidth, zoomHeight));
    //emit setCanvas(frames[currentFrame -1]);
}

//Need to Fix
//This method decreases the size of the image, and sends it back to the
//view  to be displayed in the canvas
void model::zoomOut(){
    //Increase our height and Width if is not out of bounds
    //CHANGE: Make another emit that sends message to vew and it desable zoom Out button
    if(zoomHeight + 5 > canvasHeight || zoomWidth + 5 > canvasWidth){
        zoomHeight = zoomHeight + 5;
        zoomWidth = zoomWidth + 5;
    }

    //Set our Image to the scaled version
    //frames[currentFrame-1] = frames[currentFrame-1].scaled(canvasWidth, canvasHeight);

    //Create a Pixmap to return to view
    QPixmap currentPic;
    //Convert QImage to QPixmap
    currentPic.convertFromImage(frames[currentFrame-1]);
    //Return the pixmap of our QImage with the scaled version
    emit setCanvas(currentPic.scaled(zoomWidth, zoomHeight));
    //emit setCanvas(frames[currentFrame -1]);


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
        currentTool = SelectedTool::Tool_Pen;
    else if(tool == "eraser")
        currentTool = SelectedTool::Tool_Eraser;
    else if(tool == "bucket")
        currentTool = SelectedTool::Tool_Bucket;
    else if(tool == "shapeCreator")
        currentTool = SelectedTool::Tool_ShapeCreator;
}

//Don't need the QList as Parameter??
void model::getList(QList<QImage>){
    //TODO:
    emit sendList(frames);
}

//need change parameters?
void model::undo(){
    //TODO
}

//need change parameters?
void model::redo(){
    //TODO
}

//Frame that we are currently in
void model::selectedFrame(int index){
    currentFrame = index + 1;
    QPixmap map = QPixmap::fromImage(frames.at(currentFrame - 1));
    emit goToFrame(map);
    emit updateFrameNumberLabel(currentFrame, frames.size());

    if(currentFrame == frames.size()){
        emit disableNextButton();
    }
    else if(currentFrame == 1){
        emit disableLastButton();
    }
    else{
        emit enableNextButton();
        emit enableLastButton();
    }


}

//updates the toolsize, we first check our selected tool
void model::updateToolSize(int size){

    //change to a switch case if we add more brushes
    if(currentTool == SelectedTool::Tool_Eraser)
        updateEraserSize(size);
    else if(currentTool == SelectedTool::Tool_Pen)
        updatePenSize(size);
}

void model::updatePixels(int x, int y){
    switch(currentTool){
        case SelectedTool::Tool_Pen:
            updatePixelsByPen(x,y);
            break;
        case SelectedTool::Tool_Eraser:
            //updatePixelsByEraser(x,y);
            break;
        case SelectedTool::Tool_Bucket:
            //updatePixelsByBucket(x,y);
            break;
        case SelectedTool::Tool_ShapeCreator:
            //updatePixelsByShapeCreator(x,y);
            break;
        default:
            break;
    }

    //emit or call another method?
}

//// gon

//void model::updatePixels2(int sx, int sy, int ex, int ey){
//    std::cout << "hit" << std::endl;

//    switch(currentTool){
//        case SelectedTool::Tool_Pen:
//            updatePixelsByPen2(sx,sy,ex,ey);
//            break;
//        case SelectedTool::Tool_Eraser:
//            //updatePixelsByEraser(x,y);
//            break;
//        case SelectedTool::Tool_Bucket:
//            //updatePixelsByBucket(x,y);
//            break;
//        case SelectedTool::Tool_ShapeCreator:
//            //updatePixelsByShapeCreator(x,y);
//            break;
//        default:
//            break;
//    }

//    //emit or call another method?
//}

void model::updatePixelsByPen(int x, int y){
    QImage* AFrame = &frames[currentFrame -1];
    QPainter Painter(AFrame);
    QPen Pen(penColor);
    Pen.setWidth(penSize);
    Pen.setColor(penColor);
    Painter.setPen(Pen);
    Painter.drawPoint(x,y);
    Painter.end();
}

//void model::updatePixelsByPen2(int sx, int sy, int ex, int ey){
//    //QPen Pen(penColor);
//    for(int x = sx; x < ex; x++){
//        for(int y = sy; y < ey; y++){
//            frames[currentFrame -1].setPixel(x,y,penColor.rgba());
//        }
//    }
//}


//This method obtains where the current position of the mouse is in our canvas
//then it optains the ratio
void model::drawOnCanvas(QPoint pixelPoint){
    //Set the canvas ratio -> Canvas Label Size / number of pixels
    //(Choose height, but height and width should all be the same)
    std::cout << canvasHeight << std::endl;
    ratio = 360/canvasHeight;
    //Calculate x and y position of our QImage pixels
    int x = pixelPoint.x()/ratio;
    int y = pixelPoint.y()/ratio;

    //gon added
    int pointStartX = x * ratio;
    int pointStartY = y * ratio;
    int pointEndX = pointStartX + (penSize * ratio);
    int pointEndY = pointStartY + (penSize * ratio);

    std::cout << pointStartX << " " << pointStartY << std::endl;
    std::cout << pointEndX << " " << pointEndY << std::endl;

    //Edit the pixels of the current QImage
    //frames[currentFrame -1].setPixelColor(x, y,penColor);

    updatePixels(x,y);
    //Create a Pixmap to return to view
    QPixmap currentPic;
    //Convert QImage to QPixmap
    currentPic.convertFromImage(frames[currentFrame-1]);
    //Return the pixmap of our QImage
    emit setCanvas(currentPic);

//    //gon//
//    updatePixels2(pointStartX, pointStartY,pointEndX, pointEndY);
//    QPixmap currentPic;
//    //Convert QImage to QPixmap
//    currentPic.convertFromImage(frames[currentFrame -1]);
//    //Return the pixmap of our QImage
//    emit setCanvas(currentPic);
//    //////




}

void model::updateCanvasSize()
{
    canvasHeight += 1;
    canvasWidth += 1;
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
void model::save(){//QJsonObject &json) const{ //change parameters
    QJsonObject json;

    int n = 0;
    json["height"] = canvasHeight;
    json["width"] = canvasWidth;
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
        for(int rowNum = 0 ; rowNum < canvasHeight; rowNum++)
        {
            QJsonArray row;
            for(int pixelNum = 0; pixelNum < canvasWidth; pixelNum++)
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

    QFile jsonFile("test.ssp");
    jsonFile.open(QFile::WriteOnly);
    jsonFile.write(doc.toJson());


}

void model::savebtn(bool testbool){
    save();
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

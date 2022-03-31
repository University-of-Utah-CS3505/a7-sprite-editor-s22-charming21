#include "model.h"
#include "qtimer.h"

model::model(QObject *parent)
    : QObject{parent}
{

    penColor.setRgb(0, 0, 0, 255);
    canvasHeight = 20; //Change to have it initialized
    canvasWidth = 20; //Change to have it initialized
    zoomHeight = 20; //Change to have it initialized
    zoomWidth = 20; //Change to have it initialized
    zoomIndex = 0;
    ratio = 360/20; //change to have it initialized
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
    undoStack.push(frames);


}

// add a new frame to the position next to the current frame
void model::addNewFrame(){
    QImage frame(canvasHeight, canvasWidth, QImage::Format_ARGB32);
    frame.fill(Qt::white);
    frames.insert(currentFrame, frame);

    // move to the new frame
    currentFrame++;

    emit updateFrameNumberCombo(currentFrame, frames.size());
    emit updateFrameNumberLabel(currentFrame, frames.size());
    emit enableDeleteButton();
    emit enableLastButton();
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
    QImage frame(canvasHeight, canvasWidth, QImage::Format_ARGB32);
    frame.fill(Qt::white);
    frames.insert(currentFrame - 1, frame);

    emit enableUndo();
    undoStack.push(frames);

    emit updateFrameNumberCombo(currentFrame, frames.size());
    emit updateFrameNumberLabel(currentFrame, frames.size());
    emit enableDeleteButton();
    emit enableNextButton();

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
    if(currentFrame == frames.size()){
        emit disableNextButton();
    }

     QPixmap map = QPixmap::fromImage(frames.at(currentFrame - 1));
     emit setCanvas(map);
}

void model::lastFrame(){
    emit updateFrameNumberCombo(--currentFrame, frames.size());
    emit updateFrameNumberLabel(currentFrame, frames.size());

    emit enableNextButton();
    if(currentFrame == 1){
        emit disableLastButton();
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
    }

    if(currentFrame == frames.size()){
        emit disableNextButton();
    }

    // if the last frame is deleted
    if(currentFrame - 1 == frames.size()){
        currentFrame--;
        QPixmap map = QPixmap::fromImage(frames.at(currentFrame - 1));
        emit setCanvas(map);
    }
    else{
        QPixmap map = QPixmap::fromImage(frames.at(currentFrame - 1));
        emit setCanvas(map);
    }

    emit enableUndo();
    undoStack.push(frames);

    emit updateFrameNumberCombo(currentFrame, frames.size());
    emit updateFrameNumberLabel(currentFrame, frames.size());
}

//Need to implement the change of pixels to edit
//This method increases the size of the image, and sends it back to the
//view  to be displayed in the canvas
void model::zoomIn(){

    //Check if it is within bounds
    if(zoomHeight > 2 ){
        //canvas height and width changes (the display will be different)
        zoomHeight = zoomHeight -2;
        zoomWidth = zoomWidth -2;
        zoomIndex++;

        QPixmap currentPic;
        //Convert QImage to QPixmap
        currentPic.convertFromImage(frames[currentFrame-1]); //maybe resize?
        //Return the pixmap of our QImage with the scaled version
        emit toZoomIn(currentPic, zoomWidth, zoomIndex);
    }
    else
        emit disableZoom("zoomIn");

}


void model::zoomOut(){

    //Check if is within bounds
    if(zoomHeight < canvasHeight){
        zoomHeight = zoomHeight +2;
        zoomWidth = zoomWidth +2;
        zoomIndex--;

        QPixmap currentPic;
        //Convert QImage to QPixmap
        currentPic.convertFromImage(frames[currentFrame-1]);
        //Return the pixmap of our QImage with the scaled version
        emit toZoomOut(currentPic, zoomHeight, zoomIndex);
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

    if(frames.size() > previousFrames.size() && currentFrame == previousFrames.size() + 1){
        currentFrame--;
    }

    frames = previousFrames;

    if(frames.size() > currentFrame){
        emit enableNextButton();
    }
    else if(frames.size() == currentFrame){
        emit disableNextButton();
    }

    if(currentFrame > 1){
        emit enableLastButton();
    }
    else{
        emit disableLastButton();
    }

    QPixmap map = QPixmap::fromImage(frames.at(currentFrame - 1));
    emit updateFrameNumberLabel(currentFrame, frames.size());
    emit updateFrameNumberCombo(currentFrame, frames.size());
    emit setCanvas(map);
}

//need change parameters?
void model::redo(){
    frames = redoStack.pop();

    if(frames.size() > currentFrame){
        currentFrame++;
    }

    undoStack.push(frames);

    emit enableUndo();

    if(frames.size() > currentFrame){
        emit enableNextButton();
    }
    else if(frames.size() == currentFrame){
        emit disableNextButton();
    }
    else{
        currentFrame = frames.size();
    }

    if(redoStack.size() == 0){
        emit disableRedo();
    }




    if(currentFrame > 1){
        emit enableLastButton();
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

    if(undoStack.size() > 10000){
        undoStack.pop_back();
    }
}

//Frame that we are currently in
void model::selectedFrame(int index){
    currentFrame = index + 1;
    std::cout << "current: " << currentFrame << " size: " << frames.size() << std::endl;

    QPixmap map = QPixmap::fromImage(frames.at(currentFrame - 1));
    emit setCanvas(map);
    emit updateFrameNumberLabel(currentFrame, frames.size());

    if(currentFrame == frames.size()){
        emit disableNextButton();
    }

    if(currentFrame < frames.size()){
        emit enableNextButton();
    }

    if(currentFrame > frames.size()){
        emit enableLastButton();
    }

    if(currentFrame == 1){
        emit disableLastButton();
    }
    else if(frames.size() != 1){
        emit enableLastButton();
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
            //updatePixelsByBucket(x,y);
            break;
        case SelectedTool::SC_ShapeCreator:
            updatePixelsByShapeCreator(initialX, initialY, endX, endY);
            break;
        default:
            break;
    }

    //emit or call another method?
}

// gon

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
    QList<std::tuple<int,int>> pixelsToBeFilled;
    pixelsToBeFilled.append(std::tuple<int,int>(x,y));
    QColor colorToBeChanged = (frames[currentFrame -1]).pixelColor(x,y);
    pixelsToBeFilled = FindPixelsWithTheSameColorInBound(pixelsToBeFilled, frames[currentFrame-1], colorToBeChanged,x,y);

    for(std::tuple<int,int> coordinates : pixelsToBeFilled){
        QImage* AFrame = &frames[currentFrame -1];
        AFrame->setPixelColor(get<0>(coordinates), get<1>(coordinates), penColor);
    }
}

QList<std::tuple<int,int>> model::FindPixelsWithTheSameColorInBound(QList<std::tuple<int,int>> coordinates,
                                                                    const QImage frame,
                                                                    const QColor colorToBeChanged,
                                                                    int x,
                                                                    int y){
    // If it is not the color we wanna change (reach the edge)
    if(frame.pixelColor(x,y) != colorToBeChanged)
        return coordinates;
    // If we have arrived the current pixel earlier, return
    if(coordinates.contains(std::tuple<int,int>(x,y)))
        return coordinates;
    // Check if it goes out of the canvas
    if(x < 0 || x > 360 || y < 0 || y > 360)
        return coordinates;

    // add the current coordinate into the list of pixel coordinates.
    coordinates.append(std::tuple<int,int>(x,y));

    FindPixelsWithTheSameColorInBound(coordinates, frame, colorToBeChanged, x + 1, y);
    FindPixelsWithTheSameColorInBound(coordinates, frame, colorToBeChanged, x, y + 1);
    FindPixelsWithTheSameColorInBound(coordinates, frame, colorToBeChanged, x - 1, y);
    FindPixelsWithTheSameColorInBound(coordinates, frame, colorToBeChanged, x, y - 1);
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

    int x;
    int y;
    //1. Know if we are zoomed in
    if(canvasHeight != zoomHeight ){
        ratio = 360/ zoomHeight;
        x = (pixelPoint.x()/ratio) + zoomIndex;
        y = (pixelPoint.y()/ratio) + zoomIndex;


    }
    //To fix: assign the value that is given by the canvas, to the actual pixel correspondadn
    //to our class.
    else {
        ratio = 360/canvasHeight;
        //Calculate x and y position of our QImage pixels
        x = pixelPoint.x()/ratio;
        y = pixelPoint.y()/ratio;
    }




    //gon added
//    int pointStartX = x * ratio;
//    int pointStartY = y * ratio;
//    int pointEndX = pointStartX + (penSize * ratio);
//    int pointEndY = pointStartY + (penSize * ratio);

//    std::cout << pointStartX << " " << pointStartY << std::endl;
//    std::cout << pointEndX << " " << pointEndY << std::endl;

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
void model::save(QString fileName){//QJsonObject &json) const{ //change parameters
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

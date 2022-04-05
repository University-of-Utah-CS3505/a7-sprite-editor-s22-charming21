#include "model.h"
#include "qtimer.h"
#include <iostream>

model::model(QObject *parent)
    : QObject{parent}
{
    penColor.setRgb(0, 0, 0, 255);
    zoomIndex = 0;
    ratio = 400/20;
    framesPerSec = 1;
    currentFrame = 1;
    penSize = 1;
    eraserSize = 1;
    shapeSize = 1;
    currentIndex = 0; //for keeping track of our current index in the list when displaying a sprite.
    canvasSize = 0; //Initialize with 0
    currentTool = SelectedTool::SC_Pen;

}



//******************************** Canvas Set Up ********************************

/**
 * @brief model::initializeCanvasSize
 * It initialize the canvas size (# of pixels) based on what the user had
 * choosen.
 * @param index
 */
void model::initializeCanvasSize(int index){
    switch(index){
    case 0:
        canvasSize = 2;
        break;
    case 1:
        canvasSize = 4;
        break;
    case 2:
        canvasSize = 5;
        break;
    case 3:
        canvasSize = 8;
        break;
    case 4:
        canvasSize = 10;
        break;
    case 5:
        canvasSize = 16;
        break;
    case 6:
        canvasSize = 20;
        break;
    case 7:
        canvasSize = 25;
        break;
    case 8:
        canvasSize = 40;
        break;
    case 9:
        canvasSize = 50;
        break;
    case 10:
        canvasSize = 80;
        break;
    case 11:
        canvasSize = 100;
        break;
    case 12:
        canvasSize = 200;
        break;
    case 13:
        canvasSize = 400;
        break;
    }

    initializeFrame();
}

/**
 * @brief model::initializeFrame
 * It initialize all the necesary things for the user to start drawing in
 * the canvas, such as size, tool, and teh creation of a new frame added to our
 * QList
 * @param n/a
 */
void model::initializeFrame(){

    //Set the canvas Size
    if(canvasSize == 0){
        //Default Values
        canvasSize = 20;
    }
    zoomSize = canvasSize;

    //set up default values
    frames.append(QImage (canvasSize, canvasSize, QImage::Format_ARGB32));

    //Make the first inage to have a white background
    frames[currentFrame-1].fill(Qt::white);
    undoStack.push(frames);
    emit enableStartButtons();
}

/**
 * @brief model::initializeShapeTool
 * Method that updates the seleted tool to be Shape.  Hass
 * three options and is updated accordingly based on how it's
 * forated in it's combobox in the view.
 * @param toolIndex
 */
void model::initializeShapeTool(int toolIndex)
{
    // set pen size

    currentTool = SelectedTool::SC_ShapeCreator;
    switch(toolIndex){
    case 0:
        currentShape = ShapeCreator::SC_Line;
        emit editPenSize(shapeSize);
        break;
    case 1:
        currentShape = ShapeCreator::SC_Ciecle;
        emit editPenSize(shapeSize);
        break;
    case 2:
        currentShape = ShapeCreator::SC_Rectangle;
        emit editPenSize(shapeSize);
        break;
    }


}




//*********************************** Tools *************************************

/**
 * @brief model::zoomIn
 * It icreases the size of the image, and sends it back to the
 * view  to be displayed in the canvas
 * @param n/a
 */
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

/**
 * @brief model::zoomOut
 * It decreases the size of the image, and sends it back to the
 * view  to be displayed in the canvas
 * @param n/a
 */
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

/**
 * @brief model::undo
 * It will undo the last action
 * @param n/a
 */
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

    if(frames.size() > previousFrames.size() && currentFrame == frames.size()){
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

    emit updateFrameNumberLabel(currentFrame, frames.size());
    emit updateFrameNumberCombo(currentFrame, frames.size());

    QPixmap map = QPixmap::fromImage(frames.at(currentFrame - 1));
    emit setCanvas(map);
}

/**
 * @brief model::undo
 * It will redo the last action
 * @param n/a
 */
void model::redo(){
    QList<QImage> previousFrame = redoStack.pop();

    if(redoStack.size() == 0){
        emit disableRedo();
    }

    if(previousFrame.size() > frames.size()){
        currentFrame++;
        emit disableNextButton();
        emit disableSwapDown();
    }
    frames = previousFrame;

    undoStack.push(frames);
    emit enableUndo();


    if(frames.size() == currentFrame){
        emit disableNextButton();
        emit disableSwapDown();
    }
    else if (frames.size() < currentFrame){
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

/**
 * @brief model::saveFrameToStack
 * It saves the changes from the mouse release event to the frame
 * and stores it into the stack.
 * @param n/a
 */
void model::saveFrameToStack(){
    emit enableUndo();
    if(currentTool != SelectedTool::SC_ShapeCreator){
        undoStack.push(frames);
    }
}


/**
 * @brief model::drawOnCanvas
 * This method obtains where the current position of the mouse
 * is in our canvas and then optains the ratio such that we get the
 * positions of our x and y positions of our frame and
 * then we fraw on it utilizing a helper method.
 * @param pixelPoint
 */
void model::drawOnCanvas(QPoint pixelPoint){
    //if there have been any changes on the canvas
    isChanged = true;

    //Check it it has been initialized with a size
    if(canvasSize == 0){
        initializeFrame();
    }

    //Get the position to paint
    ratio = 400/ zoomSize;
    int x = (pixelPoint.x()/ratio) + zoomIndex;
    int y = (pixelPoint.y()/ratio) + zoomIndex;

    if (startEndLoc.size() < 1){ // assures to get only one
        startEndLoc.insert(0,pixelPoint);
    }

    updatePixels(x,y);

    //Create a Pixmap to return to view
    QPixmap currentPic;
    //Convert QImage to QPixmap
    currentPic.convertFromImage(frames[currentFrame-1]);
    //Return the pixmap of our QImage
    emit setCanvas(currentPic);
}

/**
 * @brief model::updatePixels
 * updates the toolsize, based on the given size
 * @param initialX, initialY
 */
void model::updatePixels(int initialX, int initialY){
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
    default:
        break;
    }
}

/**
 * @brief model::updatePixelsByPen
 * It changes the pixels of the current frame based on the
 * given x and y positions, the current size of the pen, and the current color.
 * @param x, y
 */
void model::updatePixelsByPen(int x, int y){
    QImage* AFrame = &frames[currentFrame -1];
    QPainter Painter(AFrame);
    QPen Pen(penColor);
    Pen.setWidth(penSize);
    Painter.setPen(Pen);
    Painter.drawPoint(x,y);
    Painter.end();
    startEndLoc.clear();

}

/**
 * @brief model::updatePixelsByEraser
 * It changes to white the pixels of the current frame based on the
 * given x and y positions, and the current size of the eraser.
 * @param x, y
 */
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

/**
 * @brief model::updatePixelsByPen
 * It changes the pixels of the current frame based on the
 * given x and y positions, the current size of the pen,
 * the current color, and the current shape being used.
 * @param initialX, initialY, endX, endY
 */
void model::updatePixelsByShapeCreator(int initialX, int initialY, int endX, int endY){
    // Set pen specs for shape creator
    QImage* AFrame = &frames[currentFrame -1];
    QPainter Painter(AFrame);
    QPen Pen(penColor);
    Pen.setWidth(shapeSize);
    Painter.setPen(Pen);

    switch(currentShape){
    case ShapeCreator::SC_Line:
        Painter.drawLine(initialX, initialY, endX, endY);
        Painter.end();
        break;
    case ShapeCreator::SC_Ciecle:
        Painter.drawEllipse(initialX,initialY,endX-initialX,endY-initialY);
        Painter.end();
        break;
    case ShapeCreator::SC_Rectangle:
        Painter.drawRect(initialX,initialY,endX-initialX,endY-initialY);
        Painter.end();
        break;
    default:
        break;

    }

    startEndLoc.clear();
    QPixmap currentPic;
    //Convert QImage to QPixmap
    currentPic.convertFromImage(frames[currentFrame-1]);
    //Return the pixmap of our QImage
    emit setCanvas(currentPic);
}

/**
 * @brief model::updatePixelsByBucketFiller
 * It changes the backgound color of our current frame based on the
 * the current color selected by the user.
 * @param x, y
 */
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

/**
 * @brief model::updateToolSize
 * updates the toolsize, based on the given size
 * @param size
 */
void model::updateToolSize(int size){

    //change to a switch case if we add more brushes
    if(currentTool == SelectedTool::SC_Eraser){
        std::cout << " updatetoolSize: " << size << std::endl;
        updateEraserSize(size);
    }
    else if(currentTool == SelectedTool::SC_Pen)
        updatePenSize(size);
    else if(currentTool == SelectedTool::SC_ShapeCreator)
        updateShapeSize(size);
}

/**
 * @brief model::updatePenSize
 * It updates the size of the pen
 * @param size
 */
void model::updatePenSize(int size){
    penSize = size;
}

/**
 * @brief model::updateEraserSize
 * It updates the size of the eraser
 * @param size
 */
void model::updateEraserSize(int size){
    eraserSize = size;
}

/**
 * @brief model::updateShapeSize
 * It updates the size of the shape that is being
 * currently selected
 * @param size
 */
void model::updateShapeSize(int size){
    shapeSize = size;
}

/**
 * @brief model::updatePenColor
 * It updates the currend color based on the given color,
 * then it updates the view.
 * @param color
 */
void model::updatePenColor(QColor color){
    penColor = color;
    emit setColorLabel(penColor);
}

/**
 * @brief model::checkCurrentColor
 * It sends to the view the current color being used
 * @param n/a
 */
void model::checkCurrentColor(){
    emit sendCurrentColor(penColor);
}


/**
 * @brief model::updatePenColor
 * It updates our current tool we are using
 * @param size
 */
void model::updateTool(std::string tool){
    //Should we do a switch case? if we do, we have to change parameters (bri)
    if(tool == "pen"){
        currentTool = SelectedTool::SC_Pen;
        emit editPenSize(penSize);

    }
    else if(tool == "eraser"){
        currentTool = SelectedTool::SC_Eraser;
        emit editPenSize(eraserSize);

    }
    else if(tool == "bucket")
        currentTool = SelectedTool::SC_Bucket;
    else if(tool == "shapeCreator"){
        currentTool = SelectedTool::SC_ShapeCreator;
        emit editPenSize(shapeSize);

    }
}

/**
 * @brief model::mouseRelease
 * It will check if in the released mouse event, and if
 * the current tool is a shape creator, it will send it to a helper method
 * with the given points and it will draw the selected shape.
 * @param loc
 */
void model::mouseRelease(QPoint &loc)
{
    if(startEndLoc.size() ==1 ){
        startEndLoc.insert(1,loc);
    }
    switch(currentTool){
    case SelectedTool::SC_ShapeCreator: // might need to delete
        if(startEndLoc.size() ==2 ){
            updatePixelsByShapeCreator((int) (startEndLoc[0].x()/ratio) + zoomIndex,
                    (int) (startEndLoc[0].y()/ratio) + zoomIndex,
                    (int) (startEndLoc[1].x()/ratio) + zoomIndex,
                    (int) (startEndLoc[1].y()/ratio) + zoomIndex);
        }
        break;
    }
    if(currentTool == SelectedTool::SC_ShapeCreator){
        undoStack.push(frames);
    }
}




//************************************ Frame ************************************

/**
 * @brief model::initializeShapeTool
 * Add a new frame to the next position to the current frame
 * @param index
 */
void model::addFrameAfterCurr(){
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

    QPixmap map = QPixmap::fromImage(frames.at(currentFrame - 1));
    emit setCanvas(map);
}

/**
 * @brief model::addFrameBeforeCurr
 * Add a new frame to to the position before current frame
 * @param index
 */
void model::addFrameBeforeCurr(){

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

/**
 * @brief model::nextFrame
 * It changes the current frame to the frame after.
 * @param n/a
 */
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

/**
 * @brief model::lastFrame
 * It changes the current frame to the frame before.
 * @param n/a
 */
void model::previousFrame(){
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

/**
 * @brief model::swapUp
 * It swaps our current frame with the previous frame.
 * @param n/a
 */
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

/**
 * @brief model::swapDown
 * It swaps our current with the frame after.
 * @param n/a
 */
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

/**
 * @brief model::copyFrame
 * Copy the current frame and insert it to the next position
 * @param n/a
 */
void model::copyFrame(){
    QImage frame = QImage(frames.at(currentFrame - 1));
    frames.insert(currentFrame++, frame);

    emit updateFrameNumberCombo(currentFrame, frames.size());
    emit updateFrameNumberLabel(currentFrame, frames.size());

    emit enableDeleteButton();
    emit enableSwapUp();
    emit enableLastButton();

    undoStack.push(frames);
    emit enableUndo();


    QPixmap map = QPixmap::fromImage(frame);
    emit setCanvas(map);
}

/**
 * @brief model::clearCanvas
 * It removes all the changes done to our current frame, and
 * it initializes it with a white frame.
 * @param n/a
 */
void model::clearCanvas(){
    QImage frame(canvasSize, canvasSize, QImage::Format_ARGB32);
    frame.fill(Qt::white);
    frames.replace(currentFrame - 1, frame);

    undoStack.push(frames);
    emit enableUndo();

    QPixmap map = QPixmap::fromImage(frame);
    emit setCanvas(map);
}

/**
 * @brief model::deleteFrame
 * It deletes the current frame.
 * @param n/a
 */
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

    emit updateFrameNumberCombo(currentFrame, frames.size());
    emit updateFrameNumberLabel(currentFrame, frames.size());

    QPixmap map = QPixmap::fromImage(frames.at(currentFrame - 1));
    emit setCanvas(map);
}

/**
 * @brief model::selectedFrame
 * It updates the frame we are currently in
 * based on the given index, and it communicates to the view
 * informatio to display that frame. *
 * @param index
 */
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




//*********************************** Preview ***********************************

/**
 * @brief model::updateFPS
 * It updates our frames per second for the preview.
 * @param fps
 */
void model::updateFPS(int fps){
    framesPerSec = fps;
}

/**
 * @brief model::previewOfFrames
 * Utilizing QTimer, this method iterates trough the list sending the frames
 * to the view in a time designated by how many frames per second the user had defined.
 * @param n/a
 */
void model::previewOfFrames(){
    int time = 2000/framesPerSec;

    for(int i = 0; i < frames.size(); i++)
    {
        QTimer::singleShot(time * i, this, &model::updateActualLabel);
    }
}

/**
 * @brief model::updateActualLabel
 * Helper method fir the previewIfFrames method.
 * It sends our current frame, and it updates our current frame.
 * @param n/a
 */
void model::updateActualLabel(){

    emit showSprite(frames[currentIndex]);

    currentIndex++;
    if(currentIndex == frames.size())
        currentIndex = 0;
}




//******************************** Save and Open ********************************

/**
 * @brief model::saveToFile
 * saves our drawings/frames to a .ssp file
 * @param fileName
 */
void model::saveToFile(QString fileName){

    QJsonObject spriteSheetProject;

    //creates json fields
    spriteSheetProject["height"] = canvasSize;
    spriteSheetProject["width"] = canvasSize;
    spriteSheetProject["numberOfFrames"] = frames.size();

    //creates a frame object and adds it to the spriteSheetProject json.
    QJsonObject framesObj;
    saveFramesInfoToJson(framesObj);
    spriteSheetProject["frames"] = framesObj;

    //create the document and add it to the file
    QJsonDocument doc(spriteSheetProject);
    QFile jsonFile(fileName + ".ssp");
    if(!jsonFile.open(QFile::WriteOnly))
    {
        emit errorMessage("We were not able to save your file, please try again.");
    }
    jsonFile.write(doc.toJson());

    //Since the file is beening saved, we change this to false
    isChanged = false;
}

/**
 * @brief model::saveFramesInfoToJson
 * It saves the infromation of the frames into a json format
 * @param framesObj
 */
void model::saveFramesInfoToJson(QJsonObject& framesObj) const{

    //*******Important******//
    // x and y coordinate are switched, x is columns and y is rows, to fix this
    // i will have rowNum go in the Y in the forloop for pixel when we get pixelcolor
    // and pixelNum will go in the X in the forloop for pixel when we get pixelcolor.
    //I'm doing this so it can fit the requirements in Q6 //
    //*******Important*******//
    int numOfFramesCount = 0;
    for(QImage a : frames)
    {
        QJsonArray frame;
        for(int rowNum = 0 ; rowNum < canvasSize; rowNum++)
        {
            QJsonArray row;
            for(int pixelNum = 0; pixelNum < canvasSize; pixelNum++)
            {
                QJsonArray pixelColor;
                QString pixelName = "pixel" + QString::number(pixelNum);
                pixelColor.append(a.pixelColor(pixelNum,rowNum).red());
                pixelColor.append(a.pixelColor(pixelNum,rowNum).green());
                pixelColor.append(a.pixelColor(pixelNum,rowNum).blue());
                pixelColor.append(a.pixelColor(pixelNum,rowNum).alpha());
                //add the color to our pixelColor array
                row.append(pixelColor);
            }
            //add the row to our frame Array
            frame.append(row);
        }
        QString frameName = "Frame" + QString::number(numOfFramesCount);
        //create the frame'n' (n = a int) field name and adds that array to the framesObj
        framesObj[frameName] = frame;
        numOfFramesCount++;
    }
}

/**
 * @brief model::openFile
 * It calls a helper method that reads the file
 * @param fileName
 */
void model::openFile(QString fileName){
    read(fileName);
}

/**
 * @brief model::openFile
 * It opens the json file and with the use of helper methods and
 * it lods the infromation to a new project and it communicates
 * to the view when ready.
 * @param fileName
 */
void model::read(QString fileName){

    //opening the file and saving the information to a QByteArray
    QJsonDocument doc;
    QByteArray saveData;
    QFile loadFile(fileName);
    QList<QColor> colorList;
    int numberOfFrames = 0;
    if(loadFile.open(QIODevice::ReadOnly))
    {
        saveData = loadFile.readAll();
    }
    else
    {
        emit errorMessage("We were not able to open the saved file. \n Please try again.");
        return;
    }

    //convert the information to a QJsonDocument, and open it with QJsonObject
    QJsonDocument loadDoc(QJsonDocument::fromJson(saveData));
    QJsonObject jsonFromLoadFile = loadDoc.object();

    if(loadInfoFromJson(jsonFromLoadFile,colorList,canvasSize,zoomSize,currentTool, numberOfFrames))
    {
        emit errorMessage("This is not a valid File");
    }

    //emptys our current qlist<Qimage> list in model, if it isn't empty already.
    if(!frames.isEmpty())
    {
        QList<QImage> empty;
        frames = empty;
    }

    //This is where we update the view, such as : frames, canvassize, framescombobox
    addPixelColorToFrames(numberOfFrames, colorList);

    //sets up undo
    undoStack.push(frames);

    //update the labels in the view :
    emit updateFrameNumberLabel(1, frames.size());
    emit updateFrameNumberCombo(1,frames.size());

    //should we make this a helper method? (same method was used in drawCanvas method)
    //Create a Pixmap to return to view
    QPixmap currentPic;
    //Convert QImage to QPixmap
    currentPic.convertFromImage(frames[0]);
    //Return the pixmap of our QImage
    emit setCanvas(currentPic);

    emit enableStartButtons();
    emit updateCanvasComboBox(canvasSize);

    //enables the next button and swapdown button, if they have more than one frames.
    if(frames.size() > 1)
    {
        emit enableNextButton();
        emit enableSwapDown();

    }

}

/**
 * @brief model::loadInfoFromJson
 * Given the json object, it reas it and it assigns all
 * the properties to a new sprite editor.
 * @param jsonFromLoadFile, colorList, imageSize, zoom, tool, numberOfFrames
 */
bool model::loadInfoFromJson(QJsonObject &jsonFromLoadFile, QList<QColor>& colorList, int& imageSize, int& zoom, SelectedTool & tool, int& numberOfFrames) const{
    int frameCount = 0; //starting number of frames

    //Json fields checks if they are in the saved file, becomes true if that field exists.
    bool hasHeight = jsonFromLoadFile.contains("height");
    bool hasWidth = jsonFromLoadFile.contains("width");
    bool hasNumberOfFrames = jsonFromLoadFile.contains("numberOfFrames");
    bool hasFrames = jsonFromLoadFile.contains("frames");

    bool isHeightDbl = jsonFromLoadFile["height"].isDouble();
    bool isWidthDbl = jsonFromLoadFile["width"].isDouble();
    bool isNumberOfFramesDbl = jsonFromLoadFile["numberOfFrames"].isDouble();
    bool isFramesAnObj = jsonFromLoadFile["frames"].isObject();

    //if the Json doesn't have these fields it is not a valid file.
    if(!hasHeight || !hasWidth || !hasNumberOfFrames || !hasFrames || !isHeightDbl || !isWidthDbl || !isNumberOfFramesDbl || !isFramesAnObj)
    {
        return true;
    }
    //*********Checks if height and width are int ***************///
    //Conversion from double to int, it is an int if the outcome is equal to 1.
    double heightToInt = jsonFromLoadFile["height"].toDouble()/std::floor(jsonFromLoadFile["height"].toDouble());
    double widthToInt = jsonFromLoadFile["width"].toDouble()/std::floor(jsonFromLoadFile["width"].toDouble());
    //Image height and width
    double height = jsonFromLoadFile["height"].toDouble();
    double width = jsonFromLoadFile["width"].toDouble();

    //checks if height and width have int values and if it is a perfect square
    if(heightToInt != 1.0 || widthToInt != 1.0 || height != width)
        return true;

    //sets the canvas size and zoom size, and setsup currentTool
    imageSize = width;
    zoom = canvasSize;
    tool = SelectedTool::SC_Pen;
    //*********end*************//

    //************checks if it numberOfFrames is an int ************//
    double numOfFramesToInt = jsonFromLoadFile["numberOfFrames"].toDouble()/std::floor(jsonFromLoadFile["numberOfFrames"].toDouble());
    if(numOfFramesToInt != 1)
    {
        return true;
    }
    numberOfFrames = jsonFromLoadFile["numberOfFrames"].toDouble();
    //*************end****//

    //finishes the setup of the canvas

    // ****************** reading the json info from frames and color for each pixel and saving it to color list *******
    QJsonObject framesObj = jsonFromLoadFile["frames"].toObject();
    while(frameCount < numberOfFrames)
    {
        bool hasFrame = framesObj.contains("Frame"+ QString::number(frameCount));
        bool isFrameArray = framesObj["Frame" + QString::number(frameCount)].isArray();

        if(!hasFrame || !isFrameArray)
        {
            return true;
        }

        QJsonArray rowArray = framesObj["Frame" + QString::number(frameCount)].toArray();
        for(QJsonValue row: rowArray)
        {
            QJsonArray pixelArray = row.toArray();
            for(QJsonValue pixelValue : pixelArray)
            {
                QJsonArray colorArray = pixelValue.toArray();
                QColor color;

                //indexcounter to set RGBA values in color
                int cIndex =0;
                for(QJsonValue colorVal : colorArray)
                {
                    //check if colorValues are int and inbetween 0 to 255
                    double colorValuesDbl = colorVal.toDouble();///std::floor(colorVal.toDouble());
                    int colorValuesInt = colorVal.toInt();
                    if(colorValuesDbl != colorValuesInt || colorValuesInt > 255 || colorValuesInt < 0)
                    {
                        return true;
                    }
                    if(cIndex == 0)
                        color.setRed(colorValuesInt);
                    else if(cIndex ==1)
                        color.setGreen(colorValuesInt);
                    else if(cIndex ==2)
                        color.setBlue(colorValuesInt);
                    else
                        color.setAlpha(colorValuesInt);
                    cIndex++;
                }
                colorList.append(color);
            }
        }
        frameCount++;
    }
    //********************end*****************************
    return false;
}

/**
 * @brief model::openFile
 * It sets each pixel to its appropiate color
 * @param fileName
 */
void model::addPixelColorToFrames(int numberOfFrames, QList<QColor> colorList){
    int frameCounter = 0;
    int colorCounter = 0;
    while(frameCounter < numberOfFrames)
    {
        //create a blank canvas
        frames.append(QImage(canvasSize,canvasSize,QImage::Format_ARGB32));
        frames[frameCounter].fill(Qt::white);

        //sets the value of each pixel in the canvas/image
        for(int y=0; y < canvasSize; y++)
        {
            for(int x=0; x <canvasSize; x++)
            {
                frames[frameCounter].setPixelColor(x,y,colorList[colorCounter]);
                colorCounter++;
            }
        }

        frameCounter++;
        emit updateFrameNumberCombo(frameCounter, frames.size());
    }
}

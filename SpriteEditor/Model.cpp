#include "model.h"
#include <QImage>
#include <QPixmap>
#include <iostream>
#include <iostream>
model::model(QObject *parent)
    : QObject{parent}
{
    // default values to be determined
    frames.append(QImage (canvasHeight, canvasWidth, QImage::Format_ARGB32));

    penColor.setRgb(255, 255, 255, 255);
    canvasHeight = 10;
    canvasWidth = 10;
    framesPerSec = 30;
    currentFrame = 1;
    penSize = 1;
    eraserSize = 1;
}

// add a new frame to the position next to the current frame
void model::addNewFrame(){
    QImage frame(canvasHeight, canvasWidth, QImage::Format_ARGB32);
    frames.insert(currentFrame, frame);

    // move to the new frame
    currentFrame++;

    emit updateFrameNumberCombo(currentFrame, frames.size());
    emit enableDeleteButton();
    emit enableLastButton();

    // if the new frame is at the end of the list, disale next button
    if(currentFrame == frames.size()){
        emit disableNextButton();
    }

    QPixmap map = QPixmap::fromImage(frames.at(currentFrame - 1));
    emit goToFrame(map);
}

// insert a new frame to the position before current frame
void model::insertNewFrame(){
    QImage frame(canvasHeight, canvasWidth, QImage::Format_ARGB32);
    frames.insert(currentFrame - 1, frame);

    emit updateFrameNumberCombo(currentFrame, frames.size());
    emit enableDeleteButton();
    emit enableNextButton();

    if(currentFrame == 1){
        emit disableLastButton();
    }

    QPixmap map = QPixmap::fromImage(frames.at(currentFrame - 1));
    emit goToFrame(map);
}

void model::nextFrame(){
     emit updateFrameNumberCombo(++currentFrame, frames.size());

    emit enableLastButton();
    if(currentFrame == frames.size()){
        emit disableNextButton();
    }

     QPixmap map = QPixmap::fromImage(frames.at(currentFrame - 1));
     emit goToFrame(map);
}

void model::lastFrame(){
    emit updateFrameNumberCombo(--currentFrame, frames.size());

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
}

void model::zoomIn(){
    //TODO:
}

void model::zoomOut(){
    //TODO:
}

void model::updateFPS(int fps){
    framesPerSec = fps;
}

void model::updatePenSize(int size){
    penSize = size;    
}

void model::updateEraserSize(int size){
    eraserSize = size;   
}

void model::setStartingArea(int, int){
    //TODO:
}

void model::updateColor(QColor color){
    penColor = color;
}

void model::updateTool(std::string){
    //TODO:
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
}

//updates the toolsize, we first check our selected tool
void model::updateToolSize(int size){

//    if(currentTool = eraser)
//        updateEraserSize(size);
//    else if(currentTool = Pen)
//        updatePenSize(size);
}

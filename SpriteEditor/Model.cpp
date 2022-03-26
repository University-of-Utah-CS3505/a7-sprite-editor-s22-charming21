#include "model.h"
#include <QImage>
#include <QPixmap>
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
    currentFrame = 0;
    penSize = 1;
    eraserSize = 1;
}

void model::addNewFrame(){
    // new QImage?
    QImage frame(canvasHeight, canvasWidth, QImage::Format_ARGB32);
    frames.insert(currentFrame, frame);
    currentFrame++;

    emit enableDeleteButton();

    QPixmap map = QPixmap::fromImage(frames.at(currentFrame));
    emit goToFrame(map);
}

void model::deleteFrame(){
    frames.removeAt(currentFrame);

    if(frames.size() == 1){
        emit disableDeleteButton();
    }

    // if the last frame is deleted,
    if(currentFrame == frames.size()){
        currentFrame--;
        QPixmap map = QPixmap::fromImage(frames.at(currentFrame));
        emit goToFrame(map);
    }
    else{
        QPixmap map = QPixmap::fromImage(frames.at(currentFrame));
        emit goToFrame(map);
    }
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
void selectedFrame(int){
    //TODO
}

//updates the toolsize, we first check our selected tool
void model::updateToolSize(int size){

//    if(currentTool = eraser)
//        updateEraserSize(size);
//    else if(currentTool = Pen)
//        updatePenSize(size);
}

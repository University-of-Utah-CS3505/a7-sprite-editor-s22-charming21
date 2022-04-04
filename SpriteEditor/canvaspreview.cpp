#include "canvaspreview.h"
#include <iostream>


/**
 * @brief canvaspreview::canvaspreview
 * canvaspreview class that inherits from the base class of QDialog. This class
 * is used to output the actual size preview of the users current sprite.  It is
 * bounded by a 400x400 px box and will the display the users image accordingly with
 * the size labeld.
 * @param parent
 */
canvaspreview::canvaspreview(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::canvaspreview)
{
    ui->setupUi(this);
}

/**
 * @brief canvaspreview::~canvaspreview
 * destructor for the canvaspreview
 */
canvaspreview::~canvaspreview()
{
    delete ui;
}

/**
 * @brief canvaspreview::updateCanvas
 * QLabel slot to be called within the view.  That will be passed on the current Image
 * that the user wants to preview. Then set on this class's on label with the current
 * image actual size.
 * @param currentFrame
 */
void canvaspreview::updateCanvas(QImage & currentFrame)
{
    ui->actualPreviewLabel->setPixmap(QPixmap::fromImage(currentFrame));
    int actualSizeHeight = currentFrame.size().height();
    int actualSizeWidth = currentFrame.size().width();

    ui->actualSizeLabel->setText(QString::number(actualSizeHeight) + "px by " + QString::number(actualSizeWidth) + "px");
}

/**
 * @brief canvaspreview::on_pushButton_clicked
 * Button slot that when pushed closes the Qlabel.
 */
void canvaspreview::on_pushButton_clicked()
{
    this->close();
}


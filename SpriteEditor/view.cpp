#include "view.h"
#include "ui_view.h"

View::View(model& model, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::View)
{
    ui->setupUi(this);

    //connections
    connect(ui->addFrameButton, &QPushButton::clicked, &model, &model::addNewFrame);
}

View::~View()
{
    delete ui;
}
//methods for view




#include "introduce.h"
#include "ui_introduce.h"

Introduce::Introduce(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Introduce)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    hide();
}

Introduce::~Introduce()
{
    delete ui;
}

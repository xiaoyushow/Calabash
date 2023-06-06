#include "outcome.h"
#include "ui_outcome.h"

OutCome::OutCome(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OutCome)
{
    ui->setupUi(this);
}

OutCome::~OutCome()
{
    delete ui;
}

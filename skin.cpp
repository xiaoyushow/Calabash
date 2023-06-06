#include "skin.h"
#include "ui_skin.h"
#include <Qfile.h>

Skin::Skin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Skin)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    hide();
//    QFile file(":/Qss/skinQss.qss");
//    file.open(QFile::ReadOnly);
//    QString qss = QString::fromLatin1(file.readAll());
//    ui->color->setStyleSheet(qss);
//    ui->topic->setStyleSheet(qss);
//    file.close();
}

Skin::~Skin()
{
    delete ui;
}

void Skin::on_ptn_black_released()
{
    emit skinBlack();
}


void Skin::on_ptn_red_released()
{
    emit skinRed();
}


void Skin::on_ptn_pink_released()
{
    emit skinPink();
}


void Skin::on_ptn_blue_released()
{
    emit skinBlue();
}


void Skin::on_ptn_green_released()
{
    emit skinGreen();
}


void Skin::on_ptn_gold_released()
{
    emit skinGold();
}


void Skin::on_ptn_style01_released()
{
    emit skin_01();
}


void Skin::on_ptn_style02_released()
{
    emit skin_02();
}


void Skin::on_ptn_style03_released()
{
    emit skin_03();
}


void Skin::on_ptn_style04_released()
{
    emit skin_04();
}


void Skin::on_ptn_style05_released()
{
    emit skin_05();
}


void Skin::on_ptn_style06_released()
{
    emit skin_06();
}


void Skin::on_ptn_style07_released()
{
    emit skin_07();
}


void Skin::on_ptn_style08_released()
{
    emit skin_08();
}


void Skin::on_ptn_style09_released()
{
    emit skin_09();
}


void Skin::on_ptn_style10_released()
{
    emit skin_10();
}


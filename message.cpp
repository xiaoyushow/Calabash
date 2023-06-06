//
// Created by Taiga on 2023/3/29.
//

// You may need to build the project (run Qt uic code generator) to get "ui_Message.h" resolved

#include "message.h"

#include <QPropertyAnimation>
#include <QSequentialAnimationGroup>
#include <QGraphicsDropShadowEffect>
#include <QStyle>

using namespace calabash;

Message::Message(QWidget *parent) :
    QLabel(parent) {
  ui_init();
  an_init();
}

Message::~Message() {
  delete an_msg_1_;
  delete an_msg_2_;
  delete ang_msg_all_;
}

void Message::ui_init() {
  this->move(0, -200);
  this->setMaximumSize(this->parentWidget()->width() - 100, 300);
}

void Message::an_init() {
  an_msg_1_ = new QPropertyAnimation(this, "pos");
  an_msg_1_->setDuration(1000);
  an_msg_1_->setEasingCurve(QEasingCurve::OutExpo);
  an_msg_2_ = new QPropertyAnimation(this, "pos");
  an_msg_2_->setDuration(1000);
  an_msg_2_->setEasingCurve(QEasingCurve::InExpo);
  ang_msg_all_ = new QSequentialAnimationGroup;
  ang_msg_all_->addAnimation(an_msg_1_);
  ang_msg_all_->insertPause(1, 1000);
  ang_msg_all_->addAnimation(an_msg_2_);
}

void Message::message(const QString &msg) {
  this->setText(msg);
  this->adjustSize();
  auto size = this->size();
  int width;
  if (parentWidget() != nullptr)
    width = (parentWidget()->width() - size.width()) / 2;
  else
    width = pos().rx();
  ang_msg_all_->stop();
  an_msg_1_->setStartValue(QPoint(width, -size.height()));
  an_msg_1_->setEndValue(QPoint(width, 20));
  an_msg_2_->setStartValue(QPoint(width, 20));
  an_msg_2_->setEndValue(QPoint(width, -size.height()));
  ang_msg_all_->start();
}

void Message::System(const QString &msg) {
  this->setStyleSheet("QLabel{font-size:14px;color:#fff;background-color:#808e9b;border-radius:5px;padding:6px;}");
  message(msg);
}

void Message::Warning(const QString &msg) {
  this->setStyleSheet("QLabel{font-size:14px;color:#fff;background-color:#ffa801;border-radius:5px;padding:7px;}");
  message(msg);
}

void Message::Error(const QString &msg) {
  this->setStyleSheet("QLabel{font-size:14px;color:#fff;background-color:#e77f67;border-radius:5px;padding:7px;}");
  message(msg);
}

void Message::Success(const QString &msg) {
  this->setStyleSheet("QLabel{font-size:14px;color:#fff;background-color:#05c46b;border-radius:5px;padding:7px;}");
  message(msg);
}

void Message::Info(const QString &msg) {
  this->setStyleSheet("QLabel{font-size:14px;color:#fff;background-color:74b9ff;border-radius:5px;padding:6px;}");
  message(msg);
}

#include "slidepage.h"
#include <QDebug>
#include <QPropertyAnimation>
SlidePage::SlidePage(QWidget *parent)
    : QWidget(parent),
      pageIndex(0),
      pageCount(0),
      draggingFlag(false)
{
    pageIndicator.clear();
    this->setMinimumSize(400, 300);
    this->setAttribute(Qt::WA_TranslucentBackground, true);

    scrollArea = new QScrollArea(this);
    scrollArea->setAlignment(Qt::AlignCenter);

    mainWidget = new QWidget();
    mainWidget->setStyleSheet("background: transparent");

    scrollArea->setWidget(mainWidget);
    scrollArea->setStyleSheet("background: transparent");

    bottomWidget = new QWidget(this);
    bottomWidget->setStyleSheet("background: transparent");

    bottomHBoxLayout = new QHBoxLayout();
    bottomWidget->setLayout(bottomHBoxLayout);
    bottomHBoxLayout->setContentsMargins(0, 0, 0, 0);
    bottomHBoxLayout->setAlignment(Qt::AlignCenter);

}

SlidePage::~SlidePage()
{

}

void SlidePage::addPage(QWidget *w)
{

}

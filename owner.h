#ifndef OWNER_H
#define OWNER_H

#include <QWidget>
#include "http.h"

namespace Ui {
class Owner;
}

class Owner : public QWidget
{
    Q_OBJECT

public:
    explicit Owner(QWidget *parent = nullptr);
    ~Owner();

    void ownerView();

signals:
    void ownerSignal();

public:
    Ui::Owner *ui;
    Http http;
};

#endif // OWNER_H

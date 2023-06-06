#ifndef OUTCOME_H
#define OUTCOME_H

#include <QWidget>

namespace Ui {
class OutCome;
}

class OutCome : public QWidget
{
    Q_OBJECT

public:
    explicit OutCome(QWidget *parent = nullptr);
    ~OutCome();

public:
    Ui::OutCome *ui;
};

#endif // OUTCOME_H

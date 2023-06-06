#ifndef SKIN_H
#define SKIN_H

#include <QWidget>

namespace Ui {
class Skin;
}

class Skin : public QWidget
{
    Q_OBJECT

public:
    explicit Skin(QWidget *parent = nullptr);
    ~Skin();

private slots:
    void on_ptn_black_released();

    void on_ptn_red_released();

    void on_ptn_pink_released();

    void on_ptn_blue_released();

    void on_ptn_green_released();

    void on_ptn_gold_released();

    void on_ptn_style01_released();

    void on_ptn_style02_released();

    void on_ptn_style03_released();

    void on_ptn_style04_released();

    void on_ptn_style05_released();

    void on_ptn_style06_released();

    void on_ptn_style07_released();

    void on_ptn_style08_released();

    void on_ptn_style09_released();

    void on_ptn_style10_released();

private:
    Ui::Skin *ui;

signals:
    void skinBlack();
    void skinRed();
    void skinPink();
    void skinBlue();
    void skinGreen();
    void skinGold();
    void skin_01();
    void skin_02();
    void skin_03();
    void skin_04();
    void skin_05();
    void skin_06();
    void skin_07();
    void skin_08();
    void skin_09();
    void skin_10();
};

#endif // SKIN_H

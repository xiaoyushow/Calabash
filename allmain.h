#ifndef ALLMAIN_H
#define ALLMAIN_H

#include <QMainWindow>
#include <QMouseEvent>
#include <QPushButton>
#include <QWidget>
#include <QLabel>
#include <QPainter>
#include <QPainterPath>
#include <QRect>
#include <QFile>
#include <QGraphicsEffect>
#include <QPropertyAnimation>
#include <QPainter>
#include "http.h"
#include "owner.h"
#include "student.h"
#include "teacher.h"
#include "skin.h"
#include "introduce.h"

#include <QPropertyAnimation>

QT_BEGIN_NAMESPACE
namespace Ui { class AllMain; }
QT_END_NAMESPACE

class AllMain : public QMainWindow
{
    Q_OBJECT

public:
    AllMain(QWidget *parent = nullptr);
    ~AllMain();
    //QString AppSkin;

protected:
    //拖动重写
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;

    //icon
    void paintEvent(QPaintEvent *event) override;

signals:
    void mySignal();//主窗口与子窗口切换信号

    //void skinChange(QString Skin);//皮肤切换(主/子窗口记录)
private slots:
    void on_ptn_close_clicked();

    void on_ptn_min_clicked();

    void on_ptn_introduce_clicked();

    void on_ptn_signOut_clicked();

    void on_ptn_owner_clicked();

    void on_ptn_teacher_released();

    void on_ptn_student_released();

    void on_ptn_setting_released();

    void on_ptn_home_released();

private:
    //圆形头像
    void avatarRoundLable(QLabel *lable, QString path);
    //实现按键左右移动隐藏，显示新窗口
    void windowSlide();

    void pushButtonSlide();

    void pushButtonShow();

public:
    Ui::AllMain *ui;
    Http http;
    Owner owner;
    Student student;
    Teacher teacher;
    Skin skin;
    Introduce introduce;
private:
    void pushButtonHide();

private:
    bool m_dragging = false;
    QPoint m_dragStartPos;
    QPropertyAnimation * m_propertyAnimation;
    bool m_sideFlag = false;
    QPainter painter;
    QPaintEvent *event;
    QString widgetSign = "home";

private:
    //skin
    void skinBase();
    void resurfaceBlack();
    void resurfaceBlue();
    void resurfaceRed();
    void resurfacePink();
    void resurfaceGreen();
    void resurfaceGold();
    void resurfaceSkin_01();
    void resurfaceSkin_02();
    void resurfaceSkin_03();
    void resurfaceSkin_04();
    void resurfaceSkin_05();
    void resurfaceSkin_06();
    void resurfaceSkin_07();
    void resurfaceSkin_08();
    void resurfaceSkin_09();
    void resurfaceSkin_10();

};
#endif // ALLMAIN_H

#include "allmain.h"
#include "./ui_allmain.h"
#include "./ui_owner.h"
#include "./ui_student.h"
#include "ui_teacher.h"
#include <QMessageBox>
#include <QRect>
#include <QEasingCurve>
#include <QPropertyAnimation>

AllMain::AllMain(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AllMain)
{
    ui->setupUi(this);
    //去除边框
    this->setWindowFlag(Qt::FramelessWindowHint);
    //窗口最小化、关闭size
    //this->setWindowIcon(QIcon(":/images/calabash.png"));
    QPixmap pixmap_close = QPixmap(":/images/closen.png");
    ui->ptn_close->setIcon(pixmap_close);
    ui->ptn_close->setIconSize(QSize(14, 14));
    QPixmap pixmap_min = QPixmap(":/images/Minimize-1.png");
    ui->ptn_min->setIcon(pixmap_min);
    ui->ptn_min->setIconSize(QSize(12, 12));
    QFile file(":/Qss/PushButton_Especially.qss");
    file.open(QFile::ReadOnly);
    QString qss = QString::fromLatin1(file.readAll());
    file.close();
    //widget_curtain窗口中控件继承
    ui->widget_curtain->setStyleSheet("#widget_curtain{background-color:rgba(22,134,182,178);}");
    //设置主窗口centralwidget的控件继承
    ui->centralwidget->setStyleSheet("#centralwidget{background-image:url(:/images/background.jpg);}");
    //widget_tail窗口中控件继承
    ui->widget_tail->setStyleSheet("#widget_tail{background-color:rgb(22,134,182);}");

    //绘制圆形框
    avatarRoundLable(ui->label_head, ":/images/user.png");

    //显示用户名
    ui->label_username->setStyleSheet("#label_username{font-family: 'SimHei';"
                                      "font-size: 26px;"
                                      "color: rgb(255,255,255);}");
    //设置中间按键背景
    ui->ptn_introduce->setStyleSheet(qss);
    ui->ptn_owner->setStyleSheet(qss);
    ui->ptn_student->setStyleSheet(qss);
    ui->ptn_teacher->setStyleSheet(qss);
    ui->ptn_setting->setStyleSheet(qss);
    ui->ptn_signOut->setStyleSheet(qss);
    ui->ptn_home->setStyleSheet(qss);


    connect(ui->ptn_home, &QPushButton::released, this, &AllMain::on_ptn_home_released);

    //skin
    connect(&skin, &Skin::skinBlack, this, &AllMain::resurfaceBlack);
    connect(&skin, &Skin::skinRed, this, &AllMain::resurfaceRed);
    connect(&skin, &Skin::skinPink, this, &AllMain::resurfacePink);
    connect(&skin, &Skin::skinBlue, this, &AllMain::resurfaceBlue);
    connect(&skin, &Skin::skinGreen, this, &AllMain::resurfaceGreen);
    connect(&skin, &Skin::skinGold, this, &AllMain::resurfaceGold);
    connect(&skin, &Skin::skin_01, this, &AllMain::resurfaceSkin_01);
    connect(&skin, &Skin::skin_02, this, &AllMain::resurfaceSkin_02);
    connect(&skin, &Skin::skin_03, this, &AllMain::resurfaceSkin_03);
    connect(&skin, &Skin::skin_04, this, &AllMain::resurfaceSkin_04);
    connect(&skin, &Skin::skin_05, this, &AllMain::resurfaceSkin_05);
    connect(&skin, &Skin::skin_06, this, &AllMain::resurfaceSkin_06);
    connect(&skin, &Skin::skin_07, this, &AllMain::resurfaceSkin_07);
    connect(&skin, &Skin::skin_08, this, &AllMain::resurfaceSkin_08);
    connect(&skin, &Skin::skin_09, this, &AllMain::resurfaceSkin_09);
    connect(&skin, &Skin::skin_10, this, &AllMain::resurfaceSkin_10);

//    if(AppSkin == "Bule"){
//        resurfaceBlue();
//    } else if(AppSkin == "Black"){
//        resurfaceBlack();
//    } else if(AppSkin == "Red"){
//        resurfaceRed();
//    } else if(AppSkin == "Pink"){
//        resurfacePink();
//    } else if(AppSkin == "Green"){
//        resurfaceGreen();
//    } else if(AppSkin == "Gold"){
//        resurfaceGold();
//    }
//    qDebug() << "allmain:" << AppSkin;
}

AllMain::~AllMain()
{
    delete ui;
}

void AllMain::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        m_dragging = true;
        m_dragStartPos = event->pos();
    }
}

void AllMain::mouseMoveEvent(QMouseEvent *event)
{
    if (m_dragging && (event->buttons() == Qt::LeftButton) && event->pos().y() < 50 && event->pos().y() > 0) {
        move(event->globalPosition().toPoint() - m_dragStartPos);
    }
}

void AllMain::mouseReleaseEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        m_dragging = false;
    }
}


void AllMain::on_ptn_close_clicked()
{
    this->close();
    owner.close();
    student.close();
    teacher.close();
    skin.close();
}


void AllMain::on_ptn_min_clicked()
{
    this->showMinimized();
    owner.showMinimized();
    student.showMinimized();
    teacher.showMinimized();
    skin.showMinimized();
}

void AllMain::avatarRoundLable(QLabel *lable, QString path)
{
    QPixmap pixmap(path);
    pixmap = pixmap.scaled(lable->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);

    int width = lable->size().width();
    int height = lable->size().height();

    QPixmap image(width,height);
    image.fill(Qt::transparent);

    QPainterPath painterPath;
    painterPath.addEllipse(0, 0, width, height);

    QPainter painter(&image);
    painter.setRenderHints(QPainter::Antialiasing | QPainter::SmoothPixmapTransform);
    painter.setClipPath(painterPath);
    painter.drawPixmap(0, 0, width, height, pixmap);
    //绘制到label
    lable->setPixmap(image);
}

void AllMain::windowSlide()
{
    if(!m_sideFlag){

    }
}

void AllMain::pushButtonSlide()
{
    QPropertyAnimation *animation = new QPropertyAnimation(ui->ptn_introduce, "geometry");
    animation->setStartValue(QRect(0, 130, 0, 0));
    animation->setEndValue(QRect(0, 130, 1063, 380));

    animation->setDuration(5000);
    animation->setEasingCurve(QEasingCurve::OutCirc);

    animation->start();

}

void AllMain::pushButtonShow()
{
    ui->ptn_introduce->show();
    ui->ptn_owner->show();
    ui->ptn_setting->show();
    ui->ptn_signOut->show();
    ui->ptn_student->show();
    ui->ptn_teacher->show();
}

void AllMain::pushButtonHide()
{
    ui->ptn_introduce->hide();
    ui->ptn_owner->hide();
    ui->ptn_setting->hide();
    ui->ptn_signOut->hide();
    ui->ptn_student->hide();
    ui->ptn_teacher->hide();
}

//icon
void AllMain::paintEvent(QPaintEvent *event)
{
//    QPainter painter(this);
//    painter.setRenderHints(QPainter::Antialiasing | QPainter::TextAntialiasing);
    QPixmap pixmapOwner = QPixmap(":/images/selfInfo.png");
    ui->ptn_owner->setIcon(pixmapOwner);
    ui->ptn_owner->setIconSize(QSize(40, 40));

    if(ui->ptn_teacher->isEnabled()){
        QPixmap pixmapTeacher = QPixmap(":/images/teacherIcon.png");
        ui->ptn_teacher->setIcon(pixmapTeacher);
        ui->ptn_teacher->setIconSize(QSize(35, 35));
    } else{
        QPixmap pixmapStudent = QPixmap(":/images/studentIcon.png");
        ui->ptn_student->setIcon(pixmapStudent);
        ui->ptn_student->setIconSize(QSize(40, 40));
    }

    QPixmap pixmapSkin = QPixmap(":/images/skinIcon.png");
    ui->ptn_setting->setIcon(pixmapSkin);
    ui->ptn_setting->setIconSize(QSize(40, 40));

    QPixmap pixmapLogout = QPixmap(":/images/logoutIcon.png");
    ui->ptn_signOut->setIcon(pixmapLogout);
    ui->ptn_signOut->setIconSize(QSize(45, 45));

    QPixmap pixmapIntroduce = QPixmap(":/images/IntroduceIcon.png");
    ui->ptn_introduce->setIcon(pixmapIntroduce);
    ui->ptn_introduce->setIconSize(QSize(55, 55));

}


//slots
void AllMain::on_ptn_introduce_clicked()
{
    //pushButtonSlide();
    pushButtonHide();
    introduce.move(0, 130);
    introduce.setParent(this);//设置依附的窗口
    introduce.show();
    widgetSign = "introduce";
}


void AllMain::on_ptn_signOut_clicked()
{
    emit mySignal();

}


void AllMain::on_ptn_owner_clicked()
{
    pushButtonHide();
    owner.move(0, 130);
    owner.setParent(this);//设置依附的窗口
    owner.http.token = http.token;
    owner.http.username = http.username;
    owner.http.sendRequest("self");
    owner.ownerView();
    owner.show();
    widgetSign = "owner";

}

void AllMain::on_ptn_teacher_released()
{
    pushButtonHide();
    teacher.move(0, 130);
    teacher.setParent(this);//设置依附的窗口
    teacher.http.token = http.token;
    teacher.http.username = http.username;
    teacher.teacherInit();
    teacher.updateInfo();
    teacher.show();
    widgetSign = "teacher";
}


void AllMain::on_ptn_student_released()
{
    pushButtonHide();
    student.move(0, 130);
    student.setParent(this);//设置依附的窗口
    student.http.token = http.token;
    student.pageInit();
    student.show();
    widgetSign = "student";
}


void AllMain::on_ptn_setting_released()
{
    pushButtonHide();
    skin.move(0, 130);
    skin.setParent(this);//设置依附的窗口
    skin.show();
    widgetSign = "setting";
}

void AllMain::on_ptn_home_released()
{
    if(widgetSign == "home"){
        return;
    } else if(widgetSign == "introduce"){
        introduce.hide();
        pushButtonShow();
    } else if(widgetSign == "owner"){
        owner.hide();
        pushButtonShow();
    } else if(widgetSign == "teacher"){
        teacher.hide();
        pushButtonShow();
    } else if(widgetSign == "student"){
        student.hide();
        pushButtonShow();
    } else if(widgetSign == "setting"){
        skin.hide();
        pushButtonShow();
    }
}

void AllMain::skinBase()
{
    //Introduce
    //self
    QFile file_self(":/Qss/selfBase.qss");
    file_self.open(QIODevice::ReadOnly);
    QString qss_self = QString::fromLatin1(file_self.readAll());
    file_self.close();
    owner.ui->ownerWidget->setStyleSheet(qss_self);
    //student
    //page1
    QFile file_student_1(":/Qss/pageBase1.qss");
    file_student_1.open(QIODevice::ReadOnly);
    QString qss_student_1 = QString::fromLatin1(file_student_1.readAll());
    file_student_1.close();
    student.ui->page->setStyleSheet(qss_student_1);
    //page2
    QFile file_student_2(":/Qss/pageBase2.qss");
    file_student_2.open(QIODevice::ReadOnly);
    QString qss_student_2 = QString::fromLatin1(file_student_2.readAll());
    file_student_2.close();
    student.ui->page_2->setStyleSheet(qss_student_2);
    //Sptn
    student.ui->ptn_writeOff->setStyleSheet(qss_student_2);
    student.ui->ptn_last->setStyleSheet(qss_student_2);
    student.ui->ptn_next->setStyleSheet(qss_student_2);
    student.ui->ptn_end->setStyleSheet(qss_student_2);
    student.ui->ptn_home->setStyleSheet(qss_student_2);
    student.ui->ptn_NotCorrected->setStyleSheet(qss_student_2);
    student.ui->ptn_released->setStyleSheet(qss_student_2);
    //Slabel
    student.ui->label_isSchool->setStyleSheet(qss_student_2);
    student.ui->label_leaveType->setStyleSheet(qss_student_2);
    student.ui->label_leaveReason_2->setStyleSheet(qss_student_2);
    student.ui->label_timeBegin->setStyleSheet(qss_student_2);
    student.ui->label_timeEnd->setStyleSheet(qss_student_2);
    student.ui->label_status->setStyleSheet(qss_student_2);
    //teacher
    QFile file_teacher(":/Qss/teacherBase.qss");
    file_teacher.open(QIODevice::ReadOnly);
    QString qss_teacher = QString::fromLatin1(file_teacher.readAll());
    file_teacher.close();
    teacher.ui->widget->setStyleSheet(qss_teacher);
    teacher.ui->widget_2->setStyleSheet(qss_teacher);
    teacher.ui->widget_3->setStyleSheet(qss_teacher);
    teacher.ui->widget_4->setStyleSheet(qss_teacher);
    teacher.ui->widget_5->setStyleSheet(qss_teacher);
    //Tptn
    teacher.ui->ptn_agree->setStyleSheet(qss_teacher);
    teacher.ui->ptn_refuse->setStyleSheet(qss_teacher);
    teacher.ui->ptn_end->setStyleSheet(qss_teacher);
    teacher.ui->ptn_home->setStyleSheet(qss_teacher);
    teacher.ui->ptn_last->setStyleSheet(qss_teacher);
    teacher.ui->ptn_next->setStyleSheet(qss_teacher);
    teacher.ui->ptn_NotCorrected->setStyleSheet(qss_teacher);
    teacher.ui->ptn_released->setStyleSheet(qss_teacher);
    //Tlabel
    teacher.ui->label_now->setStyleSheet(qss_teacher);
    teacher.ui->label_total->setStyleSheet(qss_teacher);
}
void AllMain::resurfaceBlack()
{
    QFile file(":/Qss/SkinBlack.qss");
    file.open(QIODevice::ReadOnly);
    QString qss = QString::fromLatin1(file.readAll());
    file.close();
    //widget_curtain窗口中控件继承
    ui->widget_curtain->setStyleSheet(qss);
    //设置主窗口centralwidget的控件继承
    ui->centralwidget->setStyleSheet(qss);
    //widget_tail窗口中控件继承
    ui->widget_tail->setStyleSheet(qss);
    //顶部
    ui->widget_top->setStyleSheet(qss);

    //绘制圆形框
    avatarRoundLable(ui->label_head, ":/images/user_white.png");
    //Introduce
    //self
    QFile file_self(":/Qss/ownerBlack.qss");
    file_self.open(QIODevice::ReadOnly);
    QString qss_self = QString::fromLatin1(file_self.readAll());
    file_self.close();
    owner.ui->ownerWidget->setStyleSheet(qss_self);
    //student
    //page1
    QFile file_student_1(":/Qss/studentPage1.qss");
    file_student_1.open(QIODevice::ReadOnly);
    QString qss_student_1 = QString::fromLatin1(file_student_1.readAll());
    file_student_1.close();
    student.ui->page->setStyleSheet(qss_student_1);
    //page2
    QFile file_student_2(":/Qss/studentPage2.qss");
    file_student_2.open(QIODevice::ReadOnly);
    QString qss_student_2 = QString::fromLatin1(file_student_2.readAll());
    file_student_2.close();
    student.ui->page_2->setStyleSheet(qss_student_2);
    //Sptn
    student.ui->ptn_writeOff->setStyleSheet(qss_student_2);
    student.ui->ptn_last->setStyleSheet(qss_student_2);
    student.ui->ptn_next->setStyleSheet(qss_student_2);
    student.ui->ptn_end->setStyleSheet(qss_student_2);
    student.ui->ptn_home->setStyleSheet(qss_student_2);
    student.ui->ptn_NotCorrected->setStyleSheet(qss_student_2);
    student.ui->ptn_released->setStyleSheet(qss_student_2);
    //Slabel
    student.ui->label_isSchool->setStyleSheet(qss_student_2);
    student.ui->label_leaveType->setStyleSheet(qss_student_2);
    student.ui->label_leaveReason_2->setStyleSheet(qss_student_2);
    student.ui->label_timeBegin->setStyleSheet(qss_student_2);
    student.ui->label_timeEnd->setStyleSheet(qss_student_2);
    student.ui->label_status->setStyleSheet(qss_student_2);
    //teacher
    QFile file_teacher(":/Qss/teacherBlack.qss");
    file_teacher.open(QIODevice::ReadOnly);
    QString qss_teacher = QString::fromLatin1(file_teacher.readAll());
    file_teacher.close();
    teacher.ui->widget->setStyleSheet(qss_teacher);
    teacher.ui->widget_2->setStyleSheet(qss_teacher);
    teacher.ui->widget_3->setStyleSheet(qss_teacher);
    teacher.ui->widget_4->setStyleSheet(qss_teacher);
    teacher.ui->widget_5->setStyleSheet(qss_teacher);
    //Tptn
    teacher.ui->ptn_agree->setStyleSheet(qss_teacher);
    teacher.ui->ptn_refuse->setStyleSheet(qss_teacher);
    teacher.ui->ptn_end->setStyleSheet(qss_teacher);
    teacher.ui->ptn_home->setStyleSheet(qss_teacher);
    teacher.ui->ptn_last->setStyleSheet(qss_teacher);
    teacher.ui->ptn_next->setStyleSheet(qss_teacher);
    teacher.ui->ptn_NotCorrected->setStyleSheet(qss_teacher);
    teacher.ui->ptn_released->setStyleSheet(qss_teacher);
    //Tlabel
    teacher.ui->label_now->setStyleSheet(qss_teacher);
    teacher.ui->label_total->setStyleSheet(qss_teacher);

//    AppSkin = "Black";
//    emit skinChange("Black");
}

void AllMain::resurfaceBlue()
{
    //widget_curtain窗口中控件继承
    ui->widget_curtain->setStyleSheet("#widget_curtain{background-color:rgba(22,134,182,178);}");
    //设置主窗口centralwidget的控件继承
    ui->centralwidget->setStyleSheet("#centralwidget{background-image:url(:/images/background.jpg);}");
    //widget_tail窗口中控件继承
    ui->widget_tail->setStyleSheet("#widget_tail{background-color:rgb(22,134,182);}");
    //顶部
    ui->widget_top->setStyleSheet("#widget_top{background-color:rgb(22,134,182);}"
                                  "#label_txt{"
                                  "font: 18px '楷体';"
                                  "color: rgb(255,255,255);}"
                                  "#ptn_close:hover{background-color: rgb(232,17,35);}"
                                  "#ptn_min:hover{background-color: rgba(255,255,255,127);}"
                                  "#label_title{image: url(:/images/calabash.png);}"
                                  );
    //绘制圆形框
    avatarRoundLable(ui->label_head, ":/images/user.png");
    skinBase();
//    AppSkin = "Bule";
//    emit skinChange("Bule");
}

void AllMain::resurfaceRed()
{
    //widget_curtain窗口中控件继承
    ui->widget_curtain->setStyleSheet("#widget_curtain{background-color:rgba(204,22,11,178);}");
    //设置主窗口centralwidget的控件继承
    ui->centralwidget->setStyleSheet("#centralwidget{background-image:url(:/images/background.jpg);}");
    //widget_tail窗口中控件继承
    ui->widget_tail->setStyleSheet("#widget_tail{background-image:url(:/images/Red.png);}");
    //顶部
    ui->widget_top->setStyleSheet("#widget_top{background-image:url(:/images/Red.png);}"
                                  "#label_txt{"
                                  "font: 18px '楷体';"
                                  "color: rgb(255,255,255);}"
                                  "#ptn_close:hover{background-color: rgb(232,17,35);}"
                                  "#ptn_min:hover{background-color: rgba(255,255,255,127);}"
                                  "#label_title{image: url(:/images/calabash.png);}"
                                  );
    //绘制圆形框
    avatarRoundLable(ui->label_head, ":/images/user.png");
    skinBase();
//    AppSkin = "Red";
//    emit skinChange("Red");
}

void AllMain::resurfacePink()
{
    //widget_curtain窗口中控件继承
    ui->widget_curtain->setStyleSheet("#widget_curtain{background-color:rgba(209,121,175,178);}");
    //设置主窗口centralwidget的控件继承
    ui->centralwidget->setStyleSheet("#centralwidget{background-image:url(:/images/background.jpg);}");
    //widget_tail窗口中控件继承
    ui->widget_tail->setStyleSheet("#widget_tail{background-image:url(:/images/Pink_2.jpg);}");
    //顶部
    ui->widget_top->setStyleSheet("#widget_top{background-image:url(:/images/Pink_2.jpg);}"
                                  "#label_txt{"
                                  "font: 18px '楷体';"
                                  "color: rgb(255,255,255);}"
                                  "#ptn_close:hover{background-color: rgb(232,17,35);}"
                                  "#ptn_min:hover{background-color: rgba(255,255,255,127);}"
                                  "#label_title{image: url(:/images/calabash.png);}"
                                  );
    //绘制圆形框
    avatarRoundLable(ui->label_head, ":/images/user.png");
    skinBase();
//    AppSkin = "Pink";
//    emit skinChange("Pink");
}

void AllMain::resurfaceGreen()
{
    //widget_curtain窗口中控件继承
    ui->widget_curtain->setStyleSheet("#widget_curtain{background-color:rgba(180,212,41,178);}");
    //设置主窗口centralwidget的控件继承
    ui->centralwidget->setStyleSheet("#centralwidget{background-image:url(:/images/background.jpg);}");
    //widget_tail窗口中控件继承
    ui->widget_tail->setStyleSheet("#widget_tail{background-image:url(:/images/Green.png);}");
    //顶部
    ui->widget_top->setStyleSheet("#widget_top{background-image:url(:/images/Green.png);}"
                                  "#label_txt{"
                                  "font: 18px '楷体';"
                                  "color: rgb(255,255,255);}"
                                  "#ptn_close:hover{background-color: rgb(232,17,35);}"
                                  "#ptn_min:hover{background-color: rgba(255,255,255,127);}"
                                  "#label_title{image: url(:/images/calabash.png);}"
                                  );
    //绘制圆形框
    avatarRoundLable(ui->label_head, ":/images/user.png");
    skinBase();
//    AppSkin = "Green";
//    emit skinChange("Green");
}

void AllMain::resurfaceGold()
{
    //widget_curtain窗口中控件继承
    ui->widget_curtain->setStyleSheet("#widget_curtain{background-color:rgba(228,139,19,178);}");
    //设置主窗口centralwidget的控件继承
    ui->centralwidget->setStyleSheet("#centralwidget{background-image:url(:/images/background.jpg);}");
    //widget_tail窗口中控件继承
    ui->widget_tail->setStyleSheet("#widget_tail{background-image:url(:/images/Gold_3.jpg);}");
    //顶部
    ui->widget_top->setStyleSheet("#widget_top{background-image:url(:/images/Gold_3.jpg);}"
                                  "#label_txt{"
                                  "font: 18px '楷体';"
                                  "color: rgb(255,255,255);}"
                                  "#ptn_close:hover{background-color: rgb(232,17,35);}"
                                  "#ptn_min:hover{background-color: rgba(255,255,255,127);}"
                                  "#label_title{image: url(:/images/calabash.png);}"
                                  );
    //绘制圆形框
    avatarRoundLable(ui->label_head, ":/images/user.png");
    skinBase();
//    AppSkin = "Gold";
    //    emit skinChange("Gold");
}

void AllMain::resurfaceSkin_01()
{
    //widget_curtain窗口中控件继承
    ui->widget_curtain->setStyleSheet("#widget_curtain{background-color:rgba(209, 204, 192,178);}");
    //设置主窗口centralwidget的控件继承
    ui->centralwidget->setStyleSheet("#centralwidget{background-image:url(:/images/background.jpg);}");
    //widget_tail窗口中控件继承
    ui->widget_tail->setStyleSheet("#widget_tail{background-color:rgb(170, 166, 157);}");
    //顶部
    ui->widget_top->setStyleSheet("#widget_top{background-color:rgb(170, 166, 157);}"
                                  "#label_txt{"
                                  "font: 18px '楷体';"
                                  "color: rgb(255,255,255);}"
                                  "#ptn_close:hover{background-color: rgb(232,17,35);}"
                                  "#ptn_min:hover{background-color: rgba(255,255,255,127);}"
                                  "#label_title{image: url(:/images/calabash.png);}"
                                  );
    //绘制圆形框
    avatarRoundLable(ui->label_head, ":/images/user.png");
    skinBase();
}

void AllMain::resurfaceSkin_02()
{
    //widget_curtain窗口中控件继承
    ui->widget_curtain->setStyleSheet("#widget_curtain{background-color:rgba(255,92,138,178);}");
    //设置主窗口centralwidget的控件继承
    ui->centralwidget->setStyleSheet("#centralwidget{background-image:url(:/images/background.jpg);}");
    //widget_tail窗口中控件继承
    ui->widget_tail->setStyleSheet("#widget_tail{background-color:rgb(255,92,138);}");
    //顶部
    ui->widget_top->setStyleSheet("#widget_top{background-color:rgb(255,92,138);}"
                                  "#label_txt{"
                                  "font: 18px '楷体';"
                                  "color: rgb(255,255,255);}"
                                  "#ptn_close:hover{background-color: rgb(232,17,35);}"
                                  "#ptn_min:hover{background-color: rgba(255,255,255,127);}"
                                  "#label_title{image: url(:/images/calabash.png);}"
                                  );
    //绘制圆形框
    avatarRoundLable(ui->label_head, ":/images/user.png");
    skinBase();
}

void AllMain::resurfaceSkin_03()
{
    //widget_curtain窗口中控件继承
    ui->widget_curtain->setStyleSheet("#widget_curtain{background-color:rgba(255,122,158,178);}");
    //设置主窗口centralwidget的控件继承
    ui->centralwidget->setStyleSheet("#centralwidget{background-image:url(:/images/background.jpg);}");
    //widget_tail窗口中控件继承
    ui->widget_tail->setStyleSheet("#widget_tail{background-color:rgb(255,122,158);}");
    //顶部
    ui->widget_top->setStyleSheet("#widget_top{background-color:rgb(255,122,158);}"
                                  "#label_txt{"
                                  "font: 18px '楷体';"
                                  "color: rgb(255,255,255);}"
                                  "#ptn_close:hover{background-color: rgb(232,17,35);}"
                                  "#ptn_min:hover{background-color: rgba(255,255,255,127);}"
                                  "#label_title{image: url(:/images/calabash.png);}"
                                  );
    //绘制圆形框
    avatarRoundLable(ui->label_head, ":/images/user.png");
    skinBase();
}

void AllMain::resurfaceSkin_04()
{
    //widget_curtain窗口中控件继承
    ui->widget_curtain->setStyleSheet("#widget_curtain{background-color:rgba(113,127,249,178);}");
    //设置主窗口centralwidget的控件继承
    ui->centralwidget->setStyleSheet("#centralwidget{background-image:url(:/images/background.jpg);}");
    //widget_tail窗口中控件继承
    ui->widget_tail->setStyleSheet("#widget_tail{background-color:rgb(113,127,249);}");
    //顶部
    ui->widget_top->setStyleSheet("#widget_top{background-color:rgb(113,127,249);}"
                                  "#label_txt{"
                                  "font: 18px '楷体';"
                                  "color: rgb(255,255,255);}"
                                  "#ptn_close:hover{background-color: rgb(232,17,35);}"
                                  "#ptn_min:hover{background-color: rgba(255,255,255,127);}"
                                  "#label_title{image: url(:/images/calabash.png);}"
                                  );
    //绘制圆形框
    avatarRoundLable(ui->label_head, ":/images/user.png");
    skinBase();
}

void AllMain::resurfaceSkin_05()
{
    //widget_curtain窗口中控件继承
    ui->widget_curtain->setStyleSheet("#widget_curtain{background-color:rgba(71,145,235,178);}");
    //设置主窗口centralwidget的控件继承
    ui->centralwidget->setStyleSheet("#centralwidget{background-image:url(:/images/background.jpg);}");
    //widget_tail窗口中控件继承
    ui->widget_tail->setStyleSheet("#widget_tail{background-color:rgb(71,145,235);}");
    //顶部
    ui->widget_top->setStyleSheet("#widget_top{background-color:rgb(71,145,235);}"
                                  "#label_txt{"
                                  "font: 18px '楷体';"
                                  "color: rgb(255,255,255);}"
                                  "#ptn_close:hover{background-color: rgb(232,17,35);}"
                                  "#ptn_min:hover{background-color: rgba(255,255,255,127);}"
                                  "#label_title{image: url(:/images/calabash.png);}"
                                  );
    //绘制圆形框
    avatarRoundLable(ui->label_head, ":/images/user.png");
    skinBase();
}

void AllMain::resurfaceSkin_06()
{
    //widget_curtain窗口中控件继承
    ui->widget_curtain->setStyleSheet("#widget_curtain{background-color:rgba(43,182,105,178);}");
    //设置主窗口centralwidget的控件继承
    ui->centralwidget->setStyleSheet("#centralwidget{background-image:url(:/images/background.jpg);}");
    //widget_tail窗口中控件继承
    ui->widget_tail->setStyleSheet("#widget_tail{background-color:rgb(43,182,105);}");
    //顶部
    ui->widget_top->setStyleSheet("#widget_top{background-color:rgb(43,182,105);}"
                                  "#label_txt{"
                                  "font: 18px '楷体';"
                                  "color: rgb(255,255,255);}"
                                  "#ptn_close:hover{background-color: rgb(232,17,35);}"
                                  "#ptn_min:hover{background-color: rgba(255,255,255,127);}"
                                  "#label_title{image: url(:/images/calabash.png);}"
                                  );
    //绘制圆形框
    avatarRoundLable(ui->label_head, ":/images/user.png");
    skinBase();
}

void AllMain::resurfaceSkin_07()
{
    //widget_curtain窗口中控件继承
    ui->widget_curtain->setStyleSheet("#widget_curtain{background-color:rgba(106,204,25,178);}");
    //设置主窗口centralwidget的控件继承
    ui->centralwidget->setStyleSheet("#centralwidget{background-image:url(:/images/background.jpg);}");
    //widget_tail窗口中控件继承
    ui->widget_tail->setStyleSheet("#widget_tail{background-color:rgb(106,204,25);}");
    //顶部
    ui->widget_top->setStyleSheet("#widget_top{background-color:rgb(106,204,25);}"
                                  "#label_txt{"
                                  "font: 18px '楷体';"
                                  "color: rgb(255,255,255);}"
                                  "#ptn_close:hover{background-color: rgb(232,17,35);}"
                                  "#ptn_min:hover{background-color: rgba(255,255,255,127);}"
                                  "#label_title{image: url(:/images/calabash.png);}"
                                  );
    //绘制圆形框
    avatarRoundLable(ui->label_head, ":/images/user.png");
    skinBase();
}

void AllMain::resurfaceSkin_08()
{
    //widget_curtain窗口中控件继承
    ui->widget_curtain->setStyleSheet("#widget_curtain{background-color:rgba(226,171,18,178);}");
    //设置主窗口centralwidget的控件继承
    ui->centralwidget->setStyleSheet("#centralwidget{background-image:url(:/images/background.jpg);}");
    //widget_tail窗口中控件继承
    ui->widget_tail->setStyleSheet("#widget_tail{background-color:rgb(226,171,18);}");
    //顶部
    ui->widget_top->setStyleSheet("#widget_top{background-color:rgb(226,171,18);}"
                                  "#label_txt{"
                                  "font: 18px '楷体';"
                                  "color: rgb(255,255,255);}"
                                  "#ptn_close:hover{background-color: rgb(232,17,35);}"
                                  "#ptn_min:hover{background-color: rgba(255,255,255,127);}"
                                  "#label_title{image: url(:/images/calabash.png);}"
                                  );
    //绘制圆形框
    avatarRoundLable(ui->label_head, ":/images/user.png");
    skinBase();
}

void AllMain::resurfaceSkin_09()
{
    //widget_curtain窗口中控件继承
    ui->widget_curtain->setStyleSheet("#widget_curtain{background-color:rgba(253,114,109,178);}");
    //设置主窗口centralwidget的控件继承
    ui->centralwidget->setStyleSheet("#centralwidget{background-image:url(:/images/background.jpg);}");
    //widget_tail窗口中控件继承
    ui->widget_tail->setStyleSheet("#widget_tail{background-color:rgb(253,114,109);}");
    //顶部
    ui->widget_top->setStyleSheet("#widget_top{background-color:rgb(253,114,109);}"
                                  "#label_txt{"
                                  "font: 18px '楷体';"
                                  "color: rgb(255,255,255);}"
                                  "#ptn_close:hover{background-color: rgb(232,17,35);}"
                                  "#ptn_min:hover{background-color: rgba(255,255,255,127);}"
                                  "#label_title{image: url(:/images/calabash.png);}"
                                  );
    //绘制圆形框
    avatarRoundLable(ui->label_head, ":/images/user.png");
    skinBase();
}

void AllMain::resurfaceSkin_10()
{
    //widget_curtain窗口中控件继承
    ui->widget_curtain->setStyleSheet("#widget_curtain{background-color:rgba(253,84,78,178);}");
    //设置主窗口centralwidget的控件继承
    ui->centralwidget->setStyleSheet("#centralwidget{background-image:url(:/images/background.jpg);}");
    //widget_tail窗口中控件继承
    ui->widget_tail->setStyleSheet("#widget_tail{background-color:rgb(253,84,78);}");
    //顶部
    ui->widget_top->setStyleSheet("#widget_top{background-color:rgb(253,84,78);}"
                                  "#label_txt{"
                                  "font: 18px '楷体';"
                                  "color: rgb(255,255,255);}"
                                  "#ptn_close:hover{background-color: rgb(232,17,35);}"
                                  "#ptn_min:hover{background-color: rgba(255,255,255,127);}"
                                  "#label_title{image: url(:/images/calabash.png);}"
                                  );
    //绘制圆形框
    avatarRoundLable(ui->label_head, ":/images/user.png");
    skinBase();
}

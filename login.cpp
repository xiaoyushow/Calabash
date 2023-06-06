#include "Login.h"
#include "./ui_Login.h"
#include "./ui_allmain.h"
#include <QIcon>
#include <QShortcut>
#include <QMovie>
Login::Login(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Login)
    , isCancel(false)
{
    //去除边框
    setWindowFlag(Qt::WindowType::FramelessWindowHint);
    //背景透明
    setAttribute(Qt::WA_TintedBackground);

    ui->setupUi(this);
    this->setWindowIcon(QIcon(":/images/calabash.png"));
    connect(ui->btnClose, &QPushButton::clicked, this, &Login::on_btnClose_clicked);
    connect(ui->btnMin, &QPushButton::clicked, this, &Login::on_btnMin_clicked);
    //connect(ui->btnLogin, &QPushButton::released, this, &Login::on_btnLogin_released);
    connect(&allmain, &AllMain::mySignal, this, &Login::dealSlot);
    //checkBox AutoLogin、RemPassword、usernameComboBoxChange
    connect(ui->Auto_Log, &QCheckBox::stateChanged, this, &Login::Autoin_Log_clicked);
    connect(ui->Rem_Passwd, &QCheckBox::stateChanged, this, &Login::on_Rem_Passwd_clicked);
    connect(ui->username, &QComboBox::currentIndexChanged, this, &Login::UsernameChange);
    //connect(ui->username, &QComboBox::currentTextChanged, this, &Login::UsernameChange);

    //ui->labtop->setStyleSheet("");
    //username提示
    ui->username->lineEdit()->setPlaceholderText("学号/工号");

    QShortcut *key = new QShortcut(QKeySequence(Qt::Key_Return),this);
    connect(key, &QShortcut::activated, this, &Login::on_btnLogin_released);

    message = new calabash::Message(this);
    //加载界面
    lbl_loading = new QLabel(this);
    lbl_loading->setGeometry(QRect(240, 210, 64, 64));
    QMovie *movie = new QMovie(":/images/loading.gif");
    lbl_loading->setMovie(movie);
    movie->start();

    lbl_loading->hide();
    ui->ptn_cancel->hide();
    connect(this, &Login::loginEnd, this, &Login::loginShow);
    connect(ui->ptn_cancel, &QPushButton::released, this, &Login::loginBack);
    //自动登录信号
    connect(this, &Login::autoLoginSiganl, this, &Login::autoLog);
    //connect(&allmain, &AllMain::skinChange, this, &Login::saveSkin);
    QSettings cfg("D:/Qt/QtProgram/calabash/File/fzconfig.ini",QSettings::IniFormat);
    QStringList groupList = cfg.childGroups();
    foreach (QString group, groupList) {
        if(group != "1360701" && group != "2020984130603")
        {
            ui->username->addItem(group);
        }
    }
    //加载初始化
    loadcfg();

}

Login::~Login()
{
    delete ui;
}


void Login::dealSlot()
{
    allmain.hide();
    this->show();
}

void Login::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        m_dragging = true;
        m_dragStartPos = event->pos();
    }
}

void Login::mouseMoveEvent(QMouseEvent *event)
{
    if (m_dragging) {
        move((event->globalPosition()).toPoint() - m_dragStartPos);
    }
}

void Login::mouseReleaseEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        m_dragging = false;
    }
}



void Login::on_btnMin_clicked()
{
    //最小化窗口
    this->showMinimized();
}


void Login::on_btnClose_clicked()
{
    //关闭窗口
    this->close();
}

//点击登录跳转窗口
void Login::on_btnLogin_released()
{
    //判断
    if(ui->username->currentText() == "" || ui->password->text() == ""){
        message->Warning("Error, login err!");
    } else{
        http.username = ui->username->currentText();
        http.password = QString(md5.Encode(ui->password->text().toStdString()).c_str());
        http.sendRequest("login");
        if(http.code == 400 || http.code == 401 || http.code == 403){
            message->Warning("The account number or password is incorrect!");
        } else if((http.code == 200 || http.code == 201 || http.code == 202) && http.username.size() == 13){
            loading();
            if(isCancel){
                isCancel = false;
                //qDebug()<< "front";
                return;
            }
            //qDebug()<< "a";
            this->hide();
            allmain.show();
            emit loginEnd();
            allmain.http.token = this->http.token;
            allmain.http.username = this->http.username;
            QString username = QString("%1").arg(http.username);
            allmain.ui->label_username->setText("您好，" + username);
            allmain.ui->ptn_teacher->setEnabled(false);
            allmain.ui->ptn_student->setEnabled(true);
            allmain.ui->ptn_teacher->setIcon(QIcon());
            // 针对addItem方法可避免重复添加
            if(ui->username->findText(ui->username->currentText()) == -1)
            {
                ui->username->addItem(ui->username->currentText());
            }
            savecfg();

        } else if((http.code == 200 || http.code == 201 || http.code == 202) && http.username.size() == 7){
            loading();
            if(isCancel){
                isCancel = false;
                return;
            }
            this->hide();
            allmain.show();
            emit loginEnd();
            allmain.http.token = this->http.token;
            QString username = QString("%1").arg(http.username);
            allmain.ui->label_username->setText("您好，" + username);
            allmain.ui->ptn_student->setEnabled(false);
            allmain.ui->ptn_teacher->setEnabled(true);
            allmain.ui->ptn_student->setIcon(QIcon());
            // 针对addItem方法可避免重复添加
            if(ui->username->findText(ui->username->currentText()) == -1)
            {
                ui->username->addItem(ui->username->currentText());
            }
            savecfg();

        }

    }

}

void Login::on_Rem_Passwd_clicked()
{
    if(ui->Rem_Passwd->isChecked())
    {
        remeberPasswd = true;
    }
    else
    {
        ui->password->clear();
        remeberPasswd = false;
    }
}

void Login::Autoin_Log_clicked()
{
    if(ui->Auto_Log->isChecked())
    {
        autologin = true;
    }
    else
    {
        autologin = false;
    }

}

void Login::UsernameChange()
{
    QSettings cfg("D:/Qt/QtProgram/calabash/File/fzconfig.ini",QSettings::IniFormat);
    if(ui->username->currentText() == ""){
        return;
    }
    if(ui->username->findText(ui->username->currentText()) == -1){
        return;
    }
    ui->Auto_Log->setCheckState(Qt::Unchecked);
    ui->Rem_Passwd->setCheckState(Qt::Unchecked);
    loadcfg();
}

void Login::loginShow()
{
    ui->btnLogin->show();
    ui->Auto_Log->show();
    ui->Rem_Passwd->show();
    ui->username->show();
    ui->password->show();
    ui->btnRegister->show();

    lbl_loading->hide();
    ui->ptn_cancel->hide();
}

void Login::loginBack()
{
    isCancel = true;
    ui->btnLogin->show();
    ui->Auto_Log->show();
    ui->Rem_Passwd->show();
    ui->username->show();
    ui->password->show();
    ui->btnRegister->show();

    lbl_loading->hide();
    ui->ptn_cancel->hide();

}

//void Login::saveSkin(QString StrSkin)
//{
//    QSettings cfg("D:/Qt/QtProgram/calabash/File/fzconfig.ini",QSettings::IniFormat);
//    cfg.beginGroup(QString("%1").arg(ui->username->currentText()));
//    Skin = StrSkin;
//    cfg.setValue("skin", Skin);
//    cfg.sync();
//}


void Login::savecfg()
{
    QSettings cfg("D:/Qt/QtProgram/calabash/File/fzconfig.ini",QSettings::IniFormat);
    username = ui->username->currentText();
    passwd = ui->password->text();
    autologin = ui->Auto_Log->isChecked();
    remeberPasswd = ui->Rem_Passwd->isChecked();
//    Skin = allmain.AppSkin;
//    qDebug()<< "allmainSave:" << allmain.AppSkin;
//    qDebug()<< "Save:" << Skin;

    cfg.beginGroup(QString("%1").arg(ui->username->currentText()));
    cfg.setValue("username", ui->username->currentText());
    cfg.setValue("passwd", ui->password->text());
    cfg.setValue("autologin", autologin);
    cfg.setValue("remeberPasswd", remeberPasswd);
    //cfg.setValue("skin", Skin);
    cfg.sync();
}

void Login::loadcfg()
{
    QSettings cfg("D:/Qt/QtProgram/calabash/File/fzconfig.ini",QSettings::IniFormat);

    cfg.beginGroup(QString("%1").arg(ui->username->currentText()));
    username = cfg.value("username").toString();
    passwd = cfg.value("passwd").toString();
    AutoLogin = cfg.value("autologin").toString();
    RemeberPasswd = cfg.value("remeberPasswd").toString();
//    allmain.AppSkin = cfg.value("skin").toString();
//    Skin = cfg.value("skin").toString();
//    qDebug()<< "load:" <<allmain.AppSkin;
    //qDebug()<< AutoLogin;
    //qDebug()<< RemeberPasswd;
    if(RemeberPasswd == "true")
    {
        ui->Rem_Passwd->setCheckState(Qt::Checked);
        ui->password->setText(passwd);
    }
    if(AutoLogin == "true")
    {
        ui->Auto_Log->setCheckState(Qt::Checked);
        ui->password->setText(passwd);
        //自动登录(时延)
        //sleep(100);
        //autoLog();
        loading();
        emit autoLoginSiganl();
    }

}

void Login::loading()
{
    ui->btnLogin->hide();
    ui->Auto_Log->hide();
    ui->Rem_Passwd->hide();
    ui->username->hide();
    ui->password->hide();
    ui->btnRegister->hide();
    lbl_loading->show();
    ui->ptn_cancel->show();
    sleep(1000);
}

void Login::sleep(unsigned int msec)
{
    QTime reachTime = QTime::currentTime().addMSecs(msec);
    //用while循环不断比对当前时间与我们设定的时间
    while(QTime::currentTime()<reachTime){
        QApplication::processEvents(QEventLoop::AllEvents, 100);
    }
}

void Login::autoLog()
{
    //sleep(500);
    http.username = ui->username->currentText();
    http.password = QString(md5.Encode(ui->password->text().toStdString()).c_str());
    http.sendRequest("login");
    if(http.code == 400 || http.code == 401 || http.code == 403){
        message->Warning("sever maybe wrong");
    } else if((http.code == 200 || http.code == 201 || http.code == 202) && http.username.size() == 13){
        //loading();
        if(isCancel){
            isCancel = false;
            //qDebug()<< "front";
            return;
        }
        //qDebug()<< "a";
        this->hide();
        allmain.show();
        emit loginEnd();
        allmain.http.token = this->http.token;
        allmain.http.username = this->http.username;
        QString username = QString("%1").arg(http.username);
        allmain.ui->label_username->setText("您好，" + username);
        allmain.ui->ptn_teacher->setEnabled(false);
        allmain.ui->ptn_student->setEnabled(true);
        allmain.ui->ptn_teacher->setIcon(QIcon());
        // 针对addItem方法可避免重复添加
        if(ui->username->findText(ui->username->currentText()) == -1)
        {
            ui->username->addItem(ui->username->currentText());
        }
        savecfg();

    } else if((http.code == 200 || http.code == 201 || http.code == 202) && http.username.size() == 7){
        //loading();
        if(isCancel){
            isCancel = false;
            return;
        }
        this->hide();
        allmain.show();
        emit loginEnd();
        allmain.http.token = this->http.token;
        QString username = QString("%1").arg(http.username);
        allmain.ui->label_username->setText("您好，" + username);
        allmain.ui->ptn_student->setEnabled(false);
        allmain.ui->ptn_teacher->setEnabled(true);
        allmain.ui->ptn_student->setIcon(QIcon());
        // 针对addItem方法可避免重复添加
        if(ui->username->findText(ui->username->currentText()) == -1)
        {
            ui->username->addItem(ui->username->currentText());
        }
        savecfg();

    }

}



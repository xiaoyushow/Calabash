#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QLabel>
#include <QMouseEvent>
#include <QMessageBox>
#include "http.h"
#include "md5.h"
#include "allmain.h"
#include "message.h"
#include <QSettings>
#include <QTime>

QT_BEGIN_NAMESPACE
namespace Ui { class Login; }
QT_END_NAMESPACE

class Login : public QWidget
{
    Q_OBJECT

public:
    Login(QWidget *parent = nullptr);
    ~Login();    
    void dealSlot();//主切子信号

protected:
    //拖动重写
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;

signals:
    void loginEnd();
    void autoLoginSiganl();
private slots:
    void on_btnMin_clicked();
    void on_btnClose_clicked();
    void on_btnLogin_released();

    //记住密码标志位
    void on_Rem_Passwd_clicked();
    //自动登录标志位
    void Autoin_Log_clicked();
    //usernameChange
    void UsernameChange();
    //loginShow
    void loginShow();
    //返回登录界面
    void loginBack();
    //saveSkin
    //void saveSkin(QString StrSkin);
    void autoLog();//自动登录

private:
    calabash::Message *message{};
    calabash::MD5 md5;
    Ui::Login *ui;
    AllMain allmain;

    bool m_dragging = false;
    QPoint m_dragStartPos;

private:
    bool isCancel;
    QLabel *lbl_loading;

    QString	username;
    QString	passwd;
    QString	AutoLogin;
    QString	RemeberPasswd;
    //QString Skin;
    bool remeberPasswd;
    bool autologin;
    void savecfg();
    void loadcfg();
    //登录加载
    void loading();

    void sleep(unsigned int msec);//延时功能(ms)

public:
    Http http;
};
#endif // Login_H

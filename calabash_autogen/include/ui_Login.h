/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLabel *labtop;
    QWidget *widget;
    QPushButton *btnLogin;
    QComboBox *username;
    QLineEdit *password;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QCheckBox *Auto_Log;
    QCheckBox *Rem_Passwd;
    QPushButton *btnRegister;
    QPushButton *ptn_cancel;
    QPushButton *btnMin;
    QPushButton *btnClose;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(540, 415);
        Login->setMinimumSize(QSize(540, 415));
        Login->setMaximumSize(QSize(540, 415));
        Login->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color: rgb(8,189,253);\n"
"}\n"
"\n"
".QWidget\n"
"{\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"	border:none;\n"
"}\n"
"\n"
"QPushButton#btnMin\n"
"{\n"
"	image: url(:/images/24gl-minimization.png);\n"
"}\n"
"\n"
"QPushButton#btnClose\n"
"{\n"
"	image: url(:/images/close.png);\n"
"}\n"
"\n"
"QPushButton#btnMin:hover\n"
"{\n"
"	background-color: rgb(165, 165, 165);\n"
"}\n"
"\n"
"QPushButton#btnClose:hover\n"
"{\n"
"	background-color: rgb(255, 0, 0);\n"
"}\n"
"\n"
"QPushButton#btnLogin\n"
"{\n"
"	background-color: rgb(8,189,253);\n"
"	border-radius:5px;\n"
"	font: normal 22px \"\346\245\267\344\275\223\";\n"
"	color: white;\n"
"}\n"
"QPushButton#ptn_cancel\n"
"{\n"
"	background-color: rgb(8,189,253);\n"
"	border-radius:5px;\n"
"	font: normal 22px \"\346\245\267\344\275\223\";\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton#btnLogin:hover\n"
"{\n"
"	background-color: rgba(8,189,253,220);\n"
"}\n"
"\n"
"QPushButton#btnQrcode\n"
"{\n"
"	image: u"
                        "rl(:/images/Qrcode.png);\n"
"}\n"
"\n"
"QPushButton#btnQrcode:hover\n"
"{\n"
"	image: url(:/images/blackQrcode.png);\n"
"}\n"
"\n"
"QComboBox, QLineEdit\n"
"{\n"
"	border:none;\n"
"	border-bottom:1px solid rgb(299, 299, 299);\n"
"	font: normal 18px \"\346\245\267\344\275\223\";\n"
"	color: rgb(193, 193, 193);\n"
"}\n"
"\n"
"QComboBox:hover, QLineEdit:hover\n"
"{\n"
"	border-bottom:1px solid rgb(193, 193, 193);\n"
"}\n"
"\n"
"QComboBox:focus, QLineEdit:focus\n"
"{\n"
"	border-bottom:1px solid rgb(18, 183, 245);\n"
"}\n"
"\n"
"QComboBox::drop-down\n"
"{\n"
"	min-width:25px;\n"
"	border-image: url(:/images/down_arrow.png);\n"
"}\n"
"\n"
"QComboBox::drop-down:hover\n"
"{\n"
"	border-image: url(:/images/adown_arrow.png);\n"
"}\n"
"\n"
"QComboBox::drop-down:checked\n"
"{\n"
"	border-image: url(:/images/up_arrow.png);\n"
"}\n"
""));
        labtop = new QLabel(Login);
        labtop->setObjectName(QString::fromUtf8("labtop"));
        labtop->setGeometry(QRect(0, 0, 540, 160));
        labtop->setMinimumSize(QSize(540, 160));
        labtop->setMaximumSize(QSize(540, 160));
        labtop->setPixmap(QPixmap(QString::fromUtf8(":/images/number.jpg")));
        widget = new QWidget(Login);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 160, 540, 261));
        widget->setMaximumSize(QSize(16777215, 415));
        btnLogin = new QPushButton(widget);
        btnLogin->setObjectName(QString::fromUtf8("btnLogin"));
        btnLogin->setGeometry(QRect(120, 180, 300, 45));
        btnLogin->setMinimumSize(QSize(300, 45));
        btnLogin->setMaximumSize(QSize(300, 45));
        btnLogin->setIconSize(QSize(20, 20));
        username = new QComboBox(widget);
        username->addItem(QString());
        username->addItem(QString());
        username->setObjectName(QString::fromUtf8("username"));
        username->setGeometry(QRect(120, 50, 300, 35));
        username->setMinimumSize(QSize(300, 35));
        username->setMaximumSize(QSize(300, 35));
        username->setEditable(true);
        password = new QLineEdit(widget);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(120, 90, 300, 35));
        password->setMinimumSize(QSize(300, 35));
        password->setMaximumSize(QSize(300, 35));
        password->setEchoMode(QLineEdit::Password);
        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 140, 321, 28));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Auto_Log = new QCheckBox(layoutWidget);
        Auto_Log->setObjectName(QString::fromUtf8("Auto_Log"));

        horizontalLayout->addWidget(Auto_Log);

        Rem_Passwd = new QCheckBox(layoutWidget);
        Rem_Passwd->setObjectName(QString::fromUtf8("Rem_Passwd"));

        horizontalLayout->addWidget(Rem_Passwd);

        btnRegister = new QPushButton(layoutWidget);
        btnRegister->setObjectName(QString::fromUtf8("btnRegister"));

        horizontalLayout->addWidget(btnRegister);

        ptn_cancel = new QPushButton(widget);
        ptn_cancel->setObjectName(QString::fromUtf8("ptn_cancel"));
        ptn_cancel->setGeometry(QRect(200, 180, 140, 45));
        ptn_cancel->raise();
        btnLogin->raise();
        username->raise();
        password->raise();
        layoutWidget->raise();
        btnMin = new QPushButton(Login);
        btnMin->setObjectName(QString::fromUtf8("btnMin"));
        btnMin->setGeometry(QRect(480, 0, 32, 32));
        btnMin->setMinimumSize(QSize(32, 32));
        btnMin->setMaximumSize(QSize(32, 32));
        btnClose = new QPushButton(Login);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        btnClose->setGeometry(QRect(510, 0, 32, 32));
        btnClose->setMinimumSize(QSize(32, 32));
        btnClose->setMaximumSize(QSize(32, 32));

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Login", nullptr));
        labtop->setText(QString());
        btnLogin->setText(QCoreApplication::translate("Login", "\347\231\273\345\275\225", nullptr));
        username->setItemText(0, QCoreApplication::translate("Login", "2020984130603", nullptr));
        username->setItemText(1, QCoreApplication::translate("Login", "1360701", nullptr));

        username->setCurrentText(QCoreApplication::translate("Login", "2020984130603", nullptr));
        username->setPlaceholderText(QString());
        password->setText(QString());
        password->setPlaceholderText(QCoreApplication::translate("Login", "\345\257\206\347\240\201", nullptr));
        Auto_Log->setText(QCoreApplication::translate("Login", "\350\207\252\345\212\250\347\231\273\345\275\225", nullptr));
        Rem_Passwd->setText(QCoreApplication::translate("Login", "\350\256\260\344\275\217\345\257\206\347\240\201", nullptr));
        btnRegister->setText(QCoreApplication::translate("Login", "\346\211\276\345\233\236\345\257\206\347\240\201", nullptr));
        ptn_cancel->setText(QCoreApplication::translate("Login", "\345\217\226\346\266\210", nullptr));
        btnMin->setText(QString());
        btnClose->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H

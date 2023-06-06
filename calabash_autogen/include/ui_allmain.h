/********************************************************************************
** Form generated from reading UI file 'allmain.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLMAIN_H
#define UI_ALLMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AllMain
{
public:
    QWidget *centralwidget;
    QWidget *widget_top;
    QLabel *label_txt;
    QLabel *label_title;
    QPushButton *ptn_min;
    QPushButton *ptn_close;
    QWidget *widget_curtain;
    QLabel *label_icon;
    QLabel *label_begin;
    QLabel *label_begin_;
    QWidget *widget_tail;
    QLabel *label_head;
    QLabel *label_username;
    QPushButton *ptn_home;
    QPushButton *ptn_introduce;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *ptn_owner;
    QPushButton *ptn_teacher;
    QPushButton *ptn_student;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *ptn_setting;
    QPushButton *ptn_signOut;

    void setupUi(QMainWindow *AllMain)
    {
        if (AllMain->objectName().isEmpty())
            AllMain->setObjectName(QString::fromUtf8("AllMain"));
        AllMain->resize(1063, 600);
        AllMain->setMinimumSize(QSize(1063, 600));
        AllMain->setMaximumSize(QSize(1063, 600));
        AllMain->setStyleSheet(QString::fromUtf8("QPushButton#ptn_close\n"
"{\n"
"	image: url(:/images/close.png);\n"
"	border:none;\n"
"}\n"
"\n"
"QPushButton#ptn_close:hover\n"
"{\n"
"	image: url(:/images/close_.png);\n"
"	border:none;\n"
"}\n"
"\n"
"QPushButton#ptn_min\n"
"{\n"
"	image: url(:/images/little.png);\n"
"	border:none;\n"
"}\n"
"\n"
"QPushButton#ptn_min:hover\n"
"{\n"
"	image: url(:/images/little_.png);\n"
"	border:none;\n"
"}\n"
"\n"
"QPushButton#ptn_max\n"
"{\n"
"	image: url(:/images/max.png);\n"
"	border:none;\n"
"}\n"
"\n"
"QPushButton#ptn_max:hover\n"
"{\n"
"	image: url(:/images/max_.png);\n"
"	border:none;\n"
"}"));
        centralwidget = new QWidget(AllMain);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font : 14px;\n"
"	color : rgb(255, 255, 255);\n"
"}\n"
"\n"
""));
        widget_top = new QWidget(centralwidget);
        widget_top->setObjectName(QString::fromUtf8("widget_top"));
        widget_top->setGeometry(QRect(0, 0, 1063, 40));
        widget_top->setMinimumSize(QSize(1063, 40));
        widget_top->setMaximumSize(QSize(1063, 40));
        widget_top->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: rgb(22,134,182);\n"
"}\n"
"\n"
"QLabel#label_txt\n"
"{\n"
"	font: 18px '\346\245\267\344\275\223';\n"
"	color:  rgb(255,255,255);\n"
"}\n"
"\n"
"QPushButton#ptn_close:hover\n"
"{\n"
"	background-color: rgb(232,17,35);\n"
"}\n"
"\n"
"QPushButton#ptn_min:hover\n"
"{\n"
"	background-color: rgba(255,255,255,127);\n"
"}\n"
"\n"
"QLabel#label_title\n"
"{\n"
"	image: url(:/images/calabash.png);\n"
"}"));
        label_txt = new QLabel(widget_top);
        label_txt->setObjectName(QString::fromUtf8("label_txt"));
        label_txt->setGeometry(QRect(50, 0, 121, 41));
        label_title = new QLabel(widget_top);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setGeometry(QRect(0, 0, 40, 40));
        label_title->setMinimumSize(QSize(40, 40));
        label_title->setMaximumSize(QSize(40, 40));
        label_title->setScaledContents(true);
        ptn_min = new QPushButton(widget_top);
        ptn_min->setObjectName(QString::fromUtf8("ptn_min"));
        ptn_min->setGeometry(QRect(943, 0, 60, 40));
        ptn_min->setMinimumSize(QSize(60, 40));
        ptn_min->setMaximumSize(QSize(60, 40));
        ptn_close = new QPushButton(widget_top);
        ptn_close->setObjectName(QString::fromUtf8("ptn_close"));
        ptn_close->setGeometry(QRect(1003, 0, 60, 40));
        ptn_close->setMinimumSize(QSize(60, 40));
        ptn_close->setMaximumSize(QSize(60, 40));
        widget_curtain = new QWidget(centralwidget);
        widget_curtain->setObjectName(QString::fromUtf8("widget_curtain"));
        widget_curtain->setGeometry(QRect(0, 40, 1063, 90));
        widget_curtain->setMinimumSize(QSize(1063, 90));
        widget_curtain->setMaximumSize(QSize(1063, 90));
        widget_curtain->setStyleSheet(QString::fromUtf8("/*QWidget\n"
"{\n"
"	background-color: rgba(22,134,182,178);\n"
"}\n"
"*/\n"
"QLable#label_icon\n"
"{\n"
"	background-color:transparent;\n"
"}"));
        label_icon = new QLabel(widget_curtain);
        label_icon->setObjectName(QString::fromUtf8("label_icon"));
        label_icon->setGeometry(QRect(20, 10, 69, 61));
        label_icon->setPixmap(QPixmap(QString::fromUtf8(":/images/point.png")));
        label_icon->setScaledContents(true);
        label_begin = new QLabel(widget_curtain);
        label_begin->setObjectName(QString::fromUtf8("label_begin"));
        label_begin->setGeometry(QRect(100, 10, 61, 41));
        label_begin_ = new QLabel(widget_curtain);
        label_begin_->setObjectName(QString::fromUtf8("label_begin_"));
        label_begin_->setGeometry(QRect(100, 50, 311, 16));
        widget_tail = new QWidget(centralwidget);
        widget_tail->setObjectName(QString::fromUtf8("widget_tail"));
        widget_tail->setGeometry(QRect(0, 510, 1063, 90));
        widget_tail->setMinimumSize(QSize(1063, 90));
        widget_tail->setMaximumSize(QSize(1063, 90));
        widget_tail->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: rgba(22,134,182,165);\n"
"}\n"
"QLabel#label_username\n"
"{\n"
"	font: color(255,255,255);\n"
"}\n"
"QPushButton#ptn_home\n"
"{\n"
"	\n"
"	image: url(:/images/home.png);\n"
"}"));
        label_head = new QLabel(widget_tail);
        label_head->setObjectName(QString::fromUtf8("label_head"));
        label_head->setGeometry(QRect(15, 15, 60, 60));
        label_head->setMinimumSize(QSize(60, 60));
        label_head->setMaximumSize(QSize(60, 60));
        label_username = new QLabel(widget_tail);
        label_username->setObjectName(QString::fromUtf8("label_username"));
        label_username->setGeometry(QRect(80, 20, 371, 50));
        label_username->setMinimumSize(QSize(0, 50));
        label_username->setMaximumSize(QSize(16777215, 50));
        ptn_home = new QPushButton(widget_tail);
        ptn_home->setObjectName(QString::fromUtf8("ptn_home"));
        ptn_home->setGeometry(QRect(980, 15, 60, 60));
        ptn_introduce = new QPushButton(centralwidget);
        ptn_introduce->setObjectName(QString::fromUtf8("ptn_introduce"));
        ptn_introduce->setGeometry(QRect(30, 140, 340, 340));
        ptn_introduce->setMinimumSize(QSize(340, 340));
        ptn_introduce->setFlat(false);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(400, 140, 538, 162));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(28);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ptn_owner = new QPushButton(layoutWidget);
        ptn_owner->setObjectName(QString::fromUtf8("ptn_owner"));
        ptn_owner->setMinimumSize(QSize(160, 160));
        ptn_owner->setMaximumSize(QSize(160, 160));

        horizontalLayout->addWidget(ptn_owner);

        ptn_teacher = new QPushButton(layoutWidget);
        ptn_teacher->setObjectName(QString::fromUtf8("ptn_teacher"));
        ptn_teacher->setMinimumSize(QSize(160, 160));
        ptn_teacher->setMaximumSize(QSize(160, 160));

        horizontalLayout->addWidget(ptn_teacher);

        ptn_student = new QPushButton(layoutWidget);
        ptn_student->setObjectName(QString::fromUtf8("ptn_student"));
        ptn_student->setMinimumSize(QSize(160, 160));
        ptn_student->setMaximumSize(QSize(160, 160));

        horizontalLayout->addWidget(ptn_student);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(400, 320, 542, 162));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(25);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        ptn_setting = new QPushButton(layoutWidget1);
        ptn_setting->setObjectName(QString::fromUtf8("ptn_setting"));
        ptn_setting->setMinimumSize(QSize(160, 160));
        ptn_setting->setMaximumSize(QSize(160, 160));

        horizontalLayout_2->addWidget(ptn_setting);

        ptn_signOut = new QPushButton(layoutWidget1);
        ptn_signOut->setObjectName(QString::fromUtf8("ptn_signOut"));
        ptn_signOut->setMinimumSize(QSize(350, 160));
        ptn_signOut->setMaximumSize(QSize(350, 160));

        horizontalLayout_2->addWidget(ptn_signOut);

        AllMain->setCentralWidget(centralwidget);

        retranslateUi(AllMain);

        QMetaObject::connectSlotsByName(AllMain);
    } // setupUi

    void retranslateUi(QMainWindow *AllMain)
    {
        AllMain->setWindowTitle(QCoreApplication::translate("AllMain", "AllMain", nullptr));
        label_txt->setText(QCoreApplication::translate("AllMain", "Calabash", nullptr));
        label_title->setText(QString());
        ptn_min->setText(QString());
        ptn_close->setText(QString());
        label_icon->setText(QString());
        label_begin->setText(QCoreApplication::translate("AllMain", "<html><head/><body><p><span style=\" font-size:16pt; color:#ffffff;\">\345\274\200\345\247\213</span></p></body></html>", nullptr));
        label_begin_->setText(QCoreApplication::translate("AllMain", "<html><head/><body><p><span style=\" font-weight:700; color:#ffffff;\">\347\202\271\345\207\273\344\270\213\351\235\242\346\214\211\351\224\256\344\273\245\344\275\277\347\224\250\346\233\264\345\244\232Calabash\350\257\267\345\201\207\345\212\237\350\203\275</span></p></body></html>", nullptr));
        label_head->setText(QString());
        label_username->setText(QString());
        ptn_home->setText(QString());
        ptn_introduce->setText(QCoreApplication::translate("AllMain", "\345\260\217\347\273\204\344\273\213\347\273\215/\346\250\241\345\235\227\346\214\207\345\215\227", nullptr));
        ptn_owner->setText(QCoreApplication::translate("AllMain", "\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        ptn_teacher->setText(QCoreApplication::translate("AllMain", "\346\225\231\345\270\210", nullptr));
        ptn_student->setText(QCoreApplication::translate("AllMain", "\345\255\246\347\224\237", nullptr));
        ptn_setting->setText(QCoreApplication::translate("AllMain", "\351\243\216\346\240\274\345\210\207\346\215\242", nullptr));
        ptn_signOut->setText(QCoreApplication::translate("AllMain", "\347\231\273\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AllMain: public Ui_AllMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLMAIN_H

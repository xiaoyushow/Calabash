/********************************************************************************
** Form generated from reading UI file 'introduce.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTRODUCE_H
#define UI_INTRODUCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Introduce
{
public:
    QWidget *widget;
    QLabel *member;
    QLabel *line_1;
    QLabel *line_2;
    QWidget *widget1;
    QGridLayout *gridLayout;
    QLabel *student;
    QLabel *teacher;
    QLabel *self;
    QLabel *skin;
    QLabel *logout;

    void setupUi(QWidget *Introduce)
    {
        if (Introduce->objectName().isEmpty())
            Introduce->setObjectName(QString::fromUtf8("Introduce"));
        Introduce->resize(1063, 380);
        widget = new QWidget(Introduce);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 1063, 380));
        widget->setMinimumSize(QSize(1063, 380));
        widget->setMaximumSize(QSize(1063, 380));
        widget->setStyleSheet(QString::fromUtf8("#line_1\n"
"{\n"
"	font-family: \"Microsoft YaHei\";\n"
"    font-size: 14px;\n"
"    color: #57606f;\n"
"	/*background-color: rgba(0, 216, 214, 150);*/\n"
"\n"
"	padding-left: 10px;\n"
"	padding-top: 8px;\n"
"	padding-right: 7px;\n"
"	padding-bottom: 9px;\n"
"\n"
"	border-style: solid;\n"
"	border-radius: 25px;\n"
"	border-left-width: 2px;\n"
"	border-left-color: #00d2d3;\n"
"}\n"
"\n"
"#line_2\n"
"{\n"
"	font-family: \"Microsoft YaHei\";\n"
"    font-size: 14px;\n"
"    color: #57606f;\n"
"	/*background-color: rgba(0, 216, 214, 150);*/\n"
"\n"
"	padding-left: 10px;\n"
"	padding-top: 8px;\n"
"	padding-right: 7px;\n"
"	padding-bottom: 9px;\n"
"\n"
"	border-left-style: solid;\n"
"	border-radius: 25px;\n"
"	border-left-width: 2px;\n"
"	border-left-color: #00d2d3;\n"
"}\n"
"\n"
"#member\n"
"{\n"
"	font-family: \"Microsoft YaHei\";\n"
"    font-size: 16px;\n"
"	font-weight: bold;\n"
"    color: #57606f;\n"
"	/*background-color: rgba(0, 216, 214, 150);*/\n"
"\n"
"	padding-left: 10px;\n"
"	padding-top: 8px;\n"
"	pad"
                        "ding-right: 7px;\n"
"	padding-bottom: 9px;\n"
"\n"
"	border-style: solid;\n"
"	border-radius: 25px;\n"
"	border-left-width: 2px;\n"
"	border-left-color: #00d2d3;\n"
"}\n"
"\n"
"#teacher\n"
"{\n"
"	font-family: \"Microsoft YaHei\";\n"
"    font-size: 16px;\n"
"	font-weight: bold;\n"
"    color: #57606f;\n"
"	/*background-color: rgba(0, 216, 214, 150);*/\n"
"\n"
"	padding-left: 10px;\n"
"	padding-top: 8px;\n"
"	padding-right: 7px;\n"
"	padding-bottom: 9px;\n"
"\n"
"	border-style: solid;\n"
"	border-radius: 25px;\n"
"	border-left-width: 2px;\n"
"	border-left-color: #00d2d3;\n"
"}\n"
"\n"
"#student\n"
"{\n"
"	font-family: \"Microsoft YaHei\";\n"
"    font-size: 16px;\n"
"	font-weight: bold;\n"
"    color: #57606f;\n"
"	/*background-color: rgba(0, 216, 214, 150);*/\n"
"\n"
"	padding-left: 10px;\n"
"	padding-top: 8px;\n"
"	padding-right: 7px;\n"
"	padding-bottom: 9px;\n"
"\n"
"	border-style: solid;\n"
"	border-radius: 25px;\n"
"	border-left-width: 2px;\n"
"	border-left-color: #00d2d3;\n"
"}\n"
"\n"
"#skin\n"
"{\n"
""
                        "	font-family: \"Microsoft YaHei\";\n"
"    font-size: 16px;\n"
"	font-weight: bold;\n"
"    color: #57606f;\n"
"	/*background-color: rgba(0, 216, 214, 150);*/\n"
"\n"
"	padding-left: 10px;\n"
"	padding-top: 8px;\n"
"	padding-right: 7px;\n"
"	padding-bottom: 9px;\n"
"\n"
"	border-style: solid;\n"
"	border-radius: 25px;\n"
"	border-left-width: 2px;\n"
"	border-left-color: #00d2d3;\n"
"}\n"
"\n"
"#logout\n"
"{\n"
"	font-family: \"Microsoft YaHei\";\n"
"    font-size: 16px;\n"
"	font-weight: bold;\n"
"    color: #57606f;\n"
"	/*background-color: rgba(0, 216, 214, 150);*/\n"
"\n"
"	padding-left: 10px;\n"
"	padding-top: 8px;\n"
"	padding-right: 7px;\n"
"	padding-bottom: 9px;\n"
"\n"
"	border-style: solid;\n"
"	border-radius: 25px;\n"
"	border-left-width: 2px;\n"
"	border-left-color: #00d2d3;\n"
"}\n"
"\n"
"#self\n"
"{\n"
"	font-family: \"Microsoft YaHei\";\n"
"    font-size: 16px;\n"
"	font-weight: bold;\n"
"    color: #57606f;\n"
"	/*background-color: rgba(0, 216, 214, 150);*/\n"
"\n"
"	padding-left: 10px;\n"
"	pad"
                        "ding-top: 8px;\n"
"	padding-right: 7px;\n"
"	padding-bottom: 9px;\n"
"\n"
"	border-style: solid;\n"
"	border-radius: 25px;\n"
"	border-left-width: 2px;\n"
"	border-left-color: #00d2d3;\n"
"}"));
        member = new QLabel(widget);
        member->setObjectName(QString::fromUtf8("member"));
        member->setGeometry(QRect(940, 220, 111, 41));
        line_1 = new QLabel(widget);
        line_1->setObjectName(QString::fromUtf8("line_1"));
        line_1->setGeometry(QRect(860, 280, 189, 40));
        line_2 = new QLabel(widget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(860, 330, 189, 40));
        widget1 = new QWidget(widget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(10, 21, 831, 341));
        gridLayout = new QGridLayout(widget1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        student = new QLabel(widget1);
        student->setObjectName(QString::fromUtf8("student"));

        gridLayout->addWidget(student, 0, 0, 1, 1);

        teacher = new QLabel(widget1);
        teacher->setObjectName(QString::fromUtf8("teacher"));

        gridLayout->addWidget(teacher, 1, 0, 1, 1);

        self = new QLabel(widget1);
        self->setObjectName(QString::fromUtf8("self"));

        gridLayout->addWidget(self, 2, 0, 1, 1);

        skin = new QLabel(widget1);
        skin->setObjectName(QString::fromUtf8("skin"));

        gridLayout->addWidget(skin, 3, 0, 1, 1);

        logout = new QLabel(widget1);
        logout->setObjectName(QString::fromUtf8("logout"));

        gridLayout->addWidget(logout, 4, 0, 1, 1);


        retranslateUi(Introduce);

        QMetaObject::connectSlotsByName(Introduce);
    } // setupUi

    void retranslateUi(QWidget *Introduce)
    {
        Introduce->setWindowTitle(QCoreApplication::translate("Introduce", "Form", nullptr));
        member->setText(QCoreApplication::translate("Introduce", "<html><head/><body><p><span style=\" font-size:12pt;\">\345\260\217\347\273\204\346\210\220\345\221\230</span></p></body></html>", nullptr));
        line_1->setText(QCoreApplication::translate("Introduce", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700;\">\347\216\213\345\256\207\346\263\275 \345\200\252\346\231\223\345\256\207 \347\231\275\344\272\221\346\265\251</span></p></body></html>", nullptr));
        line_2->setText(QCoreApplication::translate("Introduce", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700;\"> \346\256\265\346\263\275\346\227\213 \347\216\213\345\215\232\346\264\213 \346\242\201\345\255\220\350\210\252</span></p></body></html>", nullptr));
        student->setText(QCoreApplication::translate("Introduce", "<html><head/><body><p><span style=\" font-size:12pt;\">\345\255\246\347\224\237\346\250\241\345\235\227\357\274\232\345\256\236\347\216\260\345\210\206\351\241\265\357\274\214\345\270\246\346\234\211\350\257\267\345\201\207\345\222\214\351\224\200\345\201\207\345\212\237\350\203\275\357\274\214\347\225\214\351\235\242\345\267\246\345\217\263\346\273\221\345\212\250\357\274\214F5\350\277\224\345\233\236\345\210\206\351\241\265\344\270\273\347\225\214\351\235\242</span></p></body></html>", nullptr));
        teacher->setText(QCoreApplication::translate("Introduce", "<html><head/><body><p><span style=\" font-size:12pt;\">\346\225\231\345\270\210\346\250\241\345\235\227\357\274\232\345\256\236\347\216\260\345\210\206\351\241\265\343\200\201\351\224\200\345\201\207\343\200\201\346\234\252\346\211\271\346\224\271\347\255\211\350\277\207\346\273\244\357\274\214F5\350\277\224\345\233\236\345\210\206\351\241\265\344\270\273\347\225\214\351\235\242</span></p></body></html>", nullptr));
        self->setText(QCoreApplication::translate("Introduce", "<html><head/><body><p><span style=\" font-size:12pt;\">\344\270\252\344\272\272\344\277\241\346\201\257\346\250\241\345\235\227\357\274\232\346\230\276\347\244\272\344\270\252\344\272\272\344\277\241\346\201\257\357\274\214\345\246\202\345\247\223\345\220\215\357\274\214\347\217\255\347\272\247\357\274\214\345\271\264\351\276\204\347\255\211</span></p></body></html>", nullptr));
        skin->setText(QCoreApplication::translate("Introduce", "<html><head/><body><p><span style=\" font-size:12pt;\">\347\232\256\350\202\244\346\250\241\345\235\227\357\274\232\345\256\236\347\216\260\347\272\257\350\211\262\346\215\242\350\202\244\345\222\214\345\233\276\345\261\202\346\215\242\350\202\244</span></p></body></html>", nullptr));
        logout->setText(QCoreApplication::translate("Introduce", "<html><head/><body><p><span style=\" font-size:12pt;\">\347\231\273\345\207\272\346\250\241\345\235\227\357\274\232\350\277\224\345\233\236\347\231\273\345\275\225\347\225\214\351\235\242</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Introduce: public Ui_Introduce {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTRODUCE_H

/********************************************************************************
** Form generated from reading UI file 'student.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENT_H
#define UI_STUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "imageswitch.h"
#include "mylineedit.h"

QT_BEGIN_NAMESPACE

class Ui_Student
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QComboBox *comboBox_leaveStyle;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_leaveReason;
    QTextEdit *textEdit_leaveReason;
    QPushButton *ptn_submit;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_dateEnd;
    MyLineEdit *lineEdit_end;
    QTimeEdit *timeEdit_end;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_dateBegin;
    MyLineEdit *lineEdit_begin;
    QTimeEdit *timeEdit_begin;
    QLabel *label_leaveStyle;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_isLeave;
    QSpacerItem *horizontalSpacer;
    ImageSwitch *imageSwitch;
    QLabel *label;
    QWidget *page_2;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_total;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *ptn_home;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *ptn_last;
    QLabel *label_now;
    QPushButton *ptn_next;
    QPushButton *ptn_end;
    QPushButton *ptn_NotCorrected;
    QPushButton *ptn_released;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *ptn_writeOff;
    QWidget *widget;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_isSchool;
    QLabel *label_leaveType;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QLabel *label_status;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_timeBegin;
    QLabel *label_timeEnd;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_leaveReason_2;

    void setupUi(QWidget *Student)
    {
        if (Student->objectName().isEmpty())
            Student->setObjectName(QString::fromUtf8("Student"));
        Student->resize(1063, 380);
        Student->setMinimumSize(QSize(1063, 380));
        Student->setMaximumSize(QSize(1063, 380));
        stackedWidget = new QStackedWidget(Student);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 1063, 380));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        comboBox_leaveStyle = new QComboBox(page);
        comboBox_leaveStyle->addItem(QString());
        comboBox_leaveStyle->addItem(QString());
        comboBox_leaveStyle->addItem(QString());
        comboBox_leaveStyle->addItem(QString());
        comboBox_leaveStyle->addItem(QString());
        comboBox_leaveStyle->addItem(QString());
        comboBox_leaveStyle->addItem(QString());
        comboBox_leaveStyle->addItem(QString());
        comboBox_leaveStyle->setObjectName(QString::fromUtf8("comboBox_leaveStyle"));
        comboBox_leaveStyle->setGeometry(QRect(209, 86, 251, 28));
        layoutWidget = new QWidget(page);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(559, 80, 371, 181));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_leaveReason = new QLabel(layoutWidget);
        label_leaveReason->setObjectName(QString::fromUtf8("label_leaveReason"));

        verticalLayout->addWidget(label_leaveReason);

        textEdit_leaveReason = new QTextEdit(layoutWidget);
        textEdit_leaveReason->setObjectName(QString::fromUtf8("textEdit_leaveReason"));

        verticalLayout->addWidget(textEdit_leaveReason);

        ptn_submit = new QPushButton(page);
        ptn_submit->setObjectName(QString::fromUtf8("ptn_submit"));
        ptn_submit->setGeometry(QRect(399, 300, 211, 41));
        layoutWidget1 = new QWidget(page);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(151, 182, 311, 30));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_dateEnd = new QLabel(layoutWidget1);
        label_dateEnd->setObjectName(QString::fromUtf8("label_dateEnd"));

        horizontalLayout_3->addWidget(label_dateEnd);

        lineEdit_end = new MyLineEdit(layoutWidget1);
        lineEdit_end->setObjectName(QString::fromUtf8("lineEdit_end"));

        horizontalLayout_3->addWidget(lineEdit_end);

        timeEdit_end = new QTimeEdit(layoutWidget1);
        timeEdit_end->setObjectName(QString::fromUtf8("timeEdit_end"));

        horizontalLayout_3->addWidget(timeEdit_end);

        layoutWidget2 = new QWidget(page);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(151, 134, 311, 30));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_dateBegin = new QLabel(layoutWidget2);
        label_dateBegin->setObjectName(QString::fromUtf8("label_dateBegin"));

        horizontalLayout_2->addWidget(label_dateBegin);

        lineEdit_begin = new MyLineEdit(layoutWidget2);
        lineEdit_begin->setObjectName(QString::fromUtf8("lineEdit_begin"));
        lineEdit_begin->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(lineEdit_begin);

        timeEdit_begin = new QTimeEdit(layoutWidget2);
        timeEdit_begin->setObjectName(QString::fromUtf8("timeEdit_begin"));

        horizontalLayout_2->addWidget(timeEdit_begin);

        label_leaveStyle = new QLabel(page);
        label_leaveStyle->setObjectName(QString::fromUtf8("label_leaveStyle"));
        label_leaveStyle->setGeometry(QRect(152, 90, 60, 20));
        layoutWidget3 = new QWidget(page);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(150, 230, 111, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget3);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_isLeave = new QLabel(layoutWidget3);
        label_isLeave->setObjectName(QString::fromUtf8("label_isLeave"));

        horizontalLayout->addWidget(label_isLeave);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        imageSwitch = new ImageSwitch(layoutWidget3);
        imageSwitch->setObjectName(QString::fromUtf8("imageSwitch"));

        horizontalLayout->addWidget(imageSwitch);

        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 60, 69, 61));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setStyleSheet(QString::fromUtf8("QPushButton#ptn_last\n"
"{\n"
"	image: url(:/images/left_arrow.png);\n"
"}\n"
"QPushButton#ptn_next\n"
"{\n"
"	image: url(:/images/right_arrow.png);\n"
"}"));
        layoutWidget_2 = new QWidget(page_2);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(40, 330, 505, 47));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_4->setSpacing(12);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_total = new QLabel(layoutWidget_2);
        label_total->setObjectName(QString::fromUtf8("label_total"));
        label_total->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_total);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        ptn_home = new QPushButton(layoutWidget_2);
        ptn_home->setObjectName(QString::fromUtf8("ptn_home"));

        horizontalLayout_5->addWidget(ptn_home);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(10);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        ptn_last = new QPushButton(layoutWidget_2);
        ptn_last->setObjectName(QString::fromUtf8("ptn_last"));
        ptn_last->setMinimumSize(QSize(30, 30));
        ptn_last->setMaximumSize(QSize(30, 30));

        horizontalLayout_6->addWidget(ptn_last);

        label_now = new QLabel(layoutWidget_2);
        label_now->setObjectName(QString::fromUtf8("label_now"));
        label_now->setMinimumSize(QSize(30, 30));
        label_now->setMaximumSize(QSize(30, 30));
        label_now->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_now);

        ptn_next = new QPushButton(layoutWidget_2);
        ptn_next->setObjectName(QString::fromUtf8("ptn_next"));
        ptn_next->setMinimumSize(QSize(30, 30));
        ptn_next->setMaximumSize(QSize(30, 30));

        horizontalLayout_6->addWidget(ptn_next);


        horizontalLayout_5->addLayout(horizontalLayout_6);

        ptn_end = new QPushButton(layoutWidget_2);
        ptn_end->setObjectName(QString::fromUtf8("ptn_end"));

        horizontalLayout_5->addWidget(ptn_end);

        ptn_NotCorrected = new QPushButton(layoutWidget_2);
        ptn_NotCorrected->setObjectName(QString::fromUtf8("ptn_NotCorrected"));

        horizontalLayout_5->addWidget(ptn_NotCorrected);

        ptn_released = new QPushButton(layoutWidget_2);
        ptn_released->setObjectName(QString::fromUtf8("ptn_released"));

        horizontalLayout_5->addWidget(ptn_released);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        horizontalLayout_4->addLayout(horizontalLayout_5);

        ptn_writeOff = new QPushButton(page_2);
        ptn_writeOff->setObjectName(QString::fromUtf8("ptn_writeOff"));
        ptn_writeOff->setGeometry(QRect(620, 330, 241, 29));
        widget = new QWidget(page_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(60, 30, 931, 281));
        widget->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-family: \"Microsoft YaHei\";\n"
"    font-size: 18px;\n"
"    color: #BDC8E2;\n"
"    /*background-color: #2E3648;*/\n"
"	background-color : transparent;\n"
"	font-weight: bold;\n"
"	/*color: #BDC8E2;*/\n"
"	color: #2c3e50;\n"
"\n"
"	padding-left: 10px;\n"
"	padding-top: 8px;\n"
"	padding-right: 7px;\n"
"	padding-bottom: 9px;\n"
"	\n"
"	border-style: solid;\n"
"    border-width: 2px;\n"
"    border-color: aqua;\n"
"    border-radius: 20px;\n"
"\n"
"}\n"
"\n"
"QLabel:hover{\n"
"	color: #2c3e50;\n"
"	border-color: #95a5a6;\n"
"    background-color: #ecf0f1;\n"
"}\n"
"\n"
""));
        layoutWidget4 = new QWidget(widget);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(0, 20, 331, 121));
        verticalLayout_2 = new QVBoxLayout(layoutWidget4);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_isSchool = new QLabel(layoutWidget4);
        label_isSchool->setObjectName(QString::fromUtf8("label_isSchool"));
        label_isSchool->setMinimumSize(QSize(250, 0));
        label_isSchool->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout_2->addWidget(label_isSchool);

        label_leaveType = new QLabel(layoutWidget4);
        label_leaveType->setObjectName(QString::fromUtf8("label_leaveType"));
        label_leaveType->setMinimumSize(QSize(250, 0));

        verticalLayout_2->addWidget(label_leaveType);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        label_status = new QLabel(widget);
        label_status->setObjectName(QString::fromUtf8("label_status"));
        label_status->setGeometry(QRect(430, 190, 311, 51));
        label_status->setMinimumSize(QSize(250, 0));
        layoutWidget5 = new QWidget(widget);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(430, 20, 471, 151));
        verticalLayout_3 = new QVBoxLayout(layoutWidget5);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_timeBegin = new QLabel(layoutWidget5);
        label_timeBegin->setObjectName(QString::fromUtf8("label_timeBegin"));
        label_timeBegin->setMinimumSize(QSize(250, 0));

        verticalLayout_3->addWidget(label_timeBegin);

        label_timeEnd = new QLabel(layoutWidget5);
        label_timeEnd->setObjectName(QString::fromUtf8("label_timeEnd"));
        label_timeEnd->setMinimumSize(QSize(250, 0));

        verticalLayout_3->addWidget(label_timeEnd);

        scrollArea = new QScrollArea(widget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(0, 130, 350, 130));
        scrollArea->setMinimumSize(QSize(350, 130));
        scrollArea->setMaximumSize(QSize(350, 130));
        scrollArea->setLayoutDirection(Qt::LeftToRight);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 348, 128));
        verticalLayout_4 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_leaveReason_2 = new QLabel(scrollAreaWidgetContents);
        label_leaveReason_2->setObjectName(QString::fromUtf8("label_leaveReason_2"));
        label_leaveReason_2->setMinimumSize(QSize(330, 120));
        label_leaveReason_2->setMaximumSize(QSize(330, 16777215));
        label_leaveReason_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_4->addWidget(label_leaveReason_2);

        scrollArea->setWidget(scrollAreaWidgetContents);
        stackedWidget->addWidget(page_2);

        retranslateUi(Student);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Student);
    } // setupUi

    void retranslateUi(QWidget *Student)
    {
        Student->setWindowTitle(QCoreApplication::translate("Student", "Form", nullptr));
        comboBox_leaveStyle->setItemText(0, QCoreApplication::translate("Student", "\346\204\237\346\237\223\346\226\260\345\206\240", nullptr));
        comboBox_leaveStyle->setItemText(1, QCoreApplication::translate("Student", "\345\217\221\347\203\255\345\222\263\345\227\275\345\217\221\345\212\233\345\222\275\347\227\233\350\205\271\346\263\273\347\255\211\347\226\221\344\274\274\346\226\260\345\206\240\347\227\207\347\212\266", nullptr));
        comboBox_leaveStyle->setItemText(2, QCoreApplication::translate("Student", "\347\227\205\345\201\207\357\274\210\351\235\236\346\226\260\345\206\240\346\210\226\351\235\236\347\226\221\344\274\274\346\226\260\345\206\240\347\224\237\347\227\205\357\274\211", nullptr));
        comboBox_leaveStyle->setItemText(3, QCoreApplication::translate("Student", "\345\256\236\344\271\240\350\247\201\344\271\240", nullptr));
        comboBox_leaveStyle->setItemText(4, QCoreApplication::translate("Student", "\346\261\202\350\201\214\346\213\251\344\270\232", nullptr));
        comboBox_leaveStyle->setItemText(5, QCoreApplication::translate("Student", "\346\261\202\350\201\214\350\200\203\350\257\225", nullptr));
        comboBox_leaveStyle->setItemText(6, QCoreApplication::translate("Student", "\344\270\223\344\270\232\346\212\200\350\203\275\350\200\203\350\257\225", nullptr));
        comboBox_leaveStyle->setItemText(7, QCoreApplication::translate("Student", "\345\233\240\345\205\266\344\273\226\344\270\252\344\272\272\345\216\237\345\233\240\350\257\267\345\201\207", nullptr));

        label_leaveReason->setText(QCoreApplication::translate("Student", "\350\257\267\345\201\207\345\216\237\345\233\240", nullptr));
        textEdit_leaveReason->setPlaceholderText(QCoreApplication::translate("Student", "\350\257\267\350\276\223\345\205\245\350\257\267\345\201\207\345\216\237\345\233\240", nullptr));
        ptn_submit->setText(QCoreApplication::translate("Student", "\346\217\220\344\272\244\350\257\267\345\201\207", nullptr));
        label_dateEnd->setText(QCoreApplication::translate("Student", "\347\273\223\346\235\237\346\227\266\351\227\264", nullptr));
        lineEdit_end->setText(QString());
        lineEdit_end->setPlaceholderText(QCoreApplication::translate("Student", "\351\200\211\346\213\251\346\227\245\346\234\237", nullptr));
        label_dateBegin->setText(QCoreApplication::translate("Student", "\345\274\200\345\247\213\346\227\266\351\227\264", nullptr));
        lineEdit_begin->setText(QString());
        lineEdit_begin->setPlaceholderText(QCoreApplication::translate("Student", "\351\200\211\346\213\251\346\227\245\346\234\237", nullptr));
        label_leaveStyle->setText(QCoreApplication::translate("Student", "\350\257\267\345\201\207\347\261\273\345\236\213", nullptr));
        label_isLeave->setText(QCoreApplication::translate("Student", "\351\234\200\350\246\201\347\246\273\346\240\241", nullptr));
        label->setText(QString());
        label_total->setText(QString());
        ptn_home->setText(QCoreApplication::translate("Student", "\351\246\226\351\241\265", nullptr));
        ptn_last->setText(QString());
        label_now->setText(QString());
        ptn_next->setText(QString());
        ptn_end->setText(QCoreApplication::translate("Student", "\345\260\276\351\241\265", nullptr));
        ptn_NotCorrected->setText(QCoreApplication::translate("Student", "\346\234\252\346\211\271\346\224\271", nullptr));
        ptn_released->setText(QCoreApplication::translate("Student", "\345\267\262\351\224\200\345\201\207", nullptr));
        ptn_writeOff->setText(QCoreApplication::translate("Student", "\351\224\200\345\201\207", nullptr));
        label_isSchool->setText(QCoreApplication::translate("Student", "\346\230\257\345\220\246\347\246\273\346\240\241", nullptr));
        label_leaveType->setText(QCoreApplication::translate("Student", "\350\257\267\345\201\207\347\261\273\345\236\213", nullptr));
        label_status->setText(QCoreApplication::translate("Student", "\347\212\266\346\200\201", nullptr));
        label_timeBegin->setText(QCoreApplication::translate("Student", "\345\274\200\345\247\213\346\227\266\351\227\264", nullptr));
        label_timeEnd->setText(QCoreApplication::translate("Student", "\347\273\223\346\235\237\346\227\266\351\227\264", nullptr));
        label_leaveReason_2->setText(QCoreApplication::translate("Student", "\350\257\267\345\201\207\345\216\237\345\233\240", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Student: public Ui_Student {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_H

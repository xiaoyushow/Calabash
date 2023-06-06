/********************************************************************************
** Form generated from reading UI file 'teacher.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHER_H
#define UI_TEACHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Teacher
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_total;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *ptn_home;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *ptn_last;
    QLabel *label_now;
    QPushButton *ptn_next;
    QPushButton *ptn_end;
    QPushButton *ptn_NotCorrected;
    QPushButton *ptn_released;
    QSpacerItem *horizontalSpacer;
    QPushButton *ptn_agree;
    QPushButton *ptn_refuse;
    QWidget *widget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_reasonContent;
    QWidget *widget_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLabel *label_timeBegin;
    QSpacerItem *verticalSpacer;
    QLabel *label_timeEnd;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_isSchool;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_status;
    QWidget *widget_3;
    QLabel *label_leaveType;
    QLabel *label_typeContent;
    QWidget *widget_4;
    QLabel *label_name;
    QLabel *label_class;
    QLabel *label_id;
    QWidget *widget_5;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_Corrected;
    QLabel *label_CorrectedCount;
    QLabel *label_NotCorrected;
    QLabel *label_NotCorrectedCount;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *Teacher)
    {
        if (Teacher->objectName().isEmpty())
            Teacher->setObjectName(QString::fromUtf8("Teacher"));
        Teacher->resize(1063, 380);
        Teacher->setMinimumSize(QSize(1063, 380));
        Teacher->setMaximumSize(QSize(1063, 380));
        Teacher->setStyleSheet(QString::fromUtf8("QPushButton#ptn_last\n"
"{\n"
"	image: url(:/images/left_arrow.png);\n"
"}\n"
"QPushButton#ptn_next\n"
"{\n"
"	image: url(:/images/right_arrow.png);\n"
"}"));
        layoutWidget = new QWidget(Teacher);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 330, 505, 36));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setSpacing(12);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_total = new QLabel(layoutWidget);
        label_total->setObjectName(QString::fromUtf8("label_total"));
        label_total->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_total);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        ptn_home = new QPushButton(layoutWidget);
        ptn_home->setObjectName(QString::fromUtf8("ptn_home"));

        horizontalLayout_3->addWidget(ptn_home);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        ptn_last = new QPushButton(layoutWidget);
        ptn_last->setObjectName(QString::fromUtf8("ptn_last"));
        ptn_last->setMinimumSize(QSize(30, 30));
        ptn_last->setMaximumSize(QSize(30, 30));

        horizontalLayout_2->addWidget(ptn_last);

        label_now = new QLabel(layoutWidget);
        label_now->setObjectName(QString::fromUtf8("label_now"));
        label_now->setMinimumSize(QSize(30, 30));
        label_now->setMaximumSize(QSize(30, 30));
        label_now->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_now);

        ptn_next = new QPushButton(layoutWidget);
        ptn_next->setObjectName(QString::fromUtf8("ptn_next"));
        ptn_next->setMinimumSize(QSize(30, 30));
        ptn_next->setMaximumSize(QSize(30, 30));

        horizontalLayout_2->addWidget(ptn_next);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        ptn_end = new QPushButton(layoutWidget);
        ptn_end->setObjectName(QString::fromUtf8("ptn_end"));

        horizontalLayout_3->addWidget(ptn_end);

        ptn_NotCorrected = new QPushButton(layoutWidget);
        ptn_NotCorrected->setObjectName(QString::fromUtf8("ptn_NotCorrected"));

        horizontalLayout_3->addWidget(ptn_NotCorrected);

        ptn_released = new QPushButton(layoutWidget);
        ptn_released->setObjectName(QString::fromUtf8("ptn_released"));

        horizontalLayout_3->addWidget(ptn_released);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        ptn_agree = new QPushButton(Teacher);
        ptn_agree->setObjectName(QString::fromUtf8("ptn_agree"));
        ptn_agree->setGeometry(QRect(590, 340, 171, 29));
        ptn_refuse = new QPushButton(Teacher);
        ptn_refuse->setObjectName(QString::fromUtf8("ptn_refuse"));
        ptn_refuse->setGeometry(QRect(850, 340, 181, 29));
        widget = new QWidget(Teacher);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(580, 70, 460, 180));
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
"QScrollArea#scrollArea\n"
"{\n"
"	background-color : transparent;\n"
"}"));
        scrollArea = new QScrollArea(widget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(0, 0, 460, 180));
        scrollArea->setMinimumSize(QSize(460, 180));
        scrollArea->setMaximumSize(QSize(460, 180));
        scrollArea->setLayoutDirection(Qt::LeftToRight);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 458, 178));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_reasonContent = new QLabel(scrollAreaWidgetContents);
        label_reasonContent->setObjectName(QString::fromUtf8("label_reasonContent"));
        label_reasonContent->setMinimumSize(QSize(440, 170));
        label_reasonContent->setMaximumSize(QSize(440, 16777215));
        label_reasonContent->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_2->addWidget(label_reasonContent);

        scrollArea->setWidget(scrollAreaWidgetContents);
        widget_2 = new QWidget(Teacher);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(10, 60, 511, 251));
        widget_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
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
"    border-radius: 20px;	\n"
"\n"
"}\n"
"\n"
"QLabel:hover{\n"
"	color: #2c3e50;\n"
"	border-color: #95a5a6;\n"
"    background-color: #ecf0f1;\n"
"}\n"
""));
        layoutWidget1 = new QWidget(widget_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 20, 431, 231));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_timeBegin = new QLabel(layoutWidget1);
        label_timeBegin->setObjectName(QString::fromUtf8("label_timeBegin"));

        verticalLayout->addWidget(label_timeBegin);

        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label_timeEnd = new QLabel(layoutWidget1);
        label_timeEnd->setObjectName(QString::fromUtf8("label_timeEnd"));

        verticalLayout->addWidget(label_timeEnd);

        verticalSpacer_2 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label_isSchool = new QLabel(layoutWidget1);
        label_isSchool->setObjectName(QString::fromUtf8("label_isSchool"));

        verticalLayout->addWidget(label_isSchool);

        verticalSpacer_3 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        label_status = new QLabel(layoutWidget1);
        label_status->setObjectName(QString::fromUtf8("label_status"));

        verticalLayout->addWidget(label_status);

        widget_3 = new QWidget(Teacher);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(580, 10, 461, 61));
        widget_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
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
"    border-radius: 20px;	\n"
"\n"
"}\n"
"\n"
"QLabel:hover{\n"
"	color: #2c3e50;\n"
"	border-color: #95a5a6;\n"
"    background-color: #ecf0f1;\n"
"}"));
        label_leaveType = new QLabel(widget_3);
        label_leaveType->setObjectName(QString::fromUtf8("label_leaveType"));
        label_leaveType->setGeometry(QRect(1, 11, 109, 45));
        label_typeContent = new QLabel(widget_3);
        label_typeContent->setObjectName(QString::fromUtf8("label_typeContent"));
        label_typeContent->setGeometry(QRect(110, 10, 331, 45));
        widget_4 = new QWidget(Teacher);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(-10, 10, 541, 71));
        widget_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
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
"    border-radius: 20px;	\n"
"\n"
"}\n"
"\n"
"QLabel:hover{\n"
"	color: #2c3e50;\n"
"	border-color: #95a5a6;\n"
"    background-color: #ecf0f1;\n"
"}"));
        label_name = new QLabel(widget_4);
        label_name->setObjectName(QString::fromUtf8("label_name"));
        label_name->setGeometry(QRect(30, 10, 131, 45));
        label_class = new QLabel(widget_4);
        label_class->setObjectName(QString::fromUtf8("label_class"));
        label_class->setGeometry(QRect(170, 10, 121, 45));
        label_id = new QLabel(widget_4);
        label_id->setObjectName(QString::fromUtf8("label_id"));
        label_id->setGeometry(QRect(300, 10, 231, 45));
        widget_5 = new QWidget(Teacher);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setGeometry(QRect(580, 270, 451, 51));
        widget_5->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color: transparent;\n"
"	font: 12px;\n"
"	font-weight: bold;\n"
"}"));
        layoutWidget2 = new QWidget(widget_5);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 10, 301, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_Corrected = new QLabel(layoutWidget2);
        label_Corrected->setObjectName(QString::fromUtf8("label_Corrected"));
        label_Corrected->setMinimumSize(QSize(60, 25));
        label_Corrected->setMaximumSize(QSize(0, 25));
        label_Corrected->setPixmap(QPixmap(QString::fromUtf8(":/images/Corrected.png")));
        label_Corrected->setScaledContents(true);

        horizontalLayout->addWidget(label_Corrected);

        label_CorrectedCount = new QLabel(layoutWidget2);
        label_CorrectedCount->setObjectName(QString::fromUtf8("label_CorrectedCount"));
        label_CorrectedCount->setMinimumSize(QSize(25, 25));
        label_CorrectedCount->setMaximumSize(QSize(25, 25));
        label_CorrectedCount->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_CorrectedCount);

        label_NotCorrected = new QLabel(layoutWidget2);
        label_NotCorrected->setObjectName(QString::fromUtf8("label_NotCorrected"));
        label_NotCorrected->setMinimumSize(QSize(60, 25));
        label_NotCorrected->setMaximumSize(QSize(60, 25));
        label_NotCorrected->setPixmap(QPixmap(QString::fromUtf8(":/images/NotCorrected.png")));
        label_NotCorrected->setScaledContents(true);

        horizontalLayout->addWidget(label_NotCorrected);

        label_NotCorrectedCount = new QLabel(layoutWidget2);
        label_NotCorrectedCount->setObjectName(QString::fromUtf8("label_NotCorrectedCount"));
        label_NotCorrectedCount->setMinimumSize(QSize(25, 25));
        label_NotCorrectedCount->setMaximumSize(QSize(25, 25));
        label_NotCorrectedCount->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_NotCorrectedCount);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        widget_5->raise();
        layoutWidget2->raise();
        ptn_agree->raise();
        ptn_refuse->raise();
        widget->raise();
        widget_2->raise();
        widget_3->raise();
        widget_4->raise();

        retranslateUi(Teacher);

        QMetaObject::connectSlotsByName(Teacher);
    } // setupUi

    void retranslateUi(QWidget *Teacher)
    {
        Teacher->setWindowTitle(QCoreApplication::translate("Teacher", "Form", nullptr));
        label_total->setText(QString());
        ptn_home->setText(QCoreApplication::translate("Teacher", "\351\246\226\351\241\265", nullptr));
        ptn_last->setText(QString());
        label_now->setText(QString());
        ptn_next->setText(QString());
        ptn_end->setText(QCoreApplication::translate("Teacher", "\345\260\276\351\241\265", nullptr));
        ptn_NotCorrected->setText(QCoreApplication::translate("Teacher", "\346\234\252\346\211\271\346\224\271", nullptr));
        ptn_released->setText(QCoreApplication::translate("Teacher", "\345\267\262\351\224\200\345\201\207", nullptr));
        ptn_agree->setText(QCoreApplication::translate("Teacher", "\351\200\232\350\277\207", nullptr));
        ptn_refuse->setText(QCoreApplication::translate("Teacher", "\346\213\222\347\273\235", nullptr));
        label_reasonContent->setText(QString());
        label_timeBegin->setText(QCoreApplication::translate("Teacher", "TextLabel", nullptr));
        label_timeEnd->setText(QCoreApplication::translate("Teacher", "TextLabel", nullptr));
        label_isSchool->setText(QCoreApplication::translate("Teacher", "TextLabel", nullptr));
        label_status->setText(QCoreApplication::translate("Teacher", "TextLabel", nullptr));
        label_leaveType->setText(QCoreApplication::translate("Teacher", "\350\257\267\345\201\207\347\261\273\345\236\213:", nullptr));
        label_typeContent->setText(QCoreApplication::translate("Teacher", "TextLabel", nullptr));
        label_name->setText(QCoreApplication::translate("Teacher", "TextLabel", nullptr));
        label_class->setText(QCoreApplication::translate("Teacher", "TextLabel", nullptr));
        label_id->setText(QCoreApplication::translate("Teacher", "TextLabel", nullptr));
        label_Corrected->setText(QString());
        label_CorrectedCount->setText(QString());
        label_NotCorrected->setText(QString());
        label_NotCorrectedCount->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Teacher: public Ui_Teacher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHER_H

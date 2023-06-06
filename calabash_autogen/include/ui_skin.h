/********************************************************************************
** Form generated from reading UI file 'skin.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SKIN_H
#define UI_SKIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Skin
{
public:
    QWidget *topic;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *ptn_red;
    QPushButton *ptn_pink;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *ptn_green;
    QSpacerItem *verticalSpacer_3;
    QPushButton *ptn_blue;
    QPushButton *ptn_gold;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *ptn_black;
    QWidget *color;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QPushButton *ptn_style10;
    QPushButton *ptn_style02;
    QPushButton *ptn_style06;
    QPushButton *ptn_style08;
    QPushButton *ptn_style01;
    QPushButton *ptn_style05;
    QPushButton *ptn_style09;
    QPushButton *ptn_style03;
    QPushButton *ptn_style07;
    QPushButton *ptn_style04;

    void setupUi(QWidget *Skin)
    {
        if (Skin->objectName().isEmpty())
            Skin->setObjectName(QString::fromUtf8("Skin"));
        Skin->resize(1063, 380);
        Skin->setMinimumSize(QSize(1063, 380));
        Skin->setMaximumSize(QSize(1063, 380));
        Skin->setStyleSheet(QString::fromUtf8(""));
        topic = new QWidget(Skin);
        topic->setObjectName(QString::fromUtf8("topic"));
        topic->setGeometry(QRect(30, 40, 451, 320));
        topic->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font:  16px 'STXihei';\n"
"	text-align: left bottom;\n"
"	border-radius:10px;\n"
"	color: #fff;\n"
"}\n"
"\n"
"QPushButton#ptn_black\n"
"{\n"
"	image: url(:/images/Black.png);\n"
"}\n"
"\n"
"QPushButton#ptn_red\n"
"{\n"
"	image: url(:/images/Red.png);\n"
"}\n"
"\n"
"QPushButton#ptn_pink\n"
"{\n"
"	image: url(:/images/Pink.png);\n"
"}\n"
"\n"
"QPushButton#ptn_blue\n"
"{\n"
"	image: url(:/images/Blue.png);\n"
"}\n"
"\n"
"QPushButton#ptn_green\n"
"{\n"
"	image: url(:/images/Green.png);\n"
"}\n"
"\n"
"QPushButton#ptn_gold\n"
"{\n"
"	image: url(:/images/Gold.png);\n"
"}\n"
""));
        layoutWidget = new QWidget(topic);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 30, 391, 261));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 2, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        ptn_red = new QPushButton(layoutWidget);
        ptn_red->setObjectName(QString::fromUtf8("ptn_red"));
        ptn_red->setMinimumSize(QSize(120, 120));
        ptn_red->setMaximumSize(QSize(120, 120));

        gridLayout->addWidget(ptn_red, 0, 2, 1, 1);

        ptn_pink = new QPushButton(layoutWidget);
        ptn_pink->setObjectName(QString::fromUtf8("ptn_pink"));
        ptn_pink->setMinimumSize(QSize(120, 120));
        ptn_pink->setMaximumSize(QSize(120, 120));

        gridLayout->addWidget(ptn_pink, 0, 4, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        ptn_green = new QPushButton(layoutWidget);
        ptn_green->setObjectName(QString::fromUtf8("ptn_green"));
        ptn_green->setMinimumSize(QSize(120, 120));
        ptn_green->setMaximumSize(QSize(120, 120));

        gridLayout->addWidget(ptn_green, 2, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 1, 5, 1, 1);

        ptn_blue = new QPushButton(layoutWidget);
        ptn_blue->setObjectName(QString::fromUtf8("ptn_blue"));
        ptn_blue->setMinimumSize(QSize(120, 120));
        ptn_blue->setMaximumSize(QSize(120, 120));

        gridLayout->addWidget(ptn_blue, 2, 0, 1, 1);

        ptn_gold = new QPushButton(layoutWidget);
        ptn_gold->setObjectName(QString::fromUtf8("ptn_gold"));
        ptn_gold->setMinimumSize(QSize(120, 120));
        ptn_gold->setMaximumSize(QSize(120, 120));

        gridLayout->addWidget(ptn_gold, 2, 5, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 2, 3, 1, 1);

        ptn_black = new QPushButton(layoutWidget);
        ptn_black->setObjectName(QString::fromUtf8("ptn_black"));
        ptn_black->setMinimumSize(QSize(120, 120));
        ptn_black->setMaximumSize(QSize(120, 120));

        gridLayout->addWidget(ptn_black, 0, 0, 1, 1);

        color = new QWidget(Skin);
        color->setObjectName(QString::fromUtf8("color"));
        color->setGeometry(QRect(500, 70, 541, 260));
        color->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font:  16px 'STXihei';\n"
"	text-align: left bottom;\n"
"	border-radius:10px;\n"
"	color: #fff;\n"
"}\n"
"\n"
"QPushButton#ptn_style01\n"
"{\n"
"	background-color: rgb(255,255,255);\n"
"	border-width: 1px;\n"
"	border-style: solid;\n"
"	border-color: #000000\n"
"}\n"
"\n"
"QPushButton#ptn_style02\n"
"{\n"
"	background-color: rgb(255,92,138);\n"
"}\n"
"\n"
"QPushButton#ptn_style03\n"
"{\n"
"	background-color: rgb(255,122,158);\n"
"}\n"
"\n"
"QPushButton#ptn_style04\n"
"{\n"
"	background-color: rgb(113,127,249);\n"
"}\n"
"\n"
"QPushButton#ptn_style05\n"
"{\n"
"	background-color: rgb(71,145,235);\n"
"}\n"
"\n"
"QPushButton#ptn_style06\n"
"{\n"
"	background-color: rgb(43,182,105);\n"
"}\n"
"\n"
"QPushButton#ptn_style07\n"
"{\n"
"	background-color: rgb(106,204,25);\n"
"}\n"
"\n"
"QPushButton#ptn_style08\n"
"{\n"
"	background-color: rgb(226,171,18);\n"
"}\n"
"\n"
"QPushButton#ptn_style09\n"
"{\n"
"	background-color: rgb(253,114,109);\n"
"}\n"
"\n"
"QPushButton#ptn_style10\n"
"{\n"
"	background"
                        "-color: rgb(253,84,78);\n"
"}"));
        layoutWidget1 = new QWidget(color);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 20, 501, 211));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        ptn_style10 = new QPushButton(layoutWidget1);
        ptn_style10->setObjectName(QString::fromUtf8("ptn_style10"));
        ptn_style10->setMinimumSize(QSize(80, 80));
        ptn_style10->setMaximumSize(QSize(80, 80));

        gridLayout_2->addWidget(ptn_style10, 1, 4, 1, 1);

        ptn_style02 = new QPushButton(layoutWidget1);
        ptn_style02->setObjectName(QString::fromUtf8("ptn_style02"));
        ptn_style02->setMinimumSize(QSize(80, 80));
        ptn_style02->setMaximumSize(QSize(80, 80));

        gridLayout_2->addWidget(ptn_style02, 0, 1, 1, 1);

        ptn_style06 = new QPushButton(layoutWidget1);
        ptn_style06->setObjectName(QString::fromUtf8("ptn_style06"));
        ptn_style06->setMinimumSize(QSize(80, 80));
        ptn_style06->setMaximumSize(QSize(80, 80));

        gridLayout_2->addWidget(ptn_style06, 1, 0, 1, 1);

        ptn_style08 = new QPushButton(layoutWidget1);
        ptn_style08->setObjectName(QString::fromUtf8("ptn_style08"));
        ptn_style08->setMinimumSize(QSize(80, 80));
        ptn_style08->setMaximumSize(QSize(80, 80));

        gridLayout_2->addWidget(ptn_style08, 1, 2, 1, 1);

        ptn_style01 = new QPushButton(layoutWidget1);
        ptn_style01->setObjectName(QString::fromUtf8("ptn_style01"));
        ptn_style01->setMinimumSize(QSize(80, 80));
        ptn_style01->setMaximumSize(QSize(80, 80));

        gridLayout_2->addWidget(ptn_style01, 0, 0, 1, 1);

        ptn_style05 = new QPushButton(layoutWidget1);
        ptn_style05->setObjectName(QString::fromUtf8("ptn_style05"));
        ptn_style05->setMinimumSize(QSize(80, 80));
        ptn_style05->setMaximumSize(QSize(80, 80));

        gridLayout_2->addWidget(ptn_style05, 0, 4, 1, 1);

        ptn_style09 = new QPushButton(layoutWidget1);
        ptn_style09->setObjectName(QString::fromUtf8("ptn_style09"));
        ptn_style09->setMinimumSize(QSize(80, 80));
        ptn_style09->setMaximumSize(QSize(80, 80));

        gridLayout_2->addWidget(ptn_style09, 1, 3, 1, 1);

        ptn_style03 = new QPushButton(layoutWidget1);
        ptn_style03->setObjectName(QString::fromUtf8("ptn_style03"));
        ptn_style03->setMinimumSize(QSize(80, 80));
        ptn_style03->setMaximumSize(QSize(80, 80));

        gridLayout_2->addWidget(ptn_style03, 0, 2, 1, 1);

        ptn_style07 = new QPushButton(layoutWidget1);
        ptn_style07->setObjectName(QString::fromUtf8("ptn_style07"));
        ptn_style07->setMinimumSize(QSize(80, 80));
        ptn_style07->setMaximumSize(QSize(80, 80));

        gridLayout_2->addWidget(ptn_style07, 1, 1, 1, 1);

        ptn_style04 = new QPushButton(layoutWidget1);
        ptn_style04->setObjectName(QString::fromUtf8("ptn_style04"));
        ptn_style04->setMinimumSize(QSize(80, 80));
        ptn_style04->setMaximumSize(QSize(80, 80));

        gridLayout_2->addWidget(ptn_style04, 0, 3, 1, 1);


        retranslateUi(Skin);

        QMetaObject::connectSlotsByName(Skin);
    } // setupUi

    void retranslateUi(QWidget *Skin)
    {
        Skin->setWindowTitle(QCoreApplication::translate("Skin", "Form", nullptr));
        ptn_red->setText(QString());
        ptn_pink->setText(QString());
        ptn_green->setText(QString());
        ptn_blue->setText(QString());
        ptn_gold->setText(QString());
        ptn_black->setText(QString());
        ptn_style10->setText(QString());
        ptn_style02->setText(QString());
        ptn_style06->setText(QString());
        ptn_style08->setText(QString());
        ptn_style01->setText(QString());
        ptn_style05->setText(QString());
        ptn_style09->setText(QString());
        ptn_style03->setText(QString());
        ptn_style07->setText(QString());
        ptn_style04->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Skin: public Ui_Skin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SKIN_H

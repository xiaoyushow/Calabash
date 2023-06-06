/********************************************************************************
** Form generated from reading UI file 'owner.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OWNER_H
#define UI_OWNER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Owner
{
public:
    QWidget *ownerWidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_id;
    QLabel *label_class;
    QLabel *label_phoneNumber;
    QLabel *label_sex;
    QLabel *label_name;
    QLabel *label_specialized;

    void setupUi(QWidget *Owner)
    {
        if (Owner->objectName().isEmpty())
            Owner->setObjectName(QString::fromUtf8("Owner"));
        Owner->resize(1063, 380);
        Owner->setStyleSheet(QString::fromUtf8(""));
        ownerWidget = new QWidget(Owner);
        ownerWidget->setObjectName(QString::fromUtf8("ownerWidget"));
        ownerWidget->setGeometry(QRect(140, 40, 801, 321));
        ownerWidget->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-family: \"Microsoft YaHei\";\n"
"    font-size: 18px;\n"
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
"\n"
""));
        layoutWidget = new QWidget(ownerWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 781, 281));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_id = new QLabel(layoutWidget);
        label_id->setObjectName(QString::fromUtf8("label_id"));

        gridLayout->addWidget(label_id, 0, 0, 1, 1);

        label_class = new QLabel(layoutWidget);
        label_class->setObjectName(QString::fromUtf8("label_class"));

        gridLayout->addWidget(label_class, 2, 1, 1, 1);

        label_phoneNumber = new QLabel(layoutWidget);
        label_phoneNumber->setObjectName(QString::fromUtf8("label_phoneNumber"));

        gridLayout->addWidget(label_phoneNumber, 3, 1, 1, 1);

        label_sex = new QLabel(layoutWidget);
        label_sex->setObjectName(QString::fromUtf8("label_sex"));

        gridLayout->addWidget(label_sex, 3, 0, 1, 1);

        label_name = new QLabel(layoutWidget);
        label_name->setObjectName(QString::fromUtf8("label_name"));

        gridLayout->addWidget(label_name, 2, 0, 1, 1);

        label_specialized = new QLabel(layoutWidget);
        label_specialized->setObjectName(QString::fromUtf8("label_specialized"));

        gridLayout->addWidget(label_specialized, 0, 1, 1, 1);


        retranslateUi(Owner);

        QMetaObject::connectSlotsByName(Owner);
    } // setupUi

    void retranslateUi(QWidget *Owner)
    {
        Owner->setWindowTitle(QCoreApplication::translate("Owner", "Form", nullptr));
        label_id->setText(QCoreApplication::translate("Owner", "ID:", nullptr));
        label_class->setText(QCoreApplication::translate("Owner", "\347\217\255\347\272\247\357\274\232", nullptr));
        label_phoneNumber->setText(QString());
        label_sex->setText(QCoreApplication::translate("Owner", "\346\200\247\345\210\253\357\274\232", nullptr));
        label_name->setText(QCoreApplication::translate("Owner", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_specialized->setText(QCoreApplication::translate("Owner", "\344\270\223\344\270\232\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Owner: public Ui_Owner {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OWNER_H

/********************************************************************************
** Form generated from reading UI file 'outcome.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTCOME_H
#define UI_OUTCOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OutCome
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *OutCome)
    {
        if (OutCome->objectName().isEmpty())
            OutCome->setObjectName(QString::fromUtf8("OutCome"));
        OutCome->resize(1063, 380);
        OutCome->setMinimumSize(QSize(1063, 380));
        OutCome->setMaximumSize(QSize(1063, 380));
        pushButton = new QPushButton(OutCome);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(450, 170, 92, 29));

        retranslateUi(OutCome);

        QMetaObject::connectSlotsByName(OutCome);
    } // setupUi

    void retranslateUi(QWidget *OutCome)
    {
        OutCome->setWindowTitle(QCoreApplication::translate("OutCome", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("OutCome", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OutCome: public Ui_OutCome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTCOME_H

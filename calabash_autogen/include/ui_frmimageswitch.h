/********************************************************************************
** Form generated from reading UI file 'frmimageswitch.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMIMAGESWITCH_H
#define UI_FRMIMAGESWITCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "imageswitch.h"

QT_BEGIN_NAMESPACE

class Ui_frmImageSwitch
{
public:
    QGridLayout *gridLayout;
    ImageSwitch *imageSwitch3;
    ImageSwitch *imageSwitch1;
    ImageSwitch *imageSwitch2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *frmImageSwitch)
    {
        if (frmImageSwitch->objectName().isEmpty())
            frmImageSwitch->setObjectName(QString::fromUtf8("frmImageSwitch"));
        frmImageSwitch->resize(828, 569);
        gridLayout = new QGridLayout(frmImageSwitch);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        imageSwitch3 = new ImageSwitch(frmImageSwitch);
        imageSwitch3->setObjectName(QString::fromUtf8("imageSwitch3"));

        gridLayout->addWidget(imageSwitch3, 0, 2, 1, 1);

        imageSwitch1 = new ImageSwitch(frmImageSwitch);
        imageSwitch1->setObjectName(QString::fromUtf8("imageSwitch1"));

        gridLayout->addWidget(imageSwitch1, 0, 0, 1, 1);

        imageSwitch2 = new ImageSwitch(frmImageSwitch);
        imageSwitch2->setObjectName(QString::fromUtf8("imageSwitch2"));

        gridLayout->addWidget(imageSwitch2, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 3, 1, 1);


        retranslateUi(frmImageSwitch);

        QMetaObject::connectSlotsByName(frmImageSwitch);
    } // setupUi

    void retranslateUi(QWidget *frmImageSwitch)
    {
        frmImageSwitch->setWindowTitle(QCoreApplication::translate("frmImageSwitch", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class frmImageSwitch: public Ui_frmImageSwitch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMIMAGESWITCH_H

//#include "allmain.h"
#include <QApplication>
#include "login.h"
#include "owner.h"
#include "student.h"
#include "frmimageswitch.h"
#include "skin.h"
#include "teacher.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    frmImageSwitch f;
//    f.show();
    Login login;
    login.show();
//    Skin skin;
//    skin.show();
//    Student student;
//    student.show();
//    Teacher teacher;
//    teacher.show();
    //AllMain w;
    //w.show();
    //Owner owner;
    //owner.show();

    return a.exec();
}

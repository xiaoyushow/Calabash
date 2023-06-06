#ifndef STUDENT_H
#define STUDENT_H

#include <QWidget>
#include "http.h"
#include <QMouseEvent>
#include <QCalendarWidget>
#include "message.h"
#include <QEvent>
#include <QFile>
//#include "filemanager.h"
namespace Ui {
class Student;
}

class Student : public QWidget
{
    Q_OBJECT

public:
    explicit Student(QWidget *parent = nullptr);
    ~Student();

    //page2 Init
    void pageInit();
public:
    Ui::Student *ui;
    Http http;
private slots:
    void initForm();
    void checkedChanged(bool checked);

    void showTimeBegin();
    void setDateBegin();

    void showTimeEnd();
    void setDateEnd();

    void leaveSubmit_clicked();

    bool eventFilter(QObject *watched, QEvent *event);

    //page2 Init
    void updateInfo();
    QString judgmentStatus(int status);

    void on_ptn_writeOff_released();

    void on_ptn_home_released();

    void on_ptn_last_released();

    void on_ptn_next_released();

    void on_ptn_end_released();

    void on_ptn_NotCorrected_released();

    void on_ptn_released_released();

private:
    //FileManager *filemanager;

    enum{
        totalTabel,
        NotCorrectedTabel,
        ReleaseTabel,
        ChangeTabel
    };
    QCalendarWidget *calenderWidgetBegin;
    QCalendarWidget *calenderWidgetEnd;

    calabash::Message *message{};

    int m_nTotal;           //总记录数
    int m_nNow;           //现在记录数
    std::vector<int>NotCorrected; //未批改
    std::vector<int>Release;    //已销假
    std::vector<int>Change;    //已更改
    int tableSign;      //总表、已销假表、未批改表
    int Index;
    std::vector<nlohmann::json> vecJson;


    void keyReleaseEvent(QKeyEvent *event); //键盘松开事件
};

#endif // STUDENT_H

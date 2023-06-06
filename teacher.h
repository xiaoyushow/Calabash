#ifndef TEACHER_H
#define TEACHER_H

#include <QWidget>
#include "http.h"
#include <QTableView>
#include "tableviewdelegate.h"
#include <QStandardItemModel>
#include "json.hpp"
#include "leavedata.h"
#include "message.h"
namespace Ui {
class Teacher;
}

class Teacher : public QWidget
{
    Q_OBJECT
    using json = nlohmann::json;
public:
    explicit Teacher(QWidget *parent = nullptr);
    ~Teacher();

    void updateInfo();

    QString judgmentStatus(int status);

    void teacherInit();

    //void updateInfoNotCorrected();


public:

    Ui::Teacher *ui;
    Http http;

private slots:
    void on_ptn_home_released();

    void on_ptn_last_released();

    void on_ptn_next_released();

    void on_ptn_end_released();

    void on_ptn_agree_released();

    void on_ptn_refuse_released();

    void on_ptn_released_released();

    void on_ptn_NotCorrected_released();

private:
    enum{
        totalTabel,
        NotCorrectedTabel,
        ReleaseTabel
    };
    QTableView * tableview;
    TableViewDelegate *processingDelegate;
    QStandardItemModel *mModel;

    int m_nTotal;           //总记录数
    int m_nNow;           //现在记录数
    int CorrectedCount;   //已批改记录数
    std::vector<int>NotCorrected; //未批改
    std::vector<int>Release;    //已销假
    int tableSign;      //总表、已销假表、未批改表
    int Index;

    bool teacherSign = false;

    std::vector<nlohmann::json> vecJson;
    std::vector<LeaveData> student_list;
    calabash::Message *message;

    void keyReleaseEvent(QKeyEvent *event); //键盘松开事件

};


#endif // TEACHER_H

#include "teacher.h"
#include "ui_teacher.h"
//#include <QScroller>
#include <QFile>
Teacher::Teacher(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Teacher)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    hide();
    QFile file(":/Qss/Ubuntu.qss");
    file.open(QFile::ReadOnly);
    QString qss = QString::fromLatin1(file.readAll());

    ui->ptn_agree->setStyleSheet(qss);
    ui->ptn_refuse->setStyleSheet(qss);
    ui->ptn_end->setStyleSheet(qss);
    ui->ptn_home->setStyleSheet(qss);
    ui->ptn_last->setStyleSheet(qss);
    ui->ptn_next->setStyleSheet(qss);
    ui->ptn_NotCorrected->setStyleSheet(qss);
    ui->ptn_released->setStyleSheet(qss);

    //file.setFileName(":/Qss/QScrollAreaQSS.qss");
    //ui->scrollArea->setStyleSheet(qss);
    ui->scrollArea->setStyleSheet("QScrollArea {background-color:transparent;"
                                  "border:none;}");
    ui->scrollArea->viewport()->setStyleSheet("background-color:transparent;");
    //ui->scrollArea->set
    file.close();
    message = new calabash::Message(this);

}

Teacher::~Teacher()
{
    delete ui;
}

void Teacher::updateInfo()
{
    ui->label_name->setText(QString(tr("姓名:") + student_list[m_nNow-1].m_name.toStdString().c_str()));
    ui->label_class->setText(QString(tr("班级:") + std::to_string(student_list[m_nNow-1].m_class).c_str()));
    ui->label_id->setText(QString(tr("学号:") + student_list[m_nNow-1].m_id.toStdString().c_str()));
    ui->label_timeBegin->setText(QString(tr("开始时间:") + student_list[m_nNow-1].m_timeBegin.toStdString().c_str()));
    ui->label_timeEnd->setText(QString(tr("结束时间:") + student_list[m_nNow-1].m_timeEnd.toStdString().c_str()));
    std::string isSchool;
    if(student_list[m_nNow-1].m_isSchool){
       isSchool = "是";
    } else{
       isSchool = "否";
    }
    ui->label_isSchool->setText(QString(tr("是否离校:") + isSchool.c_str()));
    ui->label_typeContent->setText(QString(student_list[m_nNow-1].m_leaveType.toStdString().c_str()));
    ui->label_reasonContent->setText("请假原因: " + QString(student_list[m_nNow-1].m_leaveReason.toStdString().c_str()));
    ui->label_reasonContent->adjustSize();
    ui->label_reasonContent->setWordWrap(true);
    if(tableSign == ReleaseTabel || tableSign == NotCorrectedTabel){
        ui->label_now->setText(QString::number(Index + 1));
    } else if(tableSign == totalTabel){
        ui->label_now->setText(QString::number(m_nNow));
    }
    ui->label_total->setText(std::string("共 " + std::to_string(m_nTotal) + " 页").c_str());

    ui->label_status->setText(judgmentStatus(student_list[m_nNow-1].m_status));
    //已批改未批改数
    if(tableSign == totalTabel){
        ui->label_Corrected->show();
        ui->label_NotCorrected->show();
        ui->label_CorrectedCount->show();
        ui->label_NotCorrectedCount->show();
        ui->label_CorrectedCount->setText(std::to_string(CorrectedCount).c_str());
        ui->label_NotCorrectedCount->setText(std::to_string(m_nTotal-CorrectedCount).c_str());
    }

    if(tableSign == ReleaseTabel || tableSign == NotCorrectedTabel){
        ui->label_Corrected->hide();
        ui->label_NotCorrected->hide();
        ui->label_CorrectedCount->hide();
        ui->label_NotCorrectedCount->hide();
    }

}

QString Teacher::judgmentStatus(int status)
{
    if(status >> 4 == 1)
        return QString("已销假");

    int mentor = 0b01100;
    int instructor = 0b00011;
    if(teacherSign){
        mentor &= status;
        switch (mentor) {
        case 0b00000:
            return QString("待审批");
            break;
        case 0b00100:
            return QString("通过");
            break;
        case 0b01000:
            return QString("拒绝");
            break;
        default:
            break;
        }
    } else{
        instructor &= status;
        switch (instructor) {
        case 0b00000:
            return QString("待审批");
            break;
        case 0b00001:
            return QString("通过");
            break;
        case 0b00010:
            return QString("拒绝");
            break;
        default:
            break;
        }
    }
    return QString("");
}

void Teacher::teacherInit()
{
    http.sendRequest("search_leave_num");
    m_nTotal = http.data["num"].get<int>();          //总记录数
    m_nNow = 1;
    CorrectedCount = 0;
    Index = 0;
    tableSign = totalTabel;
    http.sendRequest("search_leave");
    vecJson = http.data;

    for(int i = 0; i < vecJson.size(); i++) {
        nlohmann::json json_base{
          {"token", http.token.toStdString()},
          {"id", vecJson[i]["student_id"].get<std::string>()}
        };
        http.sendRequest("student_info", json_base);
        student_list.push_back({vecJson[i]["inform_id"].get<int>(),
                                http.data["name"].get<std::string>().c_str(),
                                http.data["class"].get<int>(),
                                http.data["id"].get<std::string>().c_str(),
                                vecJson[i]["leave_type"].get<std::string>().c_str(),
                                vecJson[i]["leave_reason"].get<std::string>().c_str(),
                                vecJson[i]["time_begin"].get<std::string>().c_str(),
                                vecJson[i]["time_end"].get<std::string>().c_str(),
                                vecJson[i]["is_school"].get<bool>(),
                                vecJson[i]["status"].get<int>(),
                               });
        if(vecJson[i]["status"].get<int>() != 0b00000 && vecJson[i]["status"].get<int>() != 0b00100){
            CorrectedCount++;
        } else{
            NotCorrected.push_back(i);
        }
        if(vecJson[i]["status"].get<int>() >> 4 == 0b00001){
            Release.push_back(i);
        }
    }
    QString instructor = http.data["instructor"].get<std::string>().c_str();
    QString mentor = http.data["mentor"].get<std::string>().c_str();
    http.sendRequest("self");
    QString id = http.data["id"].get<std::string>().c_str();
    if(id == instructor)
        teacherSign = false;
    else if(id == mentor)
        teacherSign = true;
}

void Teacher::keyReleaseEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_F5)
    {
        Release.clear();
        NotCorrected.clear();
        teacherInit();
        updateInfo();
        return;
    }

    QWidget::keyPressEvent(event);
}


void Teacher::on_ptn_home_released()
{
    if(tableSign == totalTabel){
        if(this->m_nNow == 1)
            return;

        this->m_nNow = 1;
    }
    else if(tableSign == NotCorrectedTabel){
        if(this->Index == 0)
            return;
        Index = 0;
        this->m_nNow = this->NotCorrected[0]+1;
    }
    else if(tableSign == ReleaseTabel){
        if(this->Index == 0)
            return;
        Index = 0;
        this->m_nNow = this->Release[0]+1;
    }
    updateInfo();
}


void Teacher::on_ptn_last_released()
{
    if(tableSign == totalTabel){
        if(this->m_nNow <= 1){
            message->Warning("已到达首页");
            return;
        }

        this->m_nNow -= 1;
    }
    else if(tableSign == NotCorrectedTabel){
        if(this->Index <= 0){
            message->Warning("已到达首页");
            return;
        }
        Index--;
        this->m_nNow = this->NotCorrected[Index]+1;
    }
    else if(tableSign == ReleaseTabel){
        if(this->Index <= 0){
            message->Warning("已到达首页");
            return;
        }
        Index--;
        this->m_nNow = this->Release[Index]+1;
    }
    updateInfo();

}


void Teacher::on_ptn_next_released()
{
    if(tableSign == totalTabel){
        if(this->m_nNow == this->m_nTotal || this->m_nTotal <= 0){
            message->Warning("已到达末页");
            return;
        }

        this->m_nNow += 1;
    }
    else if(tableSign == NotCorrectedTabel){
        if(this->Index == m_nTotal-1 || this->m_nTotal <= 0){
            message->Warning("已到达末页");
            return;
        }

        Index++;
        this->m_nNow = this->NotCorrected[Index]+1;
    }
    else if(tableSign == ReleaseTabel){
        if(this->Index == m_nTotal-1 || this->m_nTotal <= 0){
            message->Warning("已到达末页");
            return;
        }

        Index++;
        this->m_nNow = this->Release[Index]+1;
    }

    updateInfo();

}


void Teacher::on_ptn_end_released()
{
    if(tableSign == totalTabel){
        if(this->m_nNow == this->m_nTotal || this->m_nTotal <= 0)
           return;

        this->m_nNow = m_nTotal;
        Index = m_nTotal-1;
    }
    else if(tableSign == NotCorrectedTabel){
        if(this->Index == this->m_nTotal-1)
            return;
        Index = m_nTotal-1;
        this->m_nNow = this->NotCorrected[m_nTotal-1]+1;
    }
    else if(tableSign == ReleaseTabel){
        if(this->Index == this->m_nTotal-1)
            return;
        Index = m_nTotal-1;
        this->m_nNow = this->Release[m_nTotal-1]+1;
    }

    updateInfo();

}


void Teacher::on_ptn_agree_released()
{
    if(teacherSign){
        student_list[m_nNow-1].m_status = 0b00100;
    } else{
        student_list[m_nNow-1].m_status = 0b00001;
    }
    nlohmann::json json_base{
        {"token", http.token.toStdString()},
        {"note_id", vecJson[m_nNow]["inform_id"].get<int>()},
        {"status", true}
    };
    http.sendRequest("approval",json_base);
    if(http.data["code"] == 200 || http.data["code"] == 201 || http.data["code"] == 203){
        message->Success("批改成功");
        qDebug() << "approval: "  << http.data.dump().c_str();
        updateInfo();
    } else if(http.data["code"] == 400 || http.data["code"] == 401 || http.data["code"] == 403){
        qDebug() << "approval: "  << http.data.dump().c_str();
        message->Warning("状态必须为待批准");
    }

}


void Teacher::on_ptn_refuse_released()
{
    if(teacherSign){
        student_list[m_nNow-1].m_status = 0b01000;
    } else{
        student_list[m_nNow-1].m_status = 0b00010;
    }
    nlohmann::json json_base{
        {"token", http.token.toStdString()},
        {"note_id", vecJson[m_nNow]["inform_id"].get<int>()},
        {"status", false}};
    http.sendRequest("approval",json_base);
    if(http.data["code"] == 200 || http.data["code"] == 201 || http.data["code"] == 203){
        message->Success("批改成功");
        //qDebug() << "approval: "  << http.data.dump().c_str();
        updateInfo();
    } else {
        message->Warning("状态必须为待审批");
    }
}



void Teacher::on_ptn_released_released()
{
    m_nTotal = Release.size();
    if(m_nTotal == 0){
        message->Warning("无销假记录");
        return;
    }
    Index = 0;
    m_nNow = Release[Index]+1;
    tableSign = ReleaseTabel;
    updateInfo();
}


void Teacher::on_ptn_NotCorrected_released()
{
    m_nTotal = NotCorrected.size();
    if(m_nTotal == 0){
        message->Warning("无未批改记录");
        return;
    }
    Index = 0;
    m_nNow = NotCorrected[Index]+1;
    tableSign = NotCorrectedTabel;
    updateInfo();
}


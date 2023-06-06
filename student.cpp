#include "student.h"
#include "./ui_student.h"
#include <QRect>
#include <QDate>
#include <QFile>
#include <QTimer>
#include <QMessageBox>
#include <QPropertyAnimation>
#include <QParallelAnimationGroup>
Student::Student(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Student)
{
    ui->setupUi(this);
    this->installEventFilter(this);    

    message = new calabash::Message(this);
    //filemanager = new FileManager(this);

    QFile file(":/Qss/MacOS.qss");
    file.open(QFile::ReadOnly);
    QString qss = QString::fromLatin1(file.readAll());
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    hide();
    this->initForm();

    connect(ui->lineEdit_begin, &MyLineEdit::clicked, this, &Student::showTimeBegin);
    calenderWidgetBegin = new QCalendarWidget(this);
    calenderWidgetBegin->setGeometry(QRect(ui->lineEdit_begin->rect().x() + 200,ui->lineEdit_begin->rect().y() + 168, 240, 180));
    calenderWidgetBegin->setHidden(true);
    connect(calenderWidgetBegin, &QCalendarWidget::clicked, this, &Student::setDateBegin);
    connect(ui->lineEdit_end, &MyLineEdit::clicked, this, &Student::showTimeEnd);
    calenderWidgetEnd = new QCalendarWidget(this);
    calenderWidgetEnd->setGeometry(QRect(ui->lineEdit_end->rect().x() + 200,ui->lineEdit_end->rect().y() + 218, 240, 180));
    calenderWidgetEnd->setHidden(true);
    connect(calenderWidgetEnd, &QCalendarWidget::clicked, this, &Student::setDateEnd);

    connect(ui->ptn_submit, &QPushButton::clicked, this, &Student::leaveSubmit_clicked);

    ui->comboBox_leaveStyle->setStyleSheet(qss);
    ui->lineEdit_begin->setStyleSheet(qss);
    ui->lineEdit_end->setStyleSheet(qss);
    ui->textEdit_leaveReason->setStyleSheet(qss);
    ui->timeEdit_begin->setStyleSheet(qss);
    ui->timeEdit_end->setStyleSheet(qss);
    ui->ptn_submit->setStyleSheet(qss);

    ui->timeEdit_begin->setDateTime(QDateTime().currentDateTime());
    ui->timeEdit_end->setDateTime(QDateTime().currentDateTime());

    calenderWidgetBegin->setStyleSheet(qss);
    calenderWidgetEnd->setStyleSheet(qss);
    //page2 槽函数
    //connect(ui->ptn_writeOff, &QPushButton::released, this, &Student::on_ptn_writeOff_released);
    //connect(ui->ptn_end, &QPushButton::released, this, &Student::on_ptn_end_released);
    //connect(ui->ptn_home, &QPushButton::released, this, &Student::on_ptn_home_released);
    //connect(ui->ptn_next, &QPushButton::clicked, this, &Student::on_ptn_next_released);
    //connect(ui->ptn_last, &QPushButton::clicked, this, &Student::on_ptn_last_released);
    //ptn样式
    ui->ptn_writeOff->setStyleSheet(qss);
    ui->ptn_last->setStyleSheet(qss);
    ui->ptn_next->setStyleSheet(qss);
    ui->ptn_end->setStyleSheet(qss);
    ui->ptn_home->setStyleSheet(qss);
    ui->ptn_NotCorrected->setStyleSheet(qss);
    ui->ptn_released->setStyleSheet(qss);
    file.close();

    ui->scrollArea->setStyleSheet("QScrollArea {background-color:transparent;"
                                  "border:none;}");
    ui->scrollArea->viewport()->setStyleSheet("background-color:transparent;");


}

Student::~Student()
{
    delete ui;
}

void Student::initForm()
{
    ui->imageSwitch->setChecked(false);

    ui->imageSwitch->setFixedSize(68, 30);

    ui->imageSwitch->setButtonStyle(ImageSwitch::ButtonStyle_4);


    //绑定选中切换信号
    connect(ui->imageSwitch, SIGNAL(checkedChanged(bool)), this, SLOT(checkedChanged(bool)));

}

void Student::checkedChanged(bool checked)
{
    qDebug() << sender() << checked;
}

void Student::showTimeEnd()
{
    calenderWidgetEnd->setHidden(false);
}

void Student::setDateEnd()
{
    QDate date = calenderWidgetEnd->selectedDate();
    QString str = date.toString("yyyy-MM-dd");

    ui->lineEdit_end->setText(str);
    calenderWidgetEnd->setHidden(true);
}

void Student::leaveSubmit_clicked()
{
    if(ui->comboBox_leaveStyle->currentText() == "" || ui->textEdit_leaveReason->toPlainText() == "" || ui->lineEdit_begin->text() == "" || ui->lineEdit_end->text() == ""){
        message->Warning("请将信息填写完整");
        return;
    }
    nlohmann::json json_base{
        {"token", http.token.toStdString()},
        {"leave_type", ui->comboBox_leaveStyle->currentText().toStdString()},
        {"leave_reason", ui->textEdit_leaveReason->toPlainText().toStdString()},
        {"time_begin", ui->lineEdit_begin->text().toStdString() + " " + ui->timeEdit_begin->text().toStdString()},
        {"time_end", ui->lineEdit_end->text().toStdString() + " " + ui->timeEdit_end->text().toStdString()},
        {"is_school", ui->imageSwitch->getChecked()}
    };
    http.sendRequest("leave", json_base);
    if(http.code == 200 || http.code == 201 || http.code == 202){
        message->Success(QString("提交成功"));
        //清空
        ui->comboBox_leaveStyle->setCurrentIndex(0);
        ui->textEdit_leaveReason->clear();
        ui->lineEdit_begin->clear();
        ui->lineEdit_end->clear();
        ui->imageSwitch->setChecked(false);
        //写入本地文件
        //http.sendRequest("search_leave");
        //filemanager->writeJsonFile(http.data);
    } else if(http.code == 400 || http.code == 401 || http.code == 402){
        message->Warning(QString("提交失败"));
    }
}

void Student::showTimeBegin()
{
    calenderWidgetBegin->setHidden(false);
}

void Student::setDateBegin()
{
    QDate date = calenderWidgetBegin->selectedDate();
    QString str = date.toString("yyyy-MM-dd");

    ui->lineEdit_begin->setText(str);
    calenderWidgetBegin->setHidden(true);
}

bool Student::eventFilter(QObject *watched, QEvent *event)
{
    static int press_x;
    static int press_y;
    static int release_x;
    static int release_y;

    QMouseEvent*  event_1 = static_cast<QMouseEvent *>(event);

    if(event_1->type() == QEvent::MouseButtonPress)
    {
        press_x = event_1->globalPosition().x();
        press_y = event_1->globalPosition().y();
    }
    if(event_1->type() == QEvent::MouseButtonRelease)
    {
        release_x = event_1->globalPosition().x();
        release_y = event_1->globalPosition().y();
    }
    /*******判断左滑动*******/
    if(((release_x -press_x) < 0) /*&& ((release_y - press_y) > 0)*/ && (event_1->type() == QEvent::MouseButtonRelease))
    {
        int current_page = ui->stackedWidget->currentIndex();
        if(current_page>0)
        {
            ui->label->setPixmap(ui->stackedWidget->currentWidget()->grab());

            QPropertyAnimation *animation1 = new QPropertyAnimation(ui->label,"geometry");
            animation1->setDuration(500);
            animation1->setStartValue(QRect(0,0,this->width(),this->height()));
            animation1->setEndValue(QRect(-this->width(),0,this->width(),this->height()));

            ui->stackedWidget->setCurrentIndex(current_page-1);

            QPropertyAnimation *animation2 = new QPropertyAnimation(ui->stackedWidget->currentWidget(),"geometry");
            animation2->setDuration(500);
            animation2->setStartValue(QRect(this->width()*2,0,this->width(),this->height()));
            animation2->setEndValue(QRect(0,0,this->width(),this->height()));

            QParallelAnimationGroup *group = new QParallelAnimationGroup;
            group->addAnimation(animation1);
            group->addAnimation(animation2);
            group->start();
        }



    }
    /********判断右滑动********/
    if(((release_x -press_x) > 0) /*&& ((release_y - press_y) < 0)*/ && (event_1->type() == QEvent::MouseButtonRelease))
    {
        int current_page = ui->stackedWidget->currentIndex();
        if(current_page < 1)
        {
            ui->label->setPixmap(ui->stackedWidget->currentWidget()->grab());  //捕获当前界面并绘制到label上

            QPropertyAnimation *animation1 = new QPropertyAnimation(ui->label,"geometry");
            animation1->setDuration(500);  //设置动画时间为1秒
            animation1->setStartValue(QRect(0,0,this->width(),this->height()));
            animation1->setEndValue(QRect(this->width()*2,0,this->width(),this->height()));

            ui->stackedWidget->setCurrentIndex(current_page+1);  //切换界面

            QPropertyAnimation *animation2 = new QPropertyAnimation(ui->stackedWidget->currentWidget(),"geometry");
            animation2->setDuration(500);
            animation2->setStartValue(QRect(-this->width()*2,0,this->width(),this->height()));
            animation2->setEndValue(QRect(0,0,this->width(),this->height()));

            QParallelAnimationGroup *group = new QParallelAnimationGroup;  //动画容器
            group->addAnimation(animation1);
            group->addAnimation(animation2);
            group->start();
        }

    }
    return QWidget::eventFilter(watched,event);
}

void Student::pageInit()
{
    http.sendRequest("search_leave_num");
    m_nTotal = http.data["num"].get<int>();          //总记录数
    m_nNow = 1;
    tableSign = totalTabel;
    Index = 0;
    http.sendRequest("search_leave");
    vecJson = http.data;
    for(int i = 0; i < vecJson.size(); i++){
        if(vecJson[i]["status"].get<int>() != 0b00000 && vecJson[i]["status"].get<int>() != 0b00100){

        } else{
            NotCorrected.push_back(i);
        }
        if(vecJson[i]["status"].get<int>() >> 4 == 0b00001){
            Release.push_back(i);
        }
    }
    updateInfo();

}

void Student::updateInfo()
{
    ui->label_timeBegin->setText(QString(tr("开始时间:") + vecJson[m_nNow-1]["time_begin"].get<std::string>().c_str()));
    ui->label_timeEnd->setText(QString(tr("结束时间:") + vecJson[m_nNow-1]["time_end"].get<std::string>().c_str()));
    if(vecJson[m_nNow-1]["is_school"].get<bool>()){
       ui->label_isSchool->setText(QString(tr("是否离校: ") + " 是"));
    } else{
       ui->label_isSchool->setText(QString(tr("是否离校: ") + " 否"));
    }
    ui->label_leaveType->setText("请假类型:" + QString(vecJson[m_nNow-1]["leave_type"].get<std::string>().c_str()));
    ui->label_leaveReason_2->setText("请假原因: " + QString(vecJson[m_nNow-1]["leave_reason"].get<std::string>().c_str()));
    ui->label_leaveReason_2->setWordWrap(true);
    if(tableSign == totalTabel){
        ui->label_now->setText(QString::number(m_nNow));
    } else if(tableSign == NotCorrectedTabel || tableSign == ReleaseTabel || tableSign == ChangeTabel){
        ui->label_now->setText(QString::number(Index+1));
    }
    ui->label_total->setText(std::string("共 " + std::to_string(m_nTotal) + " 页").c_str());

    ui->label_status->setText(judgmentStatus(vecJson[m_nNow-1]["status"].get<int>()));

}

QString Student::judgmentStatus(int status)
{
    switch (status) {
    case 0b00000:
        return QString("待审批");
        break;
    case 0b00100:
        return QString("待审批");
        break;
    case 0b00101:
        return QString("通过");
        break;
    case 0b01010:
        return QString("拒绝");
        break;
    case 0b00110:
        return QString("拒绝");
        break;
    default:
        return QString("已销假");
        break;
    }
    return QString("");
}

void Student::on_ptn_writeOff_released()
{
    vecJson[m_nNow-1]["status"] = vecJson[m_nNow-1]["status"].get<int>() | 0b10000;
    nlohmann::json json_base{
        {"token", http.token.toStdString()},
        {"note_id", vecJson[m_nNow-1]["inform_id"]}
    };
    http.sendRequest("release", json_base);
    if(http.code == 200 || http.code == 201 || http.code == 203){
        updateInfo();
        message->Success("销假成功!");
    }
    if(http.code == 400 || http.code == 401 || http.code == 403){
        message->Warning("销假失败,状态必须为通过！");
    }
}

void Student::on_ptn_home_released()
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
    else if(tableSign == ChangeTabel){
        if(this->Index == 0)
            return;
        Index = 0;
        this->m_nNow = this->Release[0]+1;
    }
    updateInfo();
}


void Student::on_ptn_last_released()
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
    else if(tableSign == ChangeTabel){
        if(this->Index <= 0){
            message->Warning("已到达首页");
            return;
        }
        Index--;
        this->m_nNow = this->Release[Index]+1;
    }
    updateInfo();

}


void Student::on_ptn_next_released()
{
    if(tableSign == totalTabel){
        if(this->m_nNow == this->m_nTotal){
            message->Warning("已到达末页");
            return;
        }

        this->m_nNow += 1;
    }
    else if(tableSign == NotCorrectedTabel){
        if(this->Index == m_nTotal-1){
            message->Warning("已到达末页");
            return;
        }

        Index++;
        this->m_nNow = this->NotCorrected[Index]+1;
    }
    else if(tableSign == ReleaseTabel){
        if(this->Index == m_nTotal-1){
            message->Warning("已到达末页");
            return;
        }

        Index++;
        this->m_nNow = this->Release[Index]+1;
    }
    else if(tableSign == ChangeTabel){
        if(this->Index == m_nTotal-1){
            message->Warning("已到达末页");
            return;
        }
        Index++;
        this->m_nNow = this->Change[Index]+1;
    }
    updateInfo();

}


void Student::on_ptn_end_released()
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
    else if(tableSign == ChangeTabel){
        if(this->Index == this->m_nTotal-1)
            return;
        Index = m_nTotal-1;
        this->m_nNow = this->Change[m_nTotal-1]+1;
    }

    updateInfo();

}



void Student::on_ptn_NotCorrected_released()
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


void Student::on_ptn_released_released()
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

void Student::keyReleaseEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_F5)
    {
//        http.sendRequest("search_leave");
//        Change.clear();
//        Change = filemanager->fileChange(http.data);
//        if(Change.size() == 0){
//            Release.clear();
//            NotCorrected.clear();
//            pageInit();
//            message->Info("已返回首页");
//        } else{
//            filemanager->writeJsonFile(http.data);
//            Index = 0;
//            m_nNow = Change[Index]+1;
//            tableSign = ChangeTabel;
//            updateInfo();
//            QMessageBox msgbox(QMessageBox::Information,"通知","请假记录已被批改",QMessageBox::Ok);
//            msgbox.setStyleSheet("QMessageBox{background-color: rgba(188, 223, 255,50);\
//                                 border:1px solid #CCFFF6;\
//                                border-radius:3px;\
//                                }");
//        }
        Release.clear();
        NotCorrected.clear();
        pageInit();
        message->Info("已返回首页");
        //文件检测 发送信息实现提醒
        return;
    }

    QWidget::keyPressEvent(event);
}


#include "owner.h"
#include "ui_owner.h"

Owner::Owner(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Owner)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    hide();
}

Owner::~Owner()
{
    delete ui;
}

void Owner::ownerView()
{
    if(http.username.size() == 13){
        ui->label_id->setText(tr("ID: ") + this->http.data["id"].get<std::string>().c_str());
        ui->label_class->setText(tr("班级: ") + std::to_string(this->http.data["class"].get<int>()).c_str());
        ui->label_name->setText(tr("姓名: ") + this->http.data["name"].get<std::string>().c_str());
        ui->label_sex->setText(tr("性别: ") + this->http.data["sex"].get<std::string>().c_str());
        ui->label_specialized->setText(tr("专业: ") + this->http.data["specialty"].get<std::string>().c_str());
        ui->label_phoneNumber->setText(tr("电话: ") + this->http.data["tel"].get<std::string>().c_str());
    } else{
        ui->label_id->setText(tr("ID: ") + this->http.data["id"].get<std::string>().c_str());
        ui->label_specialized->setText(tr("年龄: ") + std::to_string(this->http.data["age"].get<int>()).c_str());
        ui->label_name->setText(tr("姓名: ") + this->http.data["name"].get<std::string>().c_str());
        ui->label_sex->setText(tr("性别: ") + this->http.data["sex"].get<std::string>().c_str());
        ui->label_class->setText(tr("电话: ") + this->http.data["tel"].get<std::string>().c_str());
        ui->label_phoneNumber->hide();
    }
}

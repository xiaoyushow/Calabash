#include "filemanager.h"
#include <QDebug>
FileManager::FileManager(QObject *parent)
    : QObject{parent}
{
//    file = new QFile("D:/Qt/QtProgram/calabash/File/student.txt");
//    if(!file->open(QIODevice::ReadWrite | QIODevice::Text)){
//        qDebug()<<"文件打开失败";
//    }
}

FileManager::~FileManager()
{

}

void FileManager::writeJsonFile(std::vector<nlohmann::json> vecJson)
{
    file = new QFile(fileName);
    if(!file->open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate)){
        qDebug()<<"文件打开失败";
    }
    file->write("\"data\":");
    for(int i = 0; i < vecJson.size(); i++){
        file->write(vecJson[i].dump().c_str());
        qDebug() << vecJson[i].dump().c_str();
    }

    file->close();

}

std::vector<nlohmann::json> FileManager::takeJsonFile()
{
    file = new QFile(fileName);
    if(!file->open(QIODevice::ReadOnly | QIODevice::Text | QIODevice::Truncate)){
        qDebug()<<"文件打开失败";
    }
    std::string str(file->readAll());
    std::vector<nlohmann::json> res;
    try {
        nlohmann::json data = nlohmann::json::parse(str);
        res = data["data"].get<nlohmann::json>();

    } catch (std::exception& e) {
        qDebug() << "json反序列化失败";
        qDebug() << e.what();
    }
    file->close();
    return res;
}

std::vector<int> FileManager::fileChange(std::vector<nlohmann::json> vecJson)
{
    std::vector<int> res;
    std::vector<nlohmann::json> compareJosn = takeJsonFile();
    if(vecJson == compareJosn){
        return res;
    } else{
        for(int i = 0; i < vecJson.size(); i++){
            if(vecJson[i] != compareJosn[i]){
                res.push_back(i);
            }
        }
    }
    return res;
}

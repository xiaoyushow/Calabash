#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <QObject>
#include <QFile>
#include "json.hpp"
class FileManager : public QObject
{
    Q_OBJECT
public:
    explicit FileManager(QObject *parent = nullptr);
    ~FileManager();

    void writeJsonFile(std::vector<nlohmann::json> vecJson);

    std::vector<nlohmann::json> takeJsonFile();

    std::vector<int> fileChange(std::vector<nlohmann::json> vecJson);
signals:

private:
    QFile *file;
    const QString fileName = QString("D:/Qt/QtProgram/calabash/File/student.txt");

};

#endif // FILEMANAGER_H

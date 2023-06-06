#ifndef HTTP_H
#define HTTP_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QJsonParseError>
#include <QJsonObject>
#include <QEventLoop>
#include "json.hpp"

class Http : public QObject
{
    Q_OBJECT
public:
    explicit Http(QObject *parent = nullptr);

    //http://106.14.18.230:7777/
    //向服务器发送请求功能
    void sendRequest(QString function);
    void sendRequest(QString function, nlohmann::json &json_base);

private:
    //post请求
    void httpPost(const QString &sUrlconst, nlohmann::json &json_base);

    nlohmann::json json_Login();
    nlohmann::json json_Only_Token();


private slots:


private:
    QNetworkAccessManager *manager;
    QNetworkRequest request;
    QNetworkReply *reply;
    QByteArray buf;
    QString currentUrl;

    nlohmann::json json_base;
public:
    QString username, password;
    QString token;
    int code;
    nlohmann::json data;

};

#endif // HTTP_H

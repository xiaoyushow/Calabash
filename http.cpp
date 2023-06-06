#include "http.h"

using namespace nlohmann;

Http::Http(QObject *parent)
    : QObject{parent}
{
    manager = new QNetworkAccessManager(this);
//    username = "2020984130603";
//    password = "727DE0A706DD6724D050752A866AFAA6";

//    sendRequest("login");

}

void Http::sendRequest(QString function)
{
    currentUrl = QString("http://106.14.18.230:7777/%1").arg(function);
    if(function == "login"){
        json_base = json_Login();
    }
    else if(function == "self"){
        json_base = json_Only_Token();
    }
    else if(function == "search_leave"){
        json_base = json_Only_Token();
    }
    else if(function == "search_leave_num"){
        json_base = json_Only_Token();
    }
    httpPost(currentUrl, json_base);
}

void Http::sendRequest(QString function, nlohmann::json &json_base)
{
    currentUrl = QString("http://106.14.18.230:7777/%1").arg(function);
    httpPost(currentUrl, json_base);

}


void Http::httpPost(const QString &sUrl, nlohmann::json &json_base)
{
    //auto networkManager = std::make_shared<QNetworkAccessManager>();
    QNetworkRequest request(sUrl);
    request.setRawHeader(QByteArray("Content-Type"), QByteArray("application/json"));
    reply = manager->post(request, json_base.dump().c_str());

    QEventLoop eventLoop;
    QObject::connect(manager, &QNetworkAccessManager::finished, &eventLoop, &QEventLoop::quit);
    eventLoop.exec();

    json j;
    try {
        std::string s = reply->readAll().toStdString();
        j = nlohmann::json::parse(s);
    } catch (nlohmann::json::parse_error& ex) {
        qDebug() << "parse error " << ex.what();
    }
    if(j.contains("token"))
        this->token = j["token"].get<std::string>().c_str();
    this->code = j["code"].get<int>();
    if(j.contains("data")) {
        this->data = j["data"].get<json>();
    } else
        this->data = std::move(j);
}

nlohmann::json Http::json_Login() {
    return json{
        {"user", username.toStdString()},
        {"password",password.toStdString()}
    };
}

nlohmann::json Http::json_Only_Token()
{
    return json{
        {"token", token.toStdString()}
    };
}











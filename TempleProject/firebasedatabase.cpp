#include "firebasedatabase.h"
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include<QNetworkRequest>
#include <QVariantMap>
#include <QDebug>
//#include <QAssociativeConstIterator>
#include <QJsonDocument>
#include <QSslSocket>
#include <QTextCodec>
#include <QJsonDocument>
#include <QJsonObject>
FireBaseDataBase::FireBaseDataBase(QObject *parent) : QObject(parent)
{
    qDebug()<<Q_FUNC_INFO<<Qt::endl;
    m_networkManager = new QNetworkAccessManager(this);
    //Read from  cloud
    m_networkreply = m_networkManager->get(QNetworkRequest(QUrl("https://templeproject-b2c52-default-rtdb.firebaseio.com/temple.json")));
    connect(m_networkreply,&QNetworkReply::readyRead,this, &FireBaseDataBase::networkReplyReadyRead);
    //Write to cloud
    //    QVariantMap newPet;
    //    newPet["Type"] = "Rat";
    //    newPet["Name"] = "BCD";
    //    newPet["Food"] = "aaaa";
    //    QJsonDocument jsonDoc = QJsonDocument::fromVariant(newPet);
    //    QNetworkRequest newPetRequest(QUrl("https://fir-cd90e-default-rtdb.firebaseio.com/demo.json"));
    //    newPetRequest.setHeader(QNetworkRequest::ContentTypeHeader,QString("application/json"));
    //    m_networkManager->post(newPetRequest,jsonDoc.toJson());
}
FireBaseDataBase::~FireBaseDataBase()
{
    m_networkManager->deleteLater();
    qDebug()<<Q_FUNC_INFO<<Qt::endl;
}
void FireBaseDataBase::networkReplyReadyRead()
{
    qDebug()<<Q_FUNC_INFO<<Qt::endl;
//    qDebug()<<QSslSocket::supportsSsl() << QSslSocket::sslLibraryBuildVersionString() << QSslSocket::sslLibraryVersionString();
    m_dataasbyte = m_networkreply->readAll();
    m_dataasastring = QTextCodec::codecForLocale()->toUnicode(m_dataasbyte);
    emit getUserData(m_dataasastring);
}

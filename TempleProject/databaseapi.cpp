#include "databaseapi.h"
//#include "dbsevatypemodel.h"
#include "firebasedatabase.h"
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include<QNetworkRequest>
#include <QVariantMap>
#include <QDebug>
#include <QJsonObject>
#include <QJsonDocument>
#include <QSslSocket>

DataBaseAPI::DataBaseAPI(QObject *parent)
    : QObject{parent}
{
    qDebug()<<Q_FUNC_INFO<<Qt::endl;
    FireBaseDataBase *fbdb = new FireBaseDataBase;
    connect(fbdb,&FireBaseDataBase::getUserData,this,&DataBaseAPI::connectFromFirebaseDatabase);
}
DataBaseAPI::~DataBaseAPI()
{
    qDebug()<<Q_FUNC_INFO<<Qt::endl;
}

void DataBaseAPI::connectFromFirebaseDatabase(QString data)
{
    qDebug()<<Q_FUNC_INFO<<Qt::endl;
    emit catchSignalFromFirebase(data);
}



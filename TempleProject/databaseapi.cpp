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
//    connect(this,&DataBaseAPI::catchSignalFromFirebase,fbdb, &FireBaseDataBase::networkReplyReadyRead);
}
DataBaseAPI::~DataBaseAPI()
{
    qDebug()<<Q_FUNC_INFO<<Qt::endl;
}

//void DataBaseAPI::signalemit()
//{
//    emit catchSignalFromFirebase();
//}

void DataBaseAPI::connectFromFirebaseDatabase(QString data)
{
//    DBSevaTypeViewModel *DBModel = new DBSevaTypeViewModel;
    qDebug()<<Q_FUNC_INFO<<Qt::endl;
//    connect(this,&DataBaseAPI::catchSignalFromFirebase,DBModel,&DBSevaTypeViewModel::catchdatafromapi);
    emit catchSignalFromFirebase(data);
}



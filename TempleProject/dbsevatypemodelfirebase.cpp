#include "dbsevatypemodelfirebase.h"
#include "databaseapi.h"
//#include "sevabookingviewmodel.h"
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include<QNetworkRequest>
#include <QVariantMap>
#include <QDebug>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QSslSocket>
#include <QEventLoop>
#include <QJsonValue>
#include <QTextCodec>



DBSevaTypeViewModelFirebase::DBSevaTypeViewModelFirebase()
{
    qDebug()<<Q_FUNC_INFO<<Qt::endl;
    //    DBSevaTypeViewModelFirebase *dbsvm = new DBSevaTypeViewModelFirebase;
    DataBaseAPI *dnapi = new DataBaseAPI;
    connect(dnapi,&DataBaseAPI::catchSignalFromFirebase,this,&DBSevaTypeViewModelFirebase::catchdatafromapi);
    //    connect(this,&DBSevaTypeViewModelFirebase::sevaboooking,dnapi, &DataBaseAPI::catchthedatafromdatabase);
}

DBSevaTypeViewModelFirebase::~DBSevaTypeViewModelFirebase()
{
    qDebug()<<Q_FUNC_INFO<<Qt::endl;
}
void DBSevaTypeViewModelFirebase::catchdatafromapi(QString data)
{
    qDebug()<<Q_FUNC_INFO<<Qt::endl;
    doc1 = QJsonDocument::fromJson(data.toUtf8());
    qDebug()<<"Data"<<data;
    jsonObject = doc1.object();
//    qDebug()<<"Complete Data"<<jsonObject;
    Sevadetails = jsonObject["SevaList"].toObject();
    PersonDetails = jsonObject["Person Details"].toObject();
    NakshatraListdetails = jsonObject["Nakshatra"].toObject();;
    GotraListDetails = jsonObject["Gotra"].toObject();;
    BankListObject = jsonObject["Bank List"].toObject();;
    RashiListDetails = jsonObject["Rashi"].toObject();;
//    emit connecttoapi(PersonDetails, Sevadetails,NakshatraListdetails,GotraListDetails,BankListObject,RashiListDetails);




}

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

//QString DBSevaTypeViewModelFirebase::selectedSevaListData(QString data)
//{
//    qDebug()<<Q_FUNC_INFO<<Qt::endl;
//    p_sevaListHit = data;
//    qDebug()<<"Data from QML" <<data;
//    processSevaList();
//    return p_sevaListHit;
//}
void DBSevaTypeViewModelFirebase::catchdatafromapi(QString data)
{
    qDebug()<<Q_FUNC_INFO<<Qt::endl;
    jsonDocument = QJsonDocument::fromJson(data.toUtf8());
    qDebug()<<"Data"<<data;
    jsonObject = jsonDocument.object();
    //    qDebug()<<"Complete Data"<<jsonObject;
    Sevadetails = jsonObject["SevaList"].toObject();
    PersonDetails = jsonObject["Person Details"].toObject();
    NakshatraListdetails = jsonObject["Nakshatra"].toObject();;
    GotraListDetails = jsonObject["Gotra"].toObject();;
    BankListObject = jsonObject["Bank List"].toObject();;
    RashiListDetails = jsonObject["Rashi"].toObject();;
    processData(PersonDetails, Sevadetails,NakshatraListdetails,GotraListDetails,BankListObject,RashiListDetails);
}

void DBSevaTypeViewModelFirebase::processData(QJsonObject PersonDetails, QJsonObject Sevadetails, QJsonObject NakshatraListdetails,QJsonObject GotraListDetails, QJsonObject BankListObject,QJsonObject RashiListDetails)
{
    qDebug()<<Q_FUNC_INFO<<Qt::endl;
    //    qDebug()<<"Person Data"<<data;
    //    qDebug()<<"Seva List Data"<<data2;
    //    qDebug()<<" Nakshatra"<<data3;
    //    qDebug()<<" Gotra"<<data4;
    //    qDebug()<<" Bank"<<data5;
    //    qDebug()<<" Rashi"<<data6;
    p_userVariantmap = PersonDetails.toVariantMap();
    p_sevaListVariantmap = Sevadetails.toVariantMap();
    p_nakshatraListVariantmap = NakshatraListdetails.toVariantMap();
    p_gotraListVariantmap = GotraListDetails.toVariantMap();
    p_bankListVariantmap = BankListObject.toVariantMap();
    p_rashiListVariantmap = RashiListDetails.toVariantMap();
    qDebug()<<"User data"<<p_userVariantmap;
    qDebug()<<"Seva List data"<<p_sevaListVariantmap;
    qDebug()<<" Nakshatra"<<p_nakshatraListVariantmap;
    qDebug()<<" Gotra"<<p_gotraListVariantmap;
    qDebug()<<" Bank"<<p_bankListVariantmap;
    qDebug()<<" Rashi"<<p_rashiListVariantmap;
    QVariantMap :: Iterator it;
    QVariantMap :: Iterator it2;
    QVariantMap :: Iterator it3;
    QVariantMap :: Iterator it4;
    QVariantMap :: Iterator it5;
    QVariantMap :: Iterator it6;
    for(it=p_userVariantmap.begin();it!=p_userVariantmap.end();it++)
    {

        auto a = it.key();
        if(a=="Date"){
            p_currentDate = it.value().toDate();
            //            this->setDatees(p_datees);
            qDebug()<<"Print Date "<<p_currentDate;
            emit userInformationDate(p_currentDate);
        }
        if(a=="Email"){
            p_email = it.value().toString();
            //            this->setEmail(p_email);
            qDebug()<<"Print Email "<<p_email;
            emit userInformationEmail(p_email);
        }
        if(a=="Gotra"){
            p_gotra = it.value().toStringList();
            //            this->setGotra(p_gotra);
            qDebug()<<"Print Gotra "<<p_gotra;
            emit userInformationGotra(p_gotra);

        }
        if(a=="Mobile"){
            p_phoneNumber = it.value().toString();
            //            this->setPhoneNumber(p_phoneNumber);
            qDebug()<<"Print Mobile "<<p_phoneNumber;
            emit userInformationMobile(p_phoneNumber);

        }
        if(a=="Nakshatra"){
            p_nakshatra = it.value().toStringList();
            //            this->setNakshatra(p_nakshatra);
            qDebug()<<"Print Nakshatra "<<p_nakshatra;
            emit userInformationNakshatra(p_nakshatra);

        }
        if(a=="PersonName"){
            p_userName = it.value().toString();
            //            this->setUserName(p_userName);
            qDebug()<<"Print Person Name "<<p_userName;
            emit userInformationPersonName(p_userName);

        }
        //        if(a=="Rashi"){
        //            p_rashi = it.value().toString();
        //            p_rashi = it.value().toString();
        //            this->setUserName(p_userName);
        //            qDebug()<<"Print Rashi Name "<<p_rashi;
        //            emit userInformationRashi(p_rashi);

        //        }
    }

    for(it2=p_sevaListVariantmap.begin();it2!=p_sevaListVariantmap.end();it2++)
    {
        p_keyvalues = it2.key();
        qDebug()<<"Hittt in db--keyyyyyy:--"<<p_keyvalues;
        sevakeyslist.append(p_keyvalues);
        emit sevaListInformation(sevakeyslist);

        //        this->setSevalist(sevakeyslist);

    }
    for(it3=p_nakshatraListVariantmap.begin();it3!=p_nakshatraListVariantmap.end();it3++)
    {
        p_nakshatravalue = it3.value().toString();
        p_nakshatravaluelist.append(p_nakshatravalue);
        qDebug()<<"Nakshatra Value List"<<p_nakshatravaluelist;
        //        this->setNakshatra(p_nakshatravaluelist);
        emit nakshatraInformatoion(p_nakshatravaluelist);
    }
    for(it4=p_gotraListVariantmap.begin();it4!=p_gotraListVariantmap.end();it4++)
    {
        p_gotravalue = it4.value().toString();
        p_gotravaluelist.append(p_gotravalue);
        qDebug()<<"Gotra Value List"<<p_gotravaluelist;

        //        this->setGotra(p_gotravaluelist);
        emit gotraInformatoion(p_gotravaluelist);

    }
    for(it5=p_rashiListVariantmap.begin();it5!=p_rashiListVariantmap.end();it5++)
    {
        p_rashivalue = it5.value().toString();
        p_rashivaluelist.append(p_rashivalue);
        qDebug()<<"Rashi Value List"<<p_rashivaluelist;
        //        this->setRashi(p_rashivaluelist);
        emit rashiInformatoion(p_rashivaluelist);
    }
    for(it6=p_bankListVariantmap.begin();it6!=p_bankListVariantmap.end();it6++)
    {
        p_banklistvalue = it6.value().toString();
        p_bankvaluelist.append(p_banklistvalue);
        qDebug()<<"Bank Value List"<<p_bankvaluelist;
        //        this->setBanklist(bankvaluelist);
        emit bankInformatoion(p_bankvaluelist);
    }
//        processSevaList();
}

void DBSevaTypeViewModelFirebase::processSevaList(QString data)
{
    p_sevaListHit = data;
    QVariantMap :: Iterator it2;
    for(it2=p_sevaListVariantmap.begin();it2!=p_sevaListVariantmap.end();it2++)
    {
        p_keyvalues = it2.key();
        if(p_keyvalues==p_sevaListHit)
        {

            qDebug()<<"Hitted Key value"<<it2.value();
            p_sevanameslistdata=it2.value().toStringList();
            qDebug()<<"Hitted Seva Names value list"<<p_sevanameslistdata;
            //            this->setSevavauenamelist(sevanameslistdata);
//            emit sevaNameListInformation(p_sevanameslistdata);
        }
    }
}

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



DBSevaTypeModelFirebase::DBSevaTypeModelFirebase()
{
    qDebug()<<Q_FUNC_INFO<<Qt::endl;
    DataBaseAPI *dnapi = new DataBaseAPI;
    connect(dnapi,&DataBaseAPI::catchSignalFromFirebase,this,&DBSevaTypeModelFirebase::catchdatafromapi);
}

DBSevaTypeModelFirebase::~DBSevaTypeModelFirebase()
{
    qDebug()<<Q_FUNC_INFO<<Qt::endl;
}

void DBSevaTypeModelFirebase::catchdatafromapi(QString data)
{
    qDebug()<<Q_FUNC_INFO<<Qt::endl;
    jsonDocument = QJsonDocument::fromJson(data.toUtf8());
    //        qDebug()<<"Data"<<data;
    jsonObject = jsonDocument.object();
    Sevadetails = jsonObject["SevaList"].toObject();
    PersonDetails = jsonObject["Person Details"].toObject();
    NakshatraListdetails = jsonObject["Nakshatra"].toObject();;
    GotraListDetails = jsonObject["Gotra"].toObject();;
    BankListObject = jsonObject["Bank List"].toObject();;
    RashiListDetails = jsonObject["Rashi"].toObject();;
    //    qDebug()<<"Person Data"<<PersonDetails;
    //    qDebug()<<"Seva List Data"<<Sevadetails;
    //    qDebug()<<" Nakshatra"<<NakshatraListdetails;
    //    qDebug()<<" Gotra"<<GotraListDetails;
    //    qDebug()<<" Bank"<<BankListObject;
    //    qDebug()<<" Rashi"<<RashiListDetails;
    processData(PersonDetails, Sevadetails,NakshatraListdetails,GotraListDetails,BankListObject,RashiListDetails);
}

void DBSevaTypeModelFirebase::processData(QJsonObject PersonDetails, QJsonObject Sevadetails, QJsonObject NakshatraListdetails,QJsonObject GotraListDetails, QJsonObject BankListObject,QJsonObject RashiListDetails)
{
    qDebug()<<Q_FUNC_INFO<<Qt::endl;
    //        qDebug()<<"Person Data"<<PersonDetails;
    //        qDebug()<<"Seva List Data"<<Sevadetails;
    //        qDebug()<<" Nakshatra"<<NakshatraListdetails;
    //        qDebug()<<" Gotra"<<GotraListDetails;
    //        qDebug()<<" Bank"<<BankListObject;
    //        qDebug()<<" Rashi"<<RashiListDetails;
    p_userVariantmap = PersonDetails.toVariantMap();
    p_sevaListVariantmap = Sevadetails.toVariantMap();
    p_nakshatraListVariantmap = NakshatraListdetails.toVariantMap();
    p_gotraListVariantmap = GotraListDetails.toVariantMap();
    p_bankListVariantmap = BankListObject.toVariantMap();
    p_rashiListVariantmap = RashiListDetails.toVariantMap();
    //        qDebug()<<"User data"<<p_userVariantmap;
    //        qDebug()<<"Seva List data"<<p_sevaListVariantmap;
    //        qDebug()<<" Nakshatra"<<p_nakshatraListVariantmap;
    //        qDebug()<<" Gotra"<<p_gotraListVariantmap;
    //        qDebug()<<" Bank"<<p_bankListVariantmap;
    //        qDebug()<<" Rashi"<<p_rashiListVariantmap;
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
            //            qDebug()<<"Print Date "<<p_currentDate;
            emit userInformationDate(p_currentDate);
        }
        if(a=="Email"){
            p_email = it.value().toString();
            //            qDebug()<<"Print Email "<<p_email;
            emit userInformationEmail(p_email);
        }
        if(a=="Gotra"){
            p_gotra = it.value().toStringList();
            //            qDebug()<<"Print Gotra "<<p_gotra;
            emit userInformationGotra(p_gotra);

        }
        if(a=="Mobile"){
            p_phoneNumber = it.value().toString();
            //            qDebug()<<"Print Mobile "<<p_phoneNumber;
            emit userInformationMobile(p_phoneNumber);

        }
        if(a=="Nakshatra"){
            p_nakshatra = it.value().toStringList();
            //            qDebug()<<"Print Nakshatra "<<p_nakshatra;
            emit userInformationNakshatra(p_nakshatra);

        }
        if(a=="PersonName"){
            p_userName = it.value().toString();
            //            qDebug()<<"Print Person Name "<<p_userName;
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
        sevakeyslist.append(p_keyvalues);
        //        qDebug()<<"Seva Keys List"<<sevakeyslist;
        emit sevaListInformation(sevakeyslist);
    }
    for(it3=p_nakshatraListVariantmap.begin();it3!=p_nakshatraListVariantmap.end();it3++)
    {
        p_nakshatravalue = it3.value().toString();
        p_nakshatravaluelist.append(p_nakshatravalue);
        //        qDebug()<<"Nakshatra List"<<p_nakshatravaluelist;
        emit nakshatraInformatoion(p_nakshatravaluelist);
    }
    for(it4=p_gotraListVariantmap.begin();it4!=p_gotraListVariantmap.end();it4++)
    {
        p_gotravalue = it4.value().toString();
        p_gotravaluelist.append(p_gotravalue);
        //        qDebug()<<"Gotra List"<<p_gotravaluelist;
        emit gotraInformatoion(p_gotravaluelist);

    }
    for(it5=p_rashiListVariantmap.begin();it5!=p_rashiListVariantmap.end();it5++)
    {
        p_rashivalue = it5.value().toString();
        p_rashivaluelist.append(p_rashivalue);
        emit rashiInformatoion(p_rashivaluelist);
    }
    for(it6=p_bankListVariantmap.begin();it6!=p_bankListVariantmap.end();it6++)
    {
        p_banklistvalue = it6.value().toString();
        p_bankvaluelist.append(p_banklistvalue);
        emit bankInformatoion(p_bankvaluelist);
    }
}

void DBSevaTypeModelFirebase::processSevaList(QString data)
{
    p_sevaListHit = data;
    QVariantMap :: Iterator it2;
    QMap<QString,QVariant> :: Iterator it3;
    for(it2=p_sevaListVariantmap.begin();it2!=p_sevaListVariantmap.end();it2++)
    {

        p_keyvalues = it2.key();
        subsevavalues = it2.value().toMap();
        if(p_keyvalues==p_sevaListHit)
        {
            sevasublistvalue.clear();
            for(it3=subsevavalues.begin();it3!=subsevavalues.end();it3++)
            {
                sevasublistkeyvalue = it3.key();
                sevasublistvalue.append(sevasublistkeyvalue);


            }
            emit sevaNameListInformation(sevasublistvalue);
        }
    }
}

void DBSevaTypeModelFirebase::processSevaPriceData(QString data)
{
    p_sevaCostHit = data;
    QVariantMap :: Iterator it2;
    QMap<QString,QVariant> :: Iterator it3;
    for(it2=p_sevaListVariantmap.begin();it2!=p_sevaListVariantmap.end();it2++)
    {
        p_keyvalues = it2.key();
        subsevavalues = it2.value().toMap();
        if(p_keyvalues==p_sevaListHit)
        {
            sevasublistvalue.clear();
            for(it3=subsevavalues.begin();it3!=subsevavalues.end();it3++)
            {
                auto aaa = it3.key();
                if(aaa==p_sevaCostHit){
                    priceInfo = it3.value().toUInt();
                }
            }
            emit sevaPriceInformation(priceInfo);
        }
    }
}

void DBSevaTypeModelFirebase::processSevaNameData(QString data)
{
    c_SevaName = data;
    qDebug()<<Q_FUNC_INFO<<c_SevaName<<Qt::endl;

}

void DBSevaTypeModelFirebase::processBankNameData(QString data)
{
    c_BankName =data;
    qDebug()<<Q_FUNC_INFO<<c_SevaName<<Qt::endl;

}

void DBSevaTypeModelFirebase::processRashiNameData(QString data)
{
    c_RashiName = data;
    qDebug()<<Q_FUNC_INFO<<c_RashiName<<Qt::endl;

}

void DBSevaTypeModelFirebase::processGotraameData(QString data)
{
    c_GotraName = data;
    qDebug()<<Q_FUNC_INFO<<c_GotraName<<Qt::endl;

}

void DBSevaTypeModelFirebase::processNakshatraNameData(QString data)
{
    c_NakshatraName = data;
    qDebug()<<Q_FUNC_INFO<<c_NakshatraName<<Qt::endl;

}

void DBSevaTypeModelFirebase::processSevaDateData(QString data)
{
    c_SevaDate = data;
    qDebug()<<Q_FUNC_INFO<<c_SevaDate<<Qt::endl;

}

void DBSevaTypeModelFirebase::processSevaBillingDateData(QString data)
{
    c_SevaBillingDate = data;
    qDebug()<<Q_FUNC_INFO<<c_SevaBillingDate<<Qt::endl;

}

void DBSevaTypeModelFirebase::processCountofPeopleData(unsigned data)
{
    c_CountOfPeople = data;
    qDebug()<<Q_FUNC_INFO<<c_CountOfPeople<<Qt::endl;

}

void DBSevaTypeModelFirebase::processSevaTimeData(QTime data)
{
    c_SevaTime = data;
    qDebug()<<Q_FUNC_INFO<<c_SevaTime<<Qt::endl;

}

void DBSevaTypeModelFirebase::processSevaCostData(unsigned data)
{
    c_SevaCost = data;
    qDebug()<<Q_FUNC_INFO<<c_SevaCost<<Qt::endl;

}

void DBSevaTypeModelFirebase::processSevaExtraCostData(unsigned data)
{
    c_SevaExtraCost = data;
    qDebug()<<Q_FUNC_INFO<<c_SevaExtraCost<<Qt::endl;

}

void DBSevaTypeModelFirebase::processSevaReciptNumberData(QString data)
{
    c_ReciptNumber = data;
    qDebug()<<Q_FUNC_INFO<<c_ReciptNumber<<Qt::endl;

}

void DBSevaTypeModelFirebase::processUserNameData(QString data)
{
    c_UserName = data;
    qDebug()<<Q_FUNC_INFO<<c_UserName<<Qt::endl;

}

void DBSevaTypeModelFirebase::processUserPhoneNumberData(QString data)
{
    c_UserPhoneNumber = data;
    qDebug()<<Q_FUNC_INFO<<c_UserPhoneNumber<<Qt::endl;

}

void DBSevaTypeModelFirebase::processPaymentTypeData(QString data)
{
    c_PaymentType = data;
    qDebug()<<Q_FUNC_INFO<<c_PaymentType<<Qt::endl;

}

void DBSevaTypeModelFirebase::processNoteData(QString data)
{
    c_Note = data;
    qDebug()<<Q_FUNC_INFO<<c_Note<<Qt::endl;

}


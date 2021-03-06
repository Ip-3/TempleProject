#ifndef DBSEVATYPEMODELFIREBASE_H
#define DBSEVATYPEMODELFIREBASE_H

#include <QObject>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonValue>
#include "dbsevatypemodelinterface.h"

class DBSevaTypeModelFirebase:public DBSevaTypeModelInterface
{

    Q_OBJECT
    DBSEVATYPEMODELINTERFACE_H

    public:
        DBSevaTypeModelFirebase();
    ~DBSevaTypeModelFirebase();

    //    QString selectedSevaListData( QString data);
    void processData(QJsonObject data,QJsonObject data2,QJsonObject data3,QJsonObject data4,QJsonObject data5,QJsonObject data6);
    void processSevaList(QString data);
    void processSevaPriceData(QString data);
    void processSevaNameData(QString data);
    void processBankNameData(QString data);
    void processRashiNameData(QString data);
    void processGotraameData(QString data);
    void processNakshatraNameData(QString data);
    void processSevaDateData(QString data);
    void processSevaBillingDateData(QString data);
    void processCountofPeopleData(unsigned data);
    void processSevaTimeData(QTime data);
    void processSevaCostData(unsigned data);
    void processSevaExtraCostData(unsigned data);
    void processSevaReciptNumberData(QString data);
    void processUserNameData(QString data);
    void processUserPhoneNumberData(QString data);
    void processPaymentTypeData(QString data);
    void processNoteData(QString data);

public slots:
    void catchdatafromapi(QString data);
signals:
    void connecttoapi(QJsonObject data,QJsonObject data2,QJsonObject data3,QJsonObject data4,QJsonObject data5,QJsonObject data6);
    void userInformationDate(QDate e_date);
    void userInformationEmail (QString e_email);
    void userInformationGotra (QList<QString> e_gotra);
    void userInformationMobile (QString e_mobile);
    void userInformationNakshatra (QList<QString> e_nakshatra);
    void userInformationPersonName (QString e_PresonName);
    void nakshatraInformatoion(QList<QString> nakshatraList);
    void gotraInformatoion(QList<QString> gotraList);
    void rashiInformatoion(QList<QString> rashiList);
    void bankInformatoion(QList<QString> bankList);
    void sevaListInformation(QList<QString> listdata);
    void sevaNameListInformation(QList<QString> namelistdata);
    void sevaPriceInformation(unsigned priceData);
    //    void connecttoapi2(QJsonObject data);

private:

    QJsonDocument jsonDocument;
    QJsonObject jsonObject;
    QJsonObject Sevadetails;
    QJsonObject PersonDetails;
    QJsonObject BankListObject;
    QJsonObject NakshatraListdetails;
    QJsonObject GotraListDetails;
    QJsonObject RashiListDetails;


    QVariantMap p_userVariantmap;
    QVariantMap p_sevaListVariantmap;
    QVariantMap p_nakshatraListVariantmap;
    QVariantMap p_gotraListVariantmap;
    QVariantMap p_bankListVariantmap;
    QVariantMap p_rashiListVariantmap;


    QString  p_userName;
    QString  p_email;
    QString  p_phoneNumber;
    QString  p_reciptNumber;
    QList <QString> p_nakshatra;
    QList <QString> p_gotra;
    QList <QString> p_rashi;
    QList <QString> p_bankList;
    unsigned p_sevaPrice;
    QDate p_sevaDate;
    QTime p_sevaTime;
    QString p_note;
    QDate p_currentDate;
    QList <QString> p_sevaList;

    QString p_keyvalues;

    QList<QString> sevakeyslist;
    QString p_nakshatravalue;
    QString p_gotravalue;
    QString p_banklistvalue;
    QString p_rashivalue;

    QList<QString> p_nakshatravaluelist;
    QList<QString> p_gotravaluelist;
    QList<QString> p_bankvaluelist;
    QList<QString> p_rashivaluelist;
    QList<QString> p_sevakeylist;
    QList<QString> p_sevavauenamelist;

    QString p_sevaListHit;
    QString  p_sevaCostHit;

    QList<QString> p_sevanameslistdata;

    QString sevasublistkeyvalue;
    QList<QString>  sevasublistvalue;
    QMap<QString,QVariant> subsevavalues;

    unsigned priceInfo;



    QString c_SevaName;
    QString c_BankName;
    QString c_RashiName;
    QString c_UserName;
    QString c_NakshatraName;
    QString c_GotraName;
    QString c_ReciptNumber;
    QString c_UserPhoneNumber;
    QString c_PaymentType;
    QString c_Note;
    QString c_SevaDate;
    QString c_SevaBillingDate;
    QTime c_SevaTime;
    unsigned c_SevaCost;
    unsigned c_CountOfPeople;
    unsigned c_SevaExtraCost;




};

#endif // DBSEVATYPEMODELFIREBASE_H

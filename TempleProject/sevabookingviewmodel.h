#ifndef SEVABOOKINGVIEWMODEL_H
#define SEVABOOKINGVIEWMODEL_H

#include "dbsevatypemodelfirebase.h"
#include "dbsevatypemodelinterface.h"
#include <QObject>
#include <QJsonDocument>
#include <QJsonObject>
#include <QDate>

class SevaBookingViewModel : public QObject
{
    Q_OBJECT

    DBSevaTypeModelInterface *dbsmi = new DBSevaTypeModelFirebase;
//    DBSevaTypeModelFirebase dbstmf;

public:
    explicit SevaBookingViewModel(QObject *parent = nullptr);
    ~SevaBookingViewModel();
    Q_INVOKABLE QString datafromqml( QString data);
    Q_INVOKABLE QString pricedatafromqml( QString data);

    const QString &userName() const;
    const QString &email() const;
    const QString &phoneNumber() const;
    const QList<QString> &nakshatra() const;
    const QList<QString> &gotra() const;
    const QList<QString> &banklist() const;
    const QList<QString> &rashi() const;
    const unsigned &sevaPrice() const;
    const QTime &sevaTime() const;
    const QString &note() const;
    const QList<QString> &sevalist() const;
    const QList<QString> &sevaValueNameList() const;
    const QList<QStringList> &sevaInputList() const;
    const QStringList &sevaInputIndex() const;
    const QStringList &sevaDataFromqml() const;
    const QString &sevaDataTemp() const;


    const unsigned &extraPrice() const;
    void setExtraPrice(const unsigned &newExtraPrice);

public slots:
    void setSevaTime(const QTime &newSevaTime);
    void setNote(const QString &newNote);
    void setSevaInputList(const QList<QStringList> &newSevaInputList);
    void setSevaInputIndex(const QStringList &newSevaInputIndex);
    void setSevaDataFromqml(const QStringList &newSevaDataFromqml);
    void setSevaDataTemp(const QString &newSevaDataTemp);
    void setSevaPrice(const unsigned &newSevaPrice);
    void setEmail(const QString &newEmail);
    void setUserName(const QString &newUserName);
    void setSevalist(const QList<QString> &newSevalist);
    void setPhoneNumber(const QString &newPhoneNumber);
    void setNakshatra(const QList<QString> &newNakshatra);
    void setGotra(const QList<QString> &newGotra);
    void setBanklist(const QList<QString> &newBanklist);
    void setRashi(const QList<QString> &newRashi);
    void setsevaValueNameList(const QList<QString> &newsevaValueNameList);
    //    void catchdatafomdbseva(QJsonObject data,QJsonObject data2,QJsonObject data3,QJsonObject data4,QJsonObject data5,QJsonObject data6);
    //    void userInformationDate(QDate e_date);
    //    void userInformationEmail (QString e_email);
    //    void userInformationGotra (QList<QString> e_gotra);
    //    void userInformationMobile (QString e_mobile);
    //    void userInformationNakshatra (QList<QString> e_nakshatra);
    //    void userInformationPersonName (QString e_PresonName);
    //    void nakshatraInformatoion(QList<QString> nakshatraList);
    //    void gotraInformatoion(QList<QString> gotraList);
    //    void rashiInformatoion(QList<QString> rashiList);
    //    void bankInformatoion(QList<QString> bankList);
signals:

    void userNameChanged();
    void emailChanged();
    void phoneNumberChanged();
    void nakshatraChanged();
    void gotraChanged();
    void banklistChanged();
    void rashiChanged();
    void sevaPriceChanged();
    void sevaTimeChanged();
    void noteChanged();
    void sevalistChanged();
    //    void sendqmldatatodatype(QString);
    void sevaValueNameListChanged();
    void sevaInputListChanged();
    void sevaInputIndexChanged();
    void sevaDataFromqmlChanged();
    void sevaDataTempChanged();

    void extraPriceChanged();

private:
    QString  m_userName;
    QString  m_email;
    QString  m_phoneNumber;
    QString  m_reciptNumber;
    QList <QString>  m_nakshatra;
    QList <QString>   m_gotra;
    QList <QString>  m_banklist;
    QList <QString>  m_rashi;
    unsigned  m_sevaPrice;
    unsigned m_extraPrice;
    QDate  m_sevaDate;
    QTime  m_sevaTime;
    QString  m_note;
    QDate m_datees;
    QList <QString> m_sevalist;
    QList<QString> m_sevaValueNameList;
    QList<QStringList> m_sevaInputList;
    QStringList m_sevaInputIndex;
    QStringList m_sevaDataFromqml;
    QString m_sevaDataTemp;

    Q_PROPERTY(QString userName READ userName WRITE setUserName NOTIFY userNameChanged)
    Q_PROPERTY(QString email READ email WRITE setEmail NOTIFY emailChanged)
    Q_PROPERTY(QString phoneNumber READ phoneNumber WRITE setPhoneNumber NOTIFY phoneNumberChanged)
    Q_PROPERTY(QList<QString> nakshatra READ nakshatra WRITE setNakshatra NOTIFY nakshatraChanged)
    Q_PROPERTY(QList<QString> gotra READ gotra WRITE setGotra NOTIFY gotraChanged)
    Q_PROPERTY(QList<QString> banklist READ banklist WRITE setBanklist NOTIFY banklistChanged)
    Q_PROPERTY(QList<QString> rashi READ rashi WRITE setRashi NOTIFY rashiChanged)
    Q_PROPERTY(unsigned sevaPrice READ sevaPrice WRITE setSevaPrice NOTIFY sevaPriceChanged)
    Q_PROPERTY(QTime sevaTime READ sevaTime WRITE setSevaTime NOTIFY sevaTimeChanged)
    Q_PROPERTY(QString note READ note WRITE setNote NOTIFY noteChanged)
    Q_PROPERTY(QList<QString> sevalist READ sevalist WRITE setSevalist NOTIFY sevalistChanged)
    Q_PROPERTY(QList<QString> sevaValueNameList READ sevaValueNameList WRITE setsevaValueNameList NOTIFY sevaValueNameListChanged)

    Q_PROPERTY(QList<QStringList> sevaInputList READ sevaInputList WRITE setSevaInputList NOTIFY sevaInputListChanged)
    Q_PROPERTY(QStringList sevaInputIndex READ sevaInputIndex WRITE setSevaInputIndex NOTIFY sevaInputIndexChanged)
    Q_PROPERTY(QStringList sevaDataFromqml READ sevaDataFromqml WRITE setSevaDataFromqml NOTIFY sevaDataFromqmlChanged)
    Q_PROPERTY(QString sevaDataTemp READ sevaDataTemp WRITE setSevaDataTemp NOTIFY sevaDataTempChanged)
    Q_PROPERTY(unsigned extraPrice READ extraPrice WRITE setExtraPrice NOTIFY extraPriceChanged)
};

#endif // SEVABOOKINGVIEWMODEL_H

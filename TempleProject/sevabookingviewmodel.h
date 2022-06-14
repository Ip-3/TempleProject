#ifndef SEVABOOKINGVIEWMODEL_H
#define SEVABOOKINGVIEWMODEL_H

#include "dbsevatypemodelfirebase.h"
#include <QObject>
#include <QJsonDocument>
#include <QJsonObject>
#include <QDate>

class SevaBookingViewModel : public QObject
{
    Q_OBJECT
    DBSevaTypeViewModelFirebase *dbsvmf = new DBSevaTypeViewModelFirebase;

public:
    explicit SevaBookingViewModel(QObject *parent = nullptr);
    ~SevaBookingViewModel();
    Q_INVOKABLE QString datafromqml( QString data);
    Q_INVOKABLE QString pricedatafromqml( QString data);

    const QString &userName() const;
    void setUserName(const QString &newUserName);

    const QString &email() const;
    void setEmail(const QString &newEmail);

    const QString &phoneNumber() const;
    void setPhoneNumber(const QString &newPhoneNumber);

    const QList<QString> &nakshatra() const;
    void setNakshatra(const QList<QString> &newNakshatra);

    const QList<QString> &gotra() const;
    void setGotra(const QList<QString> &newGotra);

    const QList<QString> &banklist() const;
    void setBanklist(const QList<QString> &newBanklist);

    const QList<QString> &rashi() const;
    void setRashi(const QList<QString> &newRashi);

    const unsigned &sevaPrice() const;
    void setSevaPrice(const unsigned &newSevaPrice);

    const QTime &sevaTime() const;
    void setSevaTime(const QTime &newSevaTime);

    const QString &note() const;
    void setNote(const QString &newNote);

    const QList<QString> &sevalist() const;
    void setSevalist(const QList<QString> &newSevalist);

    const QList<QString> &sevaValueNameList() const;
     void setsevaValueNameList(const QList<QString> &newsevaValueNameList);

public slots:
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
    QDate  m_sevaDate;
    QTime  m_sevaTime;
    QString  m_note;
    QDate m_datees;
    QList <QString> m_sevalist;
    QList<QString> m_sevaValueNameList;

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
};

#endif // SEVABOOKINGVIEWMODEL_H

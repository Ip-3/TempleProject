#ifndef DBSEVATYPEMODELINTERFACE_H
#define DBSEVATYPEMODELINTERFACE_H
#include <QObject>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonValue>

class DBSevaTypeModelInterface : public QObject
{
    Q_OBJECT
public:
    DBSevaTypeModelInterface();
    ~DBSevaTypeModelInterface();
    virtual void processData(QJsonObject data,QJsonObject data2,QJsonObject data3,QJsonObject data4,QJsonObject data5,QJsonObject data6) = 0;
    virtual void processSevaList(QString data) = 0;
    virtual void catchdatafromapi(QString data) = 0;
    virtual void processSevaPriceData(QString data) = 0;

    virtual void processSevaNameData(QString data) = 0;
    virtual void processBankNameData(QString data) = 0;
    virtual void processRashiNameData(QString data) = 0;
    virtual void processGotraameData(QString data) = 0;
    virtual void processNakshatraNameData(QString data) = 0;
    virtual void processSevaDateData(QString data) = 0;
    virtual void processSevaBillingDateData(QString data) = 0;
    virtual void processCountofPeopleData(unsigned data) = 0;
    virtual void processSevaTimeData(QTime data) = 0;
    virtual void processSevaCostData(unsigned data) = 0;
    virtual void processSevaExtraCostData(unsigned data) = 0;
    virtual void processSevaReciptNumberData(QString data) = 0;
    virtual void processUserNameData(QString data) = 0;
    virtual void processUserPhoneNumberData(QString data) = 0;
    virtual void processPaymentTypeData(QString data) = 0;
    virtual void processNoteData(QString data) = 0;




};

#endif // DBSEVATYPEMODELINTERFACE_H

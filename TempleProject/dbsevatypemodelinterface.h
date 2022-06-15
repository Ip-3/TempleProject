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


};

#endif // DBSEVATYPEMODELINTERFACE_H

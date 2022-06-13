#ifndef DBSEVATYPEMODELFIREBASE_H
#define DBSEVATYPEMODELFIREBASE_H

#include <QObject>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonValue>

class DBSevaTypeViewModelFirebase:public QObject
{

    Q_OBJECT
public:
    DBSevaTypeViewModelFirebase();
    ~DBSevaTypeViewModelFirebase();
public slots:
    void catchdatafromapi(QString data);
signals:
    void connecttoapi(QJsonObject data,QJsonObject data2,QJsonObject data3,QJsonObject data4,QJsonObject data5,QJsonObject data6);
    //    void connecttoapi2(QJsonObject data);


private:
//    QList<QString> l_SNo,l_PersonId,l_SevaType,l_SevaName,l_Quantity,l_SevaDateS,l_SevaMonthS,l_SevaYearS ,l_SevaDate,l_ReciptDateS,l_ReciptMonthS,l_ReciptYearS,l_Reciptdate,l_SevaCost,l_AddCost,l_TotalCost,l_Note;
//    QString PersonName,PersonGotra, PersonNakshtra, PersonMobile,PersonId,PersonSevaname,SevaDate,Note;
//    QString *m_dataget;
    QJsonDocument doc1;
    QJsonObject jsonObject;
    QJsonObject Sevadetails;
    QJsonObject PersonDetails;
    QJsonObject BankListObject;
    QJsonObject NakshatraListdetails;
    QJsonObject GotraListDetails;
    QJsonObject RashiListDetails;
//    QString seva;
//    QJsonValue subobj;
};

#endif // DBSEVATYPEMODELFIREBASE_H

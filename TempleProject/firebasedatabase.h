#ifndef FIREBASEDATABASE_H
#define FIREBASEDATABASE_H

#include <QObject>
#include <QJsonDocument>
#include <QJsonObject>
#include<QNetworkAccessManager>
#include<QNetworkReply>
#include<QNetworkRequest>


class FireBaseDataBase : public QObject
{
    Q_OBJECT
public:
    explicit FireBaseDataBase(QObject *parent = nullptr);
    ~FireBaseDataBase();
public slots:
    void networkReplyReadyRead();
signals:
    void getUserData(QString userInfo);
private:
    QNetworkAccessManager *m_networkManager;
    QNetworkReply *m_networkreply;
    QByteArray m_dataasbyte;
    QString m_dataasastring;
//    QJsonDocument m_datatojson;
};

#endif // FIREBASEDATABASE_H



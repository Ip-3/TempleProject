#ifndef DATABASEAPI_H
#define DATABASEAPI_H
#include <QObject>
#include <QJsonDocument>
#include <QJsonObject>
class DataBaseAPI : public QObject
{
    Q_OBJECT
public:
    explicit DataBaseAPI(QObject *parent = nullptr);
    ~DataBaseAPI();
    void signalemit();


public slots:
    void connectFromFirebaseDatabase(QString data);
signals:
    void catchSignalFromFirebase(QString data);

private:
    QObject *m_getdatabasedata;
     QJsonDocument data;
};
#endif // DATABASEAPI_H

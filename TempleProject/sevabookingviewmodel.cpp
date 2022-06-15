#include "sevabookingviewmodel.h"
#include "dbsevatypemodelinterface.h"
#include <QDebug>


SevaBookingViewModel::SevaBookingViewModel(QObject *parent)
    : QObject{parent}
{
    connect(dbsmi,SIGNAL(userInformationPersonName(QString)),this,SLOT(setUserName(QString)));
    connect(dbsmi,SIGNAL(userInformationEmail(QString)),this,SLOT(setEmail(QString)));
    connect(dbsmi,SIGNAL(userInformationGotra(QList<QString>)),this,SLOT(setGotra(QList<QString>)));
    connect(dbsmi,SIGNAL(userInformationMobile(QString)),this,SLOT(setPhoneNumber(QString)));
    //connect(dbsmi,SIGNAL(userInformationNakshatra()),this,SLOT(setNakshatra);
    connect(dbsmi,SIGNAL(nakshatraInformatoion(QList<QString>)),this,SLOT(setNakshatra(QList<QString>)));
    connect(dbsmi,SIGNAL(gotraInformatoion(QList<QString>)),this,SLOT(setGotra(QList<QString>)));
    connect(dbsmi,SIGNAL(rashiInformatoion(QList<QString>)),this,SLOT(setRashi(QList<QString>)));
    connect(dbsmi,SIGNAL(bankInformatoion(QList<QString>)),this,SLOT(setBanklist(QList<QString>)));
    connect(dbsmi,SIGNAL(sevaListInformation(QList<QString>)),this,SLOT(setSevalist(QList<QString>)));
    connect(dbsmi,SIGNAL(sevaNameListInformation(QList<QString>)),this,SLOT(setsevaValueNameList(QList<QString>)));
    connect(dbsmi,SIGNAL(sevaPriceInformation(unsigned)),this,SLOT(setSevaPrice(unsigned)));
    m_sevaPrice =0;
    m_extraPrice = 0;
    m_countOfPeople = 0;

    qDebug()<<Q_FUNC_INFO<<Qt::endl;


}
SevaBookingViewModel::~SevaBookingViewModel()
{
    qDebug()<<Q_FUNC_INFO<<Qt::endl;
}


QString SevaBookingViewModel::datafromqml( QString data)
{
    qDebug()<<Q_FUNC_INFO<<Qt::endl;
    qDebug()<<"Data from QML" <<data;
    dbsmi->processSevaList(data);
    return "";
}

QString SevaBookingViewModel::pricedatafromqml(QString data)
{
    qDebug()<<"Data from QML" <<data;
    dbsmi->processSevaPriceData(data);
    return "";

}

const QString &SevaBookingViewModel::userName() const
{
    qDebug()<<Q_FUNC_INFO<<m_userName<<Qt::endl;
    return m_userName;
}

void SevaBookingViewModel::setUserName(const QString &newUserName)
{

    if (m_userName == newUserName)
        return;
    qDebug()<<Q_FUNC_INFO<<m_userName<<Qt::endl;
    m_userName = newUserName;
    emit userNameChanged();
}

const QString &SevaBookingViewModel::email() const
{
    qDebug()<<Q_FUNC_INFO<<m_email<<Qt::endl;

    return m_email;
}

void SevaBookingViewModel::setEmail(const QString &newEmail)
{

    if (m_email == newEmail)
        return;
    qDebug()<<Q_FUNC_INFO<<m_email<<Qt::endl;
    m_email = newEmail;
    emit emailChanged();
}

const QString &SevaBookingViewModel::phoneNumber() const
{
    qDebug()<<Q_FUNC_INFO<<m_phoneNumber<<Qt::endl;

    return m_phoneNumber;
}

void SevaBookingViewModel::setPhoneNumber(const QString &newPhoneNumber)
{

    if (m_phoneNumber == newPhoneNumber)
        return;
    m_phoneNumber = newPhoneNumber;
    qDebug()<<Q_FUNC_INFO<<m_phoneNumber<<Qt::endl;
    emit phoneNumberChanged();
}

const QList<QString> &SevaBookingViewModel::nakshatra() const
{
    qDebug()<<Q_FUNC_INFO<<m_nakshatra<<Qt::endl;

    return m_nakshatra;
}

void SevaBookingViewModel::setNakshatra(const QList<QString> &newNakshatra)
{

    if (m_nakshatra == newNakshatra)
        return;
    qDebug()<<Q_FUNC_INFO<<m_nakshatra<<Qt::endl;
    m_nakshatra = newNakshatra;
    emit nakshatraChanged();
}

const QList<QString> &SevaBookingViewModel::gotra() const
{
    qDebug()<<Q_FUNC_INFO<<m_gotra<<Qt::endl;

    return m_gotra;
}

void SevaBookingViewModel::setGotra(const QList<QString> &newGotra)
{

    if (m_gotra == newGotra)
        return;
    m_gotra = newGotra;
    qDebug()<<Q_FUNC_INFO<<m_gotra<<Qt::endl;
    emit gotraChanged();
}

const QList<QString> &SevaBookingViewModel::banklist() const
{
    qDebug()<<Q_FUNC_INFO<<m_banklist<<Qt::endl;

    return m_banklist;
}

void SevaBookingViewModel::setBanklist(const QList<QString> &newBanklist)
{

    if (m_banklist == newBanklist)
        return;
    m_banklist = newBanklist;
    qDebug()<<Q_FUNC_INFO<<m_banklist<<Qt::endl;
    emit banklistChanged();
}

const QList<QString> &SevaBookingViewModel::rashi() const
{
    qDebug()<<Q_FUNC_INFO<<m_rashi<<Qt::endl;

    return m_rashi;
}

void SevaBookingViewModel::setRashi(const QList<QString> &newRashi)
{

    if (m_rashi == newRashi)
        return;
    m_rashi = newRashi;
    qDebug()<<Q_FUNC_INFO<<m_rashi<<Qt::endl;
    emit rashiChanged();
}

const unsigned &SevaBookingViewModel::sevaPrice() const
{
    qDebug()<<Q_FUNC_INFO<<m_sevaPrice<<Qt::endl;

    return m_sevaPrice;
}

void SevaBookingViewModel::setSevaPrice(const unsigned &newSevaPrice)
{

    if (m_sevaPrice == newSevaPrice)
        return;
    m_sevaPrice = newSevaPrice;
    qDebug()<<Q_FUNC_INFO<<m_sevaPrice<<Qt::endl;
    emit sevaPriceChanged();
}

const QTime &SevaBookingViewModel::sevaTime() const
{
    qDebug()<<Q_FUNC_INFO<<m_sevaTime<<Qt::endl;

    return m_sevaTime;
}

void SevaBookingViewModel::setSevaTime(const QTime &newSevaTime)
{

    if (m_sevaTime == newSevaTime)
        return;
    m_sevaTime = newSevaTime;
    qDebug()<<Q_FUNC_INFO<<m_sevaTime<<Qt::endl;
    emit sevaTimeChanged();
}

const QString &SevaBookingViewModel::note() const
{
    qDebug()<<Q_FUNC_INFO<<m_note<<Qt::endl;

    return m_note;
}

void SevaBookingViewModel::setNote(const QString &newNote)
{

    if (m_note == newNote)
        return;
    m_note = newNote;
    qDebug()<<Q_FUNC_INFO<<m_note<<Qt::endl;
    emit noteChanged();
}

const QList<QString> &SevaBookingViewModel::sevalist() const
{
    qDebug()<<Q_FUNC_INFO<<m_sevalist<<Qt::endl;
    return m_sevalist;
}

void SevaBookingViewModel::setSevalist(const QList<QString> &newSevalist)
{

    if (m_sevalist == newSevalist)
        return;
    m_sevalist = newSevalist;
    qDebug()<<Q_FUNC_INFO<<m_sevalist<<Qt::endl;
    emit sevalistChanged();
}

const QList<QString> &SevaBookingViewModel::sevaValueNameList() const
{
    qDebug()<<Q_FUNC_INFO<<m_sevaValueNameList<<Qt::endl;
    return m_sevaValueNameList;
}

void SevaBookingViewModel::setsevaValueNameList(const QList<QString> &newsevaValueNameList)
{
    if (m_sevaValueNameList == newsevaValueNameList)
        return;
    m_sevaValueNameList = newsevaValueNameList;
    qDebug()<<Q_FUNC_INFO<<m_sevaValueNameList<<Qt::endl;
    emit sevaValueNameListChanged();
}

const QString &SevaBookingViewModel::reciptNumber() const
{
    return m_reciptNumber;
}

void SevaBookingViewModel::setReciptNumber(const QString &newReciptNumber)
{
//    if (m_reciptNumber == newReciptNumber)
//        return;
    m_reciptNumber = m_datees ;
    qDebug()<<Q_FUNC_INFO<<m_reciptNumber<<Qt::endl;
    emit reciptNumberChanged();
}

const QString &SevaBookingViewModel::datees() const
{
    qDebug()<<Q_FUNC_INFO<<m_datees<<Qt::endl;
    return m_datees;
}

void SevaBookingViewModel::setDatees(const QString &newDatees)
{
    if (m_datees == newDatees)
        return;
    m_datees = newDatees;
    qDebug()<<Q_FUNC_INFO<<m_datees<<Qt::endl;
    emit dateesChanged();
}



const QString &SevaBookingViewModel::sevaDate() const
{
    return m_sevaDate;
}

void SevaBookingViewModel::setSevaDate(const QString &newSevaDate)
{
    if (m_sevaDate == newSevaDate)
        return;
    m_sevaDate = newSevaDate;
    qDebug()<<Q_FUNC_INFO<<m_sevaDate<<Qt::endl;
    emit sevaDateChanged();
}

const unsigned &SevaBookingViewModel::countOfPeople() const
{
    return m_countOfPeople;
}

void SevaBookingViewModel::setCountOfPeople(const unsigned &newCountOfPeople)
{
    if (m_countOfPeople == newCountOfPeople)
        return;
    m_countOfPeople = newCountOfPeople;
    emit countOfPeopleChanged();
}

const unsigned &SevaBookingViewModel::extraPrice() const
{
    return m_extraPrice;
}

void SevaBookingViewModel::setExtraPrice(const unsigned &newExtraPrice)
{
    if (m_extraPrice == newExtraPrice)
        return;
    m_extraPrice = newExtraPrice;
    emit extraPriceChanged();
}


const QList<QStringList> &SevaBookingViewModel::sevaInputList() const
{
    return m_sevaInputList;
}

void SevaBookingViewModel::setSevaInputList(const QList<QStringList> &newSevaInputList)
{
    if (m_sevaInputList == newSevaInputList)
        return;
    m_sevaInputList = newSevaInputList;
    emit sevaInputListChanged();
}

const QStringList &SevaBookingViewModel::sevaInputIndex() const
{
    return m_sevaInputIndex;
}

void SevaBookingViewModel::setSevaInputIndex(const QStringList &newSevaInputIndex)
{
    if (m_sevaInputIndex == newSevaInputIndex)
        return;
    m_sevaInputIndex = newSevaInputIndex;
    emit sevaInputIndexChanged();
}

const QStringList &SevaBookingViewModel::sevaDataFromqml() const
{
    return m_sevaDataFromqml;
}

void SevaBookingViewModel::setSevaDataFromqml(const QStringList &newSevaDataFromqml)
{
    if (m_sevaDataFromqml == newSevaDataFromqml)
        return;
    m_sevaDataFromqml = newSevaDataFromqml;
    m_sevaInputList.push_back(m_sevaInputIndex);
    m_sevaInputIndex.clear();
    emit sevaDataFromqmlChanged();
}

const QString &SevaBookingViewModel::sevaDataTemp() const
{
    return m_sevaDataTemp;
}

void SevaBookingViewModel::setSevaDataTemp(const QString &newSevaDataTemp)
{
    if (m_sevaDataTemp == newSevaDataTemp)
        return;
    m_sevaDataTemp = newSevaDataTemp;
    m_sevaInputIndex.append(m_sevaDataTemp);
    emit sevaDataTempChanged();
}

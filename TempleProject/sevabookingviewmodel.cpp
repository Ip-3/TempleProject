#include "sevabookingviewmodel.h"
#include "dbsevatypemodelfirebase.h"

SevaBookingViewModel::SevaBookingViewModel(QObject *parent)
    : QObject{parent}
{
    DBSevaTypeViewModelFirebase *dbsvmf = new DBSevaTypeViewModelFirebase;
    connect(dbsvmf,&DBSevaTypeViewModelFirebase::userInformationPersonName,this,&SevaBookingViewModel::setUserName);
    connect(dbsvmf,&DBSevaTypeViewModelFirebase::userInformationEmail,this,&SevaBookingViewModel::setEmail);
    connect(dbsvmf,&DBSevaTypeViewModelFirebase::userInformationGotra,this,&SevaBookingViewModel::setGotra);
    connect(dbsvmf,&DBSevaTypeViewModelFirebase::userInformationMobile,this,&SevaBookingViewModel::setPhoneNumber);
//    connect(dbsvmf,&DBSevaTypeViewModelFirebase::userInformationNakshatra,this,&SevaBookingViewModel::setNakshatra);
    connect(dbsvmf,&DBSevaTypeViewModelFirebase::nakshatraInformatoion,this,&SevaBookingViewModel::setNakshatra);
    connect(dbsvmf,&DBSevaTypeViewModelFirebase::gotraInformatoion,this,&SevaBookingViewModel::setGotra);
    connect(dbsvmf,&DBSevaTypeViewModelFirebase::rashiInformatoion,this,&SevaBookingViewModel::setRashi);
    connect(dbsvmf,&DBSevaTypeViewModelFirebase::bankInformatoion,this,&SevaBookingViewModel::setBanklist);
    connect(dbsvmf,&DBSevaTypeViewModelFirebase::sevaListInformation,this,&SevaBookingViewModel::setSevalist);

    qDebug()<<Q_FUNC_INFO<<Qt::endl;



}
SevaBookingViewModel::~SevaBookingViewModel()
{
    qDebug()<<Q_FUNC_INFO<<Qt::endl;
}


//QString SevaBookingViewModel::datafromqml( QString data)
//{
//    qDebug()<<Q_FUNC_INFO<<Qt::endl;
//    qDebug()<<"Data from QML" <<data;
//    emit sendqmldatatodatype(data);

//}

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

/****************************************************************************
** Meta object code from reading C++ file 'sevabookingviewmodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../TempleProject/sevabookingviewmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sevabookingviewmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SevaBookingViewModel_t {
    const uint offsetsAndSize[48];
    char stringdata0[281];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_SevaBookingViewModel_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_SevaBookingViewModel_t qt_meta_stringdata_SevaBookingViewModel = {
    {
QT_MOC_LITERAL(0, 20), // "SevaBookingViewModel"
QT_MOC_LITERAL(21, 15), // "userNameChanged"
QT_MOC_LITERAL(37, 0), // ""
QT_MOC_LITERAL(38, 12), // "emailChanged"
QT_MOC_LITERAL(51, 18), // "phoneNumberChanged"
QT_MOC_LITERAL(70, 16), // "nakshatraChanged"
QT_MOC_LITERAL(87, 12), // "gotraChanged"
QT_MOC_LITERAL(100, 15), // "banklistChanged"
QT_MOC_LITERAL(116, 12), // "rashiChanged"
QT_MOC_LITERAL(129, 16), // "sevaPriceChanged"
QT_MOC_LITERAL(146, 15), // "sevaTimeChanged"
QT_MOC_LITERAL(162, 11), // "noteChanged"
QT_MOC_LITERAL(174, 15), // "sevalistChanged"
QT_MOC_LITERAL(190, 8), // "userName"
QT_MOC_LITERAL(199, 5), // "email"
QT_MOC_LITERAL(205, 11), // "phoneNumber"
QT_MOC_LITERAL(217, 9), // "nakshatra"
QT_MOC_LITERAL(227, 5), // "gotra"
QT_MOC_LITERAL(233, 8), // "banklist"
QT_MOC_LITERAL(242, 5), // "rashi"
QT_MOC_LITERAL(248, 9), // "sevaPrice"
QT_MOC_LITERAL(258, 8), // "sevaTime"
QT_MOC_LITERAL(267, 4), // "note"
QT_MOC_LITERAL(272, 8) // "sevalist"

    },
    "SevaBookingViewModel\0userNameChanged\0"
    "\0emailChanged\0phoneNumberChanged\0"
    "nakshatraChanged\0gotraChanged\0"
    "banklistChanged\0rashiChanged\0"
    "sevaPriceChanged\0sevaTimeChanged\0"
    "noteChanged\0sevalistChanged\0userName\0"
    "email\0phoneNumber\0nakshatra\0gotra\0"
    "banklist\0rashi\0sevaPrice\0sevaTime\0"
    "note\0sevalist"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SevaBookingViewModel[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
      11,   91, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x06,   12 /* Public */,
       3,    0,   81,    2, 0x06,   13 /* Public */,
       4,    0,   82,    2, 0x06,   14 /* Public */,
       5,    0,   83,    2, 0x06,   15 /* Public */,
       6,    0,   84,    2, 0x06,   16 /* Public */,
       7,    0,   85,    2, 0x06,   17 /* Public */,
       8,    0,   86,    2, 0x06,   18 /* Public */,
       9,    0,   87,    2, 0x06,   19 /* Public */,
      10,    0,   88,    2, 0x06,   20 /* Public */,
      11,    0,   89,    2, 0x06,   21 /* Public */,
      12,    0,   90,    2, 0x06,   22 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      13, QMetaType::QString, 0x00015103, uint(0), 0,
      14, QMetaType::QString, 0x00015103, uint(1), 0,
      15, QMetaType::QString, 0x00015103, uint(2), 0,
      16, QMetaType::QStringList, 0x00015103, uint(3), 0,
      17, QMetaType::QStringList, 0x00015103, uint(4), 0,
      18, QMetaType::QStringList, 0x00015103, uint(5), 0,
      19, QMetaType::QStringList, 0x00015103, uint(6), 0,
      20, QMetaType::UInt, 0x00015103, uint(7), 0,
      21, QMetaType::QTime, 0x00015103, uint(8), 0,
      22, QMetaType::QString, 0x00015103, uint(9), 0,
      23, QMetaType::QStringList, 0x00015103, uint(10), 0,

       0        // eod
};

void SevaBookingViewModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SevaBookingViewModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->userNameChanged(); break;
        case 1: _t->emailChanged(); break;
        case 2: _t->phoneNumberChanged(); break;
        case 3: _t->nakshatraChanged(); break;
        case 4: _t->gotraChanged(); break;
        case 5: _t->banklistChanged(); break;
        case 6: _t->rashiChanged(); break;
        case 7: _t->sevaPriceChanged(); break;
        case 8: _t->sevaTimeChanged(); break;
        case 9: _t->noteChanged(); break;
        case 10: _t->sevalistChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SevaBookingViewModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SevaBookingViewModel::userNameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SevaBookingViewModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SevaBookingViewModel::emailChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SevaBookingViewModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SevaBookingViewModel::phoneNumberChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SevaBookingViewModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SevaBookingViewModel::nakshatraChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SevaBookingViewModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SevaBookingViewModel::gotraChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SevaBookingViewModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SevaBookingViewModel::banklistChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (SevaBookingViewModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SevaBookingViewModel::rashiChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (SevaBookingViewModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SevaBookingViewModel::sevaPriceChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (SevaBookingViewModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SevaBookingViewModel::sevaTimeChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (SevaBookingViewModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SevaBookingViewModel::noteChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (SevaBookingViewModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SevaBookingViewModel::sevalistChanged)) {
                *result = 10;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SevaBookingViewModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->userName(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->email(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->phoneNumber(); break;
        case 3: *reinterpret_cast< QList<QString>*>(_v) = _t->nakshatra(); break;
        case 4: *reinterpret_cast< QList<QString>*>(_v) = _t->gotra(); break;
        case 5: *reinterpret_cast< QList<QString>*>(_v) = _t->banklist(); break;
        case 6: *reinterpret_cast< QList<QString>*>(_v) = _t->rashi(); break;
        case 7: *reinterpret_cast< uint*>(_v) = _t->sevaPrice(); break;
        case 8: *reinterpret_cast< QTime*>(_v) = _t->sevaTime(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->note(); break;
        case 10: *reinterpret_cast< QList<QString>*>(_v) = _t->sevalist(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<SevaBookingViewModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setUserName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setEmail(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setPhoneNumber(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setNakshatra(*reinterpret_cast< QList<QString>*>(_v)); break;
        case 4: _t->setGotra(*reinterpret_cast< QList<QString>*>(_v)); break;
        case 5: _t->setBanklist(*reinterpret_cast< QList<QString>*>(_v)); break;
        case 6: _t->setRashi(*reinterpret_cast< QList<QString>*>(_v)); break;
        case 7: _t->setSevaPrice(*reinterpret_cast< uint*>(_v)); break;
        case 8: _t->setSevaTime(*reinterpret_cast< QTime*>(_v)); break;
        case 9: _t->setNote(*reinterpret_cast< QString*>(_v)); break;
        case 10: _t->setSevalist(*reinterpret_cast< QList<QString>*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_a;
}

const QMetaObject SevaBookingViewModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SevaBookingViewModel.offsetsAndSize,
    qt_meta_data_SevaBookingViewModel,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_SevaBookingViewModel_t
, QtPrivate::TypeAndForceComplete<QString, std::true_type>, QtPrivate::TypeAndForceComplete<QString, std::true_type>, QtPrivate::TypeAndForceComplete<QString, std::true_type>, QtPrivate::TypeAndForceComplete<QList<QString>, std::true_type>, QtPrivate::TypeAndForceComplete<QList<QString>, std::true_type>, QtPrivate::TypeAndForceComplete<QList<QString>, std::true_type>, QtPrivate::TypeAndForceComplete<QList<QString>, std::true_type>, QtPrivate::TypeAndForceComplete<uint, std::true_type>, QtPrivate::TypeAndForceComplete<QTime, std::true_type>, QtPrivate::TypeAndForceComplete<QString, std::true_type>, QtPrivate::TypeAndForceComplete<QList<QString>, std::true_type>, QtPrivate::TypeAndForceComplete<SevaBookingViewModel, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>



>,
    nullptr
} };


const QMetaObject *SevaBookingViewModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SevaBookingViewModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SevaBookingViewModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SevaBookingViewModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void SevaBookingViewModel::userNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SevaBookingViewModel::emailChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SevaBookingViewModel::phoneNumberChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SevaBookingViewModel::nakshatraChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void SevaBookingViewModel::gotraChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void SevaBookingViewModel::banklistChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void SevaBookingViewModel::rashiChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void SevaBookingViewModel::sevaPriceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void SevaBookingViewModel::sevaTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void SevaBookingViewModel::noteChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void SevaBookingViewModel::sevalistChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

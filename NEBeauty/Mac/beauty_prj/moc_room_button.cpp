/****************************************************************************
** Meta object code from reading C++ file 'room_button.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "source/include/room_button.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'room_button.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RoomButton_t {
    const uint offsetsAndSize[14];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_RoomButton_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_RoomButton_t qt_meta_stringdata_RoomButton = {
    {
QT_MOC_LITERAL(0, 10), // "RoomButton"
QT_MOC_LITERAL(11, 14), // "sigStartBeauty"
QT_MOC_LITERAL(26, 0), // ""
QT_MOC_LITERAL(27, 13), // "start_enabled"
QT_MOC_LITERAL(41, 21), // "sigNertcBeautySetting"
QT_MOC_LITERAL(63, 20), // "onNertcBeautyClicked"
QT_MOC_LITERAL(84, 27) // "onNertcBeautySettingClicked"

    },
    "RoomButton\0sigStartBeauty\0\0start_enabled\0"
    "sigNertcBeautySetting\0onNertcBeautyClicked\0"
    "onNertcBeautySettingClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RoomButton[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x06,    1 /* Public */,
       4,    0,   41,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   42,    2, 0x08,    4 /* Private */,
       6,    0,   43,    2, 0x08,    5 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void RoomButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RoomButton *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sigStartBeauty((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 1: _t->sigNertcBeautySetting(); break;
        case 2: _t->onNertcBeautyClicked(); break;
        case 3: _t->onNertcBeautySettingClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RoomButton::*)(const bool & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoomButton::sigStartBeauty)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RoomButton::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoomButton::sigNertcBeautySetting)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject RoomButton::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_RoomButton.offsetsAndSize,
    qt_meta_data_RoomButton,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_RoomButton_t
, QtPrivate::TypeAndForceComplete<RoomButton, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const bool &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *RoomButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RoomButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RoomButton.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int RoomButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void RoomButton::sigStartBeauty(const bool & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RoomButton::sigNertcBeautySetting()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

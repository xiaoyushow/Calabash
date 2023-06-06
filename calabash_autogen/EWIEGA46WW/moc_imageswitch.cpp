/****************************************************************************
** Meta object code from reading C++ file 'imageswitch.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../imageswitch.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'imageswitch.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ImageSwitch_t {
    const uint offsetsAndSize[28];
    char stringdata0[177];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ImageSwitch_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ImageSwitch_t qt_meta_stringdata_ImageSwitch = {
    {
QT_MOC_LITERAL(0, 11), // "ImageSwitch"
QT_MOC_LITERAL(12, 14), // "checkedChanged"
QT_MOC_LITERAL(27, 0), // ""
QT_MOC_LITERAL(28, 7), // "checked"
QT_MOC_LITERAL(36, 10), // "setChecked"
QT_MOC_LITERAL(47, 9), // "isChecked"
QT_MOC_LITERAL(57, 14), // "setButtonStyle"
QT_MOC_LITERAL(72, 24), // "ImageSwitch::ButtonStyle"
QT_MOC_LITERAL(97, 11), // "buttonStyle"
QT_MOC_LITERAL(109, 11), // "ButtonStyle"
QT_MOC_LITERAL(121, 13), // "ButtonStyle_1"
QT_MOC_LITERAL(135, 13), // "ButtonStyle_2"
QT_MOC_LITERAL(149, 13), // "ButtonStyle_3"
QT_MOC_LITERAL(163, 13) // "ButtonStyle_4"

    },
    "ImageSwitch\0checkedChanged\0\0checked\0"
    "setChecked\0isChecked\0setButtonStyle\0"
    "ImageSwitch::ButtonStyle\0buttonStyle\0"
    "ButtonStyle\0ButtonStyle_1\0ButtonStyle_2\0"
    "ButtonStyle_3\0ButtonStyle_4"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ImageSwitch[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   41, // properties
       1,   51, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   35,    2, 0x0a,    5 /* Public */,
       6,    1,   38,    2, 0x0a,    7 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, 0x80000000 | 7,    8,

 // properties: name, type, flags
       5, QMetaType::Bool, 0x00015003, uint(-1), 0,
       8, 0x80000000 | 9, 0x0001510b, uint(-1), 0,

 // enums: name, alias, flags, count, data
       9,    9, 0x0,    4,   56,

 // enum data: key, value
      10, uint(ImageSwitch::ButtonStyle_1),
      11, uint(ImageSwitch::ButtonStyle_2),
      12, uint(ImageSwitch::ButtonStyle_3),
      13, uint(ImageSwitch::ButtonStyle_4),

       0        // eod
};

void ImageSwitch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ImageSwitch *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->checkedChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->setChecked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->setButtonStyle((*reinterpret_cast< std::add_pointer_t<ImageSwitch::ButtonStyle>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ImageSwitch::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ImageSwitch::checkedChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ImageSwitch *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->getChecked(); break;
        case 1: *reinterpret_cast< ButtonStyle*>(_v) = _t->getButtonStyle(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ImageSwitch *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setChecked(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setButtonStyle(*reinterpret_cast< ButtonStyle*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject ImageSwitch::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ImageSwitch.offsetsAndSize,
    qt_meta_data_ImageSwitch,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ImageSwitch_t
, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<ButtonStyle, std::true_type>, QtPrivate::TypeAndForceComplete<ImageSwitch, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const ImageSwitch::ButtonStyle &, std::false_type>


>,
    nullptr
} };


const QMetaObject *ImageSwitch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImageSwitch::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ImageSwitch.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ImageSwitch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ImageSwitch::checkedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'student.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../student.h"
#include <QtNetwork/QSslError>
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'student.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Student_t {
    const uint offsetsAndSize[48];
    char stringdata0[340];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Student_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Student_t qt_meta_stringdata_Student = {
    {
QT_MOC_LITERAL(0, 7), // "Student"
QT_MOC_LITERAL(8, 8), // "initForm"
QT_MOC_LITERAL(17, 0), // ""
QT_MOC_LITERAL(18, 14), // "checkedChanged"
QT_MOC_LITERAL(33, 7), // "checked"
QT_MOC_LITERAL(41, 13), // "showTimeBegin"
QT_MOC_LITERAL(55, 12), // "setDateBegin"
QT_MOC_LITERAL(68, 11), // "showTimeEnd"
QT_MOC_LITERAL(80, 10), // "setDateEnd"
QT_MOC_LITERAL(91, 19), // "leaveSubmit_clicked"
QT_MOC_LITERAL(111, 11), // "eventFilter"
QT_MOC_LITERAL(123, 7), // "watched"
QT_MOC_LITERAL(131, 7), // "QEvent*"
QT_MOC_LITERAL(139, 5), // "event"
QT_MOC_LITERAL(145, 10), // "updateInfo"
QT_MOC_LITERAL(156, 14), // "judgmentStatus"
QT_MOC_LITERAL(171, 6), // "status"
QT_MOC_LITERAL(178, 24), // "on_ptn_writeOff_released"
QT_MOC_LITERAL(203, 20), // "on_ptn_home_released"
QT_MOC_LITERAL(224, 20), // "on_ptn_last_released"
QT_MOC_LITERAL(245, 20), // "on_ptn_next_released"
QT_MOC_LITERAL(266, 19), // "on_ptn_end_released"
QT_MOC_LITERAL(286, 28), // "on_ptn_NotCorrected_released"
QT_MOC_LITERAL(315, 24) // "on_ptn_released_released"

    },
    "Student\0initForm\0\0checkedChanged\0"
    "checked\0showTimeBegin\0setDateBegin\0"
    "showTimeEnd\0setDateEnd\0leaveSubmit_clicked\0"
    "eventFilter\0watched\0QEvent*\0event\0"
    "updateInfo\0judgmentStatus\0status\0"
    "on_ptn_writeOff_released\0on_ptn_home_released\0"
    "on_ptn_last_released\0on_ptn_next_released\0"
    "on_ptn_end_released\0on_ptn_NotCorrected_released\0"
    "on_ptn_released_released"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Student[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  116,    2, 0x08,    1 /* Private */,
       3,    1,  117,    2, 0x08,    2 /* Private */,
       5,    0,  120,    2, 0x08,    4 /* Private */,
       6,    0,  121,    2, 0x08,    5 /* Private */,
       7,    0,  122,    2, 0x08,    6 /* Private */,
       8,    0,  123,    2, 0x08,    7 /* Private */,
       9,    0,  124,    2, 0x08,    8 /* Private */,
      10,    2,  125,    2, 0x08,    9 /* Private */,
      14,    0,  130,    2, 0x08,   12 /* Private */,
      15,    1,  131,    2, 0x08,   13 /* Private */,
      17,    0,  134,    2, 0x08,   15 /* Private */,
      18,    0,  135,    2, 0x08,   16 /* Private */,
      19,    0,  136,    2, 0x08,   17 /* Private */,
      20,    0,  137,    2, 0x08,   18 /* Private */,
      21,    0,  138,    2, 0x08,   19 /* Private */,
      22,    0,  139,    2, 0x08,   20 /* Private */,
      23,    0,  140,    2, 0x08,   21 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QObjectStar, 0x80000000 | 12,   11,   13,
    QMetaType::Void,
    QMetaType::QString, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Student::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Student *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->initForm(); break;
        case 1: _t->checkedChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->showTimeBegin(); break;
        case 3: _t->setDateBegin(); break;
        case 4: _t->showTimeEnd(); break;
        case 5: _t->setDateEnd(); break;
        case 6: _t->leaveSubmit_clicked(); break;
        case 7: { bool _r = _t->eventFilter((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QEvent*>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->updateInfo(); break;
        case 9: { QString _r = _t->judgmentStatus((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->on_ptn_writeOff_released(); break;
        case 11: _t->on_ptn_home_released(); break;
        case 12: _t->on_ptn_last_released(); break;
        case 13: _t->on_ptn_next_released(); break;
        case 14: _t->on_ptn_end_released(); break;
        case 15: _t->on_ptn_NotCorrected_released(); break;
        case 16: _t->on_ptn_released_released(); break;
        default: ;
        }
    }
}

const QMetaObject Student::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Student.offsetsAndSize,
    qt_meta_data_Student,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Student_t
, QtPrivate::TypeAndForceComplete<Student, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<QObject *, std::false_type>, QtPrivate::TypeAndForceComplete<QEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Student::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Student::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Student.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Student::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

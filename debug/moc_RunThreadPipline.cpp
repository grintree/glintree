/****************************************************************************
** Meta object code from reading C++ file 'RunThreadPipline.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Run/RunThreadPipline.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RunThreadPipline.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSRunThreadPiplineENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSRunThreadPiplineENDCLASS = QtMocHelpers::stringData(
    "RunThreadPipline",
    "notifyUpdateData",
    "",
    "num",
    "names",
    "values",
    "notifyAlert",
    "type",
    "info",
    "notifyJobFinished",
    "onPushData",
    "stepID",
    "res"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSRunThreadPiplineENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[17];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[4];
    char stringdata4[6];
    char stringdata5[7];
    char stringdata6[12];
    char stringdata7[5];
    char stringdata8[5];
    char stringdata9[18];
    char stringdata10[11];
    char stringdata11[7];
    char stringdata12[4];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSRunThreadPiplineENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSRunThreadPiplineENDCLASS_t qt_meta_stringdata_CLASSRunThreadPiplineENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "RunThreadPipline"
        QT_MOC_LITERAL(17, 16),  // "notifyUpdateData"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 3),  // "num"
        QT_MOC_LITERAL(39, 5),  // "names"
        QT_MOC_LITERAL(45, 6),  // "values"
        QT_MOC_LITERAL(52, 11),  // "notifyAlert"
        QT_MOC_LITERAL(64, 4),  // "type"
        QT_MOC_LITERAL(69, 4),  // "info"
        QT_MOC_LITERAL(74, 17),  // "notifyJobFinished"
        QT_MOC_LITERAL(92, 10),  // "onPushData"
        QT_MOC_LITERAL(103, 6),  // "stepID"
        QT_MOC_LITERAL(110, 3)   // "res"
    },
    "RunThreadPipline",
    "notifyUpdateData",
    "",
    "num",
    "names",
    "values",
    "notifyAlert",
    "type",
    "info",
    "notifyJobFinished",
    "onPushData",
    "stepID",
    "res"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSRunThreadPiplineENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   38,    2, 0x06,    1 /* Public */,
       6,    2,   45,    2, 0x06,    5 /* Public */,
       9,    0,   50,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    2,   51,    2, 0x0a,    9 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QStringList, QMetaType::QStringList,    3,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    7,    8,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   11,   12,

       0        // eod
};

Q_CONSTINIT const QMetaObject RunThreadPipline::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_CLASSRunThreadPiplineENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSRunThreadPiplineENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSRunThreadPiplineENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<RunThreadPipline, std::true_type>,
        // method 'notifyUpdateData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QStringList, std::false_type>,
        QtPrivate::TypeAndForceComplete<QStringList, std::false_type>,
        // method 'notifyAlert'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'notifyJobFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onPushData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void RunThreadPipline::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RunThreadPipline *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->notifyUpdateData((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[3]))); break;
        case 1: _t->notifyAlert((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 2: _t->notifyJobFinished(); break;
        case 3: _t->onPushData((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RunThreadPipline::*)(int , QStringList , QStringList );
            if (_t _q_method = &RunThreadPipline::notifyUpdateData; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RunThreadPipline::*)(int , QString );
            if (_t _q_method = &RunThreadPipline::notifyAlert; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (RunThreadPipline::*)();
            if (_t _q_method = &RunThreadPipline::notifyJobFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *RunThreadPipline::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RunThreadPipline::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSRunThreadPiplineENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int RunThreadPipline::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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
void RunThreadPipline::notifyUpdateData(int _t1, QStringList _t2, QStringList _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RunThreadPipline::notifyAlert(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RunThreadPipline::notifyJobFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP

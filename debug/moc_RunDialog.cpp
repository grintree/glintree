/****************************************************************************
** Meta object code from reading C++ file 'RunDialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Run/RunDialog.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RunDialog.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSRunDialogENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSRunDialogENDCLASS = QtMocHelpers::stringData(
    "RunDialog",
    "notifyPiplinePushData",
    "",
    "stepID",
    "res",
    "onThreadPiplineJobFinished",
    "onThreadPiplineUpdateData",
    "num",
    "names",
    "values",
    "onThreadPiplineAlert",
    "type",
    "info",
    "onWebViewUrlChanged",
    "url",
    "onCleanWebViews",
    "RunWebEngineView*",
    "webView"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSRunDialogENDCLASS_t {
    uint offsetsAndSizes[36];
    char stringdata0[10];
    char stringdata1[22];
    char stringdata2[1];
    char stringdata3[7];
    char stringdata4[4];
    char stringdata5[27];
    char stringdata6[26];
    char stringdata7[4];
    char stringdata8[6];
    char stringdata9[7];
    char stringdata10[21];
    char stringdata11[5];
    char stringdata12[5];
    char stringdata13[20];
    char stringdata14[4];
    char stringdata15[16];
    char stringdata16[18];
    char stringdata17[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSRunDialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSRunDialogENDCLASS_t qt_meta_stringdata_CLASSRunDialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 9),  // "RunDialog"
        QT_MOC_LITERAL(10, 21),  // "notifyPiplinePushData"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 6),  // "stepID"
        QT_MOC_LITERAL(40, 3),  // "res"
        QT_MOC_LITERAL(44, 26),  // "onThreadPiplineJobFinished"
        QT_MOC_LITERAL(71, 25),  // "onThreadPiplineUpdateData"
        QT_MOC_LITERAL(97, 3),  // "num"
        QT_MOC_LITERAL(101, 5),  // "names"
        QT_MOC_LITERAL(107, 6),  // "values"
        QT_MOC_LITERAL(114, 20),  // "onThreadPiplineAlert"
        QT_MOC_LITERAL(135, 4),  // "type"
        QT_MOC_LITERAL(140, 4),  // "info"
        QT_MOC_LITERAL(145, 19),  // "onWebViewUrlChanged"
        QT_MOC_LITERAL(165, 3),  // "url"
        QT_MOC_LITERAL(169, 15),  // "onCleanWebViews"
        QT_MOC_LITERAL(185, 17),  // "RunWebEngineView*"
        QT_MOC_LITERAL(203, 7)   // "webView"
    },
    "RunDialog",
    "notifyPiplinePushData",
    "",
    "stepID",
    "res",
    "onThreadPiplineJobFinished",
    "onThreadPiplineUpdateData",
    "num",
    "names",
    "values",
    "onThreadPiplineAlert",
    "type",
    "info",
    "onWebViewUrlChanged",
    "url",
    "onCleanWebViews",
    "RunWebEngineView*",
    "webView"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSRunDialogENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   50,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   55,    2, 0x0a,    4 /* Public */,
       6,    3,   56,    2, 0x0a,    5 /* Public */,
      10,    2,   63,    2, 0x0a,    9 /* Public */,
      13,    1,   68,    2, 0x0a,   12 /* Public */,
      15,    1,   71,    2, 0x0a,   14 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QStringList, QMetaType::QStringList,    7,    8,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   11,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, 0x80000000 | 16,   17,

       0        // eod
};

Q_CONSTINIT const QMetaObject RunDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSRunDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSRunDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSRunDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<RunDialog, std::true_type>,
        // method 'notifyPiplinePushData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'onThreadPiplineJobFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onThreadPiplineUpdateData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QStringList, std::false_type>,
        QtPrivate::TypeAndForceComplete<QStringList, std::false_type>,
        // method 'onThreadPiplineAlert'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'onWebViewUrlChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onCleanWebViews'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<RunWebEngineView *, std::false_type>
    >,
    nullptr
} };

void RunDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RunDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->notifyPiplinePushData((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->onThreadPiplineJobFinished(); break;
        case 2: _t->onThreadPiplineUpdateData((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[3]))); break;
        case 3: _t->onThreadPiplineAlert((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 4: _t->onWebViewUrlChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->onCleanWebViews((*reinterpret_cast< std::add_pointer_t<RunWebEngineView*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RunDialog::*)(QString , QString );
            if (_t _q_method = &RunDialog::notifyPiplinePushData; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *RunDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RunDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSRunDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int RunDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void RunDialog::notifyPiplinePushData(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP

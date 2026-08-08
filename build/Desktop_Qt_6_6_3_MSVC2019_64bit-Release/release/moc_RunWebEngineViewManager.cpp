/****************************************************************************
** Meta object code from reading C++ file 'RunWebEngineViewManager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Run/RunWebEngineViewManager.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RunWebEngineViewManager.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSRunWebEngineViewManagerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSRunWebEngineViewManagerENDCLASS = QtMocHelpers::stringData(
    "RunWebEngineViewManager",
    "webViewNotifyUrlChanged",
    "",
    "url",
    "cleanWebViews",
    "RunWebEngineView*",
    "webView",
    "onCleanWebViews"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSRunWebEngineViewManagerENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[24];
    char stringdata1[24];
    char stringdata2[1];
    char stringdata3[4];
    char stringdata4[14];
    char stringdata5[18];
    char stringdata6[8];
    char stringdata7[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSRunWebEngineViewManagerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSRunWebEngineViewManagerENDCLASS_t qt_meta_stringdata_CLASSRunWebEngineViewManagerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 23),  // "RunWebEngineViewManager"
        QT_MOC_LITERAL(24, 23),  // "webViewNotifyUrlChanged"
        QT_MOC_LITERAL(48, 0),  // ""
        QT_MOC_LITERAL(49, 3),  // "url"
        QT_MOC_LITERAL(53, 13),  // "cleanWebViews"
        QT_MOC_LITERAL(67, 17),  // "RunWebEngineView*"
        QT_MOC_LITERAL(85, 7),  // "webView"
        QT_MOC_LITERAL(93, 15)   // "onCleanWebViews"
    },
    "RunWebEngineViewManager",
    "webViewNotifyUrlChanged",
    "",
    "url",
    "cleanWebViews",
    "RunWebEngineView*",
    "webView",
    "onCleanWebViews"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSRunWebEngineViewManagerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x06,    1 /* Public */,
       4,    1,   35,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    1,   38,    2, 0x0a,    5 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

Q_CONSTINIT const QMetaObject RunWebEngineViewManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSRunWebEngineViewManagerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSRunWebEngineViewManagerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSRunWebEngineViewManagerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<RunWebEngineViewManager, std::true_type>,
        // method 'webViewNotifyUrlChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'cleanWebViews'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<RunWebEngineView *, std::false_type>,
        // method 'onCleanWebViews'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<RunWebEngineView *, std::false_type>
    >,
    nullptr
} };

void RunWebEngineViewManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RunWebEngineViewManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->webViewNotifyUrlChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->cleanWebViews((*reinterpret_cast< std::add_pointer_t<RunWebEngineView*>>(_a[1]))); break;
        case 2: _t->onCleanWebViews((*reinterpret_cast< std::add_pointer_t<RunWebEngineView*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RunWebEngineViewManager::*)(const QString & );
            if (_t _q_method = &RunWebEngineViewManager::webViewNotifyUrlChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RunWebEngineViewManager::*)(RunWebEngineView * );
            if (_t _q_method = &RunWebEngineViewManager::cleanWebViews; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *RunWebEngineViewManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RunWebEngineViewManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSRunWebEngineViewManagerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RunWebEngineViewManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void RunWebEngineViewManager::webViewNotifyUrlChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RunWebEngineViewManager::cleanWebViews(RunWebEngineView * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP

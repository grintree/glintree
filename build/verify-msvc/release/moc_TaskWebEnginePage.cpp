/****************************************************************************
** Meta object code from reading C++ file 'TaskWebEnginePage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Task/TaskWebEnginePage.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskWebEnginePage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.3. It"
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
struct qt_meta_tag_ZN17TaskWebEnginePageE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN17TaskWebEnginePageE = QtMocHelpers::stringData(
    "TaskWebEnginePage",
    "handleAuthenticationRequired",
    "",
    "requestUrl",
    "QAuthenticator*",
    "auth",
    "handleFeaturePermissionRequested",
    "securityOrigin",
    "Feature",
    "feature",
    "handleProxyAuthenticationRequired",
    "proxyHost",
    "handleRegisterProtocolHandlerRequested",
    "QWebEngineRegisterProtocolHandlerRequest",
    "request",
    "handleSelectClientCertificate",
    "QWebEngineClientCertificateSelection",
    "clientCertSelection",
    "handleCertificateError",
    "QWebEngineCertificateError",
    "error"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN17TaskWebEnginePageE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   50,    2, 0x08,    1 /* Private */,
       6,    2,   55,    2, 0x08,    4 /* Private */,
      10,    3,   60,    2, 0x08,    7 /* Private */,
      12,    1,   67,    2, 0x08,   11 /* Private */,
      15,    1,   70,    2, 0x08,   13 /* Private */,
      18,    1,   73,    2, 0x08,   15 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QUrl, 0x80000000 | 8,    7,    9,
    QMetaType::Void, QMetaType::QUrl, 0x80000000 | 4, QMetaType::QString,    3,    5,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 19,   20,

       0        // eod
};

Q_CONSTINIT const QMetaObject TaskWebEnginePage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWebEnginePage::staticMetaObject>(),
    qt_meta_stringdata_ZN17TaskWebEnginePageE.offsetsAndSizes,
    qt_meta_data_ZN17TaskWebEnginePageE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN17TaskWebEnginePageE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskWebEnginePage, std::true_type>,
        // method 'handleAuthenticationRequired'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAuthenticator *, std::false_type>,
        // method 'handleFeaturePermissionRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        QtPrivate::TypeAndForceComplete<Feature, std::false_type>,
        // method 'handleProxyAuthenticationRequired'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAuthenticator *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'handleRegisterProtocolHandlerRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWebEngineRegisterProtocolHandlerRequest, std::false_type>,
        // method 'handleSelectClientCertificate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWebEngineClientCertificateSelection, std::false_type>,
        // method 'handleCertificateError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QWebEngineCertificateError &, std::false_type>
    >,
    nullptr
} };

void TaskWebEnginePage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TaskWebEnginePage *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->handleAuthenticationRequired((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QAuthenticator*>>(_a[2]))); break;
        case 1: _t->handleFeaturePermissionRequested((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Feature>>(_a[2]))); break;
        case 2: _t->handleProxyAuthenticationRequired((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QAuthenticator*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 3: _t->handleRegisterProtocolHandlerRequested((*reinterpret_cast< std::add_pointer_t<QWebEngineRegisterProtocolHandlerRequest>>(_a[1]))); break;
        case 4: _t->handleSelectClientCertificate((*reinterpret_cast< std::add_pointer_t<QWebEngineClientCertificateSelection>>(_a[1]))); break;
        case 5: _t->handleCertificateError((*reinterpret_cast< std::add_pointer_t<QWebEngineCertificateError>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *TaskWebEnginePage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TaskWebEnginePage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN17TaskWebEnginePageE.stringdata0))
        return static_cast<void*>(this);
    return QWebEnginePage::qt_metacast(_clname);
}

int TaskWebEnginePage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWebEnginePage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP

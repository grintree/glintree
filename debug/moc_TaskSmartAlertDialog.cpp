/****************************************************************************
** Meta object code from reading C++ file 'TaskSmartAlertDialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Task/TaskSmartAlertDialog.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskSmartAlertDialog.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSTaskSmartAlertDialogENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSTaskSmartAlertDialogENDCLASS = QtMocHelpers::stringData(
    "TaskSmartAlertDialog",
    "notifySmartAlertChecked",
    "",
    "checked",
    "onSmartAlertCancel",
    "onClickSignalToQt",
    "eachp2",
    "nodeName",
    "nodeCode",
    "loopXpath",
    "onNotificationFromFlowControl",
    "MFlowStepData*",
    "data"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTaskSmartAlertDialogENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[21];
    char stringdata1[24];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[19];
    char stringdata5[18];
    char stringdata6[7];
    char stringdata7[9];
    char stringdata8[9];
    char stringdata9[10];
    char stringdata10[30];
    char stringdata11[15];
    char stringdata12[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTaskSmartAlertDialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTaskSmartAlertDialogENDCLASS_t qt_meta_stringdata_CLASSTaskSmartAlertDialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 20),  // "TaskSmartAlertDialog"
        QT_MOC_LITERAL(21, 23),  // "notifySmartAlertChecked"
        QT_MOC_LITERAL(45, 0),  // ""
        QT_MOC_LITERAL(46, 7),  // "checked"
        QT_MOC_LITERAL(54, 18),  // "onSmartAlertCancel"
        QT_MOC_LITERAL(73, 17),  // "onClickSignalToQt"
        QT_MOC_LITERAL(91, 6),  // "eachp2"
        QT_MOC_LITERAL(98, 8),  // "nodeName"
        QT_MOC_LITERAL(107, 8),  // "nodeCode"
        QT_MOC_LITERAL(116, 9),  // "loopXpath"
        QT_MOC_LITERAL(126, 29),  // "onNotificationFromFlowControl"
        QT_MOC_LITERAL(156, 14),  // "MFlowStepData*"
        QT_MOC_LITERAL(171, 4)   // "data"
    },
    "TaskSmartAlertDialog",
    "notifySmartAlertChecked",
    "",
    "checked",
    "onSmartAlertCancel",
    "onClickSignalToQt",
    "eachp2",
    "nodeName",
    "nodeCode",
    "loopXpath",
    "onNotificationFromFlowControl",
    "MFlowStepData*",
    "data"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTaskSmartAlertDialogENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   41,    2, 0x0a,    3 /* Public */,
       5,    4,   44,    2, 0x0a,    5 /* Public */,
      10,    1,   53,    2, 0x0a,   10 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    6,    7,    8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,

       0        // eod
};

Q_CONSTINIT const QMetaObject TaskSmartAlertDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSTaskSmartAlertDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTaskSmartAlertDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTaskSmartAlertDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskSmartAlertDialog, std::true_type>,
        // method 'notifySmartAlertChecked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onSmartAlertCancel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onClickSignalToQt'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onNotificationFromFlowControl'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<MFlowStepData *, std::false_type>
    >,
    nullptr
} };

void TaskSmartAlertDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskSmartAlertDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->notifySmartAlertChecked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->onSmartAlertCancel((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->onClickSignalToQt((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4]))); break;
        case 3: _t->onNotificationFromFlowControl((*reinterpret_cast< std::add_pointer_t<MFlowStepData*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TaskSmartAlertDialog::*)(bool );
            if (_t _q_method = &TaskSmartAlertDialog::notifySmartAlertChecked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *TaskSmartAlertDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TaskSmartAlertDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTaskSmartAlertDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int TaskSmartAlertDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void TaskSmartAlertDialog::notifySmartAlertChecked(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP

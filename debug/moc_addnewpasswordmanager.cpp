/****************************************************************************
** Meta object code from reading C++ file 'addnewpasswordmanager.h'
**
** Created: Mon Apr 16 04:25:24 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../addnewpasswordmanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addnewpasswordmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_addNewPasswordManager[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x08,
      47,   22,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_addNewPasswordManager[] = {
    "addNewPasswordManager\0\0on_pushButton_clicked()\0"
    "on_pushButton_2_clicked()\0"
};

const QMetaObject addNewPasswordManager::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_addNewPasswordManager,
      qt_meta_data_addNewPasswordManager, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &addNewPasswordManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *addNewPasswordManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *addNewPasswordManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_addNewPasswordManager))
        return static_cast<void*>(const_cast< addNewPasswordManager*>(this));
    return QDialog::qt_metacast(_clname);
}

int addNewPasswordManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButton_clicked(); break;
        case 1: on_pushButton_2_clicked(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

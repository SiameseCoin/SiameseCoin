/****************************************************************************
** Meta object code from reading C++ file 'transactionview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/transactionview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'transactionview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TransactionView_t {
    QByteArrayData data[23];
    char stringdata[272];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_TransactionView_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_TransactionView_t qt_meta_stringdata_TransactionView = {
    {
QT_MOC_LITERAL(0, 0, 15),
QT_MOC_LITERAL(1, 16, 13),
QT_MOC_LITERAL(2, 30, 0),
QT_MOC_LITERAL(3, 31, 18),
QT_MOC_LITERAL(4, 50, 13),
QT_MOC_LITERAL(5, 64, 14),
QT_MOC_LITERAL(6, 79, 16),
QT_MOC_LITERAL(7, 96, 11),
QT_MOC_LITERAL(8, 108, 11),
QT_MOC_LITERAL(9, 120, 11),
QT_MOC_LITERAL(10, 132, 9),
QT_MOC_LITERAL(11, 142, 9),
QT_MOC_LITERAL(12, 152, 10),
QT_MOC_LITERAL(13, 163, 8),
QT_MOC_LITERAL(14, 172, 10),
QT_MOC_LITERAL(15, 183, 3),
QT_MOC_LITERAL(16, 187, 10),
QT_MOC_LITERAL(17, 198, 13),
QT_MOC_LITERAL(18, 212, 6),
QT_MOC_LITERAL(19, 219, 13),
QT_MOC_LITERAL(20, 233, 6),
QT_MOC_LITERAL(21, 240, 13),
QT_MOC_LITERAL(22, 254, 16)
    },
    "TransactionView\0doubleClicked\0\0"
    "blockBrowserSignal\0transactionId\0"
    "contextualMenu\0dateRangeChanged\0"
    "showDetails\0showBroswer\0copyAddress\0"
    "editLabel\0copyLabel\0copyAmount\0copyTxID\0"
    "chooseDate\0idx\0chooseType\0changedPrefix\0"
    "prefix\0changedAmount\0amount\0exportClicked\0"
    "focusTransaction\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TransactionView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x05,
       3,    1,  102,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       5,    1,  105,    2, 0x08,
       6,    0,  108,    2, 0x08,
       7,    0,  109,    2, 0x08,
       8,    0,  110,    2, 0x08,
       9,    0,  111,    2, 0x08,
      10,    0,  112,    2, 0x08,
      11,    0,  113,    2, 0x08,
      12,    0,  114,    2, 0x08,
      13,    0,  115,    2, 0x08,
      14,    1,  116,    2, 0x0a,
      16,    1,  119,    2, 0x0a,
      17,    1,  122,    2, 0x0a,
      19,    1,  125,    2, 0x0a,
      21,    0,  128,    2, 0x0a,
      22,    1,  129,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::QModelIndex,    2,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    2,

       0        // eod
};

void TransactionView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TransactionView *_t = static_cast<TransactionView *>(_o);
        switch (_id) {
        case 0: _t->doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->blockBrowserSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->contextualMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 3: _t->dateRangeChanged(); break;
        case 4: _t->showDetails(); break;
        case 5: _t->showBroswer(); break;
        case 6: _t->copyAddress(); break;
        case 7: _t->editLabel(); break;
        case 8: _t->copyLabel(); break;
        case 9: _t->copyAmount(); break;
        case 10: _t->copyTxID(); break;
        case 11: _t->chooseDate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->chooseType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->changedPrefix((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->changedAmount((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->exportClicked(); break;
        case 16: _t->focusTransaction((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TransactionView::*_t)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TransactionView::doubleClicked)) {
                *result = 0;
            }
        }
        {
            typedef void (TransactionView::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TransactionView::blockBrowserSignal)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject TransactionView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TransactionView.data,
      qt_meta_data_TransactionView,  qt_static_metacall, 0, 0}
};


const QMetaObject *TransactionView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TransactionView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TransactionView.stringdata))
        return static_cast<void*>(const_cast< TransactionView*>(this));
    return QWidget::qt_metacast(_clname);
}

int TransactionView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void TransactionView::doubleClicked(const QModelIndex & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TransactionView::blockBrowserSignal(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE

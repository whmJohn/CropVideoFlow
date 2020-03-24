/****************************************************************************
** Meta object code from reading C++ file 'videodisplayingqt.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../videodisplayingqt.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'videodisplayingqt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_videodisplayingqt_t {
    QByteArrayData data[16];
    char stringdata0[192];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_videodisplayingqt_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_videodisplayingqt_t qt_meta_stringdata_videodisplayingqt = {
    {
QT_MOC_LITERAL(0, 0, 17), // "videodisplayingqt"
QT_MOC_LITERAL(1, 18, 11), // "importFrame"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 24), // "on_displayButton_clicked"
QT_MOC_LITERAL(4, 56, 21), // "on_stopButton_clicked"
QT_MOC_LITERAL(5, 78, 14), // "open_path_slot"
QT_MOC_LITERAL(6, 93, 12), // "drawcropflow"
QT_MOC_LITERAL(7, 106, 9), // "clickcrop"
QT_MOC_LITERAL(8, 116, 14), // "makecolorwheel"
QT_MOC_LITERAL(9, 131, 15), // "vector<Scalar>&"
QT_MOC_LITERAL(10, 147, 10), // "colorwheel"
QT_MOC_LITERAL(11, 158, 13), // "motionToColor"
QT_MOC_LITERAL(12, 172, 3), // "Mat"
QT_MOC_LITERAL(13, 176, 4), // "flow"
QT_MOC_LITERAL(14, 181, 4), // "Mat&"
QT_MOC_LITERAL(15, 186, 5) // "color"

    },
    "videodisplayingqt\0importFrame\0\0"
    "on_displayButton_clicked\0on_stopButton_clicked\0"
    "open_path_slot\0drawcropflow\0clickcrop\0"
    "makecolorwheel\0vector<Scalar>&\0"
    "colorwheel\0motionToColor\0Mat\0flow\0"
    "Mat&\0color"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_videodisplayingqt[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    1,   60,    2, 0x08 /* Private */,
      11,    2,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 14,   13,   15,

       0        // eod
};

void videodisplayingqt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        videodisplayingqt *_t = static_cast<videodisplayingqt *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->importFrame(); break;
        case 1: _t->on_displayButton_clicked(); break;
        case 2: _t->on_stopButton_clicked(); break;
        case 3: _t->open_path_slot(); break;
        case 4: _t->drawcropflow(); break;
        case 5: _t->clickcrop(); break;
        case 6: _t->makecolorwheel((*reinterpret_cast< vector<Scalar>(*)>(_a[1]))); break;
        case 7: _t->motionToColor((*reinterpret_cast< Mat(*)>(_a[1])),(*reinterpret_cast< Mat(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject videodisplayingqt::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_videodisplayingqt.data,
      qt_meta_data_videodisplayingqt,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *videodisplayingqt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *videodisplayingqt::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_videodisplayingqt.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int videodisplayingqt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'iconeditor.h'
**
** Created: Fri Jan 15 21:40:48 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../iconeditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'iconeditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_IconEditor[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      18,   11, 0x43095103,
      34,   27, 0x46095103,
      48,   44, 0x02095103,

       0        // eod
};

static const char qt_meta_stringdata_IconEditor[] = {
    "IconEditor\0QColor\0penColor\0QImage\0"
    "iconImage\0int\0zoomFactor\0"
};

const QMetaObject IconEditor::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_IconEditor,
      qt_meta_data_IconEditor, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IconEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IconEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IconEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IconEditor))
        return static_cast<void*>(const_cast< IconEditor*>(this));
    return QWidget::qt_metacast(_clname);
}

int IconEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = penColor(); break;
        case 1: *reinterpret_cast< QImage*>(_v) = iconImage(); break;
        case 2: *reinterpret_cast< int*>(_v) = zoomFactor(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setPenColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: setIconImage(*reinterpret_cast< QImage*>(_v)); break;
        case 2: setZoomFactor(*reinterpret_cast< int*>(_v)); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE

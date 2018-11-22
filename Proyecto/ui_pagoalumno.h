/********************************************************************************
** Form generated from reading UI file 'pagoalumno.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGOALUMNO_H
#define UI_PAGOALUMNO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PagoAlumno
{
public:

    void setupUi(QWidget *PagoAlumno)
    {
        if (PagoAlumno->objectName().isEmpty())
            PagoAlumno->setObjectName(QStringLiteral("PagoAlumno"));
        PagoAlumno->resize(400, 300);

        retranslateUi(PagoAlumno);

        QMetaObject::connectSlotsByName(PagoAlumno);
    } // setupUi

    void retranslateUi(QWidget *PagoAlumno)
    {
        PagoAlumno->setWindowTitle(QApplication::translate("PagoAlumno", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PagoAlumno: public Ui_PagoAlumno {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGOALUMNO_H

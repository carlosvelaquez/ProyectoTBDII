/********************************************************************************
** Form generated from reading UI file 'adminvehiculo.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINVEHICULO_H
#define UI_ADMINVEHICULO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminvehiculo
{
public:

    void setupUi(QWidget *adminvehiculo)
    {
        if (adminvehiculo->objectName().isEmpty())
            adminvehiculo->setObjectName(QStringLiteral("adminvehiculo"));
        adminvehiculo->resize(400, 300);

        retranslateUi(adminvehiculo);

        QMetaObject::connectSlotsByName(adminvehiculo);
    } // setupUi

    void retranslateUi(QWidget *adminvehiculo)
    {
        adminvehiculo->setWindowTitle(QApplication::translate("adminvehiculo", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminvehiculo: public Ui_adminvehiculo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINVEHICULO_H

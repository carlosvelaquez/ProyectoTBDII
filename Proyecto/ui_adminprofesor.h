/********************************************************************************
** Form generated from reading UI file 'adminprofesor.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINPROFESOR_H
#define UI_ADMINPROFESOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminProfesor
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QWidget *tab_3;

    void setupUi(QWidget *AdminProfesor)
    {
        if (AdminProfesor->objectName().isEmpty())
            AdminProfesor->setObjectName(QStringLiteral("AdminProfesor"));
        AdminProfesor->resize(600, 345);
        AdminProfesor->setStyleSheet(QStringLiteral("background-color: white;"));
        verticalLayout = new QVBoxLayout(AdminProfesor);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(AdminProfesor);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);

        verticalLayout->addWidget(label);

        tabWidget = new QTabWidget(AdminProfesor);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget->addTab(tab_3, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(AdminProfesor);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(AdminProfesor);
    } // setupUi

    void retranslateUi(QWidget *AdminProfesor)
    {
        AdminProfesor->setWindowTitle(QApplication::translate("AdminProfesor", "Form", nullptr));
        label->setText(QApplication::translate("AdminProfesor", "Administrar Profesor", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("AdminProfesor", "Agregar Profesor", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("AdminProfesor", "Eliminar Profesor", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("AdminProfesor", "Modificar Profesor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminProfesor: public Ui_AdminProfesor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINPROFESOR_H
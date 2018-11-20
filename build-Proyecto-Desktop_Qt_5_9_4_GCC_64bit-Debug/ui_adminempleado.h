/********************************************************************************
** Form generated from reading UI file 'adminempleado.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINEMPLEADO_H
#define UI_ADMINEMPLEADO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminEmpleado
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;

    void setupUi(QWidget *AdminEmpleado)
    {
        if (AdminEmpleado->objectName().isEmpty())
            AdminEmpleado->setObjectName(QStringLiteral("AdminEmpleado"));
        AdminEmpleado->resize(800, 500);
        AdminEmpleado->setStyleSheet(QStringLiteral("background-color: white;"));
        verticalLayout = new QVBoxLayout(AdminEmpleado);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(AdminEmpleado);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);

        verticalLayout->addWidget(label);

        tabWidget = new QTabWidget(AdminEmpleado);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(AdminEmpleado);

        QMetaObject::connectSlotsByName(AdminEmpleado);
    } // setupUi

    void retranslateUi(QWidget *AdminEmpleado)
    {
        AdminEmpleado->setWindowTitle(QApplication::translate("AdminEmpleado", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("AdminEmpleado", "Administrar Empleado", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("AdminEmpleado", "Tab 1", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("AdminEmpleado", "Tab 2", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AdminEmpleado: public Ui_AdminEmpleado {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINEMPLEADO_H

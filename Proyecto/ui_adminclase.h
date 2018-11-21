/********************************************************************************
** Form generated from reading UI file 'adminclase.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINCLASE_H
#define UI_ADMINCLASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminClase
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;

    void setupUi(QWidget *AdminClase)
    {
        if (AdminClase->objectName().isEmpty())
            AdminClase->setObjectName(QStringLiteral("AdminClase"));
        AdminClase->resize(800, 500);
        AdminClase->setStyleSheet(QStringLiteral("background-color: white;"));
        verticalLayout = new QVBoxLayout(AdminClase);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(AdminClase);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);

        verticalLayout->addWidget(label);

        tabWidget = new QTabWidget(AdminClase);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(AdminClase);

        QMetaObject::connectSlotsByName(AdminClase);
    } // setupUi

    void retranslateUi(QWidget *AdminClase)
    {
        AdminClase->setWindowTitle(QApplication::translate("AdminClase", "Form", nullptr));
        label->setText(QApplication::translate("AdminClase", "Administrar Clase", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("AdminClase", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("AdminClase", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminClase: public Ui_AdminClase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINCLASE_H

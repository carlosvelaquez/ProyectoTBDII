/********************************************************************************
** Form generated from reading UI file 'adminlicencia.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINLICENCIA_H
#define UI_ADMINLICENCIA_H

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

class Ui_AdminLicencia
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;

    void setupUi(QWidget *AdminLicencia)
    {
        if (AdminLicencia->objectName().isEmpty())
            AdminLicencia->setObjectName(QStringLiteral("AdminLicencia"));
        AdminLicencia->resize(800, 500);
        QFont font;
        font.setPointSize(13);
        AdminLicencia->setFont(font);
        AdminLicencia->setStyleSheet(QStringLiteral("background-color: white;"));
        verticalLayout = new QVBoxLayout(AdminLicencia);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(AdminLicencia);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setPointSize(15);
        label->setFont(font1);

        verticalLayout->addWidget(label);

        tabWidget = new QTabWidget(AdminLicencia);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(AdminLicencia);

        QMetaObject::connectSlotsByName(AdminLicencia);
    } // setupUi

    void retranslateUi(QWidget *AdminLicencia)
    {
        AdminLicencia->setWindowTitle(QApplication::translate("AdminLicencia", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("AdminLicencia", "Administrar Licencia", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("AdminLicencia", "Tab 1", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("AdminLicencia", "Tab 2", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AdminLicencia: public Ui_AdminLicencia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINLICENCIA_H

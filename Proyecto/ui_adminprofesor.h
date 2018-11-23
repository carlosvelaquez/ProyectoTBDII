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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
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
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;
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
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout_2->addWidget(lineEdit);

        verticalSpacer = new QSpacerItem(20, 176, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget->addTab(tab_3, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(AdminProfesor);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AdminProfesor);
    } // setupUi

    void retranslateUi(QWidget *AdminProfesor)
    {
        AdminProfesor->setWindowTitle(QApplication::translate("AdminProfesor", "Form", nullptr));
        label->setText(QApplication::translate("AdminProfesor", "Administrar Profesor", nullptr));
        label_3->setText(QApplication::translate("AdminProfesor", "Categoria del profesor:", nullptr));
        pushButton->setText(QApplication::translate("AdminProfesor", "Agregar nuevo profesor", nullptr));
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

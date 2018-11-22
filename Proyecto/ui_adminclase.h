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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
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
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QPushButton *pushButton;
    QWidget *tab_3;
    QWidget *tab_2;

    void setupUi(QWidget *AdminClase)
    {
        if (AdminClase->objectName().isEmpty())
            AdminClase->setObjectName(QStringLiteral("AdminClase"));
        AdminClase->resize(581, 321);
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
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout_2->addWidget(lineEdit);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(AdminClase);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AdminClase);
    } // setupUi

    void retranslateUi(QWidget *AdminClase)
    {
        AdminClase->setWindowTitle(QApplication::translate("AdminClase", "Form", nullptr));
        label->setText(QApplication::translate("AdminClase", "Administrar Clase", nullptr));
        label_3->setText(QApplication::translate("AdminClase", "Nombre:", nullptr));
        label_2->setText(QString());
        pushButton->setText(QApplication::translate("AdminClase", "PushButton", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("AdminClase", "Agregar Clases", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("AdminClase", "Eliminar Clases", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("AdminClase", "Modificar Clase", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminClase: public Ui_AdminClase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINCLASE_H

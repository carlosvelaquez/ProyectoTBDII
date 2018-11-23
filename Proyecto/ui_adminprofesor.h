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
#include <QtWidgets/QComboBox>
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
    QLabel *label_6;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEditCategoriaProfesor;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButtonAgregarProfesor;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QComboBox *comboBoxEliminarProfesor;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButtonEliminarProfesor;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QComboBox *comboBoxEscogerProfesorModificar;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_5;
    QLineEdit *lineEditNuevaCategoria;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButtonModificarProfesor;

    void setupUi(QWidget *AdminProfesor)
    {
        if (AdminProfesor->objectName().isEmpty())
            AdminProfesor->setObjectName(QStringLiteral("AdminProfesor"));
        AdminProfesor->resize(635, 358);
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
        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_2->addWidget(label_6);

        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout_2->addWidget(lineEdit);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        lineEditCategoriaProfesor = new QLineEdit(tab);
        lineEditCategoriaProfesor->setObjectName(QStringLiteral("lineEditCategoriaProfesor"));

        verticalLayout_2->addWidget(lineEditCategoriaProfesor);

        verticalSpacer = new QSpacerItem(20, 176, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        pushButtonAgregarProfesor = new QPushButton(tab);
        pushButtonAgregarProfesor->setObjectName(QStringLiteral("pushButtonAgregarProfesor"));

        verticalLayout_2->addWidget(pushButtonAgregarProfesor);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_3->addWidget(label_2);

        comboBoxEliminarProfesor = new QComboBox(tab_2);
        comboBoxEliminarProfesor->setObjectName(QStringLiteral("comboBoxEliminarProfesor"));

        verticalLayout_3->addWidget(comboBoxEliminarProfesor);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        pushButtonEliminarProfesor = new QPushButton(tab_2);
        pushButtonEliminarProfesor->setObjectName(QStringLiteral("pushButtonEliminarProfesor"));

        verticalLayout_3->addWidget(pushButtonEliminarProfesor);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_4 = new QVBoxLayout(tab_3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_4 = new QLabel(tab_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_4->addWidget(label_4);

        comboBoxEscogerProfesorModificar = new QComboBox(tab_3);
        comboBoxEscogerProfesorModificar->setObjectName(QStringLiteral("comboBoxEscogerProfesorModificar"));

        verticalLayout_4->addWidget(comboBoxEscogerProfesorModificar);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        label_5 = new QLabel(tab_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_4->addWidget(label_5);

        lineEditNuevaCategoria = new QLineEdit(tab_3);
        lineEditNuevaCategoria->setObjectName(QStringLiteral("lineEditNuevaCategoria"));

        verticalLayout_4->addWidget(lineEditNuevaCategoria);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_4);

        pushButtonModificarProfesor = new QPushButton(tab_3);
        pushButtonModificarProfesor->setObjectName(QStringLiteral("pushButtonModificarProfesor"));

        verticalLayout_4->addWidget(pushButtonModificarProfesor);

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
        label_6->setText(QApplication::translate("AdminProfesor", "ID de Empleado", nullptr));
        label_3->setText(QApplication::translate("AdminProfesor", "Categoria del profesor:", nullptr));
        pushButtonAgregarProfesor->setText(QApplication::translate("AdminProfesor", "Agregar nuevo profesor", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("AdminProfesor", "Agregar Profesor", nullptr));
        label_2->setText(QApplication::translate("AdminProfesor", "Seleccionar Profesor:", nullptr));
        pushButtonEliminarProfesor->setText(QApplication::translate("AdminProfesor", "Eliminar Profesor", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("AdminProfesor", "Eliminar Profesor", nullptr));
        label_4->setText(QApplication::translate("AdminProfesor", "Escoger Profesor:", nullptr));
        label_5->setText(QApplication::translate("AdminProfesor", "Nueva categoria:", nullptr));
        pushButtonModificarProfesor->setText(QApplication::translate("AdminProfesor", "Modificar Profesor", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("AdminProfesor", "Modificar Profesor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminProfesor: public Ui_AdminProfesor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINPROFESOR_H

/********************************************************************************
** Form generated from reading UI file 'adminempleado.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINEMPLEADO_H
#define UI_ADMINEMPLEADO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
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
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEditNombre;
    QSpacerItem *verticalSpacer;
    QLabel *label_3;
    QLineEdit *lineEditApellido;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBoxSalario;
    QPushButton *pushButtonAgregarEmpleado;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QComboBox *comboBoxEliminarEmpleado;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButtonEliminarEmpleado;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_9;
    QComboBox *comboBoxModificarEmpleado;
    QLabel *label_6;
    QLineEdit *lineEditNuevoNombreEmpleado;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_8;
    QLineEdit *lineEditNuevoApellido;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_7;
    QDoubleSpinBox *doubleSpinBoxNuevoSalario;
    QSpacerItem *verticalSpacer_6;
    QPushButton *pushButtonActualizarEmpleados;

    void setupUi(QWidget *AdminEmpleado)
    {
        if (AdminEmpleado->objectName().isEmpty())
            AdminEmpleado->setObjectName(QStringLiteral("AdminEmpleado"));
        AdminEmpleado->resize(617, 399);
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
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        lineEditNombre = new QLineEdit(tab);
        lineEditNombre->setObjectName(QStringLiteral("lineEditNombre"));

        verticalLayout_2->addWidget(lineEditNombre);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        lineEditApellido = new QLineEdit(tab);
        lineEditApellido->setObjectName(QStringLiteral("lineEditApellido"));

        verticalLayout_2->addWidget(lineEditApellido);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);

        doubleSpinBoxSalario = new QDoubleSpinBox(tab);
        doubleSpinBoxSalario->setObjectName(QStringLiteral("doubleSpinBoxSalario"));

        verticalLayout_2->addWidget(doubleSpinBoxSalario);

        pushButtonAgregarEmpleado = new QPushButton(tab);
        pushButtonAgregarEmpleado->setObjectName(QStringLiteral("pushButtonAgregarEmpleado"));

        verticalLayout_2->addWidget(pushButtonAgregarEmpleado);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_3->addWidget(label_5);

        comboBoxEliminarEmpleado = new QComboBox(tab_2);
        comboBoxEliminarEmpleado->setObjectName(QStringLiteral("comboBoxEliminarEmpleado"));

        verticalLayout_3->addWidget(comboBoxEliminarEmpleado);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        pushButtonEliminarEmpleado = new QPushButton(tab_2);
        pushButtonEliminarEmpleado->setObjectName(QStringLiteral("pushButtonEliminarEmpleado"));

        verticalLayout_3->addWidget(pushButtonEliminarEmpleado);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_4 = new QVBoxLayout(tab_3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_9 = new QLabel(tab_3);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_4->addWidget(label_9);

        comboBoxModificarEmpleado = new QComboBox(tab_3);
        comboBoxModificarEmpleado->setObjectName(QStringLiteral("comboBoxModificarEmpleado"));

        verticalLayout_4->addWidget(comboBoxModificarEmpleado);

        label_6 = new QLabel(tab_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_4->addWidget(label_6);

        lineEditNuevoNombreEmpleado = new QLineEdit(tab_3);
        lineEditNuevoNombreEmpleado->setObjectName(QStringLiteral("lineEditNuevoNombreEmpleado"));

        verticalLayout_4->addWidget(lineEditNuevoNombreEmpleado);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_4);

        label_8 = new QLabel(tab_3);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_4->addWidget(label_8);

        lineEditNuevoApellido = new QLineEdit(tab_3);
        lineEditNuevoApellido->setObjectName(QStringLiteral("lineEditNuevoApellido"));

        verticalLayout_4->addWidget(lineEditNuevoApellido);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_5);

        label_7 = new QLabel(tab_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_4->addWidget(label_7);

        doubleSpinBoxNuevoSalario = new QDoubleSpinBox(tab_3);
        doubleSpinBoxNuevoSalario->setObjectName(QStringLiteral("doubleSpinBoxNuevoSalario"));

        verticalLayout_4->addWidget(doubleSpinBoxNuevoSalario);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_6);

        pushButtonActualizarEmpleados = new QPushButton(tab_3);
        pushButtonActualizarEmpleados->setObjectName(QStringLiteral("pushButtonActualizarEmpleados"));

        verticalLayout_4->addWidget(pushButtonActualizarEmpleados);

        tabWidget->addTab(tab_3, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(AdminEmpleado);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AdminEmpleado);
    } // setupUi

    void retranslateUi(QWidget *AdminEmpleado)
    {
        AdminEmpleado->setWindowTitle(QApplication::translate("AdminEmpleado", "Form", nullptr));
        label->setText(QApplication::translate("AdminEmpleado", "Administrar Empleado", nullptr));
        label_2->setText(QApplication::translate("AdminEmpleado", "Nombres:", nullptr));
        label_3->setText(QApplication::translate("AdminEmpleado", "Apellidos", nullptr));
        label_4->setText(QApplication::translate("AdminEmpleado", "Salario:", nullptr));
        pushButtonAgregarEmpleado->setText(QApplication::translate("AdminEmpleado", "Agregar Empleado", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("AdminEmpleado", "Agregar Empleado", nullptr));
        label_5->setText(QApplication::translate("AdminEmpleado", "Elegir Empleado", nullptr));
        pushButtonEliminarEmpleado->setText(QApplication::translate("AdminEmpleado", "Eliminar Empleado", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("AdminEmpleado", "Eliminar Empleado", nullptr));
        label_9->setText(QApplication::translate("AdminEmpleado", "Seleccionar empleado:", nullptr));
        label_6->setText(QApplication::translate("AdminEmpleado", "Nuevo nombres:", nullptr));
        label_8->setText(QApplication::translate("AdminEmpleado", "Nuevo apellidos", nullptr));
        label_7->setText(QApplication::translate("AdminEmpleado", "Nuevo salario:", nullptr));
        pushButtonActualizarEmpleados->setText(QApplication::translate("AdminEmpleado", "Agregar Empleado", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("AdminEmpleado", "Actualizar Empleado", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminEmpleado: public Ui_AdminEmpleado {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINEMPLEADO_H

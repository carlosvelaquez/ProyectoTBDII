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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminvehiculo
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QComboBox *comboBoxVehiculaAgregar;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButtonAgregarVehiculo;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QComboBox *comboBoxSeleccionarVehiculoEliminar;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButtonEliminarVehiculo;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QComboBox *comboBoxVehiculoModificar;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_5;
    QComboBox *comboBoxCategoriaVehiculoModificar;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButtonModificarVehiculo;

    void setupUi(QWidget *adminvehiculo)
    {
        if (adminvehiculo->objectName().isEmpty())
            adminvehiculo->setObjectName(QStringLiteral("adminvehiculo"));
        adminvehiculo->resize(579, 373);
        adminvehiculo->setStyleSheet(QStringLiteral("background-color: white;"));
        verticalLayout = new QVBoxLayout(adminvehiculo);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(adminvehiculo);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);

        verticalLayout->addWidget(label);

        tabWidget = new QTabWidget(adminvehiculo);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        comboBoxVehiculaAgregar = new QComboBox(tab);
        comboBoxVehiculaAgregar->setObjectName(QStringLiteral("comboBoxVehiculaAgregar"));

        verticalLayout_2->addWidget(comboBoxVehiculaAgregar);

        verticalSpacer = new QSpacerItem(20, 206, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        pushButtonAgregarVehiculo = new QPushButton(tab);
        pushButtonAgregarVehiculo->setObjectName(QStringLiteral("pushButtonAgregarVehiculo"));

        verticalLayout_2->addWidget(pushButtonAgregarVehiculo);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_3->addWidget(label_3);

        comboBoxSeleccionarVehiculoEliminar = new QComboBox(tab_2);
        comboBoxSeleccionarVehiculoEliminar->setObjectName(QStringLiteral("comboBoxSeleccionarVehiculoEliminar"));

        verticalLayout_3->addWidget(comboBoxSeleccionarVehiculoEliminar);

        verticalSpacer_2 = new QSpacerItem(20, 206, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        pushButtonEliminarVehiculo = new QPushButton(tab_2);
        pushButtonEliminarVehiculo->setObjectName(QStringLiteral("pushButtonEliminarVehiculo"));

        verticalLayout_3->addWidget(pushButtonEliminarVehiculo);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_4 = new QVBoxLayout(tab_3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_4 = new QLabel(tab_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_4->addWidget(label_4);

        comboBoxVehiculoModificar = new QComboBox(tab_3);
        comboBoxVehiculoModificar->setObjectName(QStringLiteral("comboBoxVehiculoModificar"));

        verticalLayout_4->addWidget(comboBoxVehiculoModificar);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        label_5 = new QLabel(tab_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_4->addWidget(label_5);

        comboBoxCategoriaVehiculoModificar = new QComboBox(tab_3);
        comboBoxCategoriaVehiculoModificar->setObjectName(QStringLiteral("comboBoxCategoriaVehiculoModificar"));

        verticalLayout_4->addWidget(comboBoxCategoriaVehiculoModificar);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_4);

        pushButtonModificarVehiculo = new QPushButton(tab_3);
        pushButtonModificarVehiculo->setObjectName(QStringLiteral("pushButtonModificarVehiculo"));

        verticalLayout_4->addWidget(pushButtonModificarVehiculo);

        tabWidget->addTab(tab_3, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(adminvehiculo);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(adminvehiculo);
    } // setupUi

    void retranslateUi(QWidget *adminvehiculo)
    {
        adminvehiculo->setWindowTitle(QApplication::translate("adminvehiculo", "Form", nullptr));
        label->setText(QApplication::translate("adminvehiculo", "Administar Vehiculos", nullptr));
        label_2->setText(QApplication::translate("adminvehiculo", "Seleccionar Categoria:", nullptr));
        pushButtonAgregarVehiculo->setText(QApplication::translate("adminvehiculo", "Agregar Vehiculo", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("adminvehiculo", "Agregar Vehiculo", nullptr));
        label_3->setText(QApplication::translate("adminvehiculo", "Seleccionar Vehiculo:", nullptr));
        pushButtonEliminarVehiculo->setText(QApplication::translate("adminvehiculo", "Eliminar Vehiculo", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("adminvehiculo", "Eliminar Vehiculo", nullptr));
        label_4->setText(QApplication::translate("adminvehiculo", "Seleccionar nuevo vehiculo:", nullptr));
        label_5->setText(QApplication::translate("adminvehiculo", "Seleccionar su categoria nueva:", nullptr));
        pushButtonModificarVehiculo->setText(QApplication::translate("adminvehiculo", "PushButton", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("adminvehiculo", "Modificar Vehiculo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminvehiculo: public Ui_adminvehiculo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINVEHICULO_H

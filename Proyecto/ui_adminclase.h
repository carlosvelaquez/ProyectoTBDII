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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
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
    QLineEdit *lineEditNombreClase;
    QLabel *label_4;
    QComboBox *comboBoxClaseVehiculo;
    QLabel *label_5;
    QComboBox *comboBoxClaseProfesor;
    QLabel *label_2;
    QPushButton *pushButtonAgregarClase;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QComboBox *comboBoxClasesEliminar;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButtonEliminarClases;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_10;
    QComboBox *comboBoxElegirClase;
    QLabel *label_7;
    QLineEdit *lineEditClaseNombreNuevo;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_9;
    QComboBox *comboBoxClaseVehiculoNuevo;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_8;
    QComboBox *comboBoxClaseProfesorNuevo;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButtonModificarClase;

    void setupUi(QWidget *AdminClase)
    {
        if (AdminClase->objectName().isEmpty())
            AdminClase->setObjectName(QStringLiteral("AdminClase"));
        AdminClase->resize(586, 413);
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

        lineEditNombreClase = new QLineEdit(tab);
        lineEditNombreClase->setObjectName(QStringLiteral("lineEditNombreClase"));

        verticalLayout_2->addWidget(lineEditNombreClase);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);

        comboBoxClaseVehiculo = new QComboBox(tab);
        comboBoxClaseVehiculo->setObjectName(QStringLiteral("comboBoxClaseVehiculo"));

        verticalLayout_2->addWidget(comboBoxClaseVehiculo);

        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_2->addWidget(label_5);

        comboBoxClaseProfesor = new QComboBox(tab);
        comboBoxClaseProfesor->setObjectName(QStringLiteral("comboBoxClaseProfesor"));

        verticalLayout_2->addWidget(comboBoxClaseProfesor);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        pushButtonAgregarClase = new QPushButton(tab);
        pushButtonAgregarClase->setObjectName(QStringLiteral("pushButtonAgregarClase"));

        verticalLayout_2->addWidget(pushButtonAgregarClase);

        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_3 = new QVBoxLayout(tab_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_6 = new QLabel(tab_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_3->addWidget(label_6);

        comboBoxClasesEliminar = new QComboBox(tab_3);
        comboBoxClasesEliminar->setObjectName(QStringLiteral("comboBoxClasesEliminar"));

        verticalLayout_3->addWidget(comboBoxClasesEliminar);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        pushButtonEliminarClases = new QPushButton(tab_3);
        pushButtonEliminarClases->setObjectName(QStringLiteral("pushButtonEliminarClases"));

        verticalLayout_3->addWidget(pushButtonEliminarClases);

        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_4 = new QVBoxLayout(tab_2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_4->addWidget(label_10);

        comboBoxElegirClase = new QComboBox(tab_2);
        comboBoxElegirClase->setObjectName(QStringLiteral("comboBoxElegirClase"));

        verticalLayout_4->addWidget(comboBoxElegirClase);

        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_4->addWidget(label_7);

        lineEditClaseNombreNuevo = new QLineEdit(tab_2);
        lineEditClaseNombreNuevo->setObjectName(QStringLiteral("lineEditClaseNombreNuevo"));

        verticalLayout_4->addWidget(lineEditClaseNombreNuevo);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_4);

        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_4->addWidget(label_9);

        comboBoxClaseVehiculoNuevo = new QComboBox(tab_2);
        comboBoxClaseVehiculoNuevo->setObjectName(QStringLiteral("comboBoxClaseVehiculoNuevo"));

        verticalLayout_4->addWidget(comboBoxClaseVehiculoNuevo);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_4->addWidget(label_8);

        comboBoxClaseProfesorNuevo = new QComboBox(tab_2);
        comboBoxClaseProfesorNuevo->setObjectName(QStringLiteral("comboBoxClaseProfesorNuevo"));

        verticalLayout_4->addWidget(comboBoxClaseProfesorNuevo);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        pushButtonModificarClase = new QPushButton(tab_2);
        pushButtonModificarClase->setObjectName(QStringLiteral("pushButtonModificarClase"));

        verticalLayout_4->addWidget(pushButtonModificarClase);

        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(AdminClase);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(AdminClase);
    } // setupUi

    void retranslateUi(QWidget *AdminClase)
    {
        AdminClase->setWindowTitle(QApplication::translate("AdminClase", "Form", nullptr));
        label->setText(QApplication::translate("AdminClase", "Administrar Clase", nullptr));
        label_3->setText(QApplication::translate("AdminClase", "Nombre:", nullptr));
        label_4->setText(QApplication::translate("AdminClase", "Seleccionar Vehiculo:", nullptr));
        label_5->setText(QApplication::translate("AdminClase", "Seleccionar Profesor:", nullptr));
        label_2->setText(QString());
        pushButtonAgregarClase->setText(QApplication::translate("AdminClase", "Agregar Clases", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("AdminClase", "Agregar Clases", nullptr));
        label_6->setText(QApplication::translate("AdminClase", "Seleccionar Clase para eliminar:", nullptr));
        pushButtonEliminarClases->setText(QApplication::translate("AdminClase", "Eliminar Clases", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("AdminClase", "Eliminar Clases", nullptr));
        label_10->setText(QApplication::translate("AdminClase", "Elegir alumno para modificar", nullptr));
        label_7->setText(QApplication::translate("AdminClase", "Nombre:", nullptr));
        label_9->setText(QApplication::translate("AdminClase", "Seleccionar Nuevo Vehiculo:", nullptr));
        label_8->setText(QApplication::translate("AdminClase", "Seleccionar Nuevo Profesor:", nullptr));
        pushButtonModificarClase->setText(QApplication::translate("AdminClase", "Agregar Clases", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("AdminClase", "Modificar Clase", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminClase: public Ui_AdminClase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINCLASE_H

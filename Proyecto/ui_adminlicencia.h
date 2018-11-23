/********************************************************************************
** Form generated from reading UI file 'adminlicencia.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINLICENCIA_H
#define UI_ADMINLICENCIA_H

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

class Ui_AdminLicencia
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_7;
    QDoubleSpinBox *doubleSpinBoxCostoLicencia;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_8;
    QLineEdit *lineEditDocumentoAlumno;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButtonAgregarLicencia;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QComboBox *comboBox;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButtonEliminarLicencia;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QComboBox *comboBoxSeleccionarModificarLicencia;
    QLabel *label_9;
    QDoubleSpinBox *doubleSpinBoxCostoLicenciaNuevo;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_10;
    QLineEdit *lineEditDocumentoAlumnoNuevo;
    QSpacerItem *verticalSpacer_5;
    QPushButton *pushButtonModificaLicencia_2;

    void setupUi(QWidget *AdminLicencia)
    {
        if (AdminLicencia->objectName().isEmpty())
            AdminLicencia->setObjectName(QStringLiteral("AdminLicencia"));
        AdminLicencia->resize(643, 381);
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
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_7 = new QLabel(tab);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_2->addWidget(label_7);

        doubleSpinBoxCostoLicencia = new QDoubleSpinBox(tab);
        doubleSpinBoxCostoLicencia->setObjectName(QStringLiteral("doubleSpinBoxCostoLicencia"));

        verticalLayout_2->addWidget(doubleSpinBoxCostoLicencia);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        label_8 = new QLabel(tab);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_2->addWidget(label_8);

        lineEditDocumentoAlumno = new QLineEdit(tab);
        lineEditDocumentoAlumno->setObjectName(QStringLiteral("lineEditDocumentoAlumno"));

        verticalLayout_2->addWidget(lineEditDocumentoAlumno);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        pushButtonAgregarLicencia = new QPushButton(tab);
        pushButtonAgregarLicencia->setObjectName(QStringLiteral("pushButtonAgregarLicencia"));

        verticalLayout_2->addWidget(pushButtonAgregarLicencia);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_3->addWidget(label_2);

        comboBox = new QComboBox(tab_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        verticalLayout_3->addWidget(comboBox);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        pushButtonEliminarLicencia = new QPushButton(tab_2);
        pushButtonEliminarLicencia->setObjectName(QStringLiteral("pushButtonEliminarLicencia"));

        verticalLayout_3->addWidget(pushButtonEliminarLicencia);

        tabWidget->addTab(tab_2, QString());
        widget = new QWidget();
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_4->addWidget(label_3);

        comboBoxSeleccionarModificarLicencia = new QComboBox(widget);
        comboBoxSeleccionarModificarLicencia->setObjectName(QStringLiteral("comboBoxSeleccionarModificarLicencia"));

        verticalLayout_4->addWidget(comboBoxSeleccionarModificarLicencia);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_4->addWidget(label_9);

        doubleSpinBoxCostoLicenciaNuevo = new QDoubleSpinBox(widget);
        doubleSpinBoxCostoLicenciaNuevo->setObjectName(QStringLiteral("doubleSpinBoxCostoLicenciaNuevo"));

        verticalLayout_4->addWidget(doubleSpinBoxCostoLicenciaNuevo);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_4);

        label_10 = new QLabel(widget);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_4->addWidget(label_10);

        lineEditDocumentoAlumnoNuevo = new QLineEdit(widget);
        lineEditDocumentoAlumnoNuevo->setObjectName(QStringLiteral("lineEditDocumentoAlumnoNuevo"));

        verticalLayout_4->addWidget(lineEditDocumentoAlumnoNuevo);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_5);

        pushButtonModificaLicencia_2 = new QPushButton(widget);
        pushButtonModificaLicencia_2->setObjectName(QStringLiteral("pushButtonModificaLicencia_2"));

        verticalLayout_4->addWidget(pushButtonModificaLicencia_2);

        tabWidget->addTab(widget, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(AdminLicencia);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(AdminLicencia);
    } // setupUi

    void retranslateUi(QWidget *AdminLicencia)
    {
        AdminLicencia->setWindowTitle(QApplication::translate("AdminLicencia", "Form", nullptr));
        label->setText(QApplication::translate("AdminLicencia", "Administrar Licencia", nullptr));
        label_7->setText(QApplication::translate("AdminLicencia", "Costo:", nullptr));
        label_8->setText(QApplication::translate("AdminLicencia", "Documento:", nullptr));
        pushButtonAgregarLicencia->setText(QApplication::translate("AdminLicencia", "Agregar Tipo de licencia", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("AdminLicencia", "Agregar Licencia", nullptr));
        label_2->setText(QApplication::translate("AdminLicencia", "Seleccionar la licencia a eliminar:", nullptr));
        pushButtonEliminarLicencia->setText(QApplication::translate("AdminLicencia", "Eliminar Licencia Seleccionada", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("AdminLicencia", "Eliminar Licencia", nullptr));
        label_3->setText(QApplication::translate("AdminLicencia", "Selecccionar licencia para modificar:", nullptr));
        label_9->setText(QApplication::translate("AdminLicencia", "Costo:", nullptr));
        label_10->setText(QApplication::translate("AdminLicencia", "Documento:", nullptr));
        pushButtonModificaLicencia_2->setText(QApplication::translate("AdminLicencia", "Agregar Tipo de licencia", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(widget), QApplication::translate("AdminLicencia", "Modificar Licencia", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminLicencia: public Ui_AdminLicencia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINLICENCIA_H

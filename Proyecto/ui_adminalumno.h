/********************************************************************************
** Form generated from reading UI file 'adminalumno.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINALUMNO_H
#define UI_ADMINALUMNO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminAlumno
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_2;
    QLineEdit *lineEditNombreAlumno;
    QSpacerItem *verticalSpacer;
    QLabel *label_3;
    QLineEdit *lineEditApellidoAlumno;
    QSpacerItem *verticalSpacer_2;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_7;
    QComboBox *comboBoxLicenciaAlumno;
    QPushButton *pushButtonLicenciaAlumno;
    QSpacerItem *verticalSpacer_7;
    QPushButton *pushButtonAgregarAlumno;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_9;
    QComboBox *comboBoxAlumnoActualizar;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_5;
    QLineEdit *lineEditNombresAlumnosNuevo;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_6;
    QLineEdit *lineEditApellidoAlumnoNuevo;
    QSpacerItem *verticalSpacer_6;
    QPushButton *pushButtonAplicarCambiosAlumno;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QComboBox *comboBoxAlumnos;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButtonEliminarAlumno;
    QWidget *tab_4;

    void setupUi(QWidget *AdminAlumno)
    {
        if (AdminAlumno->objectName().isEmpty())
            AdminAlumno->setObjectName(QStringLiteral("AdminAlumno"));
        AdminAlumno->resize(641, 489);
        AdminAlumno->setStyleSheet(QStringLiteral("background-color: white;"));
        verticalLayout = new QVBoxLayout(AdminAlumno);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame = new QFrame(AdminAlumno);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);

        horizontalLayout->addWidget(label);


        verticalLayout->addWidget(frame);

        tabWidget = new QTabWidget(AdminAlumno);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_5 = new QVBoxLayout(tab);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_5->addWidget(label_2);

        lineEditNombreAlumno = new QLineEdit(tab);
        lineEditNombreAlumno->setObjectName(QStringLiteral("lineEditNombreAlumno"));

        verticalLayout_5->addWidget(lineEditNombreAlumno);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_5->addWidget(label_3);

        lineEditApellidoAlumno = new QLineEdit(tab);
        lineEditApellidoAlumno->setObjectName(QStringLiteral("lineEditApellidoAlumno"));

        verticalLayout_5->addWidget(lineEditApellidoAlumno);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);

        frame_2 = new QFrame(tab);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_7 = new QLabel(frame_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_4->addWidget(label_7);

        comboBoxLicenciaAlumno = new QComboBox(frame_2);
        comboBoxLicenciaAlumno->setObjectName(QStringLiteral("comboBoxLicenciaAlumno"));

        verticalLayout_4->addWidget(comboBoxLicenciaAlumno);

        pushButtonLicenciaAlumno = new QPushButton(frame_2);
        pushButtonLicenciaAlumno->setObjectName(QStringLiteral("pushButtonLicenciaAlumno"));

        verticalLayout_4->addWidget(pushButtonLicenciaAlumno);


        verticalLayout_5->addWidget(frame_2);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_7);

        pushButtonAgregarAlumno = new QPushButton(tab);
        pushButtonAgregarAlumno->setObjectName(QStringLiteral("pushButtonAgregarAlumno"));

        verticalLayout_5->addWidget(pushButtonAgregarAlumno);

        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_2 = new QVBoxLayout(tab_3);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_9 = new QLabel(tab_3);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_2->addWidget(label_9);

        comboBoxAlumnoActualizar = new QComboBox(tab_3);
        comboBoxAlumnoActualizar->setObjectName(QStringLiteral("comboBoxAlumnoActualizar"));

        verticalLayout_2->addWidget(comboBoxAlumnoActualizar);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        label_5 = new QLabel(tab_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_2->addWidget(label_5);

        lineEditNombresAlumnosNuevo = new QLineEdit(tab_3);
        lineEditNombresAlumnosNuevo->setObjectName(QStringLiteral("lineEditNombresAlumnosNuevo"));

        verticalLayout_2->addWidget(lineEditNombresAlumnosNuevo);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);

        label_6 = new QLabel(tab_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_2->addWidget(label_6);

        lineEditApellidoAlumnoNuevo = new QLineEdit(tab_3);
        lineEditApellidoAlumnoNuevo->setObjectName(QStringLiteral("lineEditApellidoAlumnoNuevo"));

        verticalLayout_2->addWidget(lineEditApellidoAlumnoNuevo);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_6);

        pushButtonAplicarCambiosAlumno = new QPushButton(tab_3);
        pushButtonAplicarCambiosAlumno->setObjectName(QStringLiteral("pushButtonAplicarCambiosAlumno"));

        verticalLayout_2->addWidget(pushButtonAplicarCambiosAlumno);

        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_3->addWidget(label_4);

        comboBoxAlumnos = new QComboBox(tab_2);
        comboBoxAlumnos->setObjectName(QStringLiteral("comboBoxAlumnos"));

        verticalLayout_3->addWidget(comboBoxAlumnos);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        pushButtonEliminarAlumno = new QPushButton(tab_2);
        pushButtonEliminarAlumno->setObjectName(QStringLiteral("pushButtonEliminarAlumno"));

        verticalLayout_3->addWidget(pushButtonEliminarAlumno);

        tabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tabWidget->addTab(tab_4, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(AdminAlumno);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AdminAlumno);
    } // setupUi

    void retranslateUi(QWidget *AdminAlumno)
    {
        AdminAlumno->setWindowTitle(QApplication::translate("AdminAlumno", "Form", nullptr));
        label->setText(QApplication::translate("AdminAlumno", "Administrar Alumnos y Pruebas", nullptr));
        label_2->setText(QApplication::translate("AdminAlumno", "<html><head/><body><p><span style=\" font-size:10pt;\">Nombres: </span></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("AdminAlumno", "<html><head/><body><p><span style=\" font-size:10pt;\">Apellidos:</span></p></body></html>", nullptr));
        label_7->setText(QApplication::translate("AdminAlumno", "Elejir tipos de Licencias:", nullptr));
        pushButtonLicenciaAlumno->setText(QApplication::translate("AdminAlumno", "A\303\261adir licencia", nullptr));
        pushButtonAgregarAlumno->setText(QApplication::translate("AdminAlumno", "Agregar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("AdminAlumno", "Agregar Alumno", nullptr));
        label_9->setText(QApplication::translate("AdminAlumno", "Seleccionar Alumno:", nullptr));
        label_5->setText(QApplication::translate("AdminAlumno", "Nombres:", nullptr));
        label_6->setText(QApplication::translate("AdminAlumno", "Apellidos:", nullptr));
        pushButtonAplicarCambiosAlumno->setText(QApplication::translate("AdminAlumno", "Aplicar Cambios", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("AdminAlumno", "Actualizar Alumno", nullptr));
        label_4->setText(QApplication::translate("AdminAlumno", "Seleccionar Alumno", nullptr));
        pushButtonEliminarAlumno->setText(QApplication::translate("AdminAlumno", "Eliminar Alumno", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("AdminAlumno", "Eliminar Alumno", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("AdminAlumno", "Registrar Pruebas", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminAlumno: public Ui_AdminAlumno {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINALUMNO_H

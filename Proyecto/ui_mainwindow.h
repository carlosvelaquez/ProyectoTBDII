/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QPushButton *AdminAlumnosButton;
    QPushButton *AdminEmpleadosButton;
    QPushButton *AdminProfesoresButton;
    QPushButton *AdminLicenciaButton;
    QPushButton *AdminClaseButton;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(694, 413);
        MainWindow->setStyleSheet(QStringLiteral("background-color: white;"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Noto Sans Canadian Aboriginal"));
        font.setPointSize(30);
        label->setFont(font);
        label->setTextFormat(Qt::AutoText);
        label->setScaledContents(false);

        verticalLayout_2->addWidget(label);

        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        AdminAlumnosButton = new QPushButton(frame);
        AdminAlumnosButton->setObjectName(QStringLiteral("AdminAlumnosButton"));

        verticalLayout->addWidget(AdminAlumnosButton);

        AdminEmpleadosButton = new QPushButton(frame);
        AdminEmpleadosButton->setObjectName(QStringLiteral("AdminEmpleadosButton"));

        verticalLayout->addWidget(AdminEmpleadosButton);

        AdminProfesoresButton = new QPushButton(frame);
        AdminProfesoresButton->setObjectName(QStringLiteral("AdminProfesoresButton"));

        verticalLayout->addWidget(AdminProfesoresButton);

        AdminLicenciaButton = new QPushButton(frame);
        AdminLicenciaButton->setObjectName(QStringLiteral("AdminLicenciaButton"));

        verticalLayout->addWidget(AdminLicenciaButton);

        AdminClaseButton = new QPushButton(frame);
        AdminClaseButton->setObjectName(QStringLiteral("AdminClaseButton"));

        verticalLayout->addWidget(AdminClaseButton);


        verticalLayout_2->addWidget(frame);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "                AUTOESCUELA", nullptr));
        AdminAlumnosButton->setText(QApplication::translate("MainWindow", "Administrar Alumnos", nullptr));
        AdminEmpleadosButton->setText(QApplication::translate("MainWindow", "Administrar Empleados", nullptr));
        AdminProfesoresButton->setText(QApplication::translate("MainWindow", "Administrar Profesores", nullptr));
        AdminLicenciaButton->setText(QApplication::translate("MainWindow", "Administrar Licencia", nullptr));
        AdminClaseButton->setText(QApplication::translate("MainWindow", "Administrar Clase", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

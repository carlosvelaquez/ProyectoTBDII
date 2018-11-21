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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
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
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QWidget *tab_2;
    QWidget *tab_3;

    void setupUi(QWidget *AdminAlumno)
    {
        if (AdminAlumno->objectName().isEmpty())
            AdminAlumno->setObjectName(QStringLiteral("AdminAlumno"));
        AdminAlumno->resize(664, 344);
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
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 0, 1, 1);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEdit_2 = new QLineEdit(tab);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 3, 0, 1, 1);

        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 4, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget->addTab(tab_3, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(AdminAlumno);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AdminAlumno);
    } // setupUi

    void retranslateUi(QWidget *AdminAlumno)
    {
        AdminAlumno->setWindowTitle(QApplication::translate("AdminAlumno", "Form", nullptr));
        label->setText(QApplication::translate("AdminAlumno", "Administrar Alumnos", nullptr));
        label_2->setText(QApplication::translate("AdminAlumno", "<html><head/><body><p><span style=\" font-size:10pt;\">Nombres: </span></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("AdminAlumno", "<html><head/><body><p><span style=\" font-size:10pt;\">Apellidos:</span></p></body></html>", nullptr));
        pushButton->setText(QApplication::translate("AdminAlumno", "Agregar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("AdminAlumno", "Agregar Alumno", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("AdminAlumno", "Eliminar Alumno", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("AdminAlumno", "Actualizar Alumno", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminAlumno: public Ui_AdminAlumno {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINALUMNO_H

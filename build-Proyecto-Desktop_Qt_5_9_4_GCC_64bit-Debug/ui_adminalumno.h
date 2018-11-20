/********************************************************************************
** Form generated from reading UI file 'adminalumno.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINALUMNO_H
#define UI_ADMINALUMNO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
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
    QLabel *label_2;
    QWidget *tab_2;
    QWidget *tab_3;

    void setupUi(QWidget *AdminAlumno)
    {
        if (AdminAlumno->objectName().isEmpty())
            AdminAlumno->setObjectName(QStringLiteral("AdminAlumno"));
        AdminAlumno->resize(800, 500);
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
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 50, 54, 17));
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
        AdminAlumno->setWindowTitle(QApplication::translate("AdminAlumno", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("AdminAlumno", "Administrar Alumnos", Q_NULLPTR));
        label_2->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("AdminAlumno", "Agregar Alumno", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("AdminAlumno", "Eliminar Alumno", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("AdminAlumno", "Actualizar Alumno", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AdminAlumno: public Ui_AdminAlumno {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINALUMNO_H

/********************************************************************************
** Form generated from reading UI file 'pagoalumno.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGOALUMNO_H
#define UI_PAGOALUMNO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PagoAlumno
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_4;
    QComboBox *comboBoxPagoAlumno;
    QLabel *label_2;
    QPlainTextEdit *plainTextEdit;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBoxPagoMonto;
    QPushButton *pushButton;

    void setupUi(QWidget *PagoAlumno)
    {
        if (PagoAlumno->objectName().isEmpty())
            PagoAlumno->setObjectName(QStringLiteral("PagoAlumno"));
        PagoAlumno->resize(733, 363);
        PagoAlumno->setStyleSheet(QStringLiteral("background-color: white;"));
        verticalLayout = new QVBoxLayout(PagoAlumno);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(PagoAlumno);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);

        verticalLayout->addWidget(label);

        label_4 = new QLabel(PagoAlumno);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        comboBoxPagoAlumno = new QComboBox(PagoAlumno);
        comboBoxPagoAlumno->setObjectName(QStringLiteral("comboBoxPagoAlumno"));

        verticalLayout->addWidget(comboBoxPagoAlumno);

        label_2 = new QLabel(PagoAlumno);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        plainTextEdit = new QPlainTextEdit(PagoAlumno);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        verticalLayout->addWidget(plainTextEdit);

        label_3 = new QLabel(PagoAlumno);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        doubleSpinBoxPagoMonto = new QDoubleSpinBox(PagoAlumno);
        doubleSpinBoxPagoMonto->setObjectName(QStringLiteral("doubleSpinBoxPagoMonto"));

        verticalLayout->addWidget(doubleSpinBoxPagoMonto);

        pushButton = new QPushButton(PagoAlumno);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(PagoAlumno);

        QMetaObject::connectSlotsByName(PagoAlumno);
    } // setupUi

    void retranslateUi(QWidget *PagoAlumno)
    {
        PagoAlumno->setWindowTitle(QApplication::translate("PagoAlumno", "Form", nullptr));
        label->setText(QApplication::translate("PagoAlumno", "Realizar Pago", nullptr));
        label_4->setText(QApplication::translate("PagoAlumno", "Seleccionar un alumno:", nullptr));
        label_2->setText(QApplication::translate("PagoAlumno", "Motivo:", nullptr));
        label_3->setText(QApplication::translate("PagoAlumno", "Monto:", nullptr));
        pushButton->setText(QApplication::translate("PagoAlumno", "Realizar Pago", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PagoAlumno: public Ui_PagoAlumno {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGOALUMNO_H

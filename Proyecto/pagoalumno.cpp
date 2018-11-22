#include "pagoalumno.h"
#include "ui_pagoalumno.h"

PagoAlumno::PagoAlumno(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PagoAlumno)
{
    ui->setupUi(this);
}

PagoAlumno::~PagoAlumno()
{
    delete ui;
}

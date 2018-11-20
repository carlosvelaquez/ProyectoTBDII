#include "adminalumno.h"
#include "ui_adminalumno.h"

AdminAlumno::AdminAlumno(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AdminAlumno)
{
    ui->setupUi(this);
}

AdminAlumno::~AdminAlumno()
{
    delete ui;
}

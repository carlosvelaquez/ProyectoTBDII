#include "adminempleado.h"
#include "ui_adminempleado.h"

AdminEmpleado::AdminEmpleado(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AdminEmpleado)
{
    ui->setupUi(this);
}

AdminEmpleado::~AdminEmpleado()
{
    delete ui;
}

#include "adminlicencia.h"
#include "ui_adminlicencia.h"

AdminLicencia::AdminLicencia(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AdminLicencia)
{
    ui->setupUi(this);
}

AdminLicencia::~AdminLicencia()
{
    delete ui;
}

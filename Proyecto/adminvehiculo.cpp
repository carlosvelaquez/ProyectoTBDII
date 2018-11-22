#include "adminvehiculo.h"
#include "ui_adminvehiculo.h"

adminvehiculo::adminvehiculo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::adminvehiculo)
{
    ui->setupUi(this);
}

adminvehiculo::~adminvehiculo()
{
    delete ui;
}

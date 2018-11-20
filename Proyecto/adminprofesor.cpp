#include "adminprofesor.h"
#include "ui_adminprofesor.h"

AdminProfesor::AdminProfesor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AdminProfesor)
{
    ui->setupUi(this);
}

AdminProfesor::~AdminProfesor()
{
    delete ui;
}

#include "adminclase.h"
#include "ui_adminclase.h"

AdminClase::AdminClase(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AdminClase)
{
    ui->setupUi(this);
}

AdminClase::~AdminClase()
{
    delete ui;
}

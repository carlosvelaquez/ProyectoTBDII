#include "adminclase.h"
#include "ui_adminclase.h"

AdminClase::AdminClase(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AdminClase)
{
    ui->setupUi(this);
    //connect(ui->pushButtonAgregarClase, SIGNAL(clicked()), this, SLOT(takefile()));
}

AdminClase::~AdminClase()
{
    delete ui;
}

// Boton que agrega una clase nueva.

void AdminClase::on_pushButtonAgregarClase_clicked()
{

}

#include "adminempleado.h"
#include "ui_adminempleado.h"
#include <QString>

AdminEmpleado::AdminEmpleado(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AdminEmpleado)
{
    ui->setupUi(this);
    connect(ui->pushButtonAgregarEmpleado, SIGNAL(clicked()), this, SLOT(pushButtonAgregarEmpleado()));
    connect(ui->pushButtonEliminarEmpleado, SIGNAL(clicked()), this, SLOT(pushButtonEliminarEmpleado()));
    connect(ui->pushButtonActualizarEmpleados, SIGNAL(clicked()), this, SLOT(pushButtonModificarEmpleado()));
    refreshWidgets();
}

AdminEmpleado::~AdminEmpleado()
{
    delete ui;
}

//Se añade el "database" principal
void AdminEmpleado::setDatabase(Database* nDatabase){
    database = nDatabase;
}

//Se refrescan los widgets de adminclase
void AdminEmpleado::refreshWidgets(){

    //ComboBox de eliminar y modificar empleados
    QString word;
    for(int i=0; i<database->getEmpleados()->size(); i++){
        word = QString::fromStdString(database->getEmpleados()->at(i)->getUID())+" | "+QString::fromStdString(database->getEmpleados()->at(i)->getNombres());
        ui->comboBoxEliminarEmpleado->addItem(word);
        ui->comboBoxModificarEmpleado->addItem(word);
    }

}


/* =============== Agregar Empleado ===============*/
void AdminEmpleado::pushButtonAgregarEmpleado(){
    QString name = ui->lineEditNombre->text();
    QString apellido = ui->lineEditApellido->text();
    float salario = ui->doubleSpinBoxSalario->value();

    if(name!="" && apellido!="" && salario!=0){

        database->getEmpleados()->push_back(new Empleado(name.toStdString(), apellido.toStdString(), salario));

        ui->lineEditNombre->setText("");
        ui->lineEditApellido->setText("");
        ui->doubleSpinBoxSalario->setValue(0);
        refreshWidgets();
    }
}/*====================================================================*/



/* =============== Eliminar Empleado ===============*/
void AdminEmpleado::pushButtonEliminarEmpleado(){

    QString uid = ui->comboBoxEliminarEmpleado->currentText();
    QStringList array = uid.split(" | ");
    for(size_t i=0; i<database->getEmpleados()->size(); i++){
        if(database->getEmpleados()->at(i)->getUID() == array.at(0).toStdString()){

            database->getEmpleados()->at(i)->setBorrar(true);
            ui->comboBoxEliminarEmpleado->setCurrentIndex(0);

        }
    }
    refreshWidgets();
}/*====================================================================*/



/* =============== Modificar Empleado ===============*/
void AdminEmpleado::pushButtonModificarEmpleado(){
    QString nuevoNombre = ui->lineEditNuevoNombreEmpleado->text();
    QString nuevoApellido = ui->lineEditNuevoApellido->text();
    float value = ui->doubleSpinBoxNuevoSalario->value();

    if(nuevoNombre!="" && nuevoApellido!="" && value!=0){
        QString uid = ui->comboBoxModificarEmpleado->currentText();
        QStringList array = uid.split(" | ");
        for(size_t i=0; i<database->getEmpleados()->size(); i++){
            if(database->getEmpleados()->at(i)->getUID() == array.at(0).toStdString()){
                database->getEmpleados()->at(i)->setNombres(nuevoNombre.toStdString());
                database->getEmpleados()->at(i)->setApellidos(nuevoApellido.toStdString());
                database->getEmpleados()->at(i)->setSalario(value);

                ui->lineEditNuevoNombreEmpleado->setText("");
                ui->lineEditNuevoApellido->setText("");
                ui->doubleSpinBoxSalario->setValue(0);
            }
        }

        refreshWidgets();
    }

}/*====================================================================*/

#include "adminclase.h"
#include "ui_adminclase.h"

AdminClase::AdminClase(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AdminClase)
{
    ui->setupUi(this);
    connect(ui->pushButtonEliminarClases, SIGNAL(clicked()), this, SLOT(pushButtonEliminarClase()));
}

AdminClase::~AdminClase()
{
    delete ui;
}


/* =============== Se añade el "database" principal ===============*/
void AdminClase::setDatabase(Database* nDatabase){
   database = nDatabase;
}/*====================================================================*/


/* =============== Se agrega una clase nueva a database ===============*/
void AdminClase::refreshWidgets(){
    QString text;

        //Se agarra el nombre y se concatena con su UID de cada Profesor
        for(int i=0; i<database->getEmpleados()->size(); i++){
            for(int j=0; j<database->getProfesores()->size(); j++){

                if(database->getProfesores()->at(j)->getUID() == database->getEmpleados()->at(i)->getUID()){
                    text = QString::fromStdString(database->getEmpleados()->at(i)->getNombres());
                    text = text+" | "+QString::fromStdString(database->getProfesores()->at(j)->getUID());
                    ui->comboBoxClaseProfesor->addItem(text);
                    text = "";
                }

            }
        }

        for(int i=0; i<database->getVehiculos()->size(); i++){
            text = QString::fromStdString(database->getVehiculos()->at(i)->getClase()->getNombre())+" | "
                    +QString::fromStdString(database->getVehiculos()->at(i)->getUID());
            ui->comboBoxClaseVehiculo->addItem(text);
            text = "";
        }



        //Se llena el comboBox de eliminar Clase
        for(int i=0; i<database->getClases()->size(); i++){
            text = QString::fromStdString(database->getClases()->at(i)->getNombre()) + " | "
                    +QString::fromStdString(database->getClases()->at(i)->getUID());
            ui->comboBoxClasesEliminar->addItem(text);
            text = "";
        }

        //Se llenan los comboBox para actualizar
}/*====================================================================*/









/* =============== Se agrega una clase nueva a database ===============*/
void AdminClase::on_pushButtonAgregarClase_clicked()
{
    newClase->setNombre(ui->lineEditNombreClase->text().toStdString());
    //Se parsea y se saca el UID de vehiculo y profesor


}/*====================================================================*/


/* =============== Se elimina la clase seleccionada ===============*/
void AdminClase::pushButtonEliminarClase(){
    QString uidEliminar = ui->comboBoxClasesEliminar->currentText();

}

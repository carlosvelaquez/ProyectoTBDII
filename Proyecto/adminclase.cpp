#include "adminclase.h"
#include "ui_adminclase.h"
#include <QDebug>
#include <QVariant>
#include "Profesor.h"
#include <QStringList>

AdminClase::AdminClase(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AdminClase)
{
    ui->setupUi(this);
    connect(ui->pushButtonEliminarClases, SIGNAL(clicked()), this, SLOT(pushButtonEliminarClase()));
    connect(ui->pushButtonModificarClase, SIGNAL(clicked()), this, SLOT(pushButtonModificarClase()));
    refreshWidgets();
}

AdminClase::~AdminClase()
{
    delete ui;
}

bool AdminClase::estaCapacitado(QString uidProfesor, int categoriaNecesaria){

    for(size_t i=0; i<database->getProfesores()->size(); i++){
        if(uidProfesor.toStdString() == database->getProfesores()->at(i)->getUID()){
            if(database->getProfesores()->at(i)->getCategoria() >= categoriaNecesaria){
                return true;
            }
        }
    }
    return false;
}

/* =============== Se añade el "database" principal ===============*/
void AdminClase::setDatabase(Database* nDatabase){
   database = nDatabase;
}/*====================================================================*/


/* =============== Se actualizan los widgets ===============*/
void AdminClase::refreshWidgets(){

    /*
     * QString name = "name.bin";
QStringList imgName = name.split(".");
qDebug() << imgName.at(0); // result is "name"
    */

    //Se añade al comboBox de agregar y modificar
    QString word;

    for(size_t i=0; i<database->getProfesores()->size(); i++){
        word = QString::fromStdString(database->getProfesores()->at(i)->getUID());
        ui->comboBoxClaseProfesor->addItem(word);
        ui->comboBoxClaseProfesorNuevo->addItem(word);
    }

    //Se añade al comboBox de agregar y modificar
    for(size_t i=0; i<database->getVehiculos()->size(); i++){
        word = QString::fromStdString(database->getVehiculos()->at(i)->getUID());
        ui->comboBoxClaseVehiculo->addItem(word);
        ui->comboBoxClaseVehiculoNuevo->addItem(word);
    }

    //Se añade al comboBox de eliminar
    for(size_t i=0; i<database->getClases()->size(); i++){
        if(!database->getClases()->at(i)->isBorrado()){
            word = QString::fromStdString(database->getClases()->at(i)->getUID())+" | "+QString::fromStdString(database->getClases()->at(i)->getNombre());
            ui->comboBoxElegirClase->addItem(word);
        }
    }
}/*====================================================================*/






/* =============== Se agrega una clase nueva a database ===============*/
void AdminClase::on_pushButtonAgregarClase_clicked()
{
    int categoriaNecesaria = ui->spinBoxCategoria->value();
    QString nombre = ui->lineEditNombreClase->text();
    if(nombre != ""){
        QString currentUIDProfesor = ui->comboBoxClaseProfesor->currentText();
        QString currentUIDVehiculo = ui->comboBoxClaseVehiculo->currentText();

        if(estaCapacitado(currentUIDProfesor,categoriaNecesaria)){ //Si el profesor está capacitado se agregará lo demás

            database->insertarClase(new Clase(nombre.toStdString(), currentUIDProfesor.toStdString(),currentUIDProfesor.toStdString())); //Se crea la nueva clase

            ui->lineEditNombreClase->setText("");
            ui->comboBoxClaseProfesor->setCurrentIndex(0);
            ui->comboBoxClaseVehiculo->setCurrentIndex(0);

        }

    }

    refreshWidgets();
}/*====================================================================*/




/* =============== Se elimina la clase seleccionada ===============*/
void AdminClase::pushButtonEliminarClase(){


    QString uid = ui->comboBoxClasesEliminar->currentText();
    QStringList array = uid.split(" | ");

    for(size_t i=0; i<database->getClases()->size(); i++){
        if(array.at(0).toStdString() == database->getClases()->at(i)->getUID()){
            database->getClases()->at(i)->setBorrar(true);
        }
    }
    ui->comboBoxClasesEliminar->setCurrentIndex(0);

    refreshWidgets();
}/*====================================================================*/



/* =============== Se modifica la clase seleccionada ===============*/
void AdminClase::pushButtonModificarClase(){
    Clase* currentClase;
    QString uid = ui->comboBoxElegirClase->currentText();
    QString uidProfesor  = ui->comboBoxClaseProfesorNuevo->currentText();
    QString uidVehiculo = ui->comboBoxClaseVehiculoNuevo->currentText();

    //Se busca la clase seleccionada
    for(size_t i=0; i<database->getClases()->size(); i++){
        if(uid.toStdString() == database->getClases()->at(i)->getUID()){
            currentClase = database->getClases()->at(i);
        }
    }

    currentClase->setNombre(ui->lineEditClaseNombreNuevo->text().toStdString());
    currentClase->setUIDProfesor(ui->comboBoxClaseProfesorNuevo->currentText().toStdString());
    currentClase->setUIDVehiculo(ui->comboBoxClaseVehiculoNuevo->currentText().toStdString());
    currentClase = NULL;

    ui->comboBoxElegirClase->setCurrentIndex(0);
    ui->comboBoxClaseProfesorNuevo->setCurrentIndex(0);
    ui->comboBoxClaseVehiculoNuevo->setCurrentIndex(0);

    refreshWidgets();
}/*====================================================================*/

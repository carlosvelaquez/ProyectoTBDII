#include "adminvehiculo.h"
#include "ui_adminvehiculo.h"

adminvehiculo::adminvehiculo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::adminvehiculo)
{
  qDebug() << "Construyendo adminvehiculo";
    ui->setupUi(this);
    connect(ui->pushButtonAgregarVehiculo, SIGNAL(clicked()), this, SLOT(pushButtonAgregarProfesor()));
    connect(ui->pushButtonEliminarVehiculo, SIGNAL(clicked()), this, SLOT(pushButtonEliminarProfesor()));
    qDebug() << "Listo";
    //connect(ui->pushButtonModificarProfesor, SIGNAL(clicked()), this, SLOT(pushButtonModificarProfesor()));
}

adminvehiculo::~adminvehiculo()
{
    delete ui;
}

//Se añade el "database" principal
void adminvehiculo::setDatabase(Database* nDatabase){
    database = nDatabase;
}

//Se refrescan los widgets de adminclase
void adminvehiculo::refreshWidgets(){
  qDebug() << "Refrescando Widgets";
    QString word;

    //Combobox de agregar vehiculo
    for(size_t i=0; i<10; i++){
        //word = QString::fromStdString(database->getCategorias().at(i)->toJSON());
        word = QString::fromStdString(database->genUID());
        ui->comboBoxVehiculaAgregar->addItem(word);
        ui->comboBoxCategoriaVehiculoModificar->addItem(word);
    }


    // Combobox de modificar Vehiculo
    for(size_t i=0; i<10; i++){
        //word = QString::fromStdString(database->getVehiculos().at(i)->toJSON());
        word = QString::fromStdString(database->genUID());
        ui->comboBoxVehiculoModificar->addItem(word);
        ui->comboBoxSeleccionarVehiculoEliminar->addItem(word);
    }

}

void adminvehiculo::pushButtonAgregarVehiculo(){
    QString word = ui->comboBoxVehiculaAgregar->currentText();
    QStringList array = word.split(" | ");
    if(word !=""){
        database->insertarVehiculo(new Vehiculo("",array.at(0).toStdString()));
    }

    ui->comboBoxVehiculaAgregar->setCurrentIndex(0);
    database->push();
}

void adminvehiculo::pushButtonEliminarVehiculo(){
    QString word = ui->comboBoxSeleccionarVehiculoEliminar->currentText();
    QStringList array = word.split(" | ");

    for(size_t i=0; i<database->getVehiculos().size(); i++){
        if(array.at(0).toStdString() == database->getVehiculos().at(i)->getUID()){
            database->getVehiculos().at(i)->setBorrar(true);
        }
    }

    ui->comboBoxSeleccionarVehiculoEliminar->setCurrentIndex(0);
    database->push();
}

void adminvehiculo::pushButtonModificaVehiculo(){
    QString vehiculo = ui->comboBoxVehiculoModificar->currentText();
    QString categoria = ui->comboBoxCategoriaVehiculoModificar->currentText();

    QStringList array = vehiculo.split(" | ");
    QStringList arrayCategoria = categoria.split(" | ");

    Vehiculo* temp;

    for(size_t i=0; i<database->getVehiculos().size(); i++){
        if(array.at(0).toStdString() == database->getVehiculos().at(i)->getUID()){
            temp = database->getVehiculos().at(i);
            temp->setUIDCategoria(arrayCategoria.at(0).toStdString());
        }
    }

    ui->comboBoxCategoriaVehiculoModificar->setCurrentIndex(0);
    ui->comboBoxVehiculoModificar->setCurrentIndex(0);
}

#include "adminvehiculo.h"
#include "ui_adminvehiculo.h"

adminvehiculo::adminvehiculo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::adminvehiculo)
{
    ui->setupUi(this);
    connect(ui->pushButtonAgregarVehiculo, SIGNAL(clicked()), this, SLOT(pushButtonAgregarProfesor()));
    connect(ui->pushButtonEliminarVehiculo, SIGNAL(clicked()), this, SLOT(pushButtonEliminarProfesor()));
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

}

void adminvehiculo::pushButtonAgregarVehiculo(){

}

void adminvehiculo::pushButtonEliminarVehiculo(){

}

void adminvehiculo::pushButtonModificaVehiculo(){

}

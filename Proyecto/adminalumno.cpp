#include "adminalumno.h"
#include "ui_adminalumno.h"
#include <QString>
#include <QStringList>
#include "Alumno.h"
#include "TipoLicencia.h"

AdminAlumno::AdminAlumno(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AdminAlumno)
{

    ui->setupUi(this);

}

AdminAlumno::~AdminAlumno()
{
    delete ui;
}

//Metodo que actualiza todos los componentes que haga uso de Alumnos en DataBase
void AdminAlumno::refreshWidgets(){

    //Se llena el comboBox de "Eliminar Alumno"
    for(int i=0; i<database->getAlumnos()->size(); i++){
        ui->comboBoxAlumnos->addItem(QString::fromStdString(database->getAlumnos()->at(i)->getUID()));

    }

}

//Metodo que agrega la variable DataBase que maneja todo
void AdminAlumno::setDatabase(Database* ndatabase){
    database = ndatabase;
}

//Boton que elimina un alumno.
void AdminAlumno::on_pushButtonEliminarAlumno_clicked()
{

}


//Boton que agrega un nuevo alumno.
void AdminAlumno::on_pushButtonAgregarAlumnos_clicked()
{
    QString nombre = ui->lineEditNombreAlumno->text();
    QString apellido = ui->lineEditApellidoAlumno->text();
    if(nombre.isEmpty()|| apellido.isEmpty()){
        ui->lineEditNombreAlumno->setText(" -- Llene esta información");
        ui->lineEditApellidoAlumno->setText(" -- Llene esta información");
    }else{

        //Se agregan todos los atributos y se crea el nuevo objeto
        newAlumno->setNombres(nombre.toStdString());
        newAlumno->setApellidos(apellido.toStdString());

        //Se añade el nuevo alumno a database
        database->getAlumnos()->push_back(newAlumno);


        newAlumno = NULL;
        delete newAlumno;
    }
    ui->lineEditApellidoAlumno->setText("");
    ui->lineEditNombreAlumno->setText("");
}

//Boton que aplica los cambios hechos al alumno.
void AdminAlumno::on_pushButtonAplicarCambiosAlumno_clicked()
{

    ui->lineEditNombresAlumnosNuevo->text().toStdString();
    ui->lineEditApellidoAlumnoNuevo->text().toStdString();
}

//Agrega un tipo de licencia
void AdminAlumno::on_pushButtonAgregarTipoLicencia_clicked()
{

}

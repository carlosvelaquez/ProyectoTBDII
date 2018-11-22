#include "adminalumno.h"
#include "ui_adminalumno.h"
#include <QString>
#include <QStringList>
#include "Alumno.h"

AdminAlumno::AdminAlumno(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AdminAlumno)
{
    //Se llena el comboBox de "Eliminar Alumno"
    for(int i=0; i<=database->getAlumnos()->size(); i++){
        ui->comboBoxAlumnos->addItem(QString::fromStdString(database->getAlumnos()->at(i)->getNombres()));
    }
    ui->setupUi(this);

}

AdminAlumno::~AdminAlumno()
{
    delete ui;
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
    Alumno* a = new Alumno();
    QString nombre = ui->lineEditNombreAlumno->text();
    QString apellido = ui->lineEditApellidoAlumno->text();
    if(nombre.isEmpty()|| apellido.isEmpty()){
        ui->lineEditNombreAlumno->setText(" -- Llene esta información");
        ui->lineEditApellidoAlumno->setText(" -- Llene esta información");
    }else{

        //Se agregan todos los atributos y se crea el nuevo objeto
        a->setNombres(nombre.toStdString());
        a->setApellidos(apellido.toStdString());

        //Se añade el nuevo alumno a database
        database->getAlumnos()->push_back(a);
        a = NULL;
        delete a;
    }
}

//Boton que aplica los cambios hechos al alumno.
void AdminAlumno::on_pushButtonAplicarCambiosAlumno_clicked()
{

}

//Agrega un tipo de licencia
void AdminAlumno::on_pushButtonAgregarTipoLicencia_clicked()
{

}

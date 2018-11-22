#include "adminalumno.h"
#include "ui_adminalumno.h"
#include <QString>
#include <QStringList>

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
    if(nombre.isEmpty() || apellido.isEmpty()  || ui->listWidgetClasesAlumnos->selectedItems().isEmpty()){
        ui->lineEditNombreAlumno->setText("Llene esta información");
        ui->lineEditApellidoAlumno->setText("Llene esta información");
    }else{

        for(int i=0; i<ui->listWidgetClasesAlumnos->selectedItems().size(); i++){

        }
    }
}

//Boton que aplica los cambios hechos al alumno.
void AdminAlumno::on_pushButtonAplicarCambiosAlumno_clicked()
{

}

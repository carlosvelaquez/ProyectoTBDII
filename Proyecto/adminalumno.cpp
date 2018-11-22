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



/* ============= Metodo que actualiza todos los componentes que haga uso de Alumnos en DataBase ============= */
void AdminAlumno::refreshWidgets(){

    //Se llena el comboBox de "Eliminar Alumno" y de "Actualizar"
    for(int i=0; i<database->getAlumnos()->size(); i++){
        ui->comboBoxAlumnos->addItem(QString::fromStdString(database->getAlumnos()->at(i)->getUID()));
        ui->comboBoxAlumnoActualizar->addItem(QString::fromStdString(database->getAlumnos()->at(i)->getUID()));
    }

    //Se llena el Table de Agregar Alumno

}/* ============================================================================== */



/* ============= Metodo que agrega la variable DataBase que maneja todo ============= */
void AdminAlumno::setDatabase(Database* ndatabase){
    database = ndatabase;
}/* ============================================================================== */





/* ============= Boton que elimina un alumno. ============= */
void AdminAlumno::on_pushButtonEliminarAlumno_clicked()
{
    QString uid = ui->comboBoxAlumnos->currentText();
    for(int i=0; i < database->getAlumnos()->size(); i++){
        if(database->getAlumnos()->at(i)->getUID() == uid.toStdString()){
            database->getAlumnos()->erase(database->getAlumnos()->begin()+i);
        }
    }
    refreshWidgets();
}/* ============================================================================== */




/* ============= Slot del boton que agrega alumnos ============= */
void AdminAlumno::on_pushButtonAgregarAlumnos_clicked()
{
    QString nombre = ui->lineEditNombreAlumno->text();
    QString apellido = ui->lineEditApellidoAlumno->text();
    if(nombre.isEmpty()|| apellido.isEmpty()){
        ui->lineEditNombreAlumno->setText(" -- Llene esta información");
        ui->lineEditApellidoAlumno->setText(" -- Llene esta información");
    }else{

        /*Se agregan todos los atributos de la clase Alumno
          nombre
          apellidos
          y clases
        */
        newAlumno->setNombres(nombre.toStdString()); // Asigna nombre
        newAlumno->setApellidos(apellido.toStdString()); //Asigna apellido


        database->getAlumnos()->push_back(newAlumno); //Se agrega a "database" el nuevo alumno


        newAlumno = NULL;
    }
    ui->lineEditApellidoAlumno->setText("");
    ui->lineEditNombreAlumno->setText("");
    refreshWidgets();
}/* ============================================================================== */



/* ============= Boton que aplica los cambios hechos al alumno. ============= */
void AdminAlumno::on_pushButtonAplicarCambiosAlumno_clicked()
{
    QString nombre = ui->lineEditNombresAlumnosNuevo->text(); //Se toma el nombre
    QString apellido = ui->lineEditApellidoAlumnoNuevo->text(); //Se toma el apellido

    if(!nombre.isEmpty() || !apellido.isEmpty()){ //Si no estan vacios
        Alumno* temp;

        QString text = ui->comboBoxAlumnoActualizar->currentText(); //El UID que se selecciona del combobox

        for(int i=0; i<database->getAlumnos()->size(); i++){
            if(text.toStdString() == database->getAlumnos()->at(i)->getUID()){
                temp = database->getAlumnos()->at(i);
            }
        }

        //Al temporal se le agregan los nombres y los apellidos
        temp->setNombres(nombre.toStdString());
        temp->setApellidos(apellido.toStdString());
    }

    //Se vacian los lineEdit
    ui->lineEditApellidoAlumnoNuevo->setText("");
    ui->lineEditNombresAlumnosNuevo->setText("");

    refreshWidgets();
}/* ============================================================================== */



/*============= Se agregan los tipos de licencias que se seleccionan del table =============*/
void AdminAlumno::on_pushButtonAgregarTipoLicencia_clicked()
{

}/* ============================================================================== */


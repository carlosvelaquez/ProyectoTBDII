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
    connect(ui->pushButtonAgregarAlumno, SIGNAL(clicked()), this, SLOT(on_pushButtonEliminarAlumno_clicked()));
    connect(ui->pushButtonEliminarAlumno, SIGNAL(clicked()), this, SLOT(on_pushButtonAgregarAlumnos_clicked()));
    connect(ui->comboBoxAlumnoActualizar, SIGNAL(clicked()), this, SLOT(on_pushButtonAplicarCambiosAlumno_clicked()));
    connect(ui->pushButtonLicenciaAlumno, SIGNAL(clicked()), this, SLOT(getLicencia()));
    //refreshWidgets();
}

AdminAlumno::~AdminAlumno()
{
    delete ui;
}

/* ============= Metodo que actualiza todos los componentes que haga uso de Alumnos en DataBase ============= */
void AdminAlumno::refreshWidgets(){
    //Se llena el comboBox de "Eliminar Alumno" y de "Actualizar"
    for(size_t i=0; i<10; i++){
        ui->comboBoxAlumnos->addItem(QString::fromStdString(database->genUID()));
        ui->comboBoxAlumnoActualizar->addItem(QString::fromStdString(database->genUID()));
    }

    for(size_t i=0; i<10; i++){
        ui->comboBoxLicenciaAlumno->addItem(QString::fromStdString(database->genUID()));
    }
}/* ============================================================================== */



/* ============= Metodo que agrega la variable DataBase que maneja todo ============= */
void AdminAlumno::setDatabase(Database* ndatabase){
    database = ndatabase;
}/* ============================================================================== */





/* ============= Boton que elimina un alumno. ============= */
void AdminAlumno::on_pushButtonEliminarAlumno_clicked()
{
    QString uid = ui->comboBoxAlumnos->currentText();
    for(size_t i=0; i < database->getAlumnos().size(); i++){
        if(database->getAlumnos().at(i)->getUID() == uid.toStdString()){
            database->getAlumnos().at(i)->setBorrar(true);
        }
    }
    database->push();
}/* ============================================================================== */




/* ============= Slot del boton que agrega alumnos ============= */
void AdminAlumno::on_pushButtonAgregarAlumnos_clicked()
{
    QString nombre = ui->lineEditNombreAlumno->text();
    QString apellido = ui->lineEditApellidoAlumno->text();

    if(nombre != "" && apellido !=""){

        /*Se agregan todos los atributos de la clase Alumno
          nombre
          apellidos
          y clases
        */
        newAlumno->setNombres(nombre.toStdString()); // Asigna nombre
        newAlumno->setApellidos(apellido.toStdString()); //Asigna apellido


        if(licencias.size()>0){
            for(size_t i = 0; i< licencias.size(); i++){ //Se añaden las licencias hechas con anticipacion
                newAlumno->getLicencias()->push_back(licencias.at(i));
            }
            database->insertarAlumno(newAlumno); //Se agrega a "database" el nuevo alumno

            ui->lineEditApellidoAlumno->setText("");
            ui->lineEditNombreAlumno->setText("");
        }



        newAlumno = NULL;

        //database->push();
        database->push();
    }

}/* ============================================================================== */



/* ============= Boton que aplica los cambios hechos al alumno. ============= */
void AdminAlumno::on_pushButtonAplicarCambiosAlumno_clicked()
{
    qDebug()<<"Aplicando cambios";
    QString nombre = ui->lineEditNombresAlumnosNuevo->text(); //Se toma el nombre
    QString apellido = ui->lineEditApellidoAlumnoNuevo->text(); //Se toma el apellido

    if(nombre !="" && apellido!=""){ //Si no estan vacios
        Alumno* temp;
        QString text = ui->comboBoxAlumnoActualizar->currentText(); //El UID que se selecciona del combobox

        for(size_t i=0; i<database->getAlumnos().size(); i++){
            if(text.toStdString() == database->getAlumnos().at(i)->getUID()){
                temp = database->getAlumnos().at(i);

                //Al temporal se le agregan los nombres y los apellidos
                temp->setNombres(nombre.toStdString());
                temp->setApellidos(apellido.toStdString());

                //Se vacian los lineEdit
                ui->lineEditApellidoAlumnoNuevo->setText("");
                ui->lineEditNombresAlumnosNuevo->setText("");
                ui->comboBoxAlumnoActualizar->setCurrentIndex(0);
            }
        }

        temp = 0;
        delete temp;
    }


    database->push();
}/* ============================================================================== */


void AdminAlumno::getLicencia(){

    qDebug()<<"Tomando licencia";
    QString word = ui->comboBoxLicenciaAlumno->currentText();
    for(size_t i=0; i<database->getTiposLicencia().size(); i++){
        if(word.toStdString() == database->getTiposLicencia().at(i)->getUID() ){
            licencias.push_back(database->getTiposLicencia().at(i));
        }
    }

}





/*============= Esto se olvida =============*/
void AdminAlumno::on_pushButtonAgregarTipoLicencia_clicked()
{

}/* ============================================================================== */

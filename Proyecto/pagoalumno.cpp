#include "pagoalumno.h"
#include "ui_pagoalumno.h"

PagoAlumno::PagoAlumno(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PagoAlumno)
{
    ui->setupUi(this);
}

PagoAlumno::~PagoAlumno()
{
    delete ui;
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(pushButtonRealizarPago()));
}

//Se añade el "database" principal
void PagoAlumno::setDatabase(Database* nDatabase){
    database = nDatabase;
}

//Se refrescan los widgets de adminclase
void PagoAlumno::refreshWidgets(){
    QString word;

    for(size_t i=0; i<database->getAlumnos().size(); i++){
        word = QString::fromStdString(database->getAlumnos().at(i)->getUID())+" | "+QString::fromStdString(database->getAlumnos().at(i)->getNombres());
        ui->comboBoxPagoAlumno->addItem(word);
    }
}


void PagoAlumno::pushButtonRealizarPago(){

}

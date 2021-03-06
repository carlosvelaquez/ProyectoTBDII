#include "adminlicencia.h"
#include "ui_adminlicencia.h"
#include "TipoLicencia.h"


AdminLicencia::AdminLicencia(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AdminLicencia)
{
    ui->setupUi(this);
    connect(ui->pushButtonAgregarLicencia, SIGNAL(clicked()), this, SLOT(pushButtonAgregarLicencia()));
    connect(ui->pushButtonEliminarLicencia, SIGNAL(clicked()), this, SLOT(pushButtonEliminarLicencia()));
    connect(ui->pushButtonModificaLicencia_2, SIGNAL(clicked()), this, SLOT(pushButtonModificarLicencia()));
    //refreshWidgets();
}

AdminLicencia::~AdminLicencia()
{
    delete ui;
}

//Se añade el "database" principal
void AdminLicencia::setDatabase(Database* nDatabase){
    database = nDatabase;
}

//Se refrescan los widgets de adminclase
void AdminLicencia::refreshWidgets(){
    QString word;
    for(size_t i=0; i<10; i++){
        word = QString::fromStdString(database->genUID());
        ui->comboBox->addItem(word);
        ui->comboBoxSeleccionarModificarLicencia->addItem(word);
    }

}



/* =============== Agregar Licencia ===============*/
void AdminLicencia::pushButtonAgregarLicencia(){

    float number = ui->doubleSpinBoxCostoLicencia->value();
    QString documento = ui->lineEditDocumentoAlumno->text();

    if(number!=0 && documento!=""){
        database->insertarTipoLicencia(new TipoLicencia(number, documento.toStdString()));

        ui->doubleSpinBoxCostoLicencia->setValue(0);
        ui->lineEditDocumentoAlumno->setText("");

    }

    database->push();
}/*====================================================================*/



/* =============== Eliminar Licencia ===============*/
void AdminLicencia::pushButtonEliminarLicencia(){
    QString currentLicencia = ui->comboBox->currentText();
    QStringList array = currentLicencia.split(" | ");
    for(size_t i=0; i<database->getTiposLicencia().size(); i++){
        if(database->getTiposLicencia().at(i)->getUID() == array.at(0).toStdString()){
            database->getTiposLicencia().at(i)->setBorrar(true);
        }
    }
    database->push();
}/*====================================================================*/



/* =============== Modificar Licencia ===============*/
void AdminLicencia::pushButtonModificarLicencia(){
    float costo = ui->doubleSpinBoxCostoLicenciaNuevo->value();
    QString documento = ui->lineEditDocumentoAlumnoNuevo->text();

    if(costo!=0 && documento!=""){

        QString word = ui->comboBoxSeleccionarModificarLicencia->currentText();
        QStringList array = word.split(" | ");

        TipoLicencia* temp;
        for(size_t i=0; i<database->getTiposLicencia().size(); i++){
            if(array.at(0).toStdString() == database->getTiposLicencia().at(i)->getUID()){
                temp = database->getTiposLicencia().at(i);

                temp->setDocumentos(documento.toStdString());
                temp->setCostoMatricula(costo);
            }
        }
        temp = 0;
        delete temp;
    }

    database->push();
}/*====================================================================*/

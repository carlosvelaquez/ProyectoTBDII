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
    refreshWidgets();
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
    for(size_t i=0; i<database->getTiposLicencia()->size(); i++){
        word = QString::fromStdString(database->getTiposLicencia()->at(i)->getUID())+" | "+QString::fromStdString(database->getTiposLicencia()->at(i)->getDocumentos());
        ui->comboBox->addItem(word);
        ui->comboBoxSeleccionarModificarLicencia->addItem(word);
    }

}



/* =============== Agregar Licencia ===============*/
void AdminLicencia::pushButtonAgregarLicencia(){

    float number = ui->doubleSpinBoxCostoLicencia->value();
    QString documento = ui->lineEditDocumentoAlumno->text();

    if(number!=0 && documento!=""){
        database->getTiposLicencia()->push_back(new TipoLicencia(number, documento.toStdString()));

        ui->doubleSpinBoxCostoLicencia->setValue(0);
        ui->lineEditDocumentoAlumno->setText("");

        refreshWidgets();
    }
}/*====================================================================*/



/* =============== Eliminar Licencia ===============*/
void AdminLicencia::pushButtonEliminarLicencia(){
    QString currentLicencia = ui->comboBox->currentText();
    QStringList array = currentLicencia.split(" | ");
    for(size_t i=0; i<database->getTiposLicencia()->size(); i++){
        if(database->getTiposLicencia()->at(i)->getUID() == array.at(0).toStdString()){
            database->getTiposLicencia()->at(i)->setBorrar(true);
        }
    }
    refreshWidgets();
}/*====================================================================*/



/* =============== Modificar Licencia ===============*/
void AdminLicencia::pushButtonModificarLicencia(){

}/*====================================================================*/

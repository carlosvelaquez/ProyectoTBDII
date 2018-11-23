#include "adminprofesor.h"
#include "ui_adminprofesor.h"

AdminProfesor::AdminProfesor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AdminProfesor)
{
    ui->setupUi(this);
    connect(ui->pushButtonAgregarProfesor, SIGNAL(clicked()), this, SLOT(pushButtonAgregarProfesor()));
    connect(ui->pushButtonEliminarProfesor, SIGNAL(clicked()), this, SLOT(pushButtonEliminarProfesor()));
    connect(ui->pushButtonModificarProfesor, SIGNAL(clicked()), this, SLOT(pushButtonModificarProfesor()));
    refreshWidgets();
}

AdminProfesor::~AdminProfesor()
{
    delete ui;
}

// Recargar todos los widgets
void AdminProfesor::refreshWidgets(){

}

/* =========== Agregar Profesor =========== */
void AdminProfesor::pushButtonAgregarProfesor(){

}/*==========================================*/


/* =========== Eliminar Profesor =========== */
void AdminProfesor::pushButtonEliminarProfesor(){

}/*==========================================*/

/* =========== Modificar Profesor =========== */
void AdminProfesor::pushButtonModificarProfesor(){

}/*==========================================*/

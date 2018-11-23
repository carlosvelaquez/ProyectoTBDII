#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "adminalumno.h"
#include "adminprofesor.h"
#include "adminempleado.h"
#include "adminclase.h"
#include "adminlicencia.h"
#include "Database.h"
#include "pagoalumno.h"
#include "adminvehiculo.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(adminVehiculos()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

// Administrar Alumnos
void MainWindow::on_AdminAlumnosButton_clicked()
{
    AdminAlumno* ad = new AdminAlumno();
    ad->setDatabase(&database);
    ad->refreshWidgets();
    ad->show();
}

// Administrar Empleados
void MainWindow::on_AdminEmpleadosButton_clicked()
{
    AdminEmpleado* ad = new AdminEmpleado();
    ad->setDatabase(&database);
    ad->refreshWidgets();
    ad->show();
}

//Administrar Profesores
void MainWindow::on_AdminProfesoresButton_clicked()
{
    AdminProfesor* ad = new AdminProfesor();
    ad->refreshWidgets();
        ad->show();
}

//Administrar Licencias
void MainWindow::on_AdminLicenciaButton_clicked()
{
    AdminLicencia* ad = new AdminLicencia();
    ad->setDatabase(&database);
    ad->refreshWidgets();
    ad->show();
}

//Administrar Vehiculos

//
void MainWindow::on_AdminClaseButton_clicked()
{
    AdminClase* ad = new AdminClase();
    ad->setDatabase(&database);
    ad->refreshWidgets();
    ad->show();
}

//Administrar Pagos
void MainWindow::pagoAlumnoWindow(){
    PagoAlumno* ad = new PagoAlumno();
    //ad->refreshWidgets();
        ad->show();

}

//Administrar Vehiculos
void MainWindow::adminVehiculos(){
    adminvehiculo* ad = new adminvehiculo();
    ad->setDatabase(&database);
    ad->refreshWidgets();
    ad->show();
}

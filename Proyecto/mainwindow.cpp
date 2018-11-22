#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "adminalumno.h"
#include "adminprofesor.h"
#include "adminempleado.h"
#include "adminclase.h"
#include "adminlicencia.h"
#include "Database.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

// Administrar Alumnos
void MainWindow::on_AdminAlumnosButton_clicked()
{
    AdminAlumno* ad = new AdminAlumno();

    ad->show();
}


void MainWindow::on_AdminEmpleadosButton_clicked()
{
    AdminEmpleado* ad = new AdminEmpleado();
    ad->show();
}


void MainWindow::on_AdminProfesoresButton_clicked()
{
    AdminProfesor* ad = new AdminProfesor();
    ad->show();
}



void MainWindow::on_AdminLicenciaButton_clicked()
{
    AdminLicencia* ad = new AdminLicencia();
    ad->show();
}


void MainWindow::on_AdminClaseButton_clicked()
{
    AdminClase* ad = new AdminClase();
    ad->show();
}

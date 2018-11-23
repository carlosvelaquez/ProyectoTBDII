#ifndef ADMINALUMNO_H
#define ADMINALUMNO_H

#include <QWidget>
#include "Database.h"
#include "Alumno.h"
#include "Clase.h"
#include <vector>
#include "TipoLicencia.h"

namespace Ui {
class AdminAlumno;
}

class AdminAlumno : public QWidget
{
    Q_OBJECT

public:

    //Metodo que toma el "DataBase" principal
    void setDatabase(Database*);

    //Metodo que refresca los comboBox y la Table
    void refreshWidgets();

    explicit AdminAlumno(QWidget *parent = 0);
    ~AdminAlumno();


private slots:

    void on_pushButtonEliminarAlumno_clicked();

    void on_pushButtonAgregarAlumnos_clicked();

    void on_pushButtonAplicarCambiosAlumno_clicked();

    void on_pushButtonAgregarTipoLicencia_clicked();

    void getLicencia();

private:
    vector<TipoLicencia*> licencias;
    Alumno* newAlumno;
    Database* database;
    Ui::AdminAlumno *ui;
};

#endif // ADMINALUMNO_H

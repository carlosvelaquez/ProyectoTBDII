#ifndef ADMINALUMNO_H
#define ADMINALUMNO_H

#include <QWidget>
#include "Database.h"
#include "Alumno.h"

namespace Ui {
class AdminAlumno;
}

class AdminAlumno : public QWidget
{
    Q_OBJECT

public:
    void setDatabase(Database*);
    void refreshWidgets();

    explicit AdminAlumno(QWidget *parent = 0);
    ~AdminAlumno();


private slots:

    void on_pushButtonEliminarAlumno_clicked();

    void on_pushButtonAgregarAlumnos_clicked();

    void on_pushButtonAplicarCambiosAlumno_clicked();

    void on_pushButtonAgregarTipoLicencia_clicked();

private:
    Alumno* newAlumno;
    Database* database;
    Ui::AdminAlumno *ui;
};

#endif // ADMINALUMNO_H

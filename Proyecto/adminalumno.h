#ifndef ADMINALUMNO_H
#define ADMINALUMNO_H

#include <QWidget>
#include "Database.h"


namespace Ui {
class AdminAlumno;
}

class AdminAlumno : public QWidget
{
    Q_OBJECT

public:
    void setDatabase(Database*);

    explicit AdminAlumno(QWidget *parent = 0);
    ~AdminAlumno();


private slots:
    void on_pushButton_clicked();

    void on_pushButtonEliminarAlumno_clicked();

    void on_pushButtonAgregarAlumnos_clicked();

    void on_pushButtonAplicarCambiosAlumno_clicked();

    void on_pushButtonAgregarAlumno_clicked();

private:
    Database* database;
    Ui::AdminAlumno *ui;
};

#endif // ADMINALUMNO_H

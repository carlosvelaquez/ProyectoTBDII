#ifndef ADMINPROFESOR_H
#define ADMINPROFESOR_H

#include <QWidget>
#include "Profesor.h"
#include "Database.h"

namespace Ui {
class AdminProfesor;
}

class AdminProfesor : public QWidget
{
    Q_OBJECT

public:
    //Se añade el "database" principal
    void setDatabase(Database*);

    //Se refrescan los widgets de adminclase
    void refreshWidgets();

    explicit AdminProfesor(QWidget *parent = 0);
    ~AdminProfesor();

private slots:

    void pushButtonAgregarProfesor();
    void pushButtonEliminarProfesor();
    void pushButtonModificarProfesor();

private:
    Database* database;
    Ui::AdminProfesor *ui;
};

#endif // ADMINPROFESOR_H

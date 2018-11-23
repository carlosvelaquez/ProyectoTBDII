#ifndef ADMINEMPLEADO_H
#define ADMINEMPLEADO_H

#include <QWidget>
#include "Database.h"

namespace Ui {
class AdminEmpleado;
}

class AdminEmpleado : public QWidget
{
    Q_OBJECT

public:

    //Se añade el "database" principal
    void setDatabase(Database*);

    //Se refrescan los widgets de adminclase
    void refreshWidgets();

    explicit AdminEmpleado(QWidget *parent = 0);
    ~AdminEmpleado();

private slots:
    void pushButtonAgregarEmpleado();
    void pushButtonEliminarEmpleado();
    void pushButtonModificarEmpleado();

private:
    Database* database;
    Ui::AdminEmpleado *ui;
};

#endif // ADMINEMPLEADO_H

#ifndef ADMINVEHICULO_H
#define ADMINVEHICULO_H

#include <QWidget>
#include "Vehiculo.h"
#include "Database.h"

namespace Ui {
class adminvehiculo;
}

class adminvehiculo : public QWidget
{
    Q_OBJECT

public:

    //Se añade el "database" principal
    void setDatabase(Database*);

    //Se refrescan los widgets de adminclase
    void refreshWidgets();

    explicit adminvehiculo(QWidget *parent = nullptr);
    ~adminvehiculo();

private slots:

    void pushButtonAgregarVehiculo();
    void pushButtonEliminarVehiculo();
    void pushButtonModificaVehiculo();

private:

    Database* database;
    Ui::adminvehiculo *ui;
};

#endif // ADMINVEHICULO_H

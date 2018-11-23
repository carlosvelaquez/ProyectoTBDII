#ifndef ADMINLICENCIA_H
#define ADMINLICENCIA_H

#include <QWidget>
#include "Database.h"

namespace Ui {
class AdminLicencia;
}

class AdminLicencia : public QWidget
{
    Q_OBJECT

public:
    //Se añade el "database" principal
    void setDatabase(Database*);

    //Se refrescan los widgets de adminclase
    void refreshWidgets();

    explicit AdminLicencia(QWidget *parent = 0);
    ~AdminLicencia();

private slots:
    void pushButtonAgregarLicencia();
    void pushButtonEliminarLicencia();
    void pushButtonModificarLicencia();

private:
    Ui::AdminLicencia *ui;
    Database* database;
};

#endif // ADMINLICENCIA_H

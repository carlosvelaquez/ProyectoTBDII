#ifndef ADMINCLASE_H
#define ADMINCLASE_H

#include <QWidget>
#include "Clase.h"
#include "Database.h"

namespace Ui {
class AdminClase;
}

class AdminClase : public QWidget
{
    Q_OBJECT

public:

    //Se añade el "database" principal
    void setDatabase(Database*);

    //Se refrescan los widgets de adminclase
    void refreshWidgets();

    explicit AdminClase(QWidget *parent = 0);
    ~AdminClase();

private slots:

  void pushButtonEliminarClase();
  void on_pushButtonAgregarClase_clicked();

private:
    Database* database;
    Clase* newClase;
    Ui::AdminClase *ui;
};

#endif // ADMINCLASE_H

#ifndef PAGOALUMNO_H
#define PAGOALUMNO_H

#include <QWidget>
#include "Database.h"
#include "Pago.h"

namespace Ui {
class PagoAlumno;
}

class PagoAlumno : public QWidget
{
    Q_OBJECT

public:

    //Se añade el "database" principal
    void setDatabase(Database*);

    //Se refrescan los widgets de adminclase
    void refreshWidgets();

    explicit PagoAlumno(QWidget *parent = nullptr);
    ~PagoAlumno();

private slots:

    void pushButtonRealizarPago();

private:
    Database* database;
    Ui::PagoAlumno *ui;
};

#endif // PAGOALUMNO_H

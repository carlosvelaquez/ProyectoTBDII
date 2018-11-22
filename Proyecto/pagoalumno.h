#ifndef PAGOALUMNO_H
#define PAGOALUMNO_H

#include <QWidget>

namespace Ui {
class PagoAlumno;
}

class PagoAlumno : public QWidget
{
    Q_OBJECT

public:
    explicit PagoAlumno(QWidget *parent = nullptr);
    ~PagoAlumno();

private:
    Ui::PagoAlumno *ui;
};

#endif // PAGOALUMNO_H

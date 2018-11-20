#ifndef ADMINEMPLEADO_H
#define ADMINEMPLEADO_H

#include <QWidget>

namespace Ui {
class AdminEmpleado;
}

class AdminEmpleado : public QWidget
{
    Q_OBJECT

public:
    explicit AdminEmpleado(QWidget *parent = 0);
    ~AdminEmpleado();

private:
    Ui::AdminEmpleado *ui;
};

#endif // ADMINEMPLEADO_H

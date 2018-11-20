#ifndef ADMINPROFESOR_H
#define ADMINPROFESOR_H

#include <QWidget>

namespace Ui {
class AdminProfesor;
}

class AdminProfesor : public QWidget
{
    Q_OBJECT

public:
    explicit AdminProfesor(QWidget *parent = 0);
    ~AdminProfesor();

private:
    Ui::AdminProfesor *ui;
};

#endif // ADMINPROFESOR_H

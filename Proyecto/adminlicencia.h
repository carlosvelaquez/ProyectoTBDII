#ifndef ADMINLICENCIA_H
#define ADMINLICENCIA_H

#include <QWidget>

namespace Ui {
class AdminLicencia;
}

class AdminLicencia : public QWidget
{
    Q_OBJECT

public:
    explicit AdminLicencia(QWidget *parent = 0);
    ~AdminLicencia();

private:
    Ui::AdminLicencia *ui;
};

#endif // ADMINLICENCIA_H

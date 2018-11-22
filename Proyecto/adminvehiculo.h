#ifndef ADMINVEHICULO_H
#define ADMINVEHICULO_H

#include <QWidget>

namespace Ui {
class adminvehiculo;
}

class adminvehiculo : public QWidget
{
    Q_OBJECT

public:
    explicit adminvehiculo(QWidget *parent = nullptr);
    ~adminvehiculo();

private:
    Ui::adminvehiculo *ui;
};

#endif // ADMINVEHICULO_H

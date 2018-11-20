#ifndef ADMINALUMNO_H
#define ADMINALUMNO_H

#include <QWidget>

namespace Ui {
class AdminAlumno;
}

class AdminAlumno : public QWidget
{
    Q_OBJECT

public:
    explicit AdminAlumno(QWidget *parent = 0);
    ~AdminAlumno();

private:
    Ui::AdminAlumno *ui;
};

#endif // ADMINALUMNO_H

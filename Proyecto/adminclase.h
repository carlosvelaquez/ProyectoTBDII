#ifndef ADMINCLASE_H
#define ADMINCLASE_H

#include <QWidget>

namespace Ui {
class AdminClase;
}

class AdminClase : public QWidget
{
    Q_OBJECT

public:
    explicit AdminClase(QWidget *parent = 0);
    ~AdminClase();

private slots:

  void on_pushButtonAgregarClase_clicked();

private:
    Ui::AdminClase *ui;
};

#endif // ADMINCLASE_H

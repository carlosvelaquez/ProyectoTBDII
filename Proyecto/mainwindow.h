#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Database.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:


    void on_AdminAlumnosButton_clicked();

    void on_AdminEmpleadosButton_clicked();

    void on_AdminProfesoresButton_clicked();

    void on_AdminLicenciaButton_clicked();

    void on_AdminClaseButton_clicked();

private:
    Database database;
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

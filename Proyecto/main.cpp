#include "mainwindow.h"

#include <cassandra.h>
#include <QApplication>
#include <QString>
#include <QDebug>

#include "Database.h"

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  MainWindow w;
  Database db;

  qDebug() << "-------------------------------";
  qDebug() << "Iniciando Tigrillo AMS...";
  qDebug() << "Version de Cassandra:" << db.version();
  qDebug() << "-------------------------------";
  qDebug() << "Recuperando info de bd...";
  db.pull();
  qDebug() << "Pull realizado exitosamente.";
  qDebug() << "-------------------------------";


  Empleado emp("Carlos André", "Velásquez Martínez", 696969.69);
  qDebug() << emp.toJSON().c_str();
  db.insertarEmpleado(&emp);

  qDebug() << "Subiendo informacion...";
  db.push();
  qDebug() << "Push realizado exitosamente.";
  qDebug() << "-------------------------------";

  qDebug() << "Recuperando info de bd...";
  db.pull();
  qDebug() << "Pull realizado exitosamente.";
  qDebug() << "-------------------------------";
  qDebug() << "Cargando interfaz gráfica...";


  //qDebug() << &emp->toJSON().c_str();

  w.show();
  qDebug() << "-------------------------------";
  return a.exec();
}

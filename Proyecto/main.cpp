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
  w.show();

  Database db;
  qDebug() << db.version();
  qDebug() << "Recuperando info de bd...";
  db.pull();
  qDebug() << "Pull realizado exitosamente.";

  Empleado emp("Carlos André", "Velásquez Martínez", 696969.69);
  qDebug() << emp.toJSON().c_str();
  db.insertarEmpleado(&emp);

  qDebug() << "Subiendo informacion...";
  db.push();
  qDebug() << "Push realizado exitosamente.";
  qDebug() << "Recuperando info de bd...";
  db.pull();
  qDebug() << "Pull realizado exitosamente.";

  //qDebug() << &emp->toJSON().c_str();

  return a.exec();
}

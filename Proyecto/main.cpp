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
  qDebug() << db.version();

  /*Empleado emp("{\"id\" : \"4f0a6510-ed09-11e8-9435-51089ff58209\",  \"apellidos\" : \"Perez\",  \"nombres\" : \"Misules\",  \"salario\" : 4005}");
  qDebug() << emp.toJSON().c_str();
  db.insertarEmpleado(&emp);

  emp.setAlterado(true);
  db.push();*/

  return a.exec();
}

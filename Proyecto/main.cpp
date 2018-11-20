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
  
  return a.exec();
}

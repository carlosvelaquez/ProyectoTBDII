#include "Alumno.h"
#include <QStringList>
#include <QString>

Alumno::Alumno(string nUID, string nNombres, string nApellidos) : Instancia(nUID){
  uid = nUID;
  nombres = nNombres;
  apellidos = nApellidos;
  tablePath = "autoescuela.vehiculos";
}

Alumno::Alumno(string nNombres, string nApellidos) : Instancia(){
  nombres = nNombres;
  apellidos = nApellidos;
}

bool fromJSON(string cadena){
  if(cadena=="") return false;
  QString word = QString::fromStdString(cadena);
  
  return true;
}
string toJSON();

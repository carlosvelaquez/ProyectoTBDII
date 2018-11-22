#include "Alumno.h"
#include <QStringList>
#include <QString>

Alumno::Alumno(string nUID, string nNombres, string nApellidos) : Instancia(nUID){
  nombres = nNombres;
  apellidos = nApellidos;
  tablePath = "autoescuela.alumno";
}

Alumno::Alumno(string nNombres, string nApellidos) : Instancia(){
  nombres = nNombres;
  apellidos = nApellidos;
}

bool Alumno::fromJSON(string cadena){

  return true;
}
string Alumno::toJSON(){
  return "";
}

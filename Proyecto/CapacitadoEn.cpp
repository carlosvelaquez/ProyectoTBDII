#include "CapacitadoEn.h"
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonDocument>

CapacitadoEn::CapacitadoEn(string nUID ,string nUidProfesor, string nUidClase): Instancia(nUID){}
  uid = nUID;
  uidProfesor = nUidProfesor;
  uidClase = nUidClase;
  tablePath = "autoescuela.capacitadoen";
}

CapacitadoEn::CapacitadoEn(string nUidProfesor, string nUidClase){
  uidProfesor = nUidProfesor;
  uidClase = nUidClase;
}

bool Alumno::fromJSON(string cadena){
  QString json = QString::fromStdString(cadena); // String que contiene el JSON
  QJsonDocument doc = QJsonDocument::fromJson(data.toUtf8());
  if(doc.object().isEmpty()){
    return false;
  }else{
    uidProfesor = doc["id_profesor"].toString();
    uidClase = doc["id_clase"].toString();
    return true;
  }
  return false;
}

string Alumno::toJSON(){
  return "";
}

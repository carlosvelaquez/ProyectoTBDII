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
  QJsonDocument doc = QJsonDocument::fromJson(json.toUtf8());
  if(doc.object().isEmpty()){
    return false;
  }else{
    uidProfesor = doc["id_profesor"].toString().toStdString();
    apellidos = doc["id_clase"].toString().toStdString();
    return true;
  }
  return false;
}

string Alumno::toJSON(){
  QJsonObject jsonObj;
  jsonObj.insert("id_profesor",QString::fromStdString(uidProfesor));
  jsonObj.insert("id_clase",QString::fromStdString(uidClase));
  QJsonDocument dec(jsonObj);
  QString strJson(dec.toJson(QJsonDocument::Compact));
  return strJson.toStdString();
}

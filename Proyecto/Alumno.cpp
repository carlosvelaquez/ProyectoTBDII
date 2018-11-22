#include "Alumno.h"
#include <QStringList>
#include <QString>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonDocument>

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
  QString json = QString::fromStdString(cadena); // String que contiene el JSON
  QJsonDocument doc = QJsonDocument::fromJson(data.toUtf8());
  if(doc.object().isEmpty()){
    return false;
  }else{
    nombres = doc["nombres"].toString();
    apellidos = doc["apellidos"].toString();
    return true;
  }
  return false;
}

string Alumno::toJSON(){
  QJsonObject jsonObj;
  jsonObj.insert("id",uid);
  jsonObj.insert("apellidos",apellidos);
  jsonObj.insert("nombres",nombres);
  QJsonDocument dec(jsonObj);
  QString strJson(dec.toJson(QJsonDocument::Compact));
  return strJson.toStdString();
}

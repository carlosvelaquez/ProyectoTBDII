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
  QJsonDocument doc = QJsonDocument::fromJson(json.toUtf8());
  if(doc.object().isEmpty()){
    return false;
  }else{
    nombres = doc["nombres"].toString().toStdString();
    apellidos = doc["apellidos"].toString().toStdString();
    return true;
  }
  return false;
}

string Alumno::toJSON(){
  QJsonObject jsonObj;
  jsonObj.insert("id",QString::fromStdString(uid));
  jsonObj.insert("apellidos",QString::fromStdString(apellidos));
  jsonObj.insert("nombres",QString::fromStdString(nombres));
  QJsonDocument dec(jsonObj);
  QString strJson(dec.toJson(QJsonDocument::Compact));
  return strJson.toStdString();
}

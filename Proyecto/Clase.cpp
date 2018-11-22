#include "Clase.h"

Clase::Clase(string nUID, string nNombre,string nUidProfesor, string nUidVehiculo): Instancia(nUID){
  uid = nUID;
  nombre = nNombre;
  uidProfesor = nUidProfesor;
  uidVehiculo = nUidVehiculo;
  tablePath = "autoescuela.clase";
}

Clase::Clase(string nNombre, string nUidProfesor, string nUidVehiculo): Instancia(){
  nombre = nNombre;
  uidProfesor = nUidProfesor;
  uidVehiculo = nUidVehiculo;
}

bool Clase::fromJSON(string cadena){
  QString json = QString::fromStdString(cadena); // String que contiene el JSON
  QJsonDocument doc = QJsonDocument::fromJson(json.toUtf8());
  if(doc.object().isEmpty()){
    return false;
  }else{
    uid = doc["id"].toString().toStdString();
    uidProfesor = doc["id_profesor"].toString().toStdString();
    uidVehiculo = doc["id_vehiculo"].toString().toStdString();
    nombre = doc["nombre"].toString().toStdString();
    return true;
  }
  return false;
}

string Clase::toJSON(){
  QJsonObject jsonObj;
  jsonObj.insert("id",QString::fromStdString(uid));
  jsonObj.insert("id_profesor",QString::fromStdString(uidProfesor));
  jsonObj.insert("id_vehiculo",QString::fromStdString(uidVehiculo));
  jsonObj.insert("nombre",QString::fromStdString(nombre));
  QJsonDocument dec(jsonObj);
  QString strJson(dec.toJson(QJsonDocument::Compact));
  return strJson.toStdString();
}

//Setters
void Clase::setNombre(string nNombre){
  nombre = nNombre;
  alterado = true;
}

void Clase::setUIDVehiculo(string nUidVehiculo){
  uidVehiculo = nUidVehiculo;
  alterado  =true;
}

void Clase::setUIDProfesor(string nUidProfesor){
  uidProfesor = nUidProfesor;
  alterado = true;
}

//Getters
string Clase::getNombre(){
  return nombre;
}

string Clase::getUIDVehiculo(){
  return nUidVehiculo;
}

string Clase::getUIDProfesor(){
  return uidProfesor;
}

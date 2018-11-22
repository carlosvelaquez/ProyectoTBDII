#include "Vehiculo.h"

Vehiculo::Vehiculo(string json){
  fromJSON(json);
}

Vehiculo::Vehiculo(string nUID, string nUIDCategoria) : Instancia(nUID){
  uid = nUID;
  uidCategoria = nUIDCategoria;
  tablePath = "autoescuela.vehiculos";
}

/*Vehiculo::Vehiculo(string nUIDCategoria) : Instancia(){
  uidCategoria = nUIDCategoria;
}*/

bool Vehiculo::fromJSON(string cadena){
  QString json = QString::fromStdString(cadena); // String que contiene el JSON
  QJsonDocument doc = QJsonDocument::fromJson(json.toUtf8());
  if(doc.object().isEmpty()){
    return false;
  }else{
    uid = doc["id"].toString().toStdString();
    uidCategoria = doc["id_categoria"].toString().toStdString();
    return true;
  }
  return false;
}

string Vehiculo::toJSON(){
  QJsonObject jsonObj;
  jsonObj.insert("id",QString::fromStdString(uid));
  jsonObj.insert("id_categoria",QString::fromStdString(uidCategoria));
  QJsonDocument dec(jsonObj);
  QString strJson(dec.toJson(QJsonDocument::Compact));
  return strJson.toStdString();
}

//Setters
void Vehiculo::setUIDCategoria(string nUIDCategoria){
  alterado = true;
  uidCategoria = nUIDCategoria;
}

void Vehiculo::setClase(Clase* nClase){
  clase = nClase;
  alterado = true;
}

//Getters
string Vehiculo::getUIDCategoria(){
  return uidCategoria;
}

Clase* Vehiculo::getClase(){
  return clase;
}

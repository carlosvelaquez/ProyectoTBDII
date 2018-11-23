#include "ClasePractica.h"


ClasePractica::ClasePractica(string json) : Instancia(){
    fromJSON(json);
    tablePath = "autoescuela.clasepractica";
}

ClasePractica::ClasePractica(string nUID,string nUidClase):Instancia(nUID){
  uid = nUID;
  uidClase = nUidClase;
  tablePath = "autoescuela.clasepractica";
}

bool ClasePractica::fromJSON(string cadena){
  QString json = QString::fromStdString(cadena); // String que contiene el JSON
  QJsonDocument doc = QJsonDocument::fromJson(json.toUtf8());
  if(doc.object().isEmpty()){
    return false;
  }else{
    uid = doc["id"].toString().toStdString();
    uidClase = doc["id_clase"].toString().toStdString();
    UIDLicencia = doc["id_tipolicencia"].toString().toStdString();
    return true;
  }
  return false;
}

string ClasePractica::toJSON(){
  QJsonObject jsonObj;
  jsonObj.insert("id",QString::fromStdString(uid));
  jsonObj.insert("id_clase",QString::fromStdString(uidClase));
  jsonObj.insert("id_tipolicencia",QString::fromStdString(UIDLicencia));
  QJsonDocument dec(jsonObj);
  QString strJson(dec.toJson(QJsonDocument::Compact));
  return strJson.toStdString();
}

//Setters
void ClasePractica::setUIDClase(string nUidClase){
  uidClase = nUidClase;
  alterado = true;
}

void ClasePractica::setLicencia(TipoLicencia* nLicencia){
  licencia = nLicencia;
  alterado = true;
}

void ClasePractica::setUIDLicencia(string nUIDLicencia){
  UIDLicencia = nUIDLicencia;
  alterado = true;
}

//Getters
string ClasePractica::getUIDClase(){
  return uidClase;
}

TipoLicencia* ClasePractica::getLicencia(){
  return licencia;
}

string ClasePractica::getUIDLicencia(){
  return UIDlicencia;
}

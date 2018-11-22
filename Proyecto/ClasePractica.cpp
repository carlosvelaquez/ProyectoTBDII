#include "ClasePractica.h"

ClasePractica::ClasePractica(string nUID,string nUidClase):Instancia(nUID){
  uid = nUID;
  uidClase = nUidClase;
  tablePath = "autoescuela.clasepractica";
}

ClasePractica::ClasePractica(string nUidClase):Instancia(){
  uidClase = nUidClase;
}

bool ClasePractica::fromJSON(string cadena){
  QString json = QString::fromStdString(cadena); // String que contiene el JSON
  QJsonDocument doc = QJsonDocument::fromJson(json.toUtf8());
  if(doc.object().isEmpty()){
    return false;
  }else{
    uid = doc["id"].toString().toStdString();
    uidClase = doc["id_clase"].toString().toStdString();
    return true;
  }
  return false;
}

string ClasePractica::toJSON(){
  QJsonObject jsonObj;
  jsonObj.insert("id",QString::fromStdString(uid));
  jsonObj.insert("id_clase",QString::fromStdString(uidClase));
  QJsonDocument dec(jsonObj);
  QString strJson(dec.toJson(QJsonDocument::Compact));
  return strJson.toStdString();
}

#include "ClaseTeorica.h"

ClaseTeorica::ClaseTeorica(string json){
  fromJSON(json);
}

ClaseTeorica::ClaseTeorica(string nUID, string nUidClase):Instancia(nUID){
  uid = nUID;
  uidClase = nUidClase;
  tablePath = "autoescuela.claseteorica";
}


ClaseTeorica::ClaseTeorica(string nUidClase):Instancia(){
  uidClase = nUidClase;
}

bool ClaseTeorica::fromJSON(string cadena){
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

string ClaseTeorica::toJSON(){
  QJsonObject jsonObj;
  jsonObj.insert("id",QString::fromStdString(uid));
  jsonObj.insert("id_clase",QString::fromStdString(uidClase));
  QJsonDocument dec(jsonObj);
  QString strJson(dec.toJson(QJsonDocument::Compact));
  return strJson.toStdString();
}
//Setters
void ClaseTeorica::setUIDClase(string nUidClase){
  uidClase = nUidClase;
  alterado = true;
}

//Getters
string ClaseTeorica::getUIDClase(){
  return uidClase;
}

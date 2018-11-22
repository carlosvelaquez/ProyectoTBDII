#include "Categoria.h"

Categoria::Categoria(string nUID, string nLujo, string nTamano, float nTarifa) : Instancia(nUID){
  uid = nUID;
  lujo = nLujo;
  tamano = nTamano;
  tarifa = nTarifa;
  tablePath = "autoescuela.categoriavehiculo";
}

Categoria::Categoria(string nLujo, string nTamano, float nTarifa) : Instancia(){
  lujo = nLujo;
  tamano = nTamano;
  tarifa = nTarifa;
}

bool Categoria::fromJSON(string cadena){
  QString json = QString::fromStdString(cadena); // String que contiene el JSON
  QJsonDocument doc = QJsonDocument::fromJson(json.toUtf8());
  if(doc.object().isEmpty()){
    return false;
  }else{
    uid = doc["id"].toString().toStdString();
    lujo = doc["lujo"].toString().toStdString();
    tamano = doc["tamano"].toString().toStdString();
    tarifa = doc["tarifa"].toString().toStdString();
    return true;
  }
  return false;
}

string Categoria::toJSON(){
  QJsonObject jsonObj;
  jsonObj.insert("id",QString::fromStdString(uid));
  jsonObj.insert("lujo",QString::fromStdString(lujo));
  jsonObj.insert("tamano",QString::fromStdString(tamano));
  jsonObj.insert("tarifa",QString::fromStdString(tarifa));
  QJsonDocument dec(jsonObj);
  QString strJson(dec.toJson(QJsonDocument::Compact));
  return strJson.toStdString();
}

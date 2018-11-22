#include "ClasePractica.h"


ClasePractica::ClasePractica(string json) : Instancia(){
    fromJSON(json);
}

ClasePractica::ClasePractica(string nUID,string nUidClase):Instancia(nUID){
  uid = nUID;
  uidClase = nUidClase;
  tablePath = "autoescuela.clasepractica";
}

<<<<<<< HEAD
/*ClasePractica::ClasePractica(string nUidClase):Instancia(){
  uidClase = nUidClase;
}*/

=======
>>>>>>> 76fe86c347f8c484851fe091fe209595fe431b06
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

//Setters
void ClasePractica::setUIDClase(string nUidClase){
  uidClase = nUidClase;
  alterado = true;
}

//Getters
string ClasePractica::getUIDClase(){
  return uidClase;
}

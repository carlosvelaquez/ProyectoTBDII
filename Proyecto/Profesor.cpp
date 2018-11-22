#include "Profesor.h"

Profesor::Profesor(string json){
  fromJSON(json);
  tablePath  = "autoescuela.profesor";
}

Profesor::Profesor(string nUID, string nUidEmpleado, int nCategoria): Instancia(nUID){
  uid = nUID;
  uidEmpleado = nUidEmpleado;
  categoria = nCategoria;
  tablePath  = "autoescuela.profesor";
}

Profesor::Profesor(string nUidEmpleado, int nCategoria) : Instancia(){
  uidEmpleado = nUidEmpleado;
  categoria = nCategoria;
  tablePath  = "autoescuela.profesor";
}

bool Profesor::fromJSON(string cadena){
  QString json = QString::fromStdString(cadena); // String que contiene el JSON
  QJsonDocument doc = QJsonDocument::fromJson(json.toUtf8());
  if(doc.object().isEmpty()){
    return false;
  }else{
    uid = doc["id"].toString().toStdString();
    categoria = doc["categoria"].toInt();
    uidEmpleado = doc["id_empleado"].toString().toStdString();
    return true;
  }
  return false;
}

string Profesor::toJSON(){
  QJsonObject jsonObj;
  jsonObj.insert("id",QString::fromStdString(uid));
  jsonObj.insert("categoria",categoria);
  jsonObj.insert("id_empleado",QString::fromStdString(uidEmpleado));
  QJsonDocument dec(jsonObj);
  QString strJson(dec.toJson(QJsonDocument::Compact));
  return strJson.toStdString();
}

//Setters
void Profesor::setUIDEmpleado(string nUidEmpleado){
  alterado  = true;
  uidEmpleado = nUidEmpleado;
}

void Profesor::setCategoria(int nCategoria){
  alterado = true;
  categoria = nCategoria;
}


//Getters
string Profesor::getUIDEmpleado(){
  return uidEmpleado;
}

int Profesor::getCategoria(){
  return categoria;
}

vector<Clase*>* Profesor::getClases(){
  return &clases;
}

vector<TipoLicencia*>* Profesor::getCapacitadoEn(){
  return &capacitadoEn;
}

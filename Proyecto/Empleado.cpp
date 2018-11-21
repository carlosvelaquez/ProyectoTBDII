#include "Empleado.h"

Empleado::Empleado(string json){
  fromJSON(json);
}

Empleado::Empleado(string nUID, string nNombres, string nApellidos, float nSalario) : Instancia(nUID){
  uid = nUID;
  nombres = nNombres;
  apellidos = nApellidos;
  salario = nSalario;
  tablePath = "autoescuela.empleados";

}

Empleado::Empleado(string nNombres, string nApellidos, float nSalario) : Instancia(){
  nombres = nNombres;
  apellidos = nApellidos;
  salario = nSalario;
}

string Empleado::getNombres(){
  return nombres;
}

string Empleado::getApellidos(){
  return apellidos;
}

float Empleado::getSalario(){
  return salario;
}


//EN TODOS ESTOS SE PONE ALTERADO = TRUE
void Empleado::setNombres(string nNombres){
  alterado = true;
  nombres = nNombres;
}

void Empleado::setApellidos(string nApellidos){
  alterado = true;
  apellidos = nApellidos;
}

void Empleado::setSalario(float nSalario){
  alterado = true;
  salario = nSalario;
}


bool Empleado::fromJSON(string cadena){
  QString json = QString::fromStdString(cadena); // String que contiene el JSON
  QJsonDocument doc = QJsonDocument::fromJson(json.toUtf8());
  if(doc.object().isEmpty()){
    return false;
  }else{
    uid = doc["id"].toString().toStdString();
    apellidos = doc["apellidos"].toString().toStdString();
    nombres = doc["nombres"].toString().toStdString();
    salario = doc["salario"].toInt();
    return true;
  }
  return false;
}

string Empleado::toJSON(){
  QJsonObject jsonObj;
  jsonObj.insert("id",QString::fromStdString(uid));
  jsonObj.insert("apellidos",QString::fromStdString(apellidos));
  jsonObj.insert("nombres",QString::fromStdString(nombres));
  jsonObj.insert("salario",salario);
  QJsonDocument dec(jsonObj);
  QString strJson(dec.toJson(QJsonDocument::Compact));
  return strJson.toStdString();
}

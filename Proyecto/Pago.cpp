#include "Pago.h"

Pago::Pago(string json){
  fromJSON(json);
  tablePath = "autoescuela.pago";
}

Pago::Pago(string nUID, string nUidAlumno, float nMonto, string nMotivo): Instancia(nUID){
  uid = nUID;
  uidAlumno = nUidAlumno;
  monto = nMonto;
  motivo = nMotivo;
  tablePath = "autoescuela.pago";
}

Pago::Pago(string nUidAlumno, float nMonto, string nMotivo): Instancia(){
  uidAlumno = nUidAlumno;
  monto = nMonto;
  motivo = nMotivo;
  tablePath = "autoescuela.pago";
}

bool Pago::fromJSON(string cadena){
  QString json = QString::fromStdString(cadena); // String que contiene el JSON
  QJsonDocument doc = QJsonDocument::fromJson(json.toUtf8());
  if(doc.object().isEmpty()){
    return false;
  }else{
    uid = doc["id"].toString().toStdString();
    uidAlumno = doc["id_alumno"].toString().toStdString();
    monto = doc["monto"].toFloat();
    abonado = doc["abonado"].toFloat();
    motivo = doc["motivo"].toString().toStdString();
    return true;
  }
  return false;
}

string Pago::toJSON(){
  QJsonObject jsonObj;
  jsonObj.insert("id",QString::fromStdString(uid));
  jsonObj.insert("id_alumno",QString::fromStdString(uidAlumno));
  jsonObj.insert("monto",monto);
  jsonObj.insert("abonado",abonado);
  jsonObj.insert("motivo",QString::fromStdString(motivo));
  QJsonDocument dec(jsonObj);
  QString strJson(dec.toJson(QJsonDocument::Compact));
  return strJson.toStdString();
}

//Setters
void Pago::setUIDAlumno(string nUidAlumno){
  alterado = true;
  uidAlumno = nUidAlumno;
}

void Pago::setMonto(float nMonto){
  alterado = true;
  monto = nMonto;
}

void Pago::setAbonado(float nAbonado){
  alterado = true;
  abonado = nAbonado;
}

void Pago::setMotivo(string nMotivo){
  alterado = true;
  motivo = nMotivo;
}

void Pago::setAlumno(Alumno* nAlumno){
  alumno = nAlumno;
  uidAlumno = nAlumno->getUID();
  alterado = true;
}

void Pago::setAbonado(float nAbonado){
  abonado = nAbonado;
  alterado = true;
}

//Getters
string Pago::getUIDAlumno(){
  return uidAlumno;
}

float Pago::getMonto(){
  return monto;
}

float Pago::getAbonado(){
  return abonado;
}

string Pago::getMotivo(){
  return motivo;
}

Alumno* Pago::getAlumno(){
  return alumno;
}

float Pago::getAbonado(){
  return abonado;
}

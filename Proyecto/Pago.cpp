#include "Pago.h"

/*
string uidAlumno;
float monto;
string motivo;
*/
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
}

bool Pago::fromJSON(string cadena){
  QString json = QString::fromStdString(cadena); // String que contiene el JSON
  QJsonDocument doc = QJsonDocument::fromJson(json.toUtf8());
  if(doc.object().isEmpty()){
    return false;
  }else{
    uid = doc["id"].toString().toStdString();
    uidAlumno = doc["id_alumno"].toString().toStdString();
    monto = doc["monto"].toInt();
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
  jsonObj.insert("motivo",QString::fromStdString(motivo));
  QJsonDocument dec(jsonObj);
  QString strJson(dec.toJson(QJsonDocument::Compact));
  return strJson.toStdString();
}

#include "PruebaPractica.h"

PruebaPractica::PruebaPractica(string nUID, string nUidClasePractica, float nNotaMaxima, float nNotaObtenida, string nUidAlumno, int nHoras, int nIntentos ) : Instancia(nUID){
  uid = nUID;
  uidClasePractica = nUidClasePractica;
  notaMaxima = nNotaMaxima;
  notaObtenida = nNotaObtenida;
  uidAlumno = nUidAlumno;
  Horas = nHoras;
  Intento = nIntentos;
  tablePath = "autoescuela.pruebapractica";
}

PruebaPractica::PruebaPractica(string nUidClasePractica, float nNotaMaxima, float nNotaObtenida, string nUidAlumno, int nHoras, int nIntentos) : Instancia(){
  uidClasePractica = nUidClasePractica;
  notaMaxima = nNotaMaxima;
  notaObtenida = nNotaObtenida;
  uidAlumno = nUidAlumno;
  Horas = nHoras;
  Intento = nIntentos;
}

bool PruebaPractica::fromJSON(string cadena){
  QString json = QString::fromStdString(cadena); // String que contiene el JSON
  QJsonDocument doc = QJsonDocument::fromJson(json.toUtf8());
  if(doc.object().isEmpty()){
    return false;
  }else{
    uid = doc["id"].toString().toStdString();
    Horas = doc["horas"].toInt();
    uidAlumno = doc["id_alumno"].toString().toStdString();
    uidClasePractica = doc["id_clasepractica"].toString().toStdString();
    Intento = doc["intento"].toInt();
    notaMaxima = doc["notamaxima"].toInt();
    notaObtenida = doc["notaobtenida"].toInt();
    return true;
  }
  return false;
}

string PruebaPractica::toJSON(){
  QJsonObject jsonObj;
  jsonObj.insert("id",QString::fromStdString(uid));
  jsonObj.insert("horas",Horas);
  jsonObj.insert("id_alumno",QString::fromStdString(uidAlumno));
  jsonObj.insert("id_clasepractica",QString::fromStdString(uidClasePractica));
  jsonObj.insert("intento",Intento);
  jsonObj.insert("notamaxima",notaMaxima);
  jsonObj.insert("notaobtenida",notaObtenida);
  QJsonDocument dec(jsonObj);
  QString strJson(dec.toJson(QJsonDocument::Compact));
  return strJson.toStdString();
}

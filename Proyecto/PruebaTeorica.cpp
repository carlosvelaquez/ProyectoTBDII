#include "PruebaTeorica.h"

PruebaTeorica::PruebaTeorica(string nUID, string nUidClaseTeorica, float nNotaMaxima, float nNotaObtenida, string nNuidAlumno) : Instancia(nUID){
  uid = nUID;
  uidClaseTeorica = nUidClaseTeorica;
  notaMaxima = nNotaMaxima;
  notaObtenida = nNotaObtenida;
  uidAlumno = nNuidAlumno;
  tablePath = "autoescuela.pruebateorica";
}

PruebaTeorica::PruebaTeorica(string nUidClaseTeorica, float nNotaMaxima, float nNotaObtenida, string nNuidAlumno) : Instancia(){
  uidClaseTeorica = nUidClaseTeorica;
  notaMaxima = nNotaMaxima;
  notaObtenida = nNotaObtenida;
  uidAlumno = nNuidAlumno;
}

bool PruebaTeorica::fromJSON(string cadena){
  QString json = QString::fromStdString(cadena); // String que contiene el JSON
  QJsonDocument doc = QJsonDocument::fromJson(json.toUtf8());
  if(doc.object().isEmpty()){
    return false;
  }else{
    uid = doc["id"].toString().toStdString();
    uidAlumno = doc["id_alumno"].toString().toStdString();
    uidClaseTeorica = doc["id_claseteorica"].toString().toStdString();
    notaMaxima = doc["notamaxima"].toInt();
    notaObtenida = doc["notaobtenida"].toInt();
    return true;
  }
  return false;
}

string PruebaTeorica::toJSON(){
  QJsonObject jsonObj;
  jsonObj.insert("id",QString::fromStdString(uid));
  jsonObj.insert("id_alumno",QString::fromStdString(uidAlumno));
  jsonObj.insert("id_claseteorica",QString::fromStdString(uidClaseTeorica));
  jsonObj.insert("notamaxima",notaMaxima);
  jsonObj.insert("notaobtenida",notaObtenida);
  QJsonDocument dec(jsonObj);
  QString strJson(dec.toJson(QJsonDocument::Compact));
  return strJson.toStdString();
}

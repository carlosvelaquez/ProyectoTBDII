#include "TipoLicencia.h"

TipoLicencia::TipoLicencia(string json){
  fromJSON(json);
  tablePath = "autoescuela.tipolicencia";
}

TipoLicencia::TipoLicencia(string nUID, float nCantidadMatricula, string nDocumentos) : Instancia(nUID){
  uid = nUID;
  costoMatricula = nCantidadMatricula;
  documentos = nDocumentos;
  tablePath = "autoescuela.tipolicencia";
}

TipoLicencia::TipoLicencia(float nCantidadMatricula, string nDocumentos) : Instancia(){
  costoMatricula = nCantidadMatricula;
  documentos = nDocumentos;
  tablePath = "autoescuela.tipolicencia";
}

bool TipoLicencia::fromJSON(string cadena){
  QString json = QString::fromStdString(cadena); // String que contiene el JSON
  QJsonDocument doc = QJsonDocument::fromJson(json.toUtf8());
  if(doc.object().isEmpty()){
    return false;
  }else{
    uid = doc["id"].toString().toStdString();
    costoMatricula = doc["costomatricula"].toInt();
    documentos = doc["documentos"].toString().toStdString();
    return true;
  }
  return false;
}

string TipoLicencia::toJSON(){
  QJsonObject jsonObj;
  jsonObj.insert("id",QString::fromStdString(uid));
  jsonObj.insert("costomatricula",costoMatricula);
  jsonObj.insert("documentos",QString::fromStdString(documentos));
  QJsonDocument dec(jsonObj);
  QString strJson(dec.toJson(QJsonDocument::Compact));
  return strJson.toStdString();
}

//Setters
void TipoLicencia::setCostoMatricula(float nCostoMatricula){
  alterado =true;
  costoMatricula = nCostoMatricula;
}

void TipoLicencia::setDocumentos(string nDocumentos){
  alterado = true;
  documentos = nDocumentos;
}


//Getters
float TipoLicencia::getCostoMatricula(){
  return costoMatricula;
}

string TipoLicencia::getDocumentos(){
  return documentos;
}

vector<Alumno*>* TipoLicencia::getAlumnos(){
  return &alumnos;
}

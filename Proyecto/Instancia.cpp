#include "Instancia.h"

Instancia::Instancia(){
  uid = "";
  alterado = false;
}

Instancia::Instancia(string nUID){
  uid = nUID;
  alterado = false;
}

string Instancia::getUID(){
  return uid;
}

void Instancia::setUID(string nUID){
  if (uid != "") {
    alterado = true;
  }

  uid = nUID;
}

string Instancia::getTablePath(){
  return tablePath;
}

bool Instancia::isAlterado(){
  if (alterado || borrar || uid == "") {
    return true;
  }else{
    return false;
  }
}

bool Instancia::isBorrado(){
  return borrar;
}

void Instancia::setBorrar(bool nBorrar){
  borrar = nBorrar;
}

bool Instancia::fromJSON(string json){
  qDebug() << "Importando instancia generica desde json:" << json.c_str();
  return false;
}

string Instancia::toJSON(){
  qDebug() << "Exportando instancia generica a json";
  return "undefined";
}

Instancia::~Instancia(){
  uid = "borrado";
}

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

bool Instancia::isBorrado(){
  return borrar;
}

void Instancia::setBorrar(bool nBorrar){
  borrar = nBorrar;
}

bool Instancia::isAlterado(){
  if (alterado || borrar || uid == "") {
    return true;
  }else{
    return false;
  }
}

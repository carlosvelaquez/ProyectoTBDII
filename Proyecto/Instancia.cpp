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

bool Instancia::isAlterado(){
  if (alterado || uid == "") {
    return true;
  }else{
    return false;
  }
}

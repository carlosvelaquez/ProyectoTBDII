#include "Instancia.h"

Instancia::Instancia(){
  uid = "";
  nuevo = true;
}

Instancia::Instancia(string nUID){
  uid = nUID;
  alterado = false;
  nuevo = false;
}

string Instancia::getUID(){
  return uid;
}

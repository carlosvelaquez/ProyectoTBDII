#include "ClaseTeorica.h


ClaseTeorica::ClaseTeorica(string nUID, string nUidClase):Instancia(nUID){
  uid = nUID;
  uidClase = nUidClase;
  tablePath = "autoescuela.claseteorica";
}


ClaseTeorica::ClaseTeorica(string nUidClase):Instancia(){
  uidClase = nUidClase;
}

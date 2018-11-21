#include "ClasePractica.h"

ClasePractica::ClasePractica(string nUID,string nUidClase):Instancia(nUID){
  uid = nUID;
  uidClase = nUidClase;
  tablePath = "autoescuela.clasepractica";
}

ClasePractica::ClasePractica(string nUidClase):Instancia(){
  uidClase = nUidClase;
}

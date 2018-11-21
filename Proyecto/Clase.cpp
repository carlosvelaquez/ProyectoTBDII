#include "Clase.h"

Clase::Clase(string nUID,string nNombre,string nUidProfesor): Instancia(nUID){
  uid = nUID;
  nombre = nNombre;
  uidProfesor = nUidProfesor;
  tablePath = "autoescuela.clase";
}

Clase::Clase(string,string): Instancia(){
  nombre = nNombre;
  uidProfesor = nUidProfesor;
}

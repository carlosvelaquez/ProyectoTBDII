#include "CapacitadoEn.h"

CapacitadoEn::CapacitadoEn(string nUID ,string nUidProfesor, string nUidClase): Instancia(nUID){}
  uid = nUID;
  uidProfesor = nUidProfesor;
  uidClase = nUidClase;
  tablePath = "autoescuela.capacitadoen";
}

CapacitadoEn::CapacitadoEn(string nUidProfesor, string nUidClase){
  uidProfesor = nUidProfesor;
  uidClase = nUidClase;
}

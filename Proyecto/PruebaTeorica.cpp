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

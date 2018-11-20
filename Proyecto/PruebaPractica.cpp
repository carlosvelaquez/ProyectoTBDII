#include "PruebaPractica.h"

PruebaPractica::PruebaPractica(string nUID, string nUidClasePractica, float nNotaMaxima, float nNotaObtenida, string nUidAlumno, int nHoras, int nIntentos ) : Instancia(nUID){
  uid = nUID;
  uidClasePractica = nUidClasePractica;
  notaMaxima = nNotaMaxima;
  notaObtenida = nNotaObtenida;
  uidAlumno = nUidAlumno;
  Horas = nHoras;
  Intento = nIntentos;
  tablePath = "autoescuela.pruebapractica";
}

PruebaPractica::PruebaPractica(string nUidClasePractica, float nNotaMaxima, float nNotaObtenida, string nUidAlumno, int nHoras, int nIntentos) : Instancia(){
  uidClasePractica = nUidClasePractica;
  notaMaxima = nNotaMaxima;
  notaObtenida = nNotaObtenida;
  uidAlumno = nUidAlumno;
  Horas = nHoras;
  Intento = nIntentos;
}

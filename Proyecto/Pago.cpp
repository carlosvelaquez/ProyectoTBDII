#include "Pago.h"

/*
string uidAlumno;
float monto;
string motivo;
*/
Pago::Pago(string nUID, string nUidAlumno, float nMonto, string nMotivo): Instancia(nUID){
  uid = nUID;
  uidAlumno = nUidAlumno;
  monto = nMonto;
  motivo = nMotivo;
  tablePath = "autoescuela.pago";
}

Pago::Pago(string nUidAlumno, float nMonto, string nMotivo): Instancia(){
  uidAlumno = nUidAlumno;
  monto = nMonto;
  motivo = nMotivo;
}

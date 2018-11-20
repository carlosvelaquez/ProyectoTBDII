#include "Profesor.h"


Profesor::Profesor(string nUID, string nUidEmpleado, int nCategoria): Instancia(nUID){
  uid = nUID;
  string uidEmpleado = nUidEmpleado;
  int categoria = nCategoria;
  tablePath  = "autoescuela.profesor"
}

Profesor::Profesor(string nUidEmpleado, int nCategoria) : Instancia(){
  string uidEmpleado = nUidEmpleado;
  int categoria = nCategoria;
}

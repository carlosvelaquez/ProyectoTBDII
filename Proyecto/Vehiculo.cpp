#include "Vehiculo.h"

Vehiculo::Vehiculo(string nUID, string nUIDCategoria) : Instancia(nUID){
  uid = nUID;
  uidCategoria = nUIDCategoria;
  tablePath = "autoescuela.vehiculos";
}

Vehiculo::Vehiculo(string nUIDCategoria) : Instancia(){
  uidCategoria = nUIDCategoria;
}

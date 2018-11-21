#include "Categoria.h"

Categoria::Categoria(string nUID, string nLujo, string nTamano, float nTarifa) : Instancia(nUID){
  uid = nUID;
  lujo = nLujo;
  tamano = nTamano;
  tarifa = nTarifa;
  tablePath = "autoescuela.categoriavehiculo";
}

Categoria::Categoria(string nLujo, string nTamano, float nTarifa) : Instancia(){
  lujo = nLujo;
  tamano = nTamano;
  tarifa = nTarifa;
}

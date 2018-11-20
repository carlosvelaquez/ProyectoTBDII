#include "TipoLicencia.h"

TipoLicencia::TipoLicencia(string nUID, float nCantidadMatricula) : Instancia(nUID){
  uid = nUID;
  costoMatricula = nCantidadMatricula;
  tablePath = "autoescuela.tipolicencia";
}

TipoLicencia::TipoLicencia(float nCantidadMatricula) : Instancia(){
  costoMatricula = nCantidadMatricula;
}

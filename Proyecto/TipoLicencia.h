#ifndef TIPOLICENCIA_H
#define TIPOLICENCIA_H

#include "Instancia.h"
#include <string>

class TipoLicencia : public Instancia{

  private:
    float costoMatricula;

  public:
    TipoLicencia(float, string);
    TipoLicencia(float);

};

#endif

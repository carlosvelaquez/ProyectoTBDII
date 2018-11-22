#ifndef VEHICULO_H
#define VEHICULO_H

#include "Instancia.h"
#include <string>

class Vehiculo : public Instancia{

  private:

    string uidCategoria;

  public:

    Vehiculo(string, string);
    Vehiculo(string);

    bool fromJSON(string);
    string toJSON();
};

#endif

#ifndef CLASE_H
#define CLASE_H

#include "Instancia.h"

class Clase : public Instancia{

  private:
    string nombre;
    string uidVehiculo;
    string uidProfesor;

  public:
    Clase(string,string,string,string);
    Clase(string,string,string);

    bool fromJSON(string);
    string toJSON();

};

#endif

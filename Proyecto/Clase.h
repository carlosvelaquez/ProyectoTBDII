#ifndef CLASE_H
#define CLASE_H

#include "Instancia.h"

class Clase : public Instancia{

  private:
    string nombre;
    string uidProfesor;

  public:

    Clase(string,string,string);
    Clase(string,string);
};

#endif

#ifndef ALUMNO_H
#define ALUMNO_H

#include "Instancia.h"

class Alumno : public Instancia{

private:

  string nombres;
  string apellidos;

public:

  bool fromJSON(string);
  string toJSON();
  Vehiculo(string, string);
  Vehiculo(string);
};

#endif

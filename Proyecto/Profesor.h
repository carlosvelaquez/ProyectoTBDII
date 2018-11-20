#ifndef PROFESOR_H
#define PROFESOR_H

#include "Instancia.h"
#include <string>

class Profesor : public Instancia{

  private:
    string uidEmpleado;
    int categoria;

  public:

    Profesor(string, string, int);
    Profesor(string, int);
};

#endif

#ifndef PROFESOR_H
#define PROFESOR_H

#include "Instancia.h"

class Profesor : public Instancia{

  private:
    string uidEmpleado;
    // Categoria* categoria;

  public:

    Profesor();
    //Profesor existente con UID

    //Profesor(string, Categoria*);
};

#endif

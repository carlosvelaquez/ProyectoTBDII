#ifndef CAPACITADOEN_H
#define CAPACITADOEN_H

#include "Instancia.h"

class CapacitadoEn : public Instancia{

  private:
    string uidProfesor;
    string uidClase;

  public:
    CapacitadoEn(string,string,string);
    CapacitadoEn(string,string);
};

#endif

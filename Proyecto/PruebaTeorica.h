#ifndef PRUEBATEORICA_H
#define PRUEBATEORICA_H

#include "Instancia.h"
#include <string>

class PruebaTeorica : public Instancia{

  private:
    string uidClaseTeorica;
    float notaMaxima;
    float notaObtenida;
    string uidAlumno;

  public:
    PruebaTeorica(string, string, float, float, string);
    PruebaTeorica(string, float, float, string);
    
};

#endif

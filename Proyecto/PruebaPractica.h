#ifndef PRUEBAPRACTICA_H
#define PRUEBAPRACTICA_H

#include "Instancia.h"

class PruebaPractica : public Instancia{

  private:
    string uidClasePractica;
    float notaMaxima;
    float notaObtenida;
    string uidAlumno;
    int Horas;
    int Intento;

public:
    PruebaPractica(string, string, float, float, string, int, int);
    PruebaPractica(string, float, float, string, int, int);
};

#endif

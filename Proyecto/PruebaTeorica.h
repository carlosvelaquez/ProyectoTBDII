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

    bool fromJSON(string);
    string toJSON();

    //Setters
    void setUIDClaseTeorica(string);
    void setNotaMaxima(float);
    void setNotaObtenida(float);
    void setUIDAlumno(string);

    //Getters
    string getUIDClaseTeorica();
    float getNotaMaxima();
    float getNotaObtenida();
    string getUIDAlumno();
};

#endif

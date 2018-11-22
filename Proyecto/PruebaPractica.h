#ifndef PRUEBAPRACTICA_H
#define PRUEBAPRACTICA_H

#include "Instancia.h"

class PruebaPractica : public Instancia{

  private:
    string uidClasePractica;
    float notaMaxima;
    float notaObtenida;
    string uidAlumno  ;
    int Horas;
    int Intento;

  public:

    PruebaPractica(string);
    PruebaPractica(string, string, float, float, string, int, int);
    PruebaPractica(string, float, float, string, int, int);

    bool fromJSON(string);
    string toJSON();

    //Setters
    void setUIDClasePractica(string);
    void setNotaMaxima(float);
    void setNotaObtenida(float);
    void setUIDAlumno(string);
    void setHoras(int);
    void setIntento(int);

    //Getters
    string getUIDClasePractica();
    float getNotaMaxima();
    float getNotaObtenida();
    string getUIDAlumno();
    int getHoras();
    int getIntento();

};

#endif

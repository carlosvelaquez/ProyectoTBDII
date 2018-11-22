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

    bool fromJSON(string);
    string toJSON();

    //Setters
    void setUIDProfesor(string);
    void setUIDClase(string);

    //Getters
    string getUIDProfesor();
    string getUIDClase();
};

#endif

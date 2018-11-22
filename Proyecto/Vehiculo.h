#ifndef VEHICULO_H
#define VEHICULO_H

#include "Instancia.h"
#include "Categoria.h"
#include <string>

class Vehiculo : public Instancia{

  private:

    string uidCategoria;
    Categoria* categoria;

  public:
    Vehiculo(string);
    Vehiculo(string, string);
    Vehiculo(string);

    bool fromJSON(string);
    string toJSON();

    //Setters
    void setUIDCategoria(string);

    //Getters
    string getUIDCategoria();
};

#endif

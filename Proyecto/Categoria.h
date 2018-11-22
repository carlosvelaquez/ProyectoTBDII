#ifndef CATEGORIA_H
#define CATEGORIA_H

#include "Instancia.h"

class Categoria : public Instancia{

  private:
    string lujo;
    string tamano;
    float tarifa;

  public:
    Categoria();
    Categoria(string, string, string, float);
    Categoria(string, string , float);
    bool fromJSON(string);
    string toJSON();
};

#endif

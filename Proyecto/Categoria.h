#ifndef CATEGORIA_H
#define CATEGORIA_H

#include "Instancia.h"

class Categoria : public Instancia{

  private:
    string lujo;
    string tamano;
    float tarifa;
    vector<Vehiculo*> vehiculos;

  public:
    Categoria();
    Categoria(string, string, string, float);
    Categoria(string, string , float);

    bool fromJSON(string);
    string toJSON();

    //Setters
    void setLujo(string);
    void setTamano(string);
    void setTarifa(float);

    //Getters

    string getLujo();
    string getTamano();
    float getTarifa();
    vector<Vehiculo*>* getVehiculos();
};

#endif

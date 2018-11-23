#ifndef CATEGORIA_H
#define CATEGORIA_H

class Vehiculo;
class TipoLicencia;

#include "Instancia.h"
#include "Vehiculo.h"
#include "TipoLicencia.h"

class Categoria : public Instancia{

  private:
    string lujo;
    string tamano;
    float tarifa;
    vector<Vehiculo*> vehiculos;
    string uidLicencia;
    TipoLicencia* licencia;

  public:
    Categoria(string);
    Categoria(string, string, string, float);
    Categoria(string, string , float);

    bool fromJSON(string);
    string toJSON();

    //Setters
    void setLujo(string);
    void setTamano(string);
    void setTarifa(float);
    void setUIDLicencia(string);
    void setLicencia(TipoLicencia*);

    //Getters

    string getLujo();
    string getTamano();
    float getTarifa();
    vector<Vehiculo*>* getVehiculos();
    string getUIDLicencia();
    TipoLicencia* getLicencia();
};

#endif

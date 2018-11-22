#ifndef CLASE_H
#define CLASE_H

#include "Instancia.h"

class Clase : public Instancia{

  private:
    string nombre;
    string uidVehiculo;
    string uidProfesor;
    
    Profesor* profesor;
    vector<Profesor*> profesoresCapacitados;

  public:
    Clase(string,string,string,string);
    Clase(string,string,string);

    bool fromJSON(string);
    string toJSON();

    //Setters
    void setNombre(string);
    void setUIDVehiculo(string);
    void setUIDProfesor(string);

    //Getters
    string getNombre();
    string getUIDVehiculo();
    string getUIDProfesor();
};

#endif

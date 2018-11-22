#ifndef CLASE_H
#define CLASE_H

class Profesor;

#include "Instancia.h"
#include "Profesor.h"
#include "Vehiculo.h"

class Clase : public Instancia{

  private:
    string nombre;
    string uidVehiculo;
    string uidProfesor;

    Profesor* profesor;
    Vehiculo* vehiculo;
    vector<Alumno*> alumnos;

  public:
    Clase(string,string,string,string);
    Clase(string,string,string);

    bool fromJSON(string);
    string toJSON();

    //Setters
    void setNombre(string);
    void setUIDVehiculo(string);
    void setUIDProfesor(string);
    void setProfesor(Profesor*);
    void setVehiculo(Vehiculo*);

    //Getters
    string getNombre();
    string getUIDVehiculo();
    string getUIDProfesor();
    Profesor* getProfesor();
    Vehiculo* getVehiculo();
    vector<Alumnos*>* getAlumnos();
};

#endif

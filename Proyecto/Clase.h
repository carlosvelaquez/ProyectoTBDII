#ifndef CLASE_H
#define CLASE_H

class Profesor;
class Alumno;

#include "Instancia.h"
#include "Alumno.h"
#include "Profesor.h"
#include "Vehiculo.h"

class Clase : public Instancia{

  private:
    string nombre;
    string uidVehiculo;
    string uidProfesor;

    int categoriaNecesaria;

    Profesor* profesor;
    Vehiculo* vehiculo;
    vector<Alumno*> alumnos;

  public:
    Clase(string);
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
    void setCategoriaNecesaria(int);

    //Getters
    string getNombre();
    string getUIDVehiculo();
    string getUIDProfesor();
    Profesor* getProfesor();
    Vehiculo* getVehiculo();
    vector<Alumno*>* getAlumnos();
    int getCategoriaNecesaria();
};

#endif

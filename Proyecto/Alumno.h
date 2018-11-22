#ifndef ALUMNO_H
#define ALUMNO_H

#include "Instancia.h"
#include <string>
#include <vector>
#include "Clase.h"

using namespace std;

class Alumno : public Instancia{

  private:
    string nombres;
    string apellidos;
    vector<Clase*> clases;

  public:
    Alumno(string, string, string);
    Alumno(string, string);

    bool fromJSON(string);
    string toJSON();

    //Setters
    void setNombres(string);
    void setApellidos(string);
    //Getters
    string getNombres();
    string getApellidos();
};

#endif

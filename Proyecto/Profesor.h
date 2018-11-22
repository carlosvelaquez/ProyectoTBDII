#ifndef PROFESOR_H
#define PROFESOR_H

class Clase;

#include "Instancia.h"
#include "Clase.h"
#include "TipoLicencia.h"

#include <string>

class Profesor : public Instancia{

  private:
    string uidEmpleado;
    int categoria;

    vector<Clase*> clases;
    vector<TipoLicencia*> capacitadoEn;

  public:

    Profesor(string, string, int);
    Profesor(string, int);

    bool fromJSON(string);
    string toJSON();

    //Setters
    void setUIDEmpleado(string);
    void setCategoria(int);

    //Getters
    string getUIDEmpleado();
    int getCategoria();
    vector<Clase*>* getClases();
    vector<TipoLicencia*>* getCapacitadoEn();
};

#endif

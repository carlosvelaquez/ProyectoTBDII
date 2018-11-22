#ifndef PROFESOR_H
#define PROFESOR_H

#include "Instancia.h"
#include <string>

class Profesor : public Instancia{

  private:
    string uidEmpleado;
    int categoria;

    vector<Clases*> clases;
    vector<Licencia*> capacitadoEn;

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
};

#endif

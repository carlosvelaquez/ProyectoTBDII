#ifndef TIPOLICENCIA_H
#define TIPOLICENCIA_H

class Alumno;

#include "Instancia.h"
#include "Alumno.h"

#include <string>

class TipoLicencia : public Instancia{

  private:
    float costoMatricula;
    string documentos;

    vector<Alumno*> alumnos;

  public:
    TipoLicencia(string);
    TipoLicencia(string, float, string);
    TipoLicencia(float, string);

    bool fromJSON(string);
    string toJSON();

    //Setters
    void setCostoMatricula(float);
    void setDocumentos(string);

    //Getters
    float getCostoMatricula();
    string getDocumentos();
    vector<Alumno*>* getAlumnos();
};

#endif

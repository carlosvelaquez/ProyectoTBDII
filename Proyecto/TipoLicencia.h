#ifndef TIPOLICENCIA_H
#define TIPOLICENCIA_H

#include "Instancia.h"
#include <string>

class TipoLicencia : public Instancia{

  private:
    float costoMatricula;
    string documentos;

  public:
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
};

#endif

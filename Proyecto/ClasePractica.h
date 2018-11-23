#ifndef CLASEPRACTICA_H
#define CLASEPRACTICA_H

#include <string>
#include "Instancia.h"

class ClasePractica : public Instancia{

  private:
    string uidClase;
    TipoLicencia* licencia;
    string UIDLicencia;

  public:
    ClasePractica(string);
    ClasePractica(string,string);

    bool fromJSON(string);
    string toJSON();

    //Setters
    void setUIDClase(string);
    void setLicencia(TipoLicencia*);
    void setUIDLicencia(string);

    //Getters
    string getUIDClase();
    TipoLicencia* getLicencia();
    string getUIDLicencia();
};

#endif

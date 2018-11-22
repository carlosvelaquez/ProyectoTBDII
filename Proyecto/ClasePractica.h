#ifndef CLASEPRACTICA_H
#define CLASEPRACTICA_H

#include <string>
#include "Instancia.h"

class ClasePractica : public Instancia{

  private:
    string uidClase;

  public:
    ClasePractica(string);
    ClasePractica(string,string);
    ClasePractica(string);

    bool fromJSON(string);
    string toJSON();

    //Setters
    void setUIDClase(string);

    //Getters
    string getUIDClase();
};

#endif

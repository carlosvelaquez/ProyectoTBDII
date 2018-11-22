#ifndef CLASETEORICA_H
#define CLASETEORICA_H

#include "Instancia.h"
#include <string>

class ClaseTeorica : public Instancia{

  private:
    string uidClase;

  public:
    ClaseTeorica(string, string);
    ClaseTeorica(string);

    bool fromJSON(string);
    string toJSON();

    //Setters
    void setUIDClase(string);

    //Getters
    string getUIDClase();

};
#endif

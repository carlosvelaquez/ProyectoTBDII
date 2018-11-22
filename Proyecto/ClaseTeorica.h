#ifndef CLASETEORICA_H
#define CLASETEORICA_H

#include "Instancia.h"
#include <string>

class ClaseTeorica : public Instancia{

  private:
    string uidClase;

  public:
    ClaseTeorica(string);
    ClaseTeorica(string, string);
<<<<<<< HEAD
    //ClaseTeorica(string);
=======
>>>>>>> 76fe86c347f8c484851fe091fe209595fe431b06

    bool fromJSON(string);
    string toJSON();

    //Setters
    void setUIDClase(string);

    //Getters
    string getUIDClase();

};
#endif

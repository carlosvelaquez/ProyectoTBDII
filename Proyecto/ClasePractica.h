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
<<<<<<< HEAD
    //ClasePractica(string);
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

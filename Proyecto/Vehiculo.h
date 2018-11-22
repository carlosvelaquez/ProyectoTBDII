#ifndef VEHICULO_H
#define VEHICULO_H

#include "Instancia.h"
#include "Categoria.h"
#include <string>

class Vehiculo : public Instancia{

  private:

    string uidCategoria;
    Categoria* categoria;
    Clase* clase;

  public:
    Vehiculo(string);
    Vehiculo(string, string);
<<<<<<< HEAD
    //Vehiculo(string);
=======
>>>>>>> 76fe86c347f8c484851fe091fe209595fe431b06

    bool fromJSON(string);
    string toJSON();

    //Setters
    void setUIDCategoria(string);
    void setClase(Clase*);

    //Getters
    string getUIDCategoria();
    Clase* getClase();
};

#endif

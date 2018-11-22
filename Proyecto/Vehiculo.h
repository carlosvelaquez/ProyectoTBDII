#ifndef VEHICULO_H
#define VEHICULO_H

class Categoria;
class Clase;

#include "Instancia.h"
#include "Categoria.h"
#include "Clase.h"
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
>>>>>>> 2fa917a215e79305db3ba43cb016babe26f4df8c

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

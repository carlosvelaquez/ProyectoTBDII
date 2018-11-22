#ifndef ALUMNO_H
#define ALUMNO_H

#include "Instancia.h"
#include <string>

using namespace std;

class Alumno : public Instancia{
  
  private:
    string nombres;
    string apellidos;

  public:
    Alumno(string, string, string);
    Alumno(string, string);

    bool fromJSON(string);
    string toJSON();

};

#endif

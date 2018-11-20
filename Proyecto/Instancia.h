#ifndef INSTANCIA_H
#define INSTANCIA_H

#include "Database.h"
#include <string>

class Instancia {
private:
  bool alterado;
  bool nuevo;
  string uid;

public:
  //Instancia nueva, se asigna el UID como vacío para que se genere al pushear
  Instancia();

  //Instancia existente, se proporciona el UID
  Instancia(string);

  string getUID();
  virtual string toJSON();

  ~Instancia();
};

#endif /* end of include guard: INSTANCIA_H */

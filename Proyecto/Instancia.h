#ifndef INSTANCIA_H
#define INSTANCIA_H

#include "Database.h"
#include <string>

class Instancia {
private:
  bool alterado;
  string uid;
  string tablePath;

public:
  //Instancia nueva, se asigna el UID como vacío para que se genere al pushear
  Instancia();

  //Instancia existente, se proporciona el UID
  Instancia(string);

  string getUID();
  void setUID(string);

  string getTablePath();
  bool isAlterado();
  virtual string toJSON();

  ~Instancia();
};

#endif /* end of include guard: INSTANCIA_H */

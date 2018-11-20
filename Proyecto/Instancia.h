#ifndef INSTANCIA_H
#define INSTANCIA_H

#include "Database.h"
#include <string>

class Instancia{
private:
  bool alterado;
  string uid;

public:
  Instancia();

  virtual string toJSON() = 0;

  ~Instancia();
};

#endif /* end of include guard: INSTANCIA_H */

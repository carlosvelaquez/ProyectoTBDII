#ifndef PAGO_H
#define PAGO_H

#include "Instancia.h"

class Pago : public Instancia{

  private:
      string uidAlumno;
      float monto;
      string motivo;

  public:
      Pago(string, string, float, string);
      Pago(string, float, string);
};

#endif

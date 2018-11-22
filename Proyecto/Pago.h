#ifndef PAGO_H
#define PAGO_H

class Alumno;

#include "Instancia.h"
#include "Alumno.h"

class Pago : public Instancia{

  private:
      string uidAlumno;
      float monto;
      string motivo;
      Alumno* alumno;

  public:
      Pago(string);
      Pago(string, string, float, string);
      Pago(string, float, string);

      bool fromJSON(string);
      string toJSON();

      //Setters
      void setUIDAlumno(string);
      void setMonto(float);
      void setMotivo(string);
      void setAlumno(Alumno*);

      //Getters
      string getUIDAlumno();
      float getMonto();
      string getMotivo();
      Alumno* getAlumno();
};

#endif

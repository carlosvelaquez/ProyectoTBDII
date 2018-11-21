#ifndef EMPLEADO_H
#define EMPLEADO_H

#include "Instancia.h"
#include <string>

using namespace std;

class Empleado : public Instancia{
private:
  string nombres;
  string apellidos;
  float salario;
  string tablePath = "autoescuela.empleados";

public:
  //Empleado desde JSON
  Empleado(string);

  //Empleado existente con UID
  Empleado(string, string, string, float);

  //Nuevo empleado, genera un nuevo UID
  Empleado(string, string, float);

  string getNombres();
  string getApellidos();
  float getSalario();

  //EN TODOS ESTOS SE PONE ALTERADO = TRUE
  void setNombres(string);
  void setApellidos(string);
  void setSalario(float);

  bool fromJSON(string);
  string toJSON();
};

#endif /* end of include guard: EMPLEADO_H */

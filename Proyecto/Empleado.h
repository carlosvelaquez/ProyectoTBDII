#ifndef EMPLEADO_H
#define EMPLEADO_H

class Empleado : public Instancia{
private:
  string nombres;
  string apellidos;
  float salario;

public:
  //Empleado existente con UID
  Empleado(string, string, string, float);

  //Nuevo empleado, genera un nuevo UID
  Empleado(string, string, float);
};

#endif /* end of include guard: EMPLEADO_H */

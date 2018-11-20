#include "Empleado.h"

Empleado::Empleado(string nUID, string nNombres, string nApellidos, float nSalario) : Instancia(nUID){
  uid = nUID;
  nombres = nNombres;
  apellidos = nApellidos;
  salario = nSalario;
  tablePath = "autoescuela.empleados";
}

Empleado::Empleado(string nNombres, string nApellidos, float nSalario) : Instancia(){
  nombres = nNombres;
  apellidos = nApellidos;
  salario = nSalario;
}

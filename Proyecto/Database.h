#ifndef DATABASE_H
#define DATABASE_H

#include <cassandra.h>
#include <QString>
#include <QDebug>
#include <vector>
#include <string>

#include "Instancia.h"
#include "Empleado.h"
#include "Profesor.h"
#include "Clase.h"
#include "ClaseTeorica.h"
#include "ClasePractica.h"
#include "PruebaTeorica.h"
#include "PruebaPractica.h"
#include "Alumno.h"
#include "Pago.h"
#include "Vehiculo.h"
#include "Categoria.h"
#include "TipoLicencia.h"

using namespace std;

class Database {
private:
  bool isConnected;
  CassFuture* connect_future;
  CassCluster* cluster;
  CassSession* session;
  CassResult* result;
  string hosts = "198.211.112.163";

  string error;

  bool actualizarInstancia(Instancia*);

  //Listas de Instancias
  vector<Instancia*> instancias;

  vector<Empleado*> empleados;
  vector<Profesor*> profesores;
  vector<Clase*> clases;
  vector<ClaseTeorica*> clasesTeoricas;
  vector<ClasePractica*> clasesPracticas;
  vector<PruebaTeorica*> pruebasTeoricas;
  vector<PruebaPractica*> pruebasPracticas;
  vector<Alumno*> alumnos;
  vector<Pago*> pagos;
  vector<Vehiculo*> vehiculos;
  vector<Categoria*> categorias;
  vector<TipoLicencia*> tiposLicencia;

/* comparar el idclase de alumno con el idClase de clase
*/
public:
  Database();
  QString version();

  bool pull();
  bool push();

  bool runQuery(string);
  CassResult* getResult();
  vector<string> resultStrings();


  //INSERTERS
  void insertarEmpleado(Empleado*);
  void insertarProfesor(Profesor*);
  void insertarClase(Clase*);
  void insertarClaseTeorica(ClaseTeorica*);
  void insertarClasePractica(ClasePractica*);
  void insertarPruebaTeorica(PruebaTeorica*);
  void insertarPruebaPractica(PruebaPractica*);
  void insertarAlumno(Alumno*);
  void insertarPago(Pago*);
  void insertarVehiculo(Vehiculo*);
  void insertarCategoria(Categoria*);
  void insertarTipoLicencia(TipoLicencia*);

  //GETTERS
  vector<Empleado*> getEmpleados();
  vector<Profesor*> getProfesores();
  vector<Clase*> getClases();
  vector<ClaseTeorica*> getClasesTeoricas();
  vector<ClasePractica*> getClasesPracticas();
  vector<PruebaTeorica*> getPruebasTeoricas();
  vector<PruebaPractica*> getPruebasPracticas();
  vector<Alumno*> getAlumnos();
  vector<Pago*> getPagos();
  vector<Vehiculo*> getVehiculos();
  vector<Categoria*> getCategorias();
  vector<TipoLicencia*> getTiposLicencia();


  //TRANSACCIONALES - Retornan un vector de los UIDs solicitados
  vector<string> get_Profesores_CapacitadoEn(string);
  vector<string> get_Clases_CapacitadoEn(string);

  vector<string> get_Alumnos_AlumnosClases(string);
  vector<string> get_Clases_AlumnosClases(string);

  vector<string> get_Alumnos_LicenciaAlumno(string);
  vector<string> get_Licencias_LicenciaAlumno(string);
  vector<string> get_Profesor_LicenciaAlumno(string, string);

  ~Database();
};

#endif /* end of include guard: DATABASE_H */

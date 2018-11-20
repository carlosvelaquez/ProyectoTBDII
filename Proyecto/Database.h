#ifndef DATABASE_H
#define DATABASE_H

#include <cassandra.h>
#include <QString>
#include <QDebug>
#include <vector>

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

class Database {
private:
  bool isConnected;
  CassFuture* connect_future;
  CassCluster* cluster;
  CassSession* session;
  char* hosts;

  bool actualizarInstancia(Instancia*);

  //Listas de Instancias
  vector<Instancia> instancias;

  vector<Empleado> empleados;
  vector<Profesor> profesores;
  vector<Clase> clases;
  vector<ClaseTeorica> clasesTeoricas;
  vector<ClasePractica> clasesPracticas;
  vector<PruebaTeorica> pruebasTeoricas;
  vector<PruebaPractica> pruebasPracticas;
  vector<Alumno> alumnos;
  vector<Pago> pagos;
  vector<Vehiculo> vehiculos;
  vector<Categoria> categorias;
  vector<TipoLicencia> tiposLicencia;

public:
  Database();
  QString version();

  bool pull();
  bool push();


  ~Database();
};

#endif /* end of include guard: DATABASE_H */

#include "Database.h"

Database::Database(){
  isConnected = false;

  /* Setup and connect to cluster */
  connect_future = NULL;
  cluster = cass_cluster_new();
  session = cass_session_new();

  /* Add contact points */
  cass_cluster_set_contact_points(cluster, hosts.c_str());

  /* Provide the cluster object as configuration to connect the session */
  connect_future = cass_session_connect(session, cluster);

  if (cass_future_error_code(connect_future) == CASS_OK) {
    isConnected = true;
  } else {
    /* Handle error */
    const char* message;
    size_t message_length;
    cass_future_error_message(connect_future, &message, &message_length);
    qDebug() << "Error";
  }
}

bool Database::actualizarInstancia(Instancia* i){
  if (i->getUID() == "") {
    CassUuidGen* uuid_gen = cass_uuid_gen_new();
    CassUuid uuid;
    cass_uuid_gen_random(uuid_gen, &uuid);

    /* Get string representation of the UUID */
    char uuid_str[CASS_UUID_STRING_LENGTH];
    cass_uuid_string(uuid, uuid_str);

    string nUID(uuid_str);

    cass_uuid_gen_free(uuid_gen);

    i->setUID(nUID);

    string query;
    query += "INSERT INTO ";
    query += i->getTablePath();
    query += " JSON \'";
    query += i->toJSON();
    query += "\';";

    runQuery(query);

  }else if(i->isBorrado()){
    //QUERY DE BORRADO POR UID
    //DELETE FROM cycling.cyclist_name WHERE id=e7ae5cf3-d358-4d99-b900-85902fda9bb0 IF EXISTS;

    string query;
    query += "DELETE FROM ";
    query += i->getTablePath();
    query += " WHERE id=";
    query += i->getUID();
    query += " IF EXISTS;";

    runQuery(query);
  }else{
    //QUERY DE ACTUALIZACION
    //INSERT INTO table_name JSON '{"column1": "value1", "column2": "value2"}' DEFAULT UNSET;

    string query;
    query += "INSERT INTO ";
    query += i->getTablePath();
    query += " JSON \'";
    query += i->toJSON();
    query += "\' DEFAULT UNSET;";

    runQuery(query);
  }

  return true;
}

QString Database::version(){
    QString ver = "undefined";
    runQuery("SELECT release_version FROM system.local");
    const CassRow* row = cass_result_first_row(result);

    if (row) {
      const CassValue* value = cass_row_get_column_by_name(row, "release_version");

      const char* release_version;
      size_t release_version_length;
      cass_value_get_string(value, &release_version, &release_version_length);
      ver = QString(release_version);
    } else {
      qDebug() << "ERROR - " << error.c_str();
    }

  return ver;
}

bool Database::pull(){
  //EMPLEADO
  runQuery("select json * from autoescuela.empleado");
  vector<string> strings = resultStrings();

  empleados.clear();

  for (size_t i = 0; i < strings.size(); i++) {
    Empleado* nEmpleado = new Empleado(strings[i]);
    empleados.push_back(nEmpleado);
    instancias.push_back(nEmpleado);
  }

  //PROFESOR
  runQuery("select json * from autoescuela.profesor");
  vector<string> strings = resultStrings();

  profesores.clear();

  for (size_t i = 0; i < strings.size(); i++) {
    Profesor* nProfesor = new Profesor(strings[i]);
    profesores.push_back(nProfesor);
    instancias.push_back(nProfesor);
  }

  //ALUMNO
  runQuery("select json * from autoescuela.alumno");
  vector<string> strings = resultStrings();

  alumnos.clear();

  for (size_t i = 0; i < strings.size(); i++) {
    Alumno* nAlumno = new Alumno(strings[i]);
    alumnos.push_back(nAlumno);
    instancias.push_back(nAlumno);
  }

  //CATEGORIA VEHICULO
  runQuery("select json * from autoescuela.categoriavehiculo");
  vector<string> strings = resultStrings();

  categorias.clear();

  for (size_t i = 0; i < strings.size(); i++) {
    Categoria* nCategoria = new Categoria(strings[i]);
    categorias.push_back(nCategoria);
    instancias.push_back(nCategoria);
  }

  //VEHICULO
  runQuery("select json * from autoescuela.vehiculo");
  vector<string> strings = resultStrings();

  vehiculos.clear();

  for (size_t i = 0; i < strings.size(); i++) {
    Vehiculo* nVehiculo = new Vehiculo(strings[i]);
    vehiculos.push_back(nVehiculo);
    instancias.push_back(nVehiculo);
  }

  //CLASE
  runQuery("select json * from autoescuela.clase");
  vector<string> strings = resultStrings();

  clases.clear();

  for (size_t i = 0; i < strings.size(); i++) {
    Clase* nClase = new Clase(strings[i]);
    clases.push_back(nClase);
    instancias.push_back(nClase);
  }

  //CLASE TEORICA
  runQuery("select json * from autoescuela.claseteorica");
  vector<string> strings = resultStrings();

  clasesTeoricas.clear();

  for (size_t i = 0; i < strings.size(); i++) {
    ClaseTeorica* nClaseTeorica = new ClaseTeorica(strings[i]);
    clasesTeoricas.push_back(nClaseTeorica);
    instancias.push_back(nClaseTeorica);
  }

  //CLASE PRACTICA
  runQuery("select json * from autoescuela.clasepractica");
  vector<string> strings = resultStrings();

  clasesPracticas.clear();

  for (size_t i = 0; i < strings.size(); i++) {
    ClasePractica* nClasePractica = new ClasePractica(strings[i]);
    clasesPracticas.push_back(nClasePractica);
    instancias.push_back(nClasePractica);
  }

  //PRUEBA TEORICA
  runQuery("select json * from autoescuela.pruebateorica");
  vector<string> strings = resultStrings();

  pruebasTeoricas.clear();

  for (size_t i = 0; i < strings.size(); i++) {
    PruebaTeorica* nPruebaTeorica = new PruebaTeorica(strings[i]);
    pruebasTeoricas.push_back(nPruebaTeorica);
    instancias.push_back(nPruebaTeorica);
  }

  //PRUEBA PRACTICA
  runQuery("select json * from autoescuela.pruebapractica");
  vector<string> strings = resultStrings();

  pruebasPracticas.clear();

  for (size_t i = 0; i < strings.size(); i++) {
    PruebaPractica* nPruebaPractica = new PruebaPractica(strings[i]);
    pruebasPracticas.push_back(nPruebaPractica);
    instancias.push_back(nPruebaPractica);
  }

  //PAGO
  runQuery("select json * from autoescuela.pago");
  vector<string> strings = resultStrings();

  pagos.clear();

  for (size_t i = 0; i < strings.size(); i++) {
    Pago* nPago = new Pago(strings[i]);
    pagos.push_back(nPagos);
    instancias.push_back(nPagos);
  }

  //TIPO LICENCIA
  runQuery("select json * from autoescuela.tipolicencia");
  vector<string> strings = resultStrings();

  TipoLicencia.clear();

  for (size_t i = 0; i < strings.size(); i++) {
    TipoLicencia* nTipoLicencia = new TipoLicencia(strings[i]);
    tiposLicencia.push_back(nTipoLicencia);
    instancias.push_back(nTipoLicencia);
  }

  //TRANSACCIONALES
  //Clase / Profesor
  for (size_t i = 0; i < clases.size(); i++) {
    for (size_t j = 0; j < profesores.size(); j++) {
      if (profesores[j]->getUID() == clases[i]->getUIDProfesor()) {
        clases[i]->setProfesor(profesores[j]);
        profesores[j]->getClases()->push_back(clases[i]);
      }
    }
  }

  //Alumnos -> Clase
  for (size_t i = 0; i < clases.size(); i++) {
    vector<string> strings = get_Alumnos_AlumnosClases(clases[i]->getUID());
    for (size_t j = 0; j < strings.size(); j++) {
      clases[i]->getAlumnos().push_back(strings[j]);
    }
  }

  //Clase -> Alumnos
  for (size_t i = 0; i < alumnos.size(); i++) {
    vector<string> strings = get_Clases_AlumnosClases(alumnos[i]->getUID());
    for (size_t j = 0; j < strings.size(); j++) {
      alumnos[i]->getClases().push_back(strings[j]);
    }
  }

  //Alumno -> Licencia
  for (size_t i = 0; i <tiposLicencia.size() ; i++) {
    vector<string> strings = get_Alumnos_LicenciaAlumno(tipoLicencia[i]->getUID());
    for (size_t j = 0; j < strings.size(); j++) {
      tipoLicencia[i]->getAlumnos().push_back(strings[j]);
    }
  }

  //Licencia -> Alumno
  for (size_t i = 0; i < alumnos.size(); i++) {
    vector<string> strings = get_Licencias_LicenciaAlumno(alumnos[i]->getUID());
    for (size_t j = 0; j < string.size(); j++) {
      alumnos[i]->getLicencias().push_back(strings[j]);
    }
  }

  return true;
}

bool Database::push(){
  qDebug() << "Pushing... Instancias size: " << instancias.size();

  for (size_t i = 0; i < instancias.size(); i++) {
    qDebug() << "Empujando elemento " << i;
    if (instancias[i]->isAlterado()) {
      actualizarInstancia(instancias[i]);
      qDebug() << "Empujando instancias: " << instancias[i]->toJSON().c_str();
    }else{
      qDebug() << "Elemento no alterado. Abortando.";
    }
  }

  //AQUI VA EL MAPEO DE APUNTADORES


  return true;
}

bool Database::runQuery(string query){
  qDebug() << QString("Ejecutando Query: ") + QString(query.c_str());

  CassStatement* statement = cass_statement_new(query.c_str(), 0);
  CassFuture* query_future = cass_session_execute(session, statement);

  cass_statement_free(statement);

  /* This will block until the query has finished */
  if (cass_future_error_code(query_future) == CASS_OK) {
    cass_result_free(result);

    result = const_cast<CassResult*>(cass_future_get_result(query_future));
    qDebug() << "Query ejecutado exitosamente.";
    cass_future_free(query_future);
    return true;
  }else{
    CassError rc = cass_future_error_code(query_future);
    error = cass_error_desc(rc);
    qDebug() << QString("ERROR - ") + error.c_str();
    cass_future_free(query_future);
    return false;
  }
}

CassResult* Database::getResult(){
  return result;
}

vector<string> Database::resultStrings(){
  vector<string> strings;
  CassIterator* iterator = cass_iterator_from_result(result);
  CassRow* row;

  while (cass_iterator_next (iterator)) {
    row = const_cast<CassRow*>(cass_iterator_get_row(iterator));

   const CassValue* value = cass_row_get_column ( row, 0 );
   const char* valString;
   size_t valSize;
   cass_value_get_string(value, &valString, &valSize);
   strings.push_back(string(valString));
 }

  return strings;
}


//INSERTERS
void Database::insertarEmpleado(Empleado* nEmpleado){
  empleados.push_back(nEmpleado);
  instancias.push_back(nEmpleado);
}

void Database::insertarProfesor(Profesor* nProfesor){
  profesores.push_back(nProfesor);
  instancias.push_back(nProfesor);
}

void Database::insertarClase(Clase* nClase){
  clases.push_back(nClase);
  instancias.push_back(nClase);
}

void Database::insertarClaseTeorica(ClaseTeorica* nClaseTeorica){
  clasesTeoricas.push_back(nClaseTeorica);
  instancias.push_back(nClaseTeorica);
}

void Database::insertarClasePractica(ClasePractica* nClasePractica){
  clasesPracticas.push_back(nClasePractica);
  instancias.push_back(nClasePractica);
}

void Database::insertarPruebaTeorica(PruebaTeorica* nPruebaTeorica){
  pruebasTeoricas.push_back(nPruebaTeorica);
  instancias.push_back(nPruebaTeorica);
}

void Database::insertarPruebaPractica(PruebaPractica* nPruebaPractica){
  pruebasPracticas.push_back(nPruebaPractica);
  instancias.push_back(nPruebaPractica);
}

void Database::insertarAlumno(Alumno* nAlumno){
  alumnos.push_back(nAlumno);
  instancias.push_back(nAlumno);
}

void Database::insertarPago(Pago* nPago){
  pagos.push_back(nPago);
  instancias.push_back(nPago);
}

void Database::insertarVehiculo(Vehiculo* nVehiculo){
  vehiculos.push_back(nVehiculo);
  instancias.push_back(nVehiculo);
}

void Database::insertarCategoria(Categoria* nCategoria){
  categorias.push_back(nCategoria);
  instancias.push_back(nCategoria);
}

void Database::insertarTipoLicencia(TipoLicencia* nTipoLicencia){
  tiposLicencia.push_back(nTipoLicencia);
  instancias.push_back(nTipoLicencia);
}

//GETTERS
vector<Empleado*>* Database::getEmpleados(){
  return &empleados;
}

vector<Profesor*>* Database::getProfesores(){
  return &profesores;
}

vector<Clase*>* Database::getClases(){
  return &clases;
}

vector<ClaseTeorica*>* Database::getClasesTeoricas(){
  return &clasesTeoricas;
}

vector<ClasePractica*>* Database::getClasesPracticas(){
  return &clasesPracticas;
}

vector<PruebaTeorica*>* Database::getPruebasTeoricas(){
  return &pruebasTeoricas;
}

vector<PruebaPractica*>* Database::getPruebasPracticas(){
  return &pruebasPracticas;
}

vector<Alumno*>* Database::getAlumnos(){
  return &alumnos;
}

vector<Pago*>* Database::getPagos(){
  return &pagos;
}

vector<Vehiculo*>* Database::getVehiculos(){
  return &vehiculos;
}

vector<Categoria*>* Database::getCategorias(){
  return &categorias;
}

vector<TipoLicencia*>* Database::getTiposLicencia(){
  return &tiposLicencia;
}


//TRANSACCIONALES

/*
CapacitadoEn
select json id_profesor from autoescuela.capacitadoen where id_clase=? allow filtering;
select json id_clase from autoescuela.capacitadoen where id_profesor=? allow filtering;
*/
vector<string> Database::get_Profesores_CapacitadoEn(string uid){
  runQuery("select id_profesor from autoescuela.capacitadoen where id_clase=" + uid + " allow filtering;");
  return resultStrings();
}

vector<string> Database::get_Clases_CapacitadoEn(string uid){
  runQuery("select id_clase from autoescuela.capacitadoen where id_profesor=" + uid + " allow filtering;");
  return resultStrings();
}

/*
AlumnosClases
select id_alumno from autoescuela.alumnosclases where id_clase=? allow filtering;
select id_clase from autoescuela.alumnosclases where id_alumno=? allow filtering;
*/
vector<string> Database::get_Alumnos_AlumnosClases(string uid){
  runQuery("select id_alumno from autoescuela.alumnosclases where id_clase=" + uid + " allow filtering;");
  return resultStrings();
}

vector<string> Database::get_Clases_AlumnosClases(string uid){
  runQuery("select id_clase from autoescuela.alumnosclases where id_alumno=" + uid + " allow filtering;");
  return resultStrings();
}

/*
LicenciaAlumno
select id_licencia from autoescuela.licenciaalumno where id_alumno=? allow filtering;
select id_alumno from autoescuela.licenciaalumno where id_licencia=? allow filtering;
*/
vector<string> Database::get_Alumnos_LicenciaAlumno(string uid){
  runQuery("select id_alumno from autoescuela.licenciaalumno where id_licencia=" + uid + " allow filtering;");
  return resultStrings();
}

vector<string> Database::get_Licencias_LicenciaAlumno(string uid){
  runQuery("select id_licencia from autoescuela.licenciaalumno where id_alumno=" + uid + " allow filtering;");
  return resultStrings();
}

vector<string> Database::get_Profesor_LicenciaAlumno(string uidAlumno, string uidLicencia){
  runQuery("select id_profesor from autoescuela.licenciaalumno where id_alumno=" + uidAlumno + " AND id_licencia=" + uidLicencia + "allow filtering;");
  return resultStrings();
}


Database::~Database(){
  CassFuture* close_future = cass_session_close(session);

  cass_future_wait(close_future);
  cass_future_free(close_future);
  cass_future_free(connect_future);

  cass_cluster_free(cluster);
  cass_session_free(session);
  cass_result_free(result);
}

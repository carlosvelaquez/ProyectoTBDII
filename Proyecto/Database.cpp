#include "Database.h"

Database::Database(){
  isConnected = false;

  /* Setup and connect to cluster */
  connect_future = NULL;
  cluster = cass_cluster_new();
  session = cass_session_new();

  /* Add contact points */
  cass_cluster_set_contact_points(cluster, hosts);

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
  /*
select json * from autoescuela.empleado;
select json * from autoescuela.profesor;
select json * from autoescuela.alumno;
select json * from autoescuela.categoriavehiculo;
select json * from autoescuela.vehiculo;
select json * from autoescuela.clase;
select json * from autoescuela.claseteorica;
select json * from autoescuela.pruebateorica;
select json * from autoescuela.clasepractica;
select json * from autoescuela.pruebapractica;
select json * from autoescuela.pago;
select json * from autoescuela.tipolicencia;
  */
  runQuery("select json * from autoescuela.empleado");
  vector<string> strings = resultStrings();

  empleados.clear();

  for (size_t i = 0; i < strings.size(); i++) {
    Empleado* nEmpleado = new Empleado();

    nEmpleado->fromJSON(strings[i]);
    empleados.push_back(nEmpleado);

    Instancia* nInstancia;
    nInstancia = nEmpleado;
    instancias.push_back(nInstancia);
  }

  return true;
}

bool Database::push(){
  for (size_t i = 0; i < instancias.size(); i++) {
    if (instancias[i]->isAlterado()) {
      actualizarInstancia(instancias[i]);
    }
  }

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

Database::~Database(){
  CassFuture* close_future = cass_session_close(session);

  cass_future_wait(close_future);
  cass_future_free(close_future);
  cass_future_free(connect_future);

  cass_cluster_free(cluster);
  cass_session_free(session);
  cass_result_free(result);
}

#include "Database.h"

Database::Database(){
  isConnected = false;

  /* Setup and connect to cluster */
  connect_future = NULL;
  cluster = cass_cluster_new();
  session = cass_session_new();
  hosts = "198.211.112.163";

  /* Add contact points */
  cass_cluster_set_contact_points(cluster, hosts);

  /* Provide the cluster object as configuration to connect the session */
  connect_future = cass_session_connect(session, cluster);

  if (cass_future_error_code(connect_future) == CASS_OK) {
    CassFuture* close_future = NULL;
    isConnected = true;
  } else {
    /* Handle error */
    const char* message;
    size_t message_length;
    cass_future_error_message(connect_future, &message, &message_length);
    qDebug() << "Error";
  }
}

bool Database::runQuery(string query){
  CassStatement* statement = cass_statement_new(query.c_str(), 0);
  CassFuture* query_future = cass_session_execute(session, statement);

  cass_statement_free(statement);

  /* This will block until the query has finished */
  CassError rc = cass_future_error_code(query_future);

  qDebug() << QString("Corriendo Query: ") + QString(query.c_str());
  qDebug() << QString("Resultado: ") + QString(cass_error_desc(rc));
  cass_future_free(query_future);
  return true;
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

    i->setUID();

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
}

QString Database::version(){
  /* Build statement and execute query */
  const char* query = "SELECT release_version FROM system.local";
  CassStatement* statement = cass_statement_new(query, 0);
  CassFuture* result_future = cass_session_execute(session, statement);

  QString ver = "undefined";

  if (cass_future_error_code(result_future) == CASS_OK) {
    /* Retrieve result set and get the first row */
    const CassResult* result = cass_future_get_result(result_future);
    const CassRow* row = cass_result_first_row(result);

    if (row) {
      const CassValue* value = cass_row_get_column_by_name(row, "release_version");

      const char* release_version;
      size_t release_version_length;
      cass_value_get_string(value, &release_version, &release_version_length);
      ver = QString(release_version);
    } else {
      /* Handle error */
      const char* message;
      size_t message_length;
      cass_future_error_message(result_future, &message, &message_length);
      qDebug() << "Error";
    }

    cass_result_free(result);
  }

  cass_statement_free(statement);
  cass_future_free(result_future);

  return ver;
}

bool Database::pull(){

}

bool Database::push(){
  for (for i = 0; i < instancias.size(); i++) {
    if (instancias[i]->isAlterado()) {
      actualizarInstancia(instancias[i]);
    }
  }
}

Database::~Database(){
  cass_future_free(connect_future);
  cass_cluster_free(cluster);
  cass_session_free(session);
}

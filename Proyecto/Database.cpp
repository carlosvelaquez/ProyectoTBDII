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

bool Database::actualizarInstancia(Instancia* i){
  if (i->getUID() == "") {
    //QUERY DE INSERCION
  }else{
    //QUERY DE ACTUALIZACION
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

bool pull(){
  //Jalar de la db
  for (size_t i = 0; i < count; i++) {
    /* code */
  }
}

bool push(){
  //Empujar a la db
}

Database::~Database(){
  cass_future_free(connect_future);
  cass_cluster_free(cluster);
  cass_session_free(session);
}

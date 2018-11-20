#ifndef DATABASE_H
#define DATABASE_H

#include <cassandra.h>
#include <QString>
#include <QDebug>

class Database {
private:
  bool isConnected;
  CassFuture* connect_future;
  CassCluster* cluster;
  CassSession* session;
  char* hosts;

public:
  Database();
  QString version();
  ~Database();
};

#endif /* end of include guard: DATABASE_H */

#ifndef INSTANCIA_H
#define INSTANCIA_H

#include <string>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonDocument>

using namespace std;

class Instancia {
protected:
  bool alterado;
  bool borrar;
  string uid;
  string tablePath;

public:
  //Instancia nueva, se asigna el UID como vacío para que se genere al pushear
  Instancia();

  //Instancia existente, se proporciona el UID
  Instancia(string);

  string getUID();
  void setUID(string);

  string getTablePath();
  bool isAlterado();
  bool isBorrado();
  void setBorrar(bool);

  virtual bool fromJSON(string);
  virtual string toJSON();

  ~Instancia();
};

#endif /* end of include guard: INSTANCIA_H */

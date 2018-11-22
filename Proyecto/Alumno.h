#ifndef ALUMNO_H
#define ALUMNO_H

class TipoLicencia;
class Pago;
class Clase;

#include "Instancia.h"
#include "Clase.h"
#include "TipoLicencia.h"
#include "Pago.h"


using namespace std;

class Alumno : public Instancia{

  private:
    string nombres;
    string apellidos;
    vector<Clase*> clases;
    vector<TipoLicencia*> licencias;
    vector<Pago*> pagos;

  public:
    Alumno();
    Alumno(string, string, string);
    Alumno(string, string);

    bool fromJSON(string);
    string toJSON();

    //Setters
    void setNombres(string);
    void setApellidos(string);

    //Getters
    string getNombres();
    string getApellidos();
    vector<Clase*>* getClases();
    vector<TipoLicencia*>* getLicencias();
    vector<Pago*>* getPagos();
};

#endif

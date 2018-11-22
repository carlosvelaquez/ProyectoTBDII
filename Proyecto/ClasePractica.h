#ifndef CLASEPRACTICA_H
#define CLASEPRACTICA_H

#include <string>

class ClasePractica : public Instancia{

  private:
    string uidClase;

  public:
    ClasePractica(string,string);
    ClasePractica(string);

    bool fromJSON(string);
    string toJSON();

};

#endif

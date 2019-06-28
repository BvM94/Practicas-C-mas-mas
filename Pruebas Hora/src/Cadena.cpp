#include "Cadena.h"

Cadena::Cadena(const char * cad)
{
    if(!cad)
    {
        this->vcad = new char[1];
        return;
    }
    this->vcad = new char[strlen(cad)+1];
    strcpy(this->vcad,cad);
}

Cadena::~Cadena()
{
    delete []this->vcad;
}

Cadena::Cadena (const Cadena & otra) ///constructor de copia
{
    this->vcad = new char [strlen(otra.vcad)+1];
    strcpy(this->vcad,otra.vcad);
}
Cadena& Cadena::operator = (const Cadena & otra) ///operador asignacion
{
    int unsigned longNueva = strlen(otra.vcad);
    if(strlen(this->vcad) != longNueva)
    {
        delete []this->vcad;
        this->vcad = new char[longNueva+1];
    }

    strcpy(this->vcad,otra.vcad);
    return *this;
}

Cadena Cadena::operator +(const Cadena & cad)const
{
    Cadena sumCad;
    delete []sumCad.vcad;

    sumCad.vcad = new char [strlen(this->vcad)+ strlen(cad.vcad)+1];
    strcpy(sumCad.vcad,this->vcad);
    strcat(sumCad.vcad,cad.vcad);

    return sumCad;
}

Cadena & Cadena::operator +=(const Cadena& cad)
{
    int longLlamador = strlen(this->vcad);
    char aux[longLlamador+1];
    strcpy(aux,this->vcad);
    delete []this->vcad;

    this->vcad = new char[longLlamador + strlen(cad.vcad)+1];
    strcpy(this->vcad,aux);
    strcat(this->vcad,cad.vcad);
    return *this;
}

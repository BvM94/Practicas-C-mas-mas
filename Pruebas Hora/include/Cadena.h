#ifndef CADENA_H
#define CADENA_H

#include <string.h>
#include <iostream>
#include <exception>
#include <stdexcept>

using namespace std;


class Cadena
{
    private:
        char * vcad;

    public:
        Cadena(const char * cad = NULL); ///constructor con inicializacion
        ~Cadena(); ///destructor

        Cadena (const Cadena & otra); ///constructor de copia
        Cadena& operator = (const Cadena & otra); ///operador asignacion

        Cadena & operator +=(const Cadena& cad);
        Cadena operator +(const Cadena & cad)const;
        friend ostream& operator<<(ostream & sal ,const Cadena& cad);


    protected:


};

#endif // CADENA_H

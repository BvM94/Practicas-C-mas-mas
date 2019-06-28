#ifndef CADENA_H
#define CADENA_H

#include <string.h>


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


    protected:


};

#endif // CADENA_H

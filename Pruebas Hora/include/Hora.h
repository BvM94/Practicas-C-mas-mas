#ifndef HORA_H
#define HORA_H

#include <iostream>
#include <stdexcept>
#include <exception>

using namespace std;

class Hora
{
    private:
        int seg;

    public:
        Hora(int h , int m , int s); //constructor
        Hora();                         //constructor por defecto
        static void validar_hora(int h, int m, int s);


        Hora operator+(const Hora& otra)const;
        Hora operator-(const Hora& otra)const;
        bool operator>(const Hora& otra)const;
        bool operator<(const Hora& otra)const;
        bool operator<=(const Hora& otra)const;
        bool operator>=(const Hora& otra)const;
        bool operator==(const Hora& otra)const;
        bool operator!=(const Hora& otra)const;

        void get_HMS(int &h , int &m, int &s);


    protected:
};

iostream& operator<<(iostream& sal ,Hora & hora);

#endif // HORA_H

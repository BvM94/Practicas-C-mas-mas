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

        void get_HMS(int &h , int &m, int &s)const;
        void set_HMS(int &h , int &m, int &s);
        friend ostream& operator<<(ostream& sal ,const Hora & hora);
        friend istream& operator>>(istream& ent,Hora &hora);


    protected:
};


#endif // HORA_H

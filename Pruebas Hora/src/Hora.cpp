#include "Hora.h"

#include <iostream>
#include <stdexcept>
#include <exception>

using namespace std;

Hora::Hora(int h , int m , int s) //constructor
{
//    validar_hora(h,m,s);
    this->seg = h * 3600 + m *60 + s;
}

Hora::Hora()
{
    this->seg = 0;
}

//void Hora::validar_hora(int h, int m, int s)
//{
//    if( h<0 || m<0 || m>=60 || s>=60 || s<0 )
//       throw exception("Fecha Invalida");
//}

Hora Hora::operator+(const Hora& otra)const
{
    Hora rs;

    rs.seg = this->seg + otra.seg;

    return rs;
}

Hora Hora::operator-(const Hora& otra)const
{
    Hora rs;

    rs.seg = this->seg - otra.seg;

    return rs;
}

bool Hora::operator>(const Hora& otra)const
{
    return this->seg > otra.seg;
}

bool Hora::operator<(const Hora& otra)const
{
    return this->seg < otra.seg;
}

bool Hora::operator==(const Hora& otra)const
{
    return this->seg == otra.seg;
}

bool Hora::operator>=(const Hora& otra)const
{
    return this->seg >= otra.seg;
}

bool Hora::operator<=(const Hora& otra)const
{
    return this->seg <= otra.seg;
}

bool Hora::operator!=(const Hora& otra)const
{
    return this->seg != otra.seg;
}

void Hora::get_HMS(int &h , int &m, int &s)
{
    h = this->seg / 3600;
    m = this->seg % 3600 /60;
    s = this->seg % 60;
}

iostream& operator<<(iostream& sal ,Hora & hora)
{
    int h,m,s;
    hora.get_HMS(h,m,s);

    sal<<h<<":"<<m<<":"<<s<<endl;
    return sal;
}

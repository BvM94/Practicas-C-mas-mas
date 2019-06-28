#include "Hora.h"

Hora::Hora(int h , int m , int s) //constructor
{
    validar_hora(h,m,s);
    this->seg = h * 3600 + m *60 + s;
}

Hora::Hora()
{
    this->seg = 0;
}

void Hora::validar_hora(int h, int m, int s)
{
    if( h<0 || m<0 || m>=60 || s>=60 || s<0 )
      throw runtime_error("Hora Invalida");
}

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

void Hora::get_HMS(int &h , int &m, int &s)const
{
    h = this->seg / 3600;
    m = this->seg % 3600 /60;
    s = this->seg % 60;
}

ostream& operator<<(ostream& sal ,const Hora & hora)
{
    int h,m,s;
    hora.get_HMS(h,m,s);

    sal<<h<<":"<<m<<":"<<s;
    return sal;
}

void Hora::set_HMS(int &h , int &m, int &s)
{
    validar_hora(h,m,s);
    this->seg = h * 3600 + m * 60 + s;
}

istream& operator>>(istream& ent,Hora &hora)
{
    int h,m,s;
    char c;

    ent>>h>>c>>m>>c>>s;
    hora.set_HMS(h,m,s);
    return ent;
}

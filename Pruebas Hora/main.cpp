#include <iostream>
#include "Hora.h"
#include "Cadena.h"

using namespace std;

int main()
{
//    Hora h1;
//    cout<<"Ingresar Hora (hh:mm:ss): ";
//    cin>>h1;
//    Hora h2(25,0,0);
//    Hora h3(12,0,0);
//    Hora h4(6,0,0);
//    Hora h5();
//
//    cout<<h2<<endl;
//
//    if(h1>h4)
//        cout<<h1<<" es mayor a "<<h4<<endl;
//
//    if(h1==h3)
//        cout<<h1<<" es igual a "<<h3<<endl;
//
//     if(h1<h4)
//        cout<<h1<<" es menor a "<<h2<<endl;
//
//    cout<<h1<<" + "<< h3 << " es " <<h1+h3<<endl;



    Cadena cad1("Hola");
    Cadena cad2 ("Que");
    Cadena cad3 ("tal?");

    cout<<cad1+cad2+cad3<<endl<<endl;

    cad1+= cad2;

    cout<<cad1;
}

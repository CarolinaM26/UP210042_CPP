/*
    Objetivo: Escribir un programa que lea la puntuacion del usuario e indique su nivel de rendimiento, asi como la cantidad de dinero que recibira el usuario
*/
#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
    float puntaje, total;
    int dineros=2400;
    cout<<"Introduzca su puntaje: "<<endl;
    cin>>puntaje;
    if(puntaje==0.0)
    {
        cout<<"Puntuacion valida, siguiente paso..."<<endl;
        cout<<"Su nivel de rendimiento es:"<<puntaje*100<<"%"<<" INACEPTABLE "<<endl;
        total=dineros*puntaje;
        cout<<"La cantidad de dinero a recibir es: "<<total<<endl;
    }
    else if (puntaje==0.4)
    {
        cout<<"Puntuacion valida, siguiente paso..."<<endl;
        cout<<"Su nivel de rendimiento es: "<<puntaje*100<<"%"<<" ACEPTABLE "<<endl;
        total=dineros*puntaje;
        cout<<"La cantidad de dinero a recibir es: "<<total<<endl;
    }
    else if (puntaje>=0.6)
    {
        cout<<"Puntuacion valida, siguiente paso..."<<endl;
        cout<<"Su nivel de rendimiento es:"<<puntaje*100<<"%"<<" MERITORIO "<<endl;
        total=dineros*puntaje;
        cout<<"La cantidad de dinero a recibir es: "<<total<<endl;
    }
    else
    {
        cout<<"Puntuacion invalida, sigue intentando..."<<endl;
    }
    return 0;
}


/*
    Objetivo: Escribir un programa para una empresa que tiene salas de juegos para todas las edades 
    y quiere calcular de forma automática el precio que debe cobrar a sus clientes por entrar.
    El programa debe preguntar al usuario la edad del cliente y mostrar el precio de la entrada. Si
    el cliente es menor de 4 años puede entrar gratis, si tiene entre 4 y 18 años debe pagar $5 y si es mayor de 18
    $10.
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int edad, entrada;
    cout<<"Ingresa tu edad"<<endl;
    cin>>edad;
    if(edad<=4)
    {
        cout<<"Tu entrada es gratis, adelante! "<<endl;
    }
    else if (edad>=4&&edad<=18)
    {
        cout<<"Paga $5, disfruta tu experiencia! "<<endl;
    }else
    {
        cout<<"Paga $10, disfruta tu experiencia! "<<endl;
    }
    return 0;
}

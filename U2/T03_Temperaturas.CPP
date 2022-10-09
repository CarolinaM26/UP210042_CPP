/*
    Objetivo:Hacer un programa en el que se ingresen 6 temperaturas y 
    determinar el promedio, la mas baja y la mas alta
    Nombre: Carolina Magdiel Moran Requenes     ISC03A      UP210042
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int total;
    float temperaturas[6];
    int cajita=0;
    float promedio=0;
    int menor=9999, mayor=-9999;
    cout<<"Ingresa los datos: "<<endl;
    cin>>total;
    if(total>=0&&total<=6)
    {
        for(int i=1;i<=total;i++)
        {
            cout<<"Ingresa la temperatura "<<i<<":";
            cin>>temperaturas [i];
            cajita+=temperaturas [i];
        }
        int i;
        if (menor<=temperaturas [i])
        {
            menor=temperaturas [i];
        }
        int i;
        if (mayor>=temperaturas [i])
        {
            mayor=temperaturas [i];
        }
        cout<<"El promedio de las temperaturas es: "<<promedio<< endl;
        cout<<"El numero menor de las temperaturas es: "<<menor<< endl;
        cout<<"El numero mayor de las temperaturas es: "<<mayor<< endl;
    }
    else
    {
        cout<<"El numero de temperaturas ingresadas es excedente..."<<endl;
    }
    return 0;
}

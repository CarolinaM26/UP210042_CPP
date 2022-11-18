//Objetivo: Realizar un programa que haga la funcion coseno
//Nombre: Carolina Magdiel Moran Requenes   ISC03A  UP210042
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    short int i, j, n, expo=0, signo=-1;
    float x;
    double resultado=0, factorial=1;
    cout<<"Introduzca el angulo"<<endl;
    cin>>x;
    cout<<"Introduzca el numero de terminos"<<endl;
    cin>>n;
    for(i=0;i<=n;i++){
        factorial=1;
        for(j=1;j<=expo;j++)
            factorial*=j;
            signo*=-1;
            resultado+=signo*pow(x,expo)/factorial;
            cout<<resultado<<endl;
            expo=expo+2;
    }
    cout<<"El coseno del angulo es: "<<resultado<<endl;
    return 0;
}
//Objetivo: Escribir un programa que realice bisecciones
//Nombre: Carolina Magdiel Moran Requenes   ISC03A  UP210042
#include <iostream>
#include <cmath>
using namespace std;

double funEcuacion1(double x)
{ 
    double y;            //x2^-8x+15         //pow= elevar un numero a la potencia que le elijas
    return (pow(x,2)-8*x+15);
}

int main()
{
    double x1=2;
    double x2=8;
    double xm;
    double Es=.001; //el numero de ceros indica el numero de digitod //Error estandar
    double Er=abs(x2-x1); //error relativo//abs= valor absoluto
    double r=funEcuacion1(0);
    
    int i=1;
    while(Er > Es )
    {
        xm=(x1+x2)/2;
        if(funEcuacion1(x1)* funEcuacion1(xm)<0)
        {
            x2=xm;
        }
        else
        { x1=xm; }
        Er=abs(x2-x1);
        i++;
    }
    cout<<"i= "<< i <<"raiz= "<<xm<<endl;
    cout<<r<<endl;
    return 0;
}


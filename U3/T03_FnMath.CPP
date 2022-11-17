#include <iostream>
#include <math.h>
#include "Libro.h"
using namespace std;

int main()
{
    double a= 45;                           //M_PI>>>Para el valor de Pi en libreria Cmath; //3.1416/4;  //sin(45)=0.7071
    cout<<sin(a)<<endl;
    cout<<fn_suma(5,7)<<endl;
    cout<<esBisiesto(2022)<<endl;         //Programa de año bisiesto  
    cout<<"\n... Hecho!"<<endl;
    return 0;
}

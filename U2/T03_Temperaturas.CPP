/*
    Objetivo:Hacer un programa en el que se ingresen 6 temperaturas y 
    determinar el promedio, la mas baja y la mas alta
    Nombre: Carolina Magdiel Moran Requenes     ISC03A      UP210042
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int temperaturas, mayor, menor;
    float cajita=0;
    for (int i=1;i<=6;i++)
    {
            cout<<"Ingresa la temperatura "<<i<<":"<<endl;
            cin>>temperaturas;
            cajita+=temperaturas;
        
        if (i==1){
            mayor=temperaturas;
            menor=temperaturas;
        }
        else
        { 
          if (menor<temperaturas)
        {
            menor=temperaturas;
        }
            else
            {
                if(mayor>temperaturas)
            {
                mayor=temperaturas;
            }
            }
        }
    }
    cout<<"El promedio de las temperaturas es: "<<cajita<< endl;
    cout<<"El numero menor de las temperaturas es: "<<menor<< endl;
    cout<<"El numero mayor de las temperaturas es: "<<mayor<< endl;
    return 0;
}

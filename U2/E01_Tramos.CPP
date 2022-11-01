/*
    Objetivo: Escribir un programa que pregunte al usuario su renta anual y muestre por pantalla que le corresponde
    renta                   Impuesto                Nombre:Carolina Magdiel Moran Requenes  ISC03A  27/09/2022
    menos de $10,000        [5%]
    entre $10,000 y $20,000 [15%]
    entre $20,000 y $35,000 [20%]
    entre $35,000 y $60,000 [30%]
    Mas de $60,000          [45%]
*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    float renta=0;
    float impuesto=0;
    cout<< "Ingrese el monto de renta anual: "<<endl;
    cin>>renta;
    if(renta>=1)
    {
        if(renta<10000)
        {
            impuesto=5;
        }
        else if(renta>=10000 && renta<20000)
        {
            impuesto=15;
        }
        else if(renta>=20000 && renta< 35000)
        {
            impuesto=20;
        }
        else if(renta>=35000 && renta< 60000)
        {
            impuesto=30;
        }
        else 
        {
            impuesto=45;
        }
    } else {
        cout<<"vuelva a ingresar"<<endl;
    }
    cout<<"Su renta anual sera de: " <<impuesto <<" % " << endl;    
    return 0;
}
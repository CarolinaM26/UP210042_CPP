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
    int renta;
    float total;
    float impuesto;
    cout<< "Ingrese el monto de renta anual: "<<endl;
    cin>>renta;
    {
        if(renta<=10,000)
        {
            impuesto= renta * 0.05;
            total= impuesto+renta;
        }
        else if(renta>=10,000 && renta<=20,000)
        {
            impuesto= renta * 0.15;
            total= impuesto+renta;
        }
        else if(renta>=20,000 && renta<= 35,000)
        {
            impuesto= renta * 0.20;
            total= impuesto+renta;
        }
        else if(renta>=35,000 && renta<= 60,000)
        {
            impuesto= renta * 0.30;
            total= impuesto+renta;
        }
        else 
        {
            impuesto= renta * 0.45;
            total= impuesto+renta;
        }
    cout<<"Su renta anual sera de: " << total<<" % " << endl;    
    return 0;
    }
}
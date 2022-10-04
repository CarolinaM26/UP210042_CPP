/* Unidad 1 Tipos de Datos
    autor: Carolina Magdiel Moran Requenes
    Fecha: 15/09/2022
    Descripción: Muestra los diferentes tipo de datos en c++
*/

//Libreria para manejo de entradas y salida de pantalla
#include <iostream>
//libreria para el uso de printf y scanf
#include <stdio.h>

//Uso del namespace para evitar el std::
using namespace std;

//Funcion principal de tipo entero
int main()
{
    int entero =21;
    float flotante = 3.4e38;
    double grande = 2.753275472;
    char caracter = '@';

    cout<<"Este programa muestra los tipos de datos, \n";
    cout<<"El nuumero entero es: " << entero <<end;
    cout<<"El tamaño del entero es: "<<sizeof(entero)<< "bytes"<<endl;
    cout<<"El numero flotante es: "<<flotante<<endl;
    return 0;
/*
    cout<<"El numero flotante es: "<<flotante<< endl;
    cout<<"El tamano del flotante es: " <<sizeof(flotante)<<"bytes"<<endl;
    cout<<"el tamno del double es: "<<sizeof(grande)   
*/    
}

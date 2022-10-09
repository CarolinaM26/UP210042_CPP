/*
    Objetivo: que el programa lea indefinidamente cantidades de productos
    y su precio, y al final indique el total de la factura. Para saber que
    se ha terminado con la compra, se debera ingresar un 0 en la cantidad.
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int producto;
    float numeritos;
    float sumativa=0;
    do
    {
        cout<<"Producto:"<<endl;
        cin>>producto;
        if(producto!=0 && producto>0)
        {
            cout<<"Precio del producto:"<<endl;
            cin>>numeritos;
            sumativa+=numeritos;
        }
    } while (producto!=0);
    cout<<"El total de su compra es: "<<sumativa<<endl;
    return 0;
}

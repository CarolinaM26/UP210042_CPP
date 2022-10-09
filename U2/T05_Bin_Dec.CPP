/*
    Objetivo: Convertir de binario a decimal
    Nombre: Carolina Magdiel Moran Requenes     ISC03A      UP210042
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int binario, resultado, demas=0;
    int digito[8];
    cout<<"Introduce el numero en binario: "<<endl;
    cin>>binario;
    for(int i=0; i<8;i++)
    {
    digito[i]=binario%10;
    binario/=10;
    }
    for(int i=7; i>=0;i--)
    {
        resultado=(demas*2)+digito[i];
        demas=resultado;
    }
    cout<<"el numero en decimal es: "<<resultado<<endl;
    return 0;
}

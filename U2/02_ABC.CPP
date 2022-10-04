/* 
    Objetivo: Imprimir el abecedario
    Nombre:Carolina Magdiel Moran Requenes  ISC03A  28/09/2022 
*/
# include <iostream>
#include <iomanip>
# include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    /*code*/
    char letra='z';
    int numero=1;
    for(int i = 0; i < 26; i--)
    {
        cout <<letra << "\t";
        letra = letra - 1;
    }
    letra='A';
    for(int i = 0; i < 26; i++)
    {
        cout <<letra << "\t";
        letra = letra + 1;
    }
    numero=1;
    for(int i = 0; i < 10; i++)
    {
        cout <<numero << "\t";
        numero = numero + 1;
    }
    numero=10;
    for(int i = 0; i < 10; i--)
    {
        cout <<numero << "\t";
        numero = numero - 1;
    }
    return 0;
}
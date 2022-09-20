#include <iostream>
using namespace std;

int main( int argc, char const *argv [])
{
    int n = 10;
    int suma = 0;
    int pares = 0;
    int impares = 0;
    for(int i = 1; i <= n; i++)
    {
        if (i % 2 ==0)
        {
            pares= pares + i;
        }
        if ( i % 2 !=0)
        {
            impares= impares + i;
        }
        suma= suma + i;
    }
    printf("La suma de %d Numeros es %d: \n" , n, suma );
    printf ("La suma de los numeros pares es %d: \n" , pares );
    printf ("La suma de los numeros impares es %d: \n " , impares);
    return 0;
}
//Objetivo: While mientras True

#include <iostream>
#include <stdio.h>
using namespace std;
int main() 
{
    int n, i;
    char opcion='s';
    printf("Tabla de multiplicar \n");
    while(opcion== 's')
    {
        //entrada
        printf("Numero: ");
        scanf("%d", &n);
        //proceso
        i = 1;
        do
        {
            printf("%n X %d = %d \n", n, i, n*i);
            i++;
        }while(i<=10);
        printf("Desea otro? <s/n");
        scanf("%s", &opcion);
    }
    printf("...Hecho!");
    return 0;
}
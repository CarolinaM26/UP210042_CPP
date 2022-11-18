//Objetivo: Realizar un codigo que te de la desviacion estandar poblacional
//Nombre: Carolina Magdiel Moran Requenes   ISC03A  UP210042
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    short int i,j,n;
    cout<<"Introduzca el numero de elementos"<<endl;
    cin>>n;
    float a[n];
    float suma=0, media, mediana,desviacion=0,aux;
    for(i=0;i<n;i++)
    {
        cout<<"A["<<i<<"]:"<<endl;
        cin>>a[i];
        suma+=a[i];
    }
    media=suma/n;
    for(j=0;j<n;j++)
        for(i=0;i<n;i++)
            if(a[i]>a[i+1]){
            aux=a[i];
            a[i]=a[i+1];
            a[i]=aux;}
    if ((n%2)==1)
    mediana=a[n/2];
    else
    mediana=(a[n/2]+a[n/2-1])/2;
    aux=0;
    for(i=0;i<n;i++)
        aux=aux+pow(a[i]-media,2);
        aux=aux/n;
        desviacion=sqrt(aux);
    cout<<"Desviacion estandar: "<<desviacion<<endl;    
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int i,j,n,temp,vector[100];
    cout<<"cuantos numeros deseas ingresar: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Ingresa un numero: ";
        cin>>vector[i];
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++){
            temp=vector[j];
            vector[j]=vector[j+1];
            vector[j+1]=temp;
        }
    }
    for (i=0;i<n;i++)
    {
        cout<<vector[i]<<endl;
    }
    return 0;
}
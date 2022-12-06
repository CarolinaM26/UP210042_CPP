//dos primeras letras de tu primer apellido
//primer letra del segundo
//primer ltra del primer nombre
//year, month, day
//3 caracteres aleatorios
#include <iostream>
#include <cstring>
using namespace std;
int main(){
    string nombre="Juan";
    string ap="Jimenez";
    string am="Esparza";
    string fe="03/08/1987";
    string rfc="";
    int v=nombre.length(); 
    int p=0;
    rfc=rfc+ap[0];
    for (int i = 1; i < v && p<1; i++)
    {
        if (ap[i]=='a' || ap[i]=='e' || ap[i]=='i' || ap[i]=='o' || ap[i]=='u' )
        {
            rfc+=ap[i];
            p++;
        }  
    }
    int d1=fe.find_last_of("/");
    int d2=fe.find("/");
    rfc=rfc+am[0]+nombre[0]+fe.substr(d1+1,4)+fe.substr(d2+1,2)+fe.substr(0,2);
    v=rfc.length();
    for (int i = 0; i < v; i++)
    {
        rfc[i]=toupper(rfc[i]);
    }
    cout<<"El RFC de "<<nombre<<" es : "<<rfc;
    return 0;
}
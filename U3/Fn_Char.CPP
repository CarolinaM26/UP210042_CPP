//Del 1 al 3999
#include <iostream>
#include <cstring>//para c++
//#include <string.h>//para c nativo
using namespace std;

int main(int argc, char const *argv[])
{
    char letra='A';
    char texto[50]="universidad";
    char texto2[]={'A','D','I','O','S','\0'};
    char texto3[]={"Hola Amigos Mios"};

    for (int i=0;texto[i]!='\0';i++)
    {
        cout<<texto[i];
    }
    cout<<endl;
    for (int i = 0; texto[i] !='\0'; i++)
    {
        if(texto[i]!='a'&&texto[i]!='e'&&texto[i]!='i'&&texto[i]!='o'&&texto[i]!='u')
        {
            cout<< texto[i] <<" ";
        }
    }
    cout<<endl;
    for(int i=0;texto[i] !='\0';i++)
    {
        if (isdigit(texto[i]))
        {
            cout<<texto[i]<<" ";
        }
    }
    cout<<endl;
    for (int i=0;texto[i]!='\0';i++)
    {
        if(islower(texto[i]))
        {
            texto[i]=toupper(texto[i]);
            cout<<texto[i]<<" ";  
        }
    }
    cout<<endl;

    strcat(texto, "la mejor"); //concatenar//Nos puede servir para el RFC
    cout<<texto<<endl;
    cout<< strchr(texto,' ') <<endl;//extraer substring a partir del caracter 
    cout<<"\n... Hecho!"<<endl;
    return 0;
}

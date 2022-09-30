/*
    Objetivo: Definir la etapa de la persona
        [1...150]- Estas vivo!
        [1...30]- 1ra edad
        [31...60]- 2da edad
        [61..90]- 3era edad
        [91...]- horas extras
*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main ()
{
    int e=0;
    cout<<"Ingrese su edad: "<<endl;
    cin>>e;
    if(e>=0 && e<=150)
    {
        cout<<"¡Estas vivo! \n"<<endl;
        if(e<=30)
        {
            cout<<"1ra edad \n"<<endl;
        }
        else if(e>=31 && e<=60)
        {
            cout<<"2da edad \n"<<endl;
        }
        else if(e>=61 && e<=90)
        {
            cout<<"3ra edad \n"<<endl;
        }
        else 
        {
            cout<<"Horas extras \n"<<endl;
        }
    }
    else
    {
        cout<<"DEAD LINE...\n"<<endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a=6,b=2,opcion=0;
    double r;
    cout<<"Que operacion deseas realizar?"<<endl;
    cin>>opcion;
    cout<<"Operacion <1..4> : (Si se ingresa el 0 saldras de la interfaz)";
    cin>>opcion;
    while(opcion !=0)
    {
    switch (opcion)
    {
        case 1: 
            cout<<"suma"<<endl;
            break;
        case 2:
            cout<<"resta"<<endl;
            break;
        case 3:
            cout<<"multiplicacion"<<endl;
            break;
        case 4:
            cout<<"division";
            if (b!=0){
                r=a/b;
                cout<<r<<endl;
            }else{
                cout<<"Sintax Error"<<endl;
            }
            break;            
    
        default:
            cout<<"La opcion no es valida"<<endl;
            break;
    }
    cout<<"Operacion <1..4> : ";
    cin>>opcion;
    }
    return 0;
}
// case 1 ... 45:>>Indica un rango establecido
// case 'a':

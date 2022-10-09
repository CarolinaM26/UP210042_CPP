/*
    Objetivo: escribir un programa que pregunte al usuario si quiere una pizza vegetariana o no, y en funcion a su 
    respuesta le muestre un menu con los ingredientes disponibles que elija. Solo se puede elegir un ingrediente ademas
    de la mozzarella y el tomate que estan en todas las pizzas. Al final se debe elegir si es vegetariana o no, ademas
    de los ingredientes adicionados.
    Nombre: Carolina Magdiel Moran Requenes         ISC03A      UP210042    
*/
#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char const *argv[])
{
    int opcion, vegetariana, tradicional;
    cout<<"Que pizza vas a ordenar?\n Vegetariana [1] Tradicional [2] Exit [3]"<<endl;
    cin>>opcion;
    switch (opcion)
    {
    case 1: 
        cout<<"Pizza vegetariana con...?\n(La mozzarella y el tomate ya vienen incluidos)\n Champiñones [1] Aceitunas [2] Jitomate [3] Pimiento [4] Exit [5]"<<endl;
        cin>>vegetariana;
        switch(vegetariana)
        {
            case 1:
                cout<<"Champiñones "<<endl;
                break;
            case 2:
                cout<<"Aceitunas "<<endl;
                break;
            case 3:
                cout<<"Jitomate "<<endl;
                break;
            case 4:
                cout<<"Pimiento "<<endl;
                break;
            case 5:
                cout<<" (Sin ingredientes adicionales) "<<endl;
                break;
        }
        cout<<"Tu pizza "<< opcion <<"con los ingredientes "<< vegetariana <<"esta lista, disfruta! "<<endl;
        break;
    case 2: 
        cout<<"Pizza tradicional con...?\n(La mozzarella y el tomate ya vienen incluidos)\n Salchicha [1] Salami [2] Tocino [3] Champiñones [4] exit [5] "<<endl;
        cin>>tradicional;
        switch(tradicional)
        {
            case 1:
                cout<<"Salchicha "<<endl;
                break;
            case 2:
                cout<<"Salami "<<endl;
                break;
            case 3:
                cout<<"Tocino "<<endl;
                break;
            case 4:
                cout<<"Champiñones "<<endl;
                break;
            case 5:
                cout<<" (Sin ingredientes adicionales) "<<endl;
                break;
        }
        cout<<"Tu pizza "<< opcion <<"con los ingredientes "<< tradicional <<"esta lista, disfruta! "<<endl;
        break;
    case 3:
        exit(EXIT_SUCCESS);    
    default:
        cout<<"La opcion elegida no es valida"<<endl;    
    }
    return 0;
}

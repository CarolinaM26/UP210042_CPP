/*
    Onjetivo: escribir un programa que pregunte al usuario si quiere una pizza vegetariana o no, y en funcion a su 
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
    int opcion;
    cout<<"Que pizza vas a ordenar? Vegetariana [1] Tradicional [2] Exit [3]"<<endl;
    cin>>opcion;
    switch (opcion)
    {
    case 1: 
        cout<<"Pizza vegetariana con... "<<endl;
        break;
    case 2: 
        cout<<"Pizza tradicional con... "<<endl;
        break;
    case 3:
        exit(EXIT_SUCCESS);    
    default:
        cout<<"La opcion elegida no es valida"<<endl;    
    }
        cout<<"Que ingredientes deseas agregar? Champiñones [1] Aceitunas [2] Jitomate [3] Pimiento [4] Exit [5]"<<endl;
        cin>>opcion;
        switch(opcion)
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
        }
    return 0;
}

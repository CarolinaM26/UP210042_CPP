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
    cout<<"Que pizza vas a ordenar?\n Vegetariana(Tofu y pimiento) [1] Tradicional (Peperoni, Jamon y salmon) [2] Exit [3]"<<endl;
    cin>>opcion;
    switch (opcion)
    {
    case 1: 
        cout<<"Pizza vegetariana con...?\n(La mozzarella y el tomate ya vienen incluidos)\n Tofu [1] Aceitunas [2] Jitomate [3] Exit [4]"<<endl;
        cin>>vegetariana;
        switch(vegetariana)
        {
            case 1:
                cout<<"Tofu "<<endl;
                cout<<"Tu pizza Vegetariana con los ingredientes Tofu esta lista, disfruta!"<<endl;
                break;
            case 2:
                cout<<"Aceitunas "<<endl;
                cout<<"Tu pizza Vegetariana con los ingredientes Aceitunas esta lista, disfruta!"<<endl;
                break;
            case 3:
                cout<<"Jitomate "<<endl;
                cout<<"Tu pizza Vegetariana con los ingredientes Jitomate esta lista, disfruta!"<<endl;
                break;
            case 4:
                cout<<" (Sin ingredientes adicionales) "<<endl;
                cout<<"Tu pizza Vegetariana sin ingredientes adicionales esta lista, disfruta! =)"<<endl;
                break;
        }
        break;
    case 2: 
        cout<<"Pizza tradicional con...?\n(La mozzarella y el tomate ya vienen incluidos)\n Peperoni [1] Jamon [2] Tocino [3] Salmon [4] exit [5] "<<endl;
        cin>>tradicional;
        switch(tradicional)
        {
            case 1:
                cout<<"Peperoni "<<endl;
                cout<<"Tu pizza Tradicional con los ingredientes peperoni esta lista, disfruta! =)"<<endl;
                break;
            case 2:
                cout<<"Jamon "<<endl;
                cout<<"Tu pizza Tradicional con los ingredientes jamon esta lista, disfruta! =)"<<endl;
                break;
            case 3:
                cout<<"Tocino "<<endl;
                cout<<"Tu pizza Tradicional con los ingredientes tocino esta lista, disfruta! =)"<<endl;
                break;
            case 4:
                cout<<"Salmon "<<endl;
                cout<<"Tu pizza Tradicional con los ingredientes salmon esta lista, disfruta! =)"<<endl;
                break;
            case 5:
                cout<<" (Sin ingredientes adicionales) "<<endl;
                cout<<"Tu pizza Tradicional sin ingredientes adicionales esta lista, disfruta! =)"<<endl;
                break;
        }
        break;
    case 3:
        exit(EXIT_SUCCESS);    
    default:
        cout<<"La opcion elegida no es valida"<<endl;    
    }
    return 0;
}

#include <iostream>
#include <cstring>
using namespace std;

int main()//Metodo, el main recibe los parametros a ejecutar
{
    //string>>a base de un tipo nativo 'char'>>Es tipo clase, es decir, aquella donde tu le implementas atributos(variables)
    //cualidades(metodo=accion)>>siempre que veas unos "()" estoy mandando a llamar un metodo
    char a[]="sida";
    string texto="Universidad UPA";
    string texto2("HolA");

    cout<<"Contenido:   "<<texto<<endl;
    cout<<"length:      "<<texto.length()<<endl;
    cout<<"compare:     "<<texto.compare("universidad")<<endl;  //cuando da 0 es igual, cuando es 1 el primero gana, cuando es -1 el segundo gana
    cout<<"find:        "<<texto.find(a)<<endl; //regresa la posicion 
    cout<<"substr:      "<<texto.substr(6,4)<<endl; //regresa un substring>>"traeme esa little porcion"
    cout<<"find_last:   "<<texto.find_last_of("i")<<endl;//regresa la posicion
    cout<<"replace:     "<<texto.replace(6,5,"vih")<<endl;//reemplaza el numero de elementos que le indicas a partir de loa posicion indicada
    texto=texto+".";
    cout<<"concatenar:  "<<texto<<endl;
    texto.clear();
    cout<<"clear:       "<<texto<<endl;
    texto.swap(texto2);
    cout<<"Swap:        "<<texto<<endl;//las cajitas son metodos
    //cout<<"reverse:     "<<texto2.reserve()<<endl;
    system ("pause");
    return 0;
}
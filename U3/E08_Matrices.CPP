#include <iostream>
using namespace std;

/*void imprimirA(int A[] [], int f, int c){
    cout<<"Matriz a "<<endl;

}
//sleep (frecuencia)>>>Te indica los milisegundos que va a tardar en imprimir el cout
*/
int main(int argc, char const *argv[])
{
    int f=2, c=3;
    int matriz [f][c];
    int contador=1;
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
        matriz[i][j]=contador;
        contador++;
        }
    } 
    //imprimir la matriz
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
        matriz[i][j]=contador;
        cout<<matriz [i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
#include <iostream>

using namespace std;
int menorV (int x[], int N)
{
    int menor = x[0];
    for (int i=0;i<=N;i++)
    {
        if (x[i]<menor)
        {
            menor=x[i];
        }
    }
    return menor;
}

int mayor2(int x,int y){
    int mayor;
    mayor= (x>y) ? x:y ; //if ternario/ lado izquierdo true (si se cumple)/lado derecho false (no cumple)
    return mayor;
}

int main(int argc, char const *argv[])
{   
    int cal[]= {10,9,8,7,6};
    int n=5;
    
    int menor=menorV(cal,5);
    int mayor=mayor2(8,10);
    cout<<"Menor = "<<menor<<endl;
    cout<<"Mayor = "<<mayor2<<endl;
    cout<<"...Hecho"<<endl;

    return 0;
}
    //
    //cal[1]=10;
    //cal[2]=8;
    //cal[3]=9;
    //cal[4]=9;
    //cal[5]=10;
    //double total=0;
    //for (int i=0; i < n; i++)
    //{
    //    total+=cal[i];
    //}
    //double promedio=total/n;
    //cout<<total<<endl;
    //cout<<promedio<<endl;
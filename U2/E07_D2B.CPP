#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    int decimal, binarios, resultado=1;
    cout<<"Ingresa el numero decimal"<<endl;
    cin>>decimal;
    while (decimal>=1)
    {
        if(decimal/2==1)
        {
            binarios=binarios+resultado;
        }

    }
    cout<<"El binario del decimal es: "<<resultado<<endl;
    return 0;
}

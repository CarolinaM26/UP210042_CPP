// Objetivo: For's anidados
//          TABLAS DEL 1 AL 10
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int r=0;
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=10;j++)
        {
            r=i*j;
            cout<<i<<" x "<<j<<" = "<<r<<endl;
        }
        cout<<"\n";
    }
    return 0;
}

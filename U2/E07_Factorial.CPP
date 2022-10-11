#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n=1;
    int total=0;
    do
    {
        total*=n;
        n++;
    }while (n<=10);
    {
        cout<<"El factorial del numero es: "<<total<<endl;
    }
    
    return 0;
}
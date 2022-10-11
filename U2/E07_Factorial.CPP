#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n=5;
    int total=10;
    do
    {
        total*=n;
        n++;
    }while (n<=10);
    {
        cout<<"El factorial del numero" <<n<< "es: "<<total<<endl;
    }
    
    return 0;
}
#include <iostream>
using namespace std;

int doble(int a){
    int r;
    r=a*2;
    return r; //variable que regresas, siempre debe ser la misma correspondecia tanto al principio como al final
}
int main(int argc, char const *argv[]){
    int x=5;
    int r=doble(x);
    cout<<r<<endl;
    return 0;
}

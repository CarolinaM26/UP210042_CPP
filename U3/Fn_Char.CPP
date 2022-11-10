//Del 1 al 3999
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char letra='A';
    char texto[20]="Universidad";
    for (int i=0;texto[i]!='\0';i++)
    {
        cout<<texto[i];
    }
    cout<<"... Hecho!"<<endl;
    return 0;
}

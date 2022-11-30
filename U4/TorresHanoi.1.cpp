#include <iostream>;
using namespace std;

void jugada (int disco, int torre1, int torre2, int torre3){
    if(disco==1){
        cout<<"mover disco de "<<torre1<<" hacia la torre "<<torre3<<endl;
    }else{
        jugada(disco-1,torre1,torre3,torre2);
        cout<<"mover disco de "<<torre1<<" hacia la torre "<<torre3<<endl;
        jugada(disco-1,torre2,torre1,torre3);
    }
}

int main()
{
    char res;
    do{
    int torre1=1, torre2=2, torre3=3, disco=0;
    cout<<"Con cuantos discos quiere jugar?";
    cin>>disco;
    jugada(disco,torre1,torre2,torre3);
    cout<<"desea volver a jugar?";
    cin>>res;
    }while(res=='s');
    return 0;
}

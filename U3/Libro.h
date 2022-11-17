#include <iostream>
using namespace std;

int fn_suma(int x, int y){
    return (x+y);
}
double G2R(double a){        //Grados a radianes
    double r;
    r=a*3.141559/180;
    return r;
}

double sin(double a){       //Función Seno
    double r;
    r= sin(G2R(a));
    return r;
}
bool esBisiesto(int year){     //Programa año Bisiesto
    bool r=true;
    r= year%400==0||year%4==0&&year%100!=0;
    return r;
}
int main()  //Programa de prueba para cajerito
{
    int pesitos, cantidad;
    cout<<"Ingresa la cantidad: "<<endl;
    cin>>pesitos;
    if (pesitos>=1000)
    {
    cantidad=pesitos/1000;
    pesitos%=1000;    
    cout<<"Billetes de 1000 pesos..["<<cantidad<<"]"<<endl;
    }else{EXIT_SUCCESS;}
    if (pesitos>=500)
    {
    cantidad=pesitos/500;
    pesitos%=500;    
    cout<<"Billetes de 500 pesos...["<<cantidad<<"]"<<endl;
    }else{EXIT_SUCCESS;}
    if (pesitos>=200)
    {
    cantidad=pesitos/200;
    pesitos%=200;    
    cout<<"Billetes de 200 pesos...["<<cantidad<<"]"<<endl;
    }else{EXIT_SUCCESS;}
    if (pesitos>=100)
    {
    cantidad=pesitos/100;
    pesitos%=100;    
    cout<<"Billetes de 100 pesos...["<<cantidad<<"]"<<endl;
    }else{EXIT_SUCCESS;}
    if (pesitos>=50)
    {
    cantidad=pesitos/50;
    pesitos%=50;    
    cout<<"Billetes de 50 pesos....["<<cantidad<<"]"<<endl;
    }else{EXIT_SUCCESS;}
    if (pesitos>=20)
    {
    cantidad=pesitos/20;
    pesitos%=20;    
    cout<<"Billetes de 20 pesos....["<<cantidad<<"]"<<endl;
    }else{EXIT_SUCCESS;}
    if (pesitos>=10)
    {
    cantidad=pesitos/10;
    pesitos%=10;    
    cout<<"Monedas de 10 pesos.....["<<cantidad<<"]"<<endl;
    }else{EXIT_SUCCESS;}
    if (pesitos>=5)
    {
    cantidad=pesitos/5;
    pesitos%=5;    
    cout<<"Monedas de 5 pesos......["<<cantidad<<"]"<<endl;
    }else{EXIT_SUCCESS;}
    if (pesitos>=2)
    {
    cantidad=pesitos/2;
    pesitos%=2;    
    cout<<"Monedas de 2 pesos......["<<cantidad<<"]"<<endl;
    }else{EXIT_SUCCESS;}
    if (pesitos>=1)
    {
    cantidad=pesitos/1;
    pesitos%=1;    
    cout<<"Monedas de 1 peso.......["<<cantidad<<"]"<<endl;
    }else{EXIT_SUCCESS;}
    return 0;
}

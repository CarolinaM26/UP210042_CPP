<center>  

## UNIT 3

</center>

### In this unit we saw many differents kind of options to do a functions, like vectors, arrays, some of them with different explanations, and things like that...
I'm gonna show 9 works that we do around this unit:
![imagen](https://i.pinimg.com/originals/0a/f7/18/0af7182877f9521943b5ebed30559e01.jpg)


- T01_Bisection.CPP:
```
//Objetivo: Escribir un programa que realice bisecciones
//Nombre: Carolina Magdiel Moran Requenes   ISC03A  UP210042
#include <iostream>
#include <cmath>
using namespace std;

double funEcuacion1(double x)
{ 
    double y;            //x2^-8x+15         //pow= elevar un numero a la potencia que le elijas
    return (pow(x,2)-8*x+15);
}

int main()
{
    double x1=4;
    double x2=7;
    double xm;
    double Es=.001; //el numero de ceros indica el numero de digitod //Error estandar
    double Er=abs(x2-x1); //error relativo//abs= valor absoluto
    double r=funEcuacion1(0);
    
    int i=1;
    while(Er > Es )
    {
        xm=(x1+x2)/2;
        if(funEcuacion1(x1)* funEcuacion1(xm)<0)
        {
            x2=xm;
        }
        else
        { x1=xm; }
        Er=abs(x2-x1);
        i++;
    }
    cout<<"i= "<< i <<"raiz= "<<xm<<endl;
    cout<<r<<endl;
    return 0;
}
```
Proffs:
#1

![imagen](https://i.pinimg.com/originals/2c/b0/33/2cb033f56b7f2a1ec33da6f000e0af2c.jpg)

#2

![imagen](https://i.pinimg.com/originals/46/0c/e5/460ce51f5887cffa90d8d63792d02303.jpg)

- Leap year T02_Bisiesto.CPP:
```
//Objetivo:realizar un programa que determine con un '1' si es bisiesto y con un '0' si no lo es
//Nombre:Carolina Magdiel Moran Requenes    ISC03A  UP210042
#include <iostream>
#include "Libro.h"
using namespace std;

int main()
{
    cout<<esBisiesto(2022)<<endl;         //Programa de bisiesto  
    cout<<"\n... Hecho!"<<endl;
    return 0;
}
```

Proffs:

#1

![imagen](https://i.pinimg.com/originals/a1/36/a5/a136a50af84b4c19339a3e130f6ded4b.jpg)

#2

![imagen](https://i.pinimg.com/originals/66/40/aa/6640aa3aacbfc4afc148dd8f15a87909.jpg)

- T03_coseno:
```
//Objetivo: Realizar un programa que haga la funcion coseno
//Nombre: Carolina Magdiel Moran Requenes   ISC03A  UP210042
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    short int i, j, n, expo=0, signo=-1;
    float x;
    double resultado=0, factorial=1;
    cout<<"Introduzca el angulo"<<endl;
    cin>>x;
    cout<<"Introduzca el numero de terminos"<<endl;
    cin>>n;
    for(i=0;i<=n;i++){
        factorial=1;
        for(j=1;j<=expo;j++)
            factorial*=j;
            signo*=-1;
            resultado+=signo*pow(x,expo)/factorial;
            cout<<resultado<<endl;
            expo=expo+2;
    }
    cout<<"El coseno del angulo es: "<<resultado<<endl;
    cout<<"... HECHO!"<<endl;
    return 0;
}
```
Proffs:
#1

![imagen](https://i.pinimg.com/originals/b1/92/e5/b192e5f0fe18c460cee79472c8fc6592.jpg)

#2

![imagen](https://i.pinimg.com/originals/c9/60/f8/c960f84f22470a83e9fd4fde6cf7d9a3.jpg)

- T04_DEP.CPP
```
//Objetivo: Realizar un codigo que te de la desviacion estandar poblacional
//Nombre: Carolina Magdiel Moran Requenes   ISC03A  UP210042
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    short int i,j,n;
    cout<<"Introduzca el numero de elementos"<<endl;
    cin>>n;
    float a[n];
    float suma=0, media, mediana,desviacion=0,aux;
    for(i=0;i<n;i++)
    {
        cout<<"A["<<i<<"]:"<<endl;
        cin>>a[i];
        suma+=a[i];
    }
    media=suma/n;
    for(j=0;j<n;j++)
        for(i=0;i<n;i++)
            if(a[i]>a[i+1]){
            aux=a[i];
            a[i]=a[i+1];
            a[i]=aux;}
    if ((n%2)==1)
    mediana=a[n/2];
    else
    mediana=(a[n/2]+a[n/2-1])/2;
    aux=0;
    for(i=0;i<n;i++)
        aux=aux+pow(a[i]-media,2);
        aux=aux/n;
        desviacion=sqrt(aux);
    cout<<"Desviacion estandar: "<<desviacion<<endl;    
    return 0;
}   
```

Proofs:

#1

![imagen](https://i.pinimg.com/originals/ae/13/0f/ae130f49c2fce859b3a2e05f7b96943d.jpg)

#2

![imagen](https://i.pinimg.com/originals/e6/33/e9/e633e995c454395421b30a64ae2c8b79.jpg)

- T05_Cajerito;
```
// Objetivo: realizar el desgloce de sistema monetario
#include <iostream>
#include "Libro.h"
using namespace std;

int main()
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
```

Proffs:

#1:

![imagen](https://i.pinimg.com/originals/b9/b1/50/b9b150b6165ca7268e192e3f7833fa5f.jpg)

#2

![imagen](https://i.pinimg.com/originals/1f/96/86/1f9686d997a6363bd549b04a9dee8d5c.jpg)

- T06_NR.CPP:
```
//Objetivo: Realizar un programa que te convierta los numeros decimales ordinarios a romanos dentro del rango 1 al 3999
//Nombre: Carolina Magdiel Moran Requenes ISC03A UP210042
#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int numero;
    int unidades, decenas, centenas, millares;
    cout<<"Introduce el numero decimal a convertir: "<<endl;
    cin>>numero;
    unidades=numero%10;
    numero/=10;
    decenas=numero%10;
    numero/=10;
    centenas=numero%10;
    numero/=10;
    millares=numero%10;
    numero/=10;
    switch (millares)
    {
    case 1:cout<<"M";
    break;
    case 2:cout<<"MM";
    break;
    case 3:cout<<"MMM";
    break;
    }
    switch (centenas)
    {
    case 1:cout<<"C";
    break;
    case 2:cout<<"CC";
    break;
    case 3:cout<<"CCC";
    break;
    case 4:cout<<"CD";
    break;
    case 5:cout<<"D";
    break;
    case 6:cout<<"DC";
    break;
    case 7:cout<<"DCC";
    break;
    case 8:cout<<"DCCC";
    break;
    case 9:cout<<"CM";
    break;
    }
    switch (decenas)
    {
    case 1:cout<<"X";
    break;
    case 2:cout<<"XX";
    break;
    case 3:cout<<"XXX";
    break;
    case 4:cout<<"XL";
    break;
    case 5:cout<<"L";
    break;
    case 6:cout<<"LX";
    break;
    case 7:cout<<"LXX";
    break;
    case 8:cout<<"LXXX";
    break;
    case 9:cout<<"XC";
    break;
    }
    switch (unidades)
    {
    case 1:cout<<"I";
    break;
    case 2:cout<<"II";
    break;
    case 3:cout<<"III";
    break;
    case 4:cout<<"IV";
    break;
    case 5:cout<<"V";
    break;
    case 6:cout<<"VI";
    break;
    case 7:cout<<"VII";
    break;
    case 8:cout<<"VIII";
    break;
    case 9:cout<<"IX";
    break;
    }
    cout<<endl;
    getchar();
}
```
Proofs:

#1:

![imagen](https://i.pinimg.com/originals/69/56/de/6956de9e3c740f61ffd1e2c6f43af1ac.jpg)

#2

![imagen](https://i.pinimg.com/originals/dc/ed/38/dced38658eb54c4b2ecc7c1c175ce2e6.jpg)

- T07_RFC.CPP:
```
#include <iostream>
#include <cstring>
using namespace std;
int main(){
    string nombre="Juan";
    string ap="Jimenez";
    string am="Esparza";
    string fe="03/08/1987";
    string rfc="";
    int v=nombre.length(); 
    int p=0;
    rfc=rfc+ap[0];
    for (int i = 1; i < v && p<1; i++)
    {
        if (ap[i]=='a' || ap[i]=='e' || ap[i]=='i' || ap[i]=='o' || ap[i]=='u' )
        {
            rfc+=ap[i];
            p++;
        }  
    }
    int d1=fe.find_last_of("/");
    int d2=fe.find("/");
    rfc=rfc+am[0]+nombre[0]+fe.substr(d1+1,4)+fe.substr(d2+1,2)+fe.substr(0,2);
    v=rfc.length();
    for (int i = 0; i < v; i++)
    {
        rfc[i]=toupper(rfc[i]);
    }
    cout<<"El RFC de "<<nombre<<" es : "<<rfc;
    return 0;
}
```

PROOFS:

#1 y #2

![IMAGEN](https://i.pinimg.com/originals/91/14/39/911439fa7336537384852b3f8b52aa4e.jpg)



- T08_ORDERV.CPP:


![imagen](https://i.pinimg.com/originals/ea/fe/9b/eafe9b19e42954a693bcfa4257260d30.jpg)
```
#include <iostream>
using namespace std;
int main(){
    int i,j,n,temp,vector[100];
    cout<<"cuantos numeros deseas ingresar: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Ingresa un numero: ";
        cin>>vector[i];
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++){
            temp=vector[j];
            vector[j]=vector[j+1];
            vector[j+1]=temp;
        }
    }
    for (i=0;i<n;i++)
    {
        cout<<vector[i]<<endl;
    }
    return 0;
}
```

Explanation: I saw many different kind of programs, but that I used include the Burble Method. The person that made the video said that this kind of method encompasses all data, and make the process inside of them. Collect the final information and show the results in ascending order to descending.

PROOFS:

#1:

![IMAGEN](https://i.pinimg.com/originals/20/2c/df/202cdfa5bd87dbb49c63aab35eca32a5.jpg)

#2:

![IMAGEN](https://i.pinimg.com/originals/e2/ba/d4/e2bad4ae8b444fa548f94464c0de90ba.jpg)

- T09_FnRec.CPP:
```
#include <iostream>
#include <conio.h>
using namespace std;
int sumar(int);
int main(){
    int nElementos;
    do{
        cout<<"Digite el numero de elementos: ";
        cin>>nElementos;
    }while(nElementos <=0);
    cout<<"\nLa suma es: "<<sumar(nElementos)<<endl;

    getch();
    return 0;
}

int sumar(int n){
    int suma=0;
    if (n==1){
        suma=1;
    }else{
        suma=n+sumar(n-1);
    }
    getch();
    return suma;
}
```

Proofs:

#1:

![imagen](https://i.pinimg.com/originals/cf/4a/6f/cf4a6fe7d19c52b119f3435ee99b1414.jpg)

#2:

![imagen](https://i.pinimg.com/originals/ed/5f/85/ed5f8572eca9837ba39bc6aac414dc7d.jpg)

All of these kind of codes serve us on many different types of activities, like on these days, we have a lot of functions to do as a humans.

I hope that some of these programs can be useful for me one day.

 See you! :)

 ![imagen](https://i.pinimg.com/564x/3a/2e/9e/3a2e9eb87201f97c77d32fc323862132.jpg)
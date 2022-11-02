<center>  Hola,  
bienvenido a programación  
</center>  


<center>

# Contenido U2  
</center>

<center>

---
# UP210042_CPP: Carolina Magdiel Moran Requenes  
---
## ***Introducción a ciclos if, for, while y do while***  
---

</center>

#### Para esta unidad se nos mostrarón distintos ejemplos y formas de utilizar los ciclos;

<center>

![Imagen xd](https://i.pinimg.com/564x/5e/f4/25/5ef425d3082328b1e7d8768c2ca8f017.jpg)

</center>

- Tenemos el ciclo if ***(Ejercicio de tarea: Tramos)***:
```
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    float renta;
    float impuesto;
    cout<< "Ingrese el monto de renta anual: "<<endl;
    cin>>renta;
    {
        if(renta<=10,000)
        {
            impuesto=5;
        }
        else if(renta>=10,000 && renta<=20,000)
        {
            impuesto=15;
        }
        else if(renta>=20,000 && renta<= 35,000)
        {
            impuesto=20;
        }
        else if(renta>=35,000 && renta<= 60,000)
        {
            impuesto=30;
        }
        else 
        {
            impuesto=45;
        }
    cout<<"Su renta anual sera de: " <<impuesto <<" % " << endl;    
    return 0;
    }
}
```
![imagen](https://i.pinimg.com/564x/5f/a4/10/5fa4106f73398379024451de68c165ed.jpg)
#### Segundo intento
![imagen](https://i.pinimg.com/originals/0a/c6/a7/0ac6a7704babd82ef26ba8ec29ad856e.jpg)

- Tenemos el ciclo For ***(Ejercicio ABC)***:
```
# include <iostream>
#include <iomanip>
# include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    /*code*/
    char letra='z';
    int numero=1;
    for(int i = 0; i > 26; i--)
    {
        cout <<letra << "\t";
        letra = letra - 1;
    }
    letra='A';
    for(int i = 0; i < 26; i++)
    {
        cout <<letra << "\t";
        letra = letra + 1;
    }
    numero=1;
    for(int i = 0; i < 10; i++)
    {
        cout <<numero << "\t";
        numero = numero + 1;
    }
    numero=10;
    for(int i = 0; i > 10; i--)
    {
        cout <<numero << "\t";
        numero = numero - 1;
    }
    return 0;
}
```
- Tenemos el ciclo while ***(Ejercicio Ciclo While)***:
```
#include <iostream>
#include <stdio.h>
using namespace std;
int main() 
{
    int n, i;
    char opcion='s';
    printf("Tabla de multiplicar \n");
    while(opcion== 's')
    {
        //entrada
        printf("Numero: ");
        scanf("%d", &n);
        //proceso
        i = 1;
        do
        {
            printf("%n X %d = %d \n", n, i, n*i);
            i++;
        }while(i<=10);
        printf("Desea otro? <s/n");
        scanf("%s", &opcion);
    }
    printf("...Hecho!");
    return 0;
}
```
- Y tenemos el ciclo Do while ***(Ejercicio de Precio)***:
```
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int producto;
    float numeritos;
    float sumativa=0;
    do
    {
        cout<<"Producto:"<<endl;
        cin>>producto;
        if(producto!=0 && producto>0)
        {
            cout<<"Precio del producto:"<<endl;
            cin>>numeritos;
            sumativa+=numeritos;
        }
    } while (producto!=0);
    cout<<"El total de su compra es: "<<sumativa<<endl;
    return 0;
}
```
---
# Una pequeña descripción de cada uno de ellos:
- Para el ***If***; se le asigna una condición donde si se cumple dentro de los parámetros programados realiza la acción solicitada, pueden haber casos en los que se le incluya un ***"else if"***, a lo que vendría siendo que si no cumple los parámetros de la primera condición, irá a esta nueva.
- Para ***For***; Se tienen parámetros conocidos (hasta que punto se quiere llegar) y se realizan las opciones, puede ser muy conveniente pero se tiene que saber usar con cautela. :0
- Para ***While***; esta condición es muy característica por que ella te "pregunta" antes de realizar la acción programada.
- Y para ***Do While***; caso contrario a While, esta función realiza el programa antes de preguntarte.
---
<center>

![Imagen de saludo](https://i.pinimg.com/564x/69/ee/6b/69ee6ba1cf98f4111c10814614cd3eca.jpg)

---

![imagen](https://i.pinimg.com/564x/6f/d0/89/6fd08936bdd537a6b5d5958df7c38412.jpg)

</center>

## Ejercicios de tarea

- Tramos (anexado al inicio del Read Me U2)
- Niveles 
```
/*
    Objetivo: Escribir un programa que lea la puntuacion del usuario e indique su nivel de rendimiento, asi como la cantidad de dinero que recibira el usuario
    Nombre:Carolina Magdiel Moran Requenes      ISC03A      UP210042
*/
#include <iostream>
#include <ctype.h>
using namespace std;
int main(int argc, char const *argv[])
{
    double puntaje, total;
    int dineros=2400;
    cout<<"Introduzca su puntaje: "<<endl;
    cin>>puntaje;
    if(puntaje==0.0)
    {
        cout<<"Puntuacion valida, siguiente paso..."<<endl;
        cout<<"Su nivel de rendimiento es: "<<puntaje*100<<"%"<<" INACEPTABLE "<<endl;
        total=dineros*puntaje;
        cout<<"La cantidad de dinero a recibir es: $"<<total<<endl;
    }
    else if (puntaje==0.4)
    {
        cout<<"Puntuacion valida, siguiente paso..."<<endl;
        cout<<"Su nivel de rendimiento es: "<<puntaje*100<<"%"<<" ACEPTABLE "<<endl;
        total=dineros*puntaje;
        cout<<"La cantidad de dinero a recibir es: $"<<total<<endl;
    }
    else if (puntaje>=0.6)
    {
        cout<<"Puntuacion valida, siguiente paso..."<<endl;
        cout<<"Su nivel de rendimiento es: "<<puntaje*100<<"%"<<" MERITORIO "<<endl;
        total=dineros*puntaje;
        cout<<"La cantidad de dinero a recibir es: $"<<total<<endl;
    }
    else
    {
        cout<<"Puntuacion invalida, sigue intentando..."<<endl;
    }
    return 0;
}
```
- *Pruebas :*  
![imagen](https://i.pinimg.com/originals/46/34/f3/4634f36e6cf0867f85f59e6bcb88327c.jpg)
### Segundo intento :   
![imagen](https://i.pinimg.com/originals/c1/8a/f4/c18af479f60826940d30aa652f5ff8a0.jpg)  
- Salas de Juegos :   
```
/*
    Objetivo: Escribir un programa para una empresa que tiene salas de juegos para todas las edades 
    y quiere calcular de forma automática el precio que debe cobrar a sus clientes por entrar.
    El programa debe preguntar al usuario la edad del cliente y mostrar el precio de la entrada. Si
    el cliente es menor de 4 años puede entrar gratis, si tiene entre 4 y 18 años debe pagar $5 y si es mayor de 18
    $10.
    Nombre: Carolina Magdiel Moran Requenes     ISC03A      UP210042
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int edad, entrada;
    cout<<"Ingresa tu edad"<<endl;
    cin>>edad;
    if(edad<4)
    {
        cout<<"Tu entrada es gratis, adelante! "<<endl;
    }
    else if (edad>=4&&edad<=18)
    {
        cout<<"Paga $5, disfruta tu experiencia! "<<endl;
    }else
    {
        cout<<"Paga $10, disfruta tu experiencia! "<<endl;
    }
    return 0;
}
```
- Pruebas :   
![imagen](https://i.pinimg.com/originals/c1/9a/a1/c19aa1094431ff0c2d6ae0854805287c.jpg)
### Segundo intento :  
![imagen](https://i.pinimg.com/originals/65/a8/5d/65a85de0256819016f3bfabf6fdee616.jpg)   
- Pizzas :   
```
/*
    Objetivo: escribir un programa que pregunte al usuario si quiere una pizza vegetariana o no, y en funcion a su 
    respuesta le muestre un menu con los ingredientes disponibles que elija. Solo se puede elegir un ingrediente ademas
    de la mozzarella y el tomate que estan en todas las pizzas. Al final se debe elegir si es vegetariana o no, ademas
    de los ingredientes adicionados.
    Nombre: Carolina Magdiel Moran Requenes         ISC03A      UP210042    
*/
#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char const *argv[])
{
    int opcion, vegetariana, tradicional;
    cout<<"Que pizza vas a ordenar?\n Vegetariana(Tofu y pimiento) [1] Tradicional (Peperoni, Jamon y salmon) [2] Exit [3]"<<endl;
    cin>>opcion;
    switch (opcion)
    {
    case 1: 
        cout<<"Pizza vegetariana con...?\n(La mozzarella y el tomate ya vienen incluidos)\n Tofu [1] Aceitunas [2] Jitomate [3] Exit [4]"<<endl;
        cin>>vegetariana;
        switch(vegetariana)
        {
            case 1:
                cout<<"Tofu "<<endl;
                cout<<"Tu pizza Vegetariana con los ingredientes Tofu esta lista, disfruta!"<<endl;
                break;
            case 2:
                cout<<"Aceitunas "<<endl;
                cout<<"Tu pizza Vegetariana con los ingredientes Aceitunas esta lista, disfruta!"<<endl;
                break;
            case 3:
                cout<<"Jitomate "<<endl;
                cout<<"Tu pizza Vegetariana con los ingredientes Jitomate esta lista, disfruta!"<<endl;
                break;
            case 4:
                cout<<" (Sin ingredientes adicionales) "<<endl;
                cout<<"Tu pizza Vegetariana sin ingredientes adicionales esta lista, disfruta! =)"<<endl;
                break;
        }
        break;
    case 2: 
        cout<<"Pizza tradicional con...?\n(La mozzarella y el tomate ya vienen incluidos)\n Peperoni [1] Jamon [2] Tocino [3] Salmon [4] exit [5] "<<endl;
        cin>>tradicional;
        switch(tradicional)
        {
            case 1:
                cout<<"Peperoni "<<endl;
                cout<<"Tu pizza Tradicional con los ingredientes peperoni esta lista, disfruta! =)"<<endl;
                break;
            case 2:
                cout<<"Jamon "<<endl;
                cout<<"Tu pizza Tradicional con los ingredientes jamon esta lista, disfruta! =)"<<endl;
                break;
            case 3:
                cout<<"Tocino "<<endl;
                cout<<"Tu pizza Tradicional con los ingredientes tocino esta lista, disfruta! =)"<<endl;
                break;
            case 4:
                cout<<"Salmon "<<endl;
                cout<<"Tu pizza Tradicional con los ingredientes salmon esta lista, disfruta! =)"<<endl;
                break;
            case 5:
                cout<<" (Sin ingredientes adicionales) "<<endl;
                cout<<"Tu pizza Tradicional sin ingredientes adicionales esta lista, disfruta! =)"<<endl;
                break;
        }
        break;
    case 3:
        exit(EXIT_SUCCESS);    
    default:
        cout<<"La opcion elegida no es valida"<<endl;    
    }
    return 0;
}
```
- Pruebas :
![imagen](https://i.pinimg.com/originals/6d/b2/2f/6db22f03880425274e9cf5f391328be2.jpg)
### Segundo intento :
![imagen](https://i.pinimg.com/originals/fd/e7/25/fde7257cd4ff350ee389a815181ba986.jpg)
- Temperaturas :   
```
/*
    Objetivo:Hacer un programa en el que se ingresen 6 temperaturas y 
    determinar el promedio, la mas baja y la mas alta
    Nombre: Carolina Magdiel Moran Requenes     ISC03A      UP210042
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int temperaturas, mayor, menor;
    float cajita=0;
    for (int i=1;i<=6;i++)
    {
            cout<<"Ingresa la temperatura "<<i<<":"<<endl;
            cin>>temperaturas;
            cajita+=temperaturas;
        
        if (i==1){
            mayor=temperaturas;
            menor=temperaturas;
        }
        else
        { 
          if (menor<temperaturas)
        {
            menor=temperaturas;
        }
            else
            {
                if(mayor>temperaturas)
            {
                mayor=temperaturas;
            }
            }
        }
    }
    cout<<"El promedio de las temperaturas es: "<<cajita<< endl;
    cout<<"El numero menor de las temperaturas es: "<<menor<< endl;
    cout<<"El numero mayor de las temperaturas es: "<<mayor<< endl;
    return 0;
}
```
 - Pruebas :  
 ![imagen](https://i.pinimg.com/originals/66/0e/08/660e080fa71a6590cbd1305d3a1e7250.jpg)
 ### Segundo intento :
 ![imagen](https://i.pinimg.com/originals/40/93/8c/40938ca67c3f3d5297eecdc04c3c83bc.jpg)
 - Precios :   
 ```
  
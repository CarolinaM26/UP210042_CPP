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

- Tenemos el ciclo if ***(Ejercicio Tramos)***:
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

# Una pequeña descripción de cada uno de ellos:
- Para el if; se le asigna una condición donde si se cumple dentro de los parámetros programados realiza la acción solicitada, pueden haber casos en los que se le incluya un "else if", a lo que vendría siendo que si no cumple los parámetros de la primera condición, irá a esta nueva.
- Para For; Se tienen parámetros conocidos (hasta que punto se quiere llegar) y se realizan las opciones, puede ser muy conveniente pero se tiene que saber usar con cautela. :0
- Para while; esta condición es muy característica por que ella te "pregunta" antes de realizar la acción programada.
- Y para Do While; caso contrario a While, esta función realiza el programa antes de preguntarte.

<center>

![Imagen de saludo](https://i.pinimg.com/564x/69/ee/6b/69ee6ba1cf98f4111c10814614cd3eca.jpg)
![imagen](https://i.pinimg.com/564x/6f/d0/89/6fd08936bdd537a6b5d5958df7c38412.jpg)

</center>
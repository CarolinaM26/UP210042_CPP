<center>  Hola,  
bienvenido a programación  
</center>  


<center>

# Contenido U1 "Demostraciones de como usar read me, y uno que otro código utlizado en la unidad" 
</center>

<center>

---
# UP210042_CPP: Carolina Magdiel Moran Requenes  
---
## Hola Mundo Cruel  

</center>

Carolina Magdiel Moran Requenes
![Imagen de Manos formando un corazón](https://scontent.fagu1-1.fna.fbcdn.net/v/t1.18169-9/16427230_757966497686475_2199017059822157899_n.jpg?_nc_cat=110&ccb=1-7&_nc_sid=19026a&_nc_ohc=m06e9DbNCD4AX_zZruc&tn=nWdFp2FATw-HzJ_s&_nc_ht=scontent.fagu1-1.fna&oh=00_AT_5nCyLbHcRPffk5aNtoDzxCmfjeM7gU4AN17y4prmbPQ&oe=6352EB34)
> Imagen de Manos formando un corazón  
---
# ***Delirio***
### Muerta estás querida rosa,
### tus ataduras me dejaron marcada,
### aquellos anhelos se han esfumado,
### tú y yo sabíamos que esto sería efímero...
---
Lista numerica

1. Leer  
1. Escribir  
1. Ejecutar  
<ol>
<li>Read</li>
<li>write</li>
<li>execute</li>
</ol>  

* primer elemento  
* segundo elemento  
- Tercer elemento  


<div align="center">
<img alt="XIAO" src="https://i.pinimg.com/originals/32/6d/3e/326d3ef3dbeac13a34e007dcaa934f45.jpg"width='500'/>

## Tabla
| Color | Codigo |  
|-------|--------|
| ROJO  |#FF0000 |
| AZUL  |#0000FF |

`https://www.youtube.com/watch?v=XKvP1mj68GM`
> [Debes verlo 7u7](https://www.youtube.com/watch?v=XKvP1mj68GM)    

https://www.youtube.com/watch?v=XKvP1mj68GM

<https://www.youtube.com/watch?v=XKvP1mj68GM>  
Solo tu sabes   
<a href="https://www.youtube.com/watch?v=XKvP1mj68GM">https://www.youtube.com/watch?v=XKvP1mj68GM</a>


---
# Muestra de ejercicio 1 ***"Hola Mundo"***  
</div align="center">


```
#include  <iostream>
using namespace std;
int main ()
{
    cout<< "Hola Mundo"<<endl;
    return 0;
}
```
---
# Muestra de ejercicio 2 ***"Par Impar"***
```
#include <iostream>
using namespace std;

int main()
{
    cout <<"Par o Impar" << endl<<"\n"<<endl;
    system("pause");
    return 0;
}
```
---
# Muestra de ejercicio 3 ***"Tipos de datos"***
```
//Libreria para manejo de entradas y salida de pantalla
#include <iostream>
//libreria para el uso de printf y scanf
#include <stdio.h>

//Uso del namespace para evitar el std::
using namespace std;

//Funcion principal de tipo entero
int main()
{
    int entero =21;
    float flotante = 3.4e38;
    double grande = 2.753275472;
    char caracter = '@';

    cout<<"Este programa muestra los tipos de datos, \n";
    cout<<"El nuumero entero es: " << entero <<end;
    cout<<"El tamaño del entero es: "<<sizeof(entero)<< "bytes"<<endl;
    cout<<"El numero flotante es: "<<flotante<<endl;
    return 0;
/*
    cout<<"El numero flotante es: "<<flotante<< endl;
    cout<<"El tamano del flotante es: " <<sizeof(flotante)<<"bytes"<<endl;
    cout<<"el tamno del double es: "<<sizeof(grande)   
*/    
}
```
---
# Muestra de ejercicio 4 ***"Ciclos"***
```
#include <iostream>
using namespace std;

int main( int argc, char const *argv [])
{
    int n = 10;
    int suma = 0;
    int pares = 0;
    int impares = 0;
    for(int i = 1; i <= n; i++)
    {
        if (i % 2 ==0)
        {
            pares= pares + i;
        }
        if ( i % 2 !=0)
        {
            impares= impares + i;
        }
        suma= suma + i;
    }
    printf("La suma de %d Numeros es %d: \n" , n, suma );
    printf("La suma de los numeros pares es %d: \n" , pares );
    printf("La suma de los numeros impares es %d: \n " , impares);
    return 0;
}
```
---
# Muestra de ejercicio 5 ***"Edades"***
```
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main ()  
{  
    int e=0;  
    cout<<"Ingrese su edad: "<<endl;  
    cin>>e;  
    if(e>=0 && e<=150)  
    {  
        cout<<"¡Estas vivo! \n"<<endl;  
        if(e<=30)  
        {  
            cout<<"1ra edad \n"<<endl;  
        }  
        else if(e>=31 && e<=60)  
        {  
            cout<<"2da edad \n"<<endl;  
        }  
        else if(e>=61 && e<=90)  
        {  
            cout<<"3ra edad \n"<<endl;  
        }  
        else   
        {  
            cout<<"Horas extras \n"<<endl;  
        }  
    }  
    else  
    {  
        cout<<"DEAD LINE...\n"<<endl;  
    }  
    return 0;  
} 
```
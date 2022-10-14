#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string cadena="Universidad";
    char texto[30]="PoliTecnicA";
    char texto3[50]="Hola Amigo Mio"; //es insertando el null \0
    int i=0;
    int Vocal=0;
    int holi=0;
    int longitud=cadena.length();
    for (int i=0; i<longitud;i++)
    {
        cout<<cadena[i]<<" ";
    }
//caracter comilla simple
    i=0; 
    while(texto[i] !='\0')
    {
        if(texto[i]=='i'|| texto[i]=='e'|| texto[i]=='a'|| texto[i]=='u'|| texto[i]=='o'){
            Vocal++;
        }
        cout<<texto[i]<<" ";
        i++;
    }
    cout<<"Vocales "<< Vocal <<endl;

    for(int i=0; i<30; i++)
    {
        cout<<texto[i]<<" ";
    }
    /*if(isalpha(texto[0]))
    {

    }
    //si es alfabeto
    isdigit ; //digito
    isalnum ; //alfanumerico
    isspace ; //espacios
    if(islower(texto[i])
    {
        cout<<"las minusculas son"<<" ";
    }//minuscula
    if(isupper(texto[i]))
    {
        cout<<"las mayusculas son"<<" ";
    } //mayuscula
    //tolower; //bajar a minusculas
    i=0;
    while(texto[i] !='\0')
    {
        texto[i]=toupper(texto[i]);
        cout<<texto[i]<<" ";
        i++;
    }
    //toupper; //subir en mayusculas
    */
   int i=0;
   while (texto3[i] !='0')
   {
    if (texto3[i]=="Hola"|| texto3[i]=="Amigo"||texto3[i]=="mio"){
        holi++;
    }
    cout<<texto3[i]<<" ";
    i++;
   }
   cout<<"el numero de palabras es "<<holi<<endl;
    cout<<"... Hecho"<<endl;
    return 0;
}


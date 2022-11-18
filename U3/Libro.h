#define _USE_MATH_DEFINES //Macro para valores matematicos
#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int fn_suma(int x, int y){
    return (x+y);
}

double G2R(double a){        //Grados a radianes
    double r;
    r=a*M_PI/180;
    return r;
}

double R2G (double a){
    double g,r;
    g=r*180/M_PI;
    return g;
}
/*
double sin(double a){       //Función Seno
    double r;
    r=sin(G2R(a));
    return r;
}
*/
bool esBisiesto(int year){     //Programa año Bisiesto
    bool r=true;
    r=year%400==0||year%4==0&&year%100!=0;
    return r;
}


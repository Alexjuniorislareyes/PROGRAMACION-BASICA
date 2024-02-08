#include <iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main() {
    float lado, diagonal, perimetro, area;
    printf("ingrese el lado del cuadrado: ");
    scanf( "%f", &lado);
    diagonal= lado*sqrt(2);
    area=pow(lado,2);
    perimetro=4*lado;
    printf("el diagonal del cuadrado es: %.2f\n" ,diagonal);
    printf("el area del cuadrado es: %.f\n" ,area);
    printf("el perimetro del cuadrado es: %.f\n" ,perimetro);
     return 0;
   }
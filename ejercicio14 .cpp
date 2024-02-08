#include <iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main() {
    float base, altura, diagonal, perimetro, area;
    
    printf("ingrese la base del rectangulo: ");
    scanf( "%f" ,&base);
   
    printf("ingrese la altura del rectangulo: ");
    scanf( "%f" ,&altura);

    diagonal= sqrt(pow(base,2)+pow(altura,2));
    area= base*altura;
    perimetro=2*(base+altura);
    printf("el diagonal del rectangulo es: %.f\n" ,diagonal);
    printf("el area del rectangulo es: %.f\n" ,area);
    printf("el perimetro del rectangulo es: %.f\n" ,perimetro);
     return 0;
   }
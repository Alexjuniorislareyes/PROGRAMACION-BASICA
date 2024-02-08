#include <iostream>
#include<stdio.h>
using namespace std;

int main() {
    float lado1, lado2, base, altura, area, perimetro;
    
    printf("ingrese el lado1 del Triangulo: ");
    scanf( "%f" ,&lado1);
   
    printf("ingrese el lado2 del Triangulo: ");
    scanf( "%f" ,&lado2);
    
    printf("ingrese la base del Triangulo: ");
    scanf( "%f" ,&base);

    printf("ingrese la altura del Triangulo: ");
    scanf( "%f" ,&altura);
    
    area=(base*altura)/2;
    
    perimetro=lado1+base+lado2;

    printf("el area del Triangulo es: %.f\n" ,area);
    printf("el perimetro del Triangulo es: %.f\n" ,perimetro);
     return 0;
   }
#include <iostream>
#include<stdio.h>
using namespace std;

int main() {
    float lado1, lado2, lado3, radio, semiperimetro, area;
    
    printf("ingrese el lado1 del Triangulo circunscrito: ");
    scanf( "%f" ,&lado1);
   
    printf("ingrese el lado2 del Triangulo circunscrito: ");
    scanf( "%f" ,&lado2);
    
    printf("ingrese el lado3 del Triangulo circunscrito: ");
    scanf( "%f" ,&lado3);

    printf("ingrese el radio del Triangulo circunscrito: ");
    scanf( "%f" ,&radio);
    
    semiperimetro=((lado1+lado2+lado3)/2);
   
    area=radio*semiperimetro;

    printf("el semiperimetro del Triangulo circunscrito es: %.f\n" ,semiperimetro);
    printf("el area del Triangulo circunscrito es: %.f\n" ,area);
    
     return 0;
   }
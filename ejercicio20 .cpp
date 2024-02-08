#include <iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main() {
    float lado1, lado2, lado3, p, area;
    
    printf("ingrese el lado1 del Triangulo : ");
    scanf( "%f" ,&lado1);
   
    printf("ingrese el lado2 del Triangulo : ");
    scanf( "%f" ,&lado2);
    
    printf("ingrese el lado3 del Triangulo : ");
    scanf( "%f" ,&lado3);
    
    p=((lado1+lado2+lado3)/2);

    area= sqrt(p*(p-lado1)*(p-lado2)*(p-lado3));

    printf("el semiperimetro del Triangulo con la formula de heron es: %.1f\n" ,p);
    printf("el area del Triangulo con la formula de heron es: %.9f\n" ,area);
    
     return 0;
}
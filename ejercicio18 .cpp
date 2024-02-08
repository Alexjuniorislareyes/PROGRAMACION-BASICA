#include <iostream>
#include<stdio.h>
using namespace std;

int main() {
    float lado1, lado2, lado3, radio, area;
    
    printf("ingrese el lado1 del Triangulo inscrito: ");
    scanf( "%f" ,&lado1);
   
    printf("ingrese el lado2 del Triangulo inscrito: ");
    scanf( "%f" ,&lado2);
    
    printf("ingrese el lado3 del Triangulo inscrito: ");
    scanf( "%f" ,&lado3);

    printf("ingrese el radio del Triangulo inscrito: ");
    scanf( "%f" ,&radio);
    
    area=(lado1*lado2*lado3)/(4*radio);

    printf("el area del Triangulo inscrito es: %.f\n" ,area);
    
     return 0;
   }
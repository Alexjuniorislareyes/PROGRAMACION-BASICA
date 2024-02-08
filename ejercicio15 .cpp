#include <iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main() {
    float diagonalmayor, diagonalmenor, lado, perimetro, area;
    
    printf("ingrese la diagonal mayor del Rombo: ");
    scanf( "%f" ,&diagonalmayor);
   
    printf("ingrese el diagonal menor del Rombo: ");
    scanf( "%f" ,&diagonalmenor);

    lado= sqrt(pow((diagonalmayor/2),2)+pow((diagonalmenor/2),2));
    area= (diagonalmayor*diagonalmenor)/2;
    perimetro=4*lado;
    printf("el lado del Rombo es: %.f\n" ,lado);
    printf("el area del Rombo es: %.f\n" ,area);
    printf("el perimetro del Rombo es: %.f\n" ,perimetro);
     return 0;
   }
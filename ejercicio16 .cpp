#include <iostream>
#include<stdio.h>
using namespace std;

int main() {
    float basemayor, basemenor, altura, area;
    
    printf("ingrese la base mayor del Trapecio: ");
    scanf( "%f" ,&basemayor);
   
    printf("ingrese la base menor del Trapecio: ");
    scanf( "%f" ,&basemenor);
    
    printf("ingrese la altura del Trapecio: ");
    scanf( "%f" ,&altura);
   
   area=((basemayor+basemenor)*altura)/2;
    
    printf("el area del Trapecio es: %.f\n" ,area);
  
     return 0;
   }
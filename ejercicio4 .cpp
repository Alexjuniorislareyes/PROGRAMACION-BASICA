#include <iostream>
using namespace std;

int main() {
    float longitud, ancho, area, perimetro;
    cout<<"ingrese la longitud: ";
    cin>> longitud;
  cout<<"ingrese el ancho: ";
    cin>> ancho;
    area= longitud*ancho;
    perimetro= 2*(longitud+ ancho);
    cout<<"el perimetro es: "<<perimetro<<endl;
    cout<<"el area es: "<<area<<endl;
    
    return 0;
    }
#include <iostream>
using namespace std;

int main() {
    float precio, descuento, preciofinal;
    cout<<"ingrese el precio del producto: ";
    cin>> precio;
     cout<<"ingrese el porcentaje de descuento: ";
    cin>> descuento;
    preciofinal= precio-(precio*descuento/100);
    cout<<"precio final con descuento es: "<<preciofinal;

    return 0;
    }
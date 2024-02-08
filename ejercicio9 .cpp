#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float principal, tasaInteres, tiempo, tasaDecimal, montoFinal;

    cout << "Ingrese el monto principal: ";
    cin >> principal  ;
    cout<<"ingrese la tasa de interes(porcentaje): ";
    cin>>tasaInteres;
    cout<<"ingrese el tiempo en anios: ";
    cin>> tiempo;

    tasaDecimal = tasaInteres / 100;
     montoFinal = principal * pow(1 + tasaDecimal, tiempo);

    cout << "El monto final despues de " << tiempo << " anios es: " << montoFinal << endl;

    return 0;
}
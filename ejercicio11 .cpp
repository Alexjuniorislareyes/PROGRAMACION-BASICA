#include <iostream>
using namespace std;

int main() {
    int edadAnios, edadMeses, edadDias, edadTotalDias;

    cout << "Ingrese la edad en anios: ";
    cin >> edadAnios ;
    cout << "Ingrese la edad en meses: ";
    cin>> edadMeses ;
    cout << "Ingrese la edad en dias: ";
    cin>> edadDias;

    edadTotalDias = (edadAnios * 365) + (edadMeses * 30) + edadDias;

    cout << "La edad en dias es: " << edadTotalDias << " dias." << endl;

    return 0;
}
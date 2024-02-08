#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const float PI = 3.1416;
    float radio, altura, areaBase, volumen;

    cout << "Ingrese el radio del cilindro: ";
    cin >> radio;
    cout << "Ingrese la altura del cilindro: ";
    cin>> altura;

    areaBase = PI * pow(radio, 2);
     volumen = areaBase * altura;

    cout << "Area de la base: " << areaBase << endl;
    cout << "Volumen del cilindro: " << volumen << endl;

    return 0;
}
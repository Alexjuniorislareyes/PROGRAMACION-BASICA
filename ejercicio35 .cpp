#include <iostream>
using namespace std;
int calcularCuadradoPorValor(int numero) {
    int cuadrado = numero * numero;
    return cuadrado;
}

int main() {
    int numero = 4;
    int resultado_cuadrado = calcularCuadradoPorValor(numero);
    cout << "Cuadrado del numero: " << resultado_cuadrado << endl;
    return 0;
}
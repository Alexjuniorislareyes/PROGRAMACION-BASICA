#include <iostream>
using namespace std;
void intercambiarPorValor(int& a, int& b) {
    int temporal = a;
    a = b;
    b = temporal;
}

int main() {
    int valor1 = 10;
    int valor2 = 20;
    intercambiarPorValor(valor1, valor2);
    
    cout << "Valor1 despues del intercambio: " << valor1 << endl;
    cout << "Valor2 despues del intercambio: " << valor2 << endl;
    
    return 0;
}
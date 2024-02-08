#include <iostream>

using namespace std;

void collatzSecuencia(int n) {
    while (n != 1) {
        cout << n << " ";

        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
    }

    cout << n << endl;
}

int main() {
    int numero;

    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;

    if (numero <= 0) {
        cerr << "Por favor, ingrese un número entero positivo." << endl;
        return 1; 
    }

    cout << "Secuencia de Collatz para " << numero << ": ";
    collatzSecuencia(numero);

    return 0;
}

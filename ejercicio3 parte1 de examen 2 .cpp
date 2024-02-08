#include <iostream>

using namespace std;

void triplicarPorReferencia(int &num) {
    num = num * 3;
}

int main() {
    int numero = 4;

    cout << "Numero original: " << numero << endl;

    triplicarPorReferencia(numero);

    cout << "Triplicado por referencia: " << numero << endl;

    return 0;
}

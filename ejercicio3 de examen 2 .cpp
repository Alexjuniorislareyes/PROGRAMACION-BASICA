#include <iostream>
using namespace std;
int duplicarPorValor(int num) {
    return num * 2;
}

int main() {
    int numero = 4;
    int resultado = duplicarPorValor(numero);

    cout << "Numero original: " << numero << endl;
   cout << "Duplicado por valor: " << resultado << endl;

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> numeros;

    cout << "Ingrese valores enteros (ingrese un valor no entero para finalizar): ";
    int valor;
    while (cin >> valor) {
        numeros.push_back(valor);
    }

    sort(numeros.begin(), numeros.end());

    cout << "Vector ordenado: ";
    for (int num : numeros) {
        cout << num << " ";
    }

    return 0;
}

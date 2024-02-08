#include <iostream>
#include <vector>

using namespace std;

bool esPrimo(int numero) {
    if (numero < 2) {
        return false;
    }

    for (int i = 2; i * i <= numero; ++i) {
        if (numero % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int inicio, fin;

    cout << "Ingrese el numero de inicio: ";
    cin >> inicio;

    cout << "Ingrese el numero de fin: ";
    cin >> fin;

    vector<int> primos;

    for (int num = inicio; num <= fin; ++num) {
        if (!esPrimo(num)) {
            continue;
        }

        primos.push_back(num);
    }

    cout << "\nNumeros primos en el rango [" << inicio << ", " << fin << "]: ";
    for (int primo : primos) {
        cout << primo << " ";
    }

    return 0;
}

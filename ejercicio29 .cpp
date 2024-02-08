#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numeros;

    cout << "Ingrese elementos al vector (ingrese -1 para finalizar):" << endl;

    int numero;
    while (true) {
        cout << "Elemento: ";
        cin >> numero;

        if (numero == -1) {
            break;
        }

        numeros.push_back(numero);
    }

    int mayor = numeros[0];

    for (size_t i = 1; i < numeros.size(); ++i) {
        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }
    }

    cout << "\nEl mayor elemento en el vector es: " << mayor << endl;

    return 0;
}

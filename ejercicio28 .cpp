#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> vectorOriginal;
    vector<int> vectorSinDuplicados;

    cout << "Ingrese elementos al vector (ingrese -1 para finalizar):" << endl;

    int elemento;
    while (true) {
        cout << "Elemento: ";
        cin >> elemento;

        if (elemento == -1) {
            break;
        }

        vectorOriginal.push_back(elemento);
    }

    for (size_t i = 0; i < vectorOriginal.size(); ++i) {
        if (find(vectorSinDuplicados.begin(), vectorSinDuplicados.end(), vectorOriginal[i]) != vectorSinDuplicados.end()) {
            continue;
        }

        vectorSinDuplicados.push_back(vectorOriginal[i]);
    }

    cout << "\nVector Original: ";
    for (int elemento : vectorOriginal) {
        cout << elemento << " ";
    }

    cout << "\nVector Sin Duplicados: ";
    for (int elemento : vectorSinDuplicados) {
        cout << elemento << " ";
    }

    return 0;
}

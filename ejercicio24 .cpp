#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;

    cout << "Ingrese el tamano de la matriz cuadrada: ";
    cin >> n;

    vector<vector<int>> matriz(n, vector<int>(n));
    vector<vector<int>> transpuesta(n, vector<int>(n));

    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            transpuesta[j][i] = matriz[i][j];
        }
    }

    cout << "\nMatriz Original:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nMatriz Transpuesta:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << transpuesta[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
#include <iostream>

using namespace std;

int main() {
    const int filas = 3;
    const int columnas = 3;

    int matriz1[filas][columnas] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matriz2[filas][columnas] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int resultado[filas][columnas];

    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            resultado[i][j] = 0;
            for (int k = 0; k < columnas; ++k) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    cout << "Matriz resultante (multiplicacion):\n";
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << resultado[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
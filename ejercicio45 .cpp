#include <iostream>
#include <string>

using namespace std;

int main() {
    const int filas = 2;
    const int columnas = 3;

    string matriz[filas][columnas];

    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << "Ingrese palabra para la celda [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    cout << "Resultados:\n";
    for (int i = 0; i < filas; ++i) {
        string filaConcatenada;
        for (int j = 0; j < columnas; ++j) {
            filaConcatenada += matriz[i][j] + " ";
        }
        cout << "Fila " << i << ": " << filaConcatenada << endl;
    }

    return 0;
}
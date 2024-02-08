#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numeros;
    int numero;

    for (int i = 0; i < 10; i++) {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numero;
        numeros.push_back(numero);
    }

    int suma = 0;
    for (int num : numeros) {
        suma += num;
    }
    double promedio = static_cast<double>(suma) / numeros.size();

    int mayores_que_promedio = 0;
    for (int num : numeros) {
        if (num > promedio) {
            mayores_que_promedio++;
        }
    }

    // Mostrar resultados
    cout << "\nEl promedio de los numeros ingresados es: " << promedio << endl;
    cout << "Hay " << mayores_que_promedio << " numeros que son mayores que el promedio." << endl;

    return 0;
}
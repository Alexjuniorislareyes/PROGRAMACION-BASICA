#include <iostream>

using namespace std;

int main() {
    string oracion;
    int contadorVocales = 0;

    cout << "Ingrese una oracion: ";
    getline(cin, oracion);

    for (char caracter : oracion) {
        switch (tolower(caracter)) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                contadorVocales++;
                break;
            default:
                break;
        }
    }

    cout << "\nLa cantidad de vocales en la oracion es: " << contadorVocales << endl;

    return 0;
}

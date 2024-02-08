#include <iostream>
#include <string>

using namespace std;

string cifrarCesar(const string& textoOriginal, int clave) {
    string textoCifrado = "";

    for (char caracter : textoOriginal) {
        if (isalpha(caracter)) {
            char base = islower(caracter) ? 'a' : 'A';
            char cifrado = static_cast<char>((caracter - base + clave) % 26 + base);
            textoCifrado += cifrado;
        } else {
            textoCifrado += caracter;
        }
    }

    return textoCifrado;
}

int main() {
    string textoOriginal;
    int clave;

    cout << "Ingrese una cadena: ";
    getline(cin, textoOriginal);

    cout << "Ingrese la clave del cifrado: ";
    cin >> clave;

    string textoCifrado = cifrarCesar(textoOriginal, clave);
    cout << "Texto cifrado: " << textoCifrado << endl;

    return 0;
}

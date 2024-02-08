#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> palabras;

    cout << "Ingrese palabras (ingrese 'fin' para finalizar): ";
    string palabra;
    while (cin >> palabra && palabra != "fin") {
        palabras.push_back(palabra);
    }

    string resultado = "";
    for (const string& palabra : palabras) {
        resultado += palabra;
    }

    cout << "Cadena resultante: " << resultado << endl;

    return 0;
}
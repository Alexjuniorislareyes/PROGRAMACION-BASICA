#include <iostream>
#include <string>
#include <cctype>
using namespace std ;

bool esPalindromo(const string& palabra) {
    int longitud = palabra.length();
    for (int i = 0; i < longitud / 2; ++i) {
        if (tolower(palabra[i]) != tolower(palabra[longitud - 1 - i])) {
            return false; 
        }
    }
    return true; 
}

int main() {
    string palabra;

    cout << "Ingrese una palabra: ";
    cin >> palabra;

    if (esPalindromo(palabra)) {
        cout << palabra << " es un palindromo." << endl;
    } else {
        cout << palabra << " no es un palindromo." << endl;
    }

    return 0;
}

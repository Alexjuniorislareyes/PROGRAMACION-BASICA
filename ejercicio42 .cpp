#include <iostream>
#include <vector>
#include <algorithm>  
using namespace std;

int main() {
    vector<char> caracteres;

    cout << "Ingrese una secuencia de caracteres (ingrese un caracter no alfanumerico para finalizar): ";
    char caracter;
    while (cin >> caracter && isalnum(caracter)) {
        caracteres.push_back(caracter);
    }

    cout << "Ingrese el caracter a contar: ";
    char charAContar;
    cin >> charAContar;

    int contador = count(caracteres.begin(), caracteres.end(), charAContar);

    cout << "El caracter '" << charAContar << "' aparece " << contador << " veces en la secuencia." << endl;

    return 0;
}

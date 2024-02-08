#include <iostream>
using namespace std;

void duplicarNumero(double& num) {
    num *= 2;
}

int main() {
    double numero = 3.5;
    duplicarNumero(numero);
    cout << " numero = " << numero << endl;
    return 0;
}
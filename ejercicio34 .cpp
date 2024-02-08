#include <iostream>
using namespace std;
int sumarPorValor(int a, int b) {
    int resultado = a + b;
    return resultado;
}

int main() {
    int x = 5;
    int y = 3;
    int resultado_suma = sumarPorValor(x, y);
   cout << "Resultado de la suma: " << resultado_suma <<endl;
    return 0;
}
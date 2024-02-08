#include <iostream>
using namespace std;

int main() {
    float peso, altura, IMC;
cout<<"ingrese su peso(kg): ";
cin>> peso;
cout<<"ingrese su altura(m); ";
cin>> altura;
IMC= peso/(altura*altura);
cout<<"Su IMC es : "<<IMC;

   return 0;
}
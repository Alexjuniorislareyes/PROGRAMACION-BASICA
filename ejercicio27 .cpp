#include <iostream>

using namespace std;

int main() {
    int respuestasCorrectas = 0;
    int respuestasIncorrectas = 0;

    cout << "Pregunta 1: ¿Cual es la capital de Francia?" << endl;
    cout << "a) Madrid\nb) Paris\nc) Berlin\nd) Londres" << endl;
    
    char respuesta1;
    cout << "Ingrese su respuesta (a, b, c, d): ";
    cin >> respuesta1;

    if (respuesta1 == 'b' || respuesta1 == 'B') {
        cout << "¡Respuesta correcta!\n";
        respuestasCorrectas++;
    } else {
        cout << "Respuesta incorrecta. La respuesta correcta es Paris.\n";
        respuestasIncorrectas++;
    }

    cout << "\nPregunta 2: ¿Cuantos lados tiene un triangulo?" << endl;
    cout << "a) 3\nb) 4\nc) 5\nd) 6" << endl;
    
    char respuesta2;
    cout << "Ingrese su respuesta (a, b, c, d): ";
    cin >> respuesta2;

    if (respuesta2 == 'a' || respuesta2 == 'A') {
        cout << "¡Respuesta correcta!\n";
        respuestasCorrectas++;
    } else {
        cout << "Respuesta incorrecta. La respuesta correcta es 3.\n";
        respuestasIncorrectas++;
    }

    cout << "\nResultados:" << endl;
    cout << "Respuestas correctas: " << respuestasCorrectas << endl;
    cout << "Respuestas incorrectas: " << respuestasIncorrectas << endl;

    return 0;
}

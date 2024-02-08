#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Alumno {
    string nombre;
    int edad;
    float calificacion;
};

int main() {
    const int numEstudiantes = 3;  
    vector<Alumno> estudiantes(numEstudiantes);

    for (int i = 0; i < numEstudiantes; ++i) {
        cout << "Ingrese nombre del estudiante " << i + 1 << ": ";
        cin >> estudiantes[i].nombre;
        cout << "Ingrese edad del estudiante " << i + 1 << ": ";
        cin >> estudiantes[i].edad;
        cout << "Ingrese calificacion del estudiante " << i + 1 << ": ";
        cin >> estudiantes[i].calificacion;
    }

    cout << "Informacion de estudiantes:\n";
    for (int i = 0; i < numEstudiantes; ++i) {
        cout << "Estudiante " << i + 1 << ": ";
        cout << "Nombre: " << estudiantes[i].nombre << ", Edad: " << estudiantes[i].edad
             << ", Calificacion: " << estudiantes[i].calificacion << endl;
    }

    return 0;
}
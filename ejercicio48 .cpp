#include <iostream>
#include <vector>

using namespace std;

const int numCalificaciones = 3;  

struct Estudiante {
    float calificaciones[numCalificaciones];
};

int main() {
    const int numEstudiantes = 3;  
    vector<Estudiante> estudiantes(numEstudiantes);

    for (int i = 0; i < numEstudiantes; ++i) {
        cout << "Ingrese calificaciones para el estudiante " << i + 1 << ":\n";
        for (int j = 0; j < numCalificaciones; ++j) {
            cout << "Calificacion " << j + 1 << ": ";
            cin >> estudiantes[i].calificaciones[j];
        }
    }

    cout << "Promedio de calificaciones por estudiante:\n";
    for (int i = 0; i < numEstudiantes; ++i) {
        float sumaCalificaciones = 0;
        for (int j = 0; j < numCalificaciones; ++j) {
            sumaCalificaciones += estudiantes[i].calificaciones[j];
        }
        float promedio = sumaCalificaciones / numCalificaciones;
        cout << "Estudiante " << i + 1 << ": Promedio = " << promedio << endl;
    }

    return 0;
}
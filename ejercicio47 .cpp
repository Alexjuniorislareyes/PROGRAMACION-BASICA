#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Libro {
    string titulo;
    string autor;
    int anioPublicacion;
};

int main() {
    const int numLibros = 3;  
    vector<Libro> libros(numLibros);

    for (int i = 0; i < numLibros; ++i) {
        cout << "Ingrese titulo del libro " << i + 1 << ": ";
        cin >> libros[i].titulo;
        cout << "Ingrese autor del libro " << i + 1 << ": ";
        cin >> libros[i].autor;
        cout << "Ingrese anio de publicacion del libro " << i + 1 << ": ";
        cin >> libros[i].anioPublicacion;
    }

    cout << "Información de libros:\n";
    for (int i = 0; i < numLibros; ++i) {
        cout << "Libro " << i + 1 << ": ";
        cout << "Titulo: " << libros[i].titulo << ", Autor: " << libros[i].autor
             << ", Anio de publicacion: " << libros[i].anioPublicacion << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

void agregarUnoAArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] += 1;
    }
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int tamano = sizeof(array) / sizeof(array[0]);
    agregarUnoAArray(array, tamano);
    cout << "resultado ";
    for (int i = 0; i < tamano; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}
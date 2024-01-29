#include <iostream>
#include <algorithm> // para usar la función sort
using namespace std;

int main() {
    int notas[10];
    int sumatoria = 0;

    // Solicitar las notas de los 10 estudiantes
    for (int i = 0; i < 10; i++) {
        do {
            cout << "Ingrese la nota del estudiante " << i+1 << " (entre 0 y 20): ";
            cin >> notas[i];
        } while (notas[i] < 0 || notas[i] > 20);

        sumatoria += notas[i];
    }

    // Devolver la nota máxima
    int notaMaxima = *max_element(notas, notas+10);
    cout << "La nota maxima es: " << notaMaxima << endl;

    // Calcular el promedio
    float promedio = static_cast<float>(sumatoria) / 10;
    cout << "El promedio de notas es: " << promedio << endl;

    // Realizar la sumatoria de todas las notas
    cout << "La sumatoria de todas las notas es: " << sumatoria << endl;

    // Ordenar las notas de mayor a menor
    sort(notas, notas+10, greater<int>());
    cout << "Notas ordenadas de mayor a menor: ";
    for (int i = 0; i < 10; i++) {
        cout << notas[i] << " ";
    }
    cout << endl;

    return 0;
}

#include <iostream>
using namespace std;
int main() {
    float notas[10];
    float *puntero = notas;
    float suma = 0, promedio;

    cout << "Ingresa las 10 notas:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "Nota " << i + 1 << ": ";
        cin >> *(puntero + i);
        suma += *(puntero + i);
    }

    promedio = suma / 10;
    cout << "El promedio de las notas es: " << promedio << endl;
    int i = sizeof notas;//cuanto baits va almacenar una variable
    cout<<*puntero<<endl;

    return 0;
}
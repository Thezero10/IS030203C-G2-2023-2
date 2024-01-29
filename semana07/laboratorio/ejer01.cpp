#include <iostream>
using namespace std;
int main() {
    int notas[6];
    cout << "Ingrese 6 notas en el rango de (0 - 20):" << endl;
    for (int i = 0; i < 6; i++) {
        cout << "Ingrese la nota " << i + 1 << ": ";
        cin >> notas[i];
        while (notas[i] < 0 || notas[i] > 20) {
            cout << "La nota debe estar entre 0 y 20. Ingrese nuevamente: ";
            cin >> notas[i];
        }
    }
    for (int i = 0; i < 6; i++) {//aqui ordenamos
        for (int j = i + 1; j < 6; j++) {
            if (notas[i] < notas[j]) {
                int temp = notas[i];
                notas[i] = notas[j];
                notas[j] = temp;
            }
        }
    }
    cout << "Las notas convertidas a equivalente en letras son:" << endl;
    for (int i = 0; i < 6; i++) {
        if (notas[i] >= 16) {
            cout << "Nota " << i + 1 << ": A" << endl;
        } else if (notas[i] >= 12) {
            cout << "Nota " << i + 1 << ": B" << endl;
        } else if (notas[i] >= 8) {
            cout << "Nota " << i + 1 << ": C" << endl;
        } else if (notas[i] >= 4) {
            cout << "Nota " << i + 1 << ": D" << endl;
        } else {
            cout << "Nota " << i + 1 << ": F" << endl;
        }
    }
    cout << "Las notas ordenadas de mayor a menor son: ";
    for (int i = 0; i < 6; i++) {
        cout << notas[i] << " ";
    }
    cout << endl;
    return 0;
}

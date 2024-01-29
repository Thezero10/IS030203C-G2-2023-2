#include <iostream>
using namespace std;

int main() {
    int diasPorMes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int mes;

    cout << "Ingrese el numero de mes (1-12): ";
    cin >> mes;

    if (mes >= 1 && mes <= 12) {
        
        switch (mes)
        {
        case 1:
            cout << "El mes de enero tiene " << diasPorMes[mes - 1] << " dias." << endl;
            break;
        
        default:
            break;
        }
    } else {
        cout << "Numero de mes invalido." << endl;
    }

    return 0;
}
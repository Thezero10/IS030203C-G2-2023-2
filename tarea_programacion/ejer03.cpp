#include <iostream>
#include <string>
using namespace std;

string obtenerRangoNota(char nota) {
    string rango;

    switch (nota) {
        case 'A':
            rango = "19 - 18";
            break;
        case 'B':
            rango = "17 - 14";
            break;
        case 'C':
            rango = "14 - 11";
            break;
        case 'D':
            rango = "10 - 5";
            break;
        case 'E':
            rango = "5 - 0";
            break;
        default:
            rango = "Nota invalida";
            break;
    }

    return rango;
}

int main() {
    char nota;

    cout << "Ingrese la nota alfanumerica(A,B,C,D,E): ";
    cin >> nota;

    string rango = obtenerRangoNota(nota);

    cout << "El rango de notas correspondiente a la nota " << nota << " es: " << rango << endl;

    return 0;
}

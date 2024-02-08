#include <iostream>
#include <string>
using namespace std;

string obtenerNombreMes(int numeroMes) {
    string nombreMes;

    switch (numeroMes) {
        case 1:
            nombreMes = "Enero";
            break;
        case 2:
            nombreMes = "Febrero";
            break;
        case 3:
            nombreMes = "Marzo";
            break;
        case 4:
            nombreMes = "Abril";
            break;
        case 5:
            nombreMes = "Mayo";
            break;
        case 6:
            nombreMes = "Junio";
            break;
        case 7:
            nombreMes = "Julio";
            break;
        case 8:
            nombreMes = "Agosto";
            break;
        case 9:
            nombreMes = "Septiembre";
            break;
        case 10:
            nombreMes = "Octubre";
            break;
        case 11:
            nombreMes = "Noviembre";
            break;
        case 12:
            nombreMes = "Diciembre";
            break;
        default:
            nombreMes = "Mes inválido";
            break;
    }

    return nombreMes;
}

int main() {
    int numeroMes;

    cout << "Ingrese el numero de mes: ";
    cin >> numeroMes;

    string nombreMes = obtenerNombreMes(numeroMes);

    cout << "El nombre del mes correspondiente al numero " << numeroMes << " es: " << nombreMes << endl;

    return 0;
}

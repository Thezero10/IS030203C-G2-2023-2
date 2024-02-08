#include <iostream>
using namespace std;

int main() {
    float saldo = 1000.0;

    int opcion;

    float monto;

    while (true) {
        cout << "Bienvenido al Cajero Automatico" << endl;
        cout << "1. Consultar saldo" << endl;
        cout << "2. Realizar un deposito" << endl;
        cout << "3. Realizar un retiro" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Su saldo actual es: $" << saldo << endl;
                break;
            case 2:
                cout << "Ingrese el monto a depositar: $";
                cin >> monto;
                saldo += monto;
                cout << "Se ha depositado $" << monto << " en su cuenta." << endl;
                break;
            case 3:
                cout << "Ingrese el monto a retirar: $";
                cin >> monto;
                if (monto <= saldo) {
                    saldo -= monto;
                    cout << "Retiro $" << monto << " de su cuenta." << endl;
                } else {
                    cout << "Saldo insuficiente." << endl;
                }
                break;
            case 4:
                cout << "Gracias por utilizar nuestro Cajero Automatico. \nHasta luego" << endl;
                return 0;
            default:
                cout << "Opcion invalida. Por favor, seleccione una opcion válida." << endl;
                break;
        }

        cout << "\n-----------------------------------------\n" << endl;
    }
}

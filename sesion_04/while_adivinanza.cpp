#include <iostream>
using namespace std;

int main()
{
    int numero_adivinar = 25;
    int numero_ingresado = 0;

    cout << "Ingrese el numero a adivinar"<< endl;
    cin >> numero_ingresado;

    while (numero_adivinar != numero_ingresado)
    {
        cout << "Ingrese el numero a adivinar" << endl;
        cin >> numero_ingresado;
    }
    cout << "El numero a adivinar es"<< endl;
    cout << numero_adivinar<< endl;
}
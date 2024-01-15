#include <iostream>
using namespace std;

int main()
{
    int numero_adivinar = 25;
    int numero_ingresado = 0;
    int intentos = 0;
    do
    {
        cout << "Ingrese el numero a adivinar" << endl;
        cin >> numero_ingresado;
        if (numero_adivinar != numero_ingresado)
        {
            intentos++;
        }
    } while (numero_adivinar != numero_ingresado);

    cout << "numero adivinado, en " << endl;
    cout << intentos << endl;

    return 0;
}
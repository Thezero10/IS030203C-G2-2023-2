// operaciones basicas
// suma - resta - division - multiplicacion
#include <iostream>
using namespace std;

int result = 0; //--global

int main()
{
    int numero_1;
    int numero_2;
    int resultado; //-- local
    int opcion;

    cout << "ingrese una opcion valida: \n 1: suma \n 2: resta \n 3: multiplicacion \n 4: division \n";
    cin >> opcion;

    cout << "ingrese el valor para el numero 1 \t";
    cin >> numero_1;
    cout << "ingrese el valor para el numero 2 \t";
    cin >> numero_2;
    if (opcion == 1)
    {
        cout << "la suma es: ";
        cout << numero_1 + numero_2;
        cout << "\n";
    }
    if (opcion == 2)
    {
        cout << "la resta es: ";
        cout << numero_1 - numero_2;
        cout << "\n";
    }
    if (opcion == 3)
    {
        cout << "la multiplicacion es: ";
        cout << numero_1 * numero_2;
        cout << "\n";
    }
    if (opcion == 4)
    {
        if (numero_2 > 0)
        {
            cout << "la division es: ";
            cout << numero_1 / numero_2;
            cout << "\n";
        }
        else
        {
            cout << "ingrese el nuevo valor para el numero 2  diferente a 0 \t";
            cin >> numero_2;
            cout << "la division es: ";
            cout << numero_1 / numero_2;
            cout << "\n";
        }
    }
    return 0;
}
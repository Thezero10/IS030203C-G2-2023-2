#include <iostream>
using namespace std;
char numero_nota;
int main()
{
    cout << "Ingrese tu nota: ";
    cin >> numero_nota;
    switch (numero_nota)
    {

    case 'A':
        cout << "Tu rango es de 18 - 19";
        break;
    case 'B':
        cout << "Tu rango es de 14 - 17";
        break;
    case 'C':
        cout << "Tu rango es de 11 - 14";
        break;
    case 'D':
        cout << "Tu rango es de 5 - 10";
        break;
    case 'E':
        cout << "Tu rango es de 0 - 5";
        break;

    default:
        break;
    }

    return 0;
}
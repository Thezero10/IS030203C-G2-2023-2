#include <iostream>
using namespace std;
int numero_mes;
int main()
{

    cout << "Ingrese un numero del (1 - 12): ";
    cin >> numero_mes;
    while (numero_mes > 12 || numero_mes <=0 )
    {
        cout << "Por favor Ingrese un numero del (1 - 12): ";
        cin >> numero_mes;
    }
    switch (numero_mes)
    {

    case 1:
        cout << "Enero";
        break;
    case 2:
        cout << "Febrero";
        break;
    case 3:
        cout << "Marzo";
        break;
    case 4:
        cout << "Abril";
        break;
    case 5:
        cout << "Mayo";
        break;
    case 6:
        cout << "Junio";
        break;
    case 7:
        cout << "Julio";
        break;
    case 8:
        cout << "Agosto";
        break;
    case 9:
        cout << "Setiembre";
        break;
    case 10:
        cout << "Octubre";
        break;
    case 11:
        cout << "Noviembre";
        break;
    case 12:
        cout << "Diciembre";
        break;

    default:
        break;
    }

    return 0;
}
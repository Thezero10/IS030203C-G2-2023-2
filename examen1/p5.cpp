#include <iostream>
using namespace std;

int main()
{
    int num_alum, costo_tot;//declaramos las variables

    cout << "Ingrese la cantidad de alumnos: ";
    cin >> num_alum;

    if (num_alum >= 100)//utilizamos el if para condicionar una funcion determinada mediante la condicion que cumple
    {
        costo_tot = num_alum * 65;
    }
    else if (num_alum >= 50 && num_alum <= 99)
    {
        costo_tot = num_alum * 70;
    }
    else if (num_alum >= 30 && num_alum <= 49)
    {
        costo_tot = num_alum * 95;
    }
    else
    {
        costo_tot = 4000;
    }

    cout << "El costo total es: " << costo_tot << endl;//mostramos el costo total

    return 0;
}

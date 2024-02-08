#include <iostream>
using namespace std;
// Función para determinar si un año es bisiesto
bool esBisiesto(int anio)
{
    return (anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0));
}

int main()
{
    // Declaramos las variables necesarias
    int mes;
    int anio;

    // Solicitamos el mes y el año
    cout << "Ingrese el mes (1-12): ";
    cin >> mes;
    cout << "Ingrese el año: ";
    cin >> anio;

    // Calculamos la cantidad de días del mes
    int dias = 31;
    if (mes == 2)
    {
        if (esBisiesto(anio))
        {
            dias = 29;
        }
        else
        {
            dias = 28;
        }
    }
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
    {
        dias = 30;
    }

    // Imprimimos los resultados
    cout << "El mes " << mes << " del año " << anio << " tiene " << dias << " días." << endl;

    return 0;
}



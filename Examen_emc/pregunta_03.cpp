#include <iostream>
using namespace std;

float calcularSueldo(int horasTrabajadas)
{
    const float pagoNormal = 20.0;
    const float pagoExtra = 25.0;
    const int horasNormales = 40;
    float sueldo = 0.0;

    if (horasTrabajadas <= horasNormales)
    {
        sueldo = horasTrabajadas * pagoNormal;
    }
    else
    {
        sueldo = horasNormales * pagoNormal + (horasTrabajadas - horasNormales) * pagoExtra;
    }

    return sueldo;
}

int main()//Fabian Sangama Miguel Angel
{
    cout<<"--------------------------------------------\n";
    cout << "|                Bienvenido                |" << endl;
    cout<<"--------------------------------------------"<<endl;
    int horasTrabajadas;
    cout << "Ingrese las horas trabajadas esta semana: ";
    cin >> horasTrabajadas;

    cout << "El sueldo semanal es: $" << calcularSueldo(horasTrabajadas) << endl;

    return 0;
}

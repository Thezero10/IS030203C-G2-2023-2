#include <iostream>
using namespace std;
int main()
{
    int notas_estudiante[10];
    int maxima_nota = 0;
    int suma_total_notas = 0;
    cout << "Ingrese 10 notas de un rango de 0 - 20\n";
    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese la nota del estudiante " << i + 1 << ": ";
        cin >> notas_estudiante[i];
        while (notas_estudiante[i] < 0 || notas_estudiante[i] > 20)
        {
            cout << "La nota debe estar entre 0 y 20. Ingrese nuevamente: ";
            cin >> notas_estudiante[i];
        }
        if (notas_estudiante[i] > maxima_nota)
        {
            maxima_nota = notas_estudiante[i];
        }
        suma_total_notas += notas_estudiante[i];
    }
    float promedio = (float)suma_total_notas / 10;
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (notas_estudiante[i] < notas_estudiante[j])
            {
                int aux = notas_estudiante[i];
                notas_estudiante[i] = notas_estudiante[j];
                notas_estudiante[j] = aux;
            }
        }
    }
    cout << "La nota maxima es: " << maxima_nota << endl;
    cout << "El promedio es: " << promedio << endl;
    cout << "La sumatoria de todas las notas es: " << suma_total_notas << endl;
    cout << "Las notas ordenadas de mayor a menor son: ";
    for (int i = 0; i < 10; i++)
    {
        cout << notas_estudiante[i] << " ";
    }
    cout << endl;
    return 0;
}

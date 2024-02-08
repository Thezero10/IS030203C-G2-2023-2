#include <iostream>
using namespace std;

int main()
{
    
    int notas[10];
    int nota_maxima = 0;
    int suma_notas = 0;

    cout<<"Ingrese 10 notas de un rango de 0 - 20\n";
    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese la nota del estudiante " << i + 1 << ": ";
        cin >> notas[i];

        
        while (notas[i] < 0 || notas[i] > 20)
        {
            cout << "La nota debe estar entre 0 y 20. Ingrese nuevamente: ";
            cin >> notas[i];
        }

       
        if (notas[i] > nota_maxima)
        {
            nota_maxima = notas[i];
        }

        
        suma_notas += notas[i];
    }

    
    float promedio = (float)suma_notas / 10;

    
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (notas[i] < notas[j])
            {
                int aux = notas[i];
                notas[i] = notas[j];
                notas[j] = aux;
            }
        }
    }

    
    cout << "La nota maxima es: " << nota_maxima << endl;
    cout << "El promedio es: " << promedio << endl;
    cout << "La sumatoria de todas las notas es: " << suma_notas << endl;
    cout << "Las notas ordenadas de mayor a menor son: ";
    for (int i = 0; i < 10; i++)
    {
        cout << notas[i] << " ";
    }
    cout << endl;

    return 0;
}

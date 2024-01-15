// elaborar calcular el promedio de los 10 primeros numeros
#include <iostream>
using namespace std;

int main()
{

    cout << "promedio de los 10 primeros numeros \n";
    float numero_veces =0;
    cout << "ingrese el valor a calcular";
    cin>> numero_veces;
    float suma = 0;
    for (int i = 0; i <= numero_veces; i++)
    {
        suma = suma + i;
        // suma = +i;
    }

    float promedio;
    promedio = suma / numero_veces;
    cout << suma;
    cout << "el promedio es: \t";
    cout << promedio;

    return 0;
}
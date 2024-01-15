#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cout << "ingrese los numeros a sumar";
    cin >> n;
    int suma = 0;
    for (int i = 1; i <= n; i++)
    {
        suma = suma + i;
        // suma =+ i;
    }
    cout << "El valor de la sumatoria es:";
    cout << suma;
    return 0;
}
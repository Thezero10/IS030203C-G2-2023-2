#include <iostream>
using namespace std;

int main()
{
    int numero;
    cout << "ingrese un numero ";
    cin >> numero;
    if (numero % 2 == 0)
    {
        cout << "numero par ";
    }
    else
    {
        cout << "numero impar";
    }
    return 0;
}
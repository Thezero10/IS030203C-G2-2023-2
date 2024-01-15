#include <iostream>
using namespace std;

int main()
{

    cout << "Loop while";

    int contador = 0;

    while (contador != 5) //evalua resultado verdadero
    {
        cout << "saludo: " << contador + 1 << endl;
        contador++; // contador = contador +1
    }

    for (int i = 0; i < 5; i++) // recorrido
    {
        cout << "saludo 2: " << i + 1 << endl;
    }
    return 0;
}
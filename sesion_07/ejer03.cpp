#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    do
    {
        int op, max = 10, min = 0;
        srand(time(NULL));
        char resp;
        cout << "________________________________________________\n";
        cout << "Bienvenido a calculadora basica\n";
        cout << "1: Suma \n2: Resta \n3: Producto \n4: Division";
        cout << "\nQue decea realizar: ";
        cin >> op;
        cout << "________________________________________________\n";
        int a = (rand() % (max - min + 1)) + 1;
        int b = (rand() % (max - min + 1)) + 1;
        switch (op)
        {
        case 1:
            cout << "La suma de " << a << " + " << b << " = " << (a + b);
            break;
        case 2:
            cout << "La resta de " << a << " - " << b << " = " << (a - b);
            break;
        case 3:
            cout << "El producto de " << a << " * " << b << " = " << (a * b);
            break;
        case 4:
            cout << "La division de " << a << " / " << b << " = " << (a / b);
            break;

        default:
            cout << "\nOpcion no encontrada";
            break;
        }
        cout << "Decea continuar (s/n)?: ";
        cin >> resp;
        if (tolower(resp) == 'n')
        {
            break;
        }
    } while (true);
}
#include <iostream>
using namespace std;

int main()
{
    int num_1, num_2, num_3;
    cout << "ingrese el valor para el primer numero: ";
    cin >> num_1;
    cout << "ingrese el valor para el segundo numero: ";
    cin >> num_2;
    cout << "ingrese el valor para el tercer numero: ";
    cin >> num_3;

    if (num_1 > num_2 && num_1 > num_3)
    {
        cout << "El numero mayor es: ";
        cout << num_1;
    }
    else
    {
        if (num_2 > num_1 && num_2 > num_3)
        {
            cout << "El numero mayor es: ";
            cout << num_2;
        }
        else
        {
            cout << "El numero mayor es: ";
            cout << num_3;
        }
    }
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    int total_par = 0, total_impar = 0;
    cout << "ingrese el valor maximo";
    cin >> n;
    int suma = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            total_par++;
            //total_par = total_par +1;
        }
        else
        {
            total_impar++;
        }
    }
    cout << "total numeros pares :";
    cout << total_par;
    cout << "total numeros impares :";
    cout << total_impar;

    return 0;
}
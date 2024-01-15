#include <iostream>
using namespace std;

int main()
{
    int A, B, C;
    cout << "Ingrese el numero A ";
    cin >> A;
    cout << "Ingrese el numero B ";
    cin >> B;
    cout << "el resultados es: ";
    cout << A + B;
    // cout<<"\n";
    if (A > B)
    {
        cout << "\n El numero mayor es: ";
        cout << A;
    }
    if (B > A)
    {
        cout << "\n El numero mayor es: ";
        cout << B;
    }
    if (B == A)
    {
        cout << "\n Numeros iguales";
    }
}
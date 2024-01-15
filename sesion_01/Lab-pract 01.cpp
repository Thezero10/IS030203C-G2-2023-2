#include <iostream>
using namespace std;

int main()
{

    int Mun1, Mun2;
    //Ingresar los datos
    cout << "Ingrese el primer numero\n";
    cin >> Mun1;
    cout << "Ingrese el segundo numero\n";
    cin >> Mun2;

    if (Mun1 > Mun2)
    {
        cout <<"El  numero menor es: "<<Mun2;
    }
    else
    {
        cout << "El numero menor es:"<<Mun1;
    }

    return 0;
}
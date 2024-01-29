#include <iostream>
using namespace std;
int main()
{
    int dias_por_mes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int numero_mes;
    cout << "Ingrese el numero de mes (1-12): ";
    cin >> numero_mes;
    if (numero_mes >= 1 && numero_mes <= 12)
    {
        cout << "El mes " << numero_mes << " tiene " << dias_por_mes[numero_mes - 1] << " dias." << endl;
    }
    else
    {
        cout << "Numero de mes invalido." << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

int main(){
    int n=10;
    int suma=0;

    for (int i = 0; i<=n ; i++)
    {
        suma = suma + i;
        // suma =+ i;
    }
    cout << "El valor de la sumatoria es:";
    cout << suma;

    return 0;
}
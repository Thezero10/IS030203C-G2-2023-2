#include <iostream>
using namespace std;
//elaborar calcular el promedio de los 10 primeros numeros
int main(){
    cout<<"promedio de los 10 numeros\n";
    int numero_veces = 0;
    cout<<"Ingrese el valor a calcular";
    cin>>numero_veces;
    float suma = 0;
    for(int i=0; i<=numero_veces; i++)
    {
        suma=suma + i;
        //suma=+1;
    }
    float promedio;

    promedio = suma/numero_veces;
    cout<<"el promedio es:\t";
    cout<<promedio;

    return 0;
}
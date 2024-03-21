//punteros: valores de tipos variables que almacenan una direccion de memoria}
//en donde esta la posicion y un valor entero,strinf , float
//int *p-----es un puntero
#include <iostream>
using namespace std;
int main (){
    int numero= 10;
    int *puntero;

    puntero = &numero;

    cout<<puntero<<endl;
    cout<<*puntero<<endl;

    *puntero = 45;

    cout<<puntero<<endl;
    cout<<*puntero<<endl;
    cout<<numero<<endl;
    


}
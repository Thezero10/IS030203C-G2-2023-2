#include <iostream>
using namespace std;

int main(){
    int numero;
    do
    {
        cout<<"Ingrese un numero"<<endl;
        cin>>numero;
        if(numero<=10){
            cout<<"El numero es menor que 10 ingrese otro numero"<<endl;
        }
    } while (numero<= 10);

    cout<<"El numero es mayor que 10, gracias"<<endl;
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int numero_adivinar = 7;
    int numero_ingresado =0; 
    
    cout<<"Ingresar el numero a adivinar"<<endl;
    cin>> numero_ingresado;

    while (numero_adivinar != numero_ingresado)
    {
        cout <<"Ingrese el numero a adivinar";
        cin>>numero_ingresado;

        cout<<"El numero ingresado es:";
        cout<<numero_adivinar;
        
    }
    


    return 0;
}
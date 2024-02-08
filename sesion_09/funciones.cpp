#include <iostream>
#include <stdio.h>
#include <ctime>
using namespace std;
int valor_01=0;
int valor_2 = 0;
int suma(int valor_01, int valor_2){
    int result = valor_01 + valor_2;
    return result;
    //return valor_01 + valor_2;
}
int resta(int valor_01, int valor_2){
    int result = valor_01 - valor_2;
    return result;
    //return valor_01 + valor_2;
}
int multiplicacion(int valor_01, int valor_2){
    int result = valor_01 * valor_2;
    return result;
    //return valor_01 + valor_2;
}
float division(int valor_01, int valor_2){
    float result = 0;
    if (valor_2 !=0)
    {
        result = valor_01 / valor_2;
    }
    return result;
    //return valor_01 + valor_2;
}
void mensaje(){
    cout<<"**********calculadora****************";
    
}
void ingreso_parametros(){
    cout<<"Ingrese el valor para el primer parametro: ";
    cin>>valor_01;
    cout<<"\nIngrese el valor para el segundo parametro: ";
    cin>>valor_2;
}

int main(){
    int opcion;
    mensaje();
    cout<<"Ingrese las opciones de la calculadora: "<<endl;
    cout<<"1: sumar; 2: restar; 3: multiplicar; 4: dividir";
    cin>>opcion;
    switch (opcion)
    {
    case 1:
        ingreso_parametros();
        cout<<suma(valor_01, valor_2);
        break;
    case 2:
        ingreso_parametros();
        cout<<resta(valor_01, valor_2);
    case 3:
        ingreso_parametros();
        cout<<multiplicacion(valor_01, valor_2);
    case 4:
        ingreso_parametros();
        cout<<division(valor_01, valor_2);
    default:
        break;
    }
    /* do
    {
        cout<<"funciones";
    } while (opcion!=5); */
    
    return 0;
}
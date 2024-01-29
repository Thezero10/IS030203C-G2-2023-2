#include <iostream>
#include <stdio.h>
#include <ctime>
using namespace std;
int main(){
    int vect[10];
    int max=10, min=1;
    srand(time(NULL));
    //ingresar valores aleatorios
    for (int i = 0; i < 10; i++)
    {
        vect[i]=rand() % (max - min + 1);
    }
 
    //mostrar valores
    for (int i = 0; i < 10; i++)
    {
        cout<<vect[i]<<" - ";
    }
    
    return 0;
}
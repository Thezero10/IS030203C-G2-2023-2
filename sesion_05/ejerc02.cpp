#include<iostream>
using namespace std;
int main(){
    cout<<"loop while";
     //while evalua resultado verdadero
    int contador = 0;
    //evalua y el for hace un recorrido
    while(contador != 5){
        cout<<"saludo:"<<contador + 1 <<endl;
        contador ++; //contador = contador + 1
    }
    return 0;
}

//Elaborar un programa que permita calcular el puntaje de un equipo de futbol luego de 20 partidos, por cada partido ganado el puntaje se incrementa en 
//3 puntos y por cada partido empatado 1 punto y por cada partido perdido 0 puntos
#include <iostream>
using namespace std;
int main(){
    //Aqui declaramos las variables
    int conta, preg_puntaj = 0, acumula;
    int num_partidos = 20;
    conta = num_partidos +1;
    for (int i = 1; i < conta; i++)//Aqui usamos un for para que pida al usuario 20 veces una opcion
    {
        cout<<"1: Ganado \n2: Empate \n3: Perdido\n";
        cout<<"Ingrese opcion: ";
        cin>>preg_puntaj;
        switch (preg_puntaj)//usamos es switch para evaluar la opcion y mediante el case poder realizar una operacion respecto a la opcion ingresada
        {
        case 1:
            acumula += 3;
            break;
        case 2:
            acumula += 1;
            break;
        case 3:
            acumula += 0;
            break;
        default:
            cout<<"¡Opcion incorrecta!";
            break;
        }
    }
    cout<<"\nEl puntaje total es: "<< acumula;//Aqui mostramos el puntaje total acumulado
    return 0;
}
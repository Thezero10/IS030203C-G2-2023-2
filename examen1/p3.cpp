//elaborar un programa que el incentivo que recibira un operario a lo largo de su semana laboral (lunes a sabado),
//se conoce que la produccion minimo es 100 unidades
#include <iostream>
using namespace std;

int main() {
    int produccion, incentivo;//se declara las variables
    
    cout << "Ingrese la produccion del operario en cada dia de la semana (lunes a sabado):" << endl;
    
    int produccionTotal = 0;
    
    for (int i = 1; i <= 6; i++) {
        cout << "Dia " << i << ": ";
        cin >> produccion;
        
        produccionTotal += produccion;
    }
    
    if (produccionTotal >= 100) {
        incentivo = produccionTotal * 10; // Suponiendo que el incentivo es de S/10 por cada unidad producida
        cout << "El operario recibira un incentivo de S/" << incentivo << " esta semana." << endl;
    } else {
        cout << "El operario no alcanzo la produccion minima de 100 unidades esta semana." << endl;
    }
    
    return 0;
}

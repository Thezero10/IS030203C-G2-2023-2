#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int* ptr = arr; // Puntero al primer elemento del arreglo
    
    // Accediendo al primer elemento del arreglo usando el puntero
    cout << "Valor del primer elemento: " << *ptr << endl;
    
    // Avanzando el puntero a la siguiente posición
    ptr++;
    cout << "Valor del segundo elemento: " << *ptr << endl;
    
    // Avanzando el puntero a la tercera posición
    ptr += 2;
    cout << "Valor del cuarto elemento: " << *ptr << endl;
    
    // Retrocediendo el puntero a la segunda posición
    ptr -= 2;
    cout << "Valor del segundo elemento: " << *ptr << endl;
    
    // Realizando operaciones aritméticas con el puntero
    int index = 3;
    ptr = arr + index;
    cout << "Valor del cuarto elemento: " << *ptr << endl;
    
    return 0;
}
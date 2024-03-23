#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int* ptr = arr; // Puntero al primer elemento del arreglo
    
    // Accediendo al primer elemento del arreglo usando el puntero
    cout << "Valor del primer elemento: " << *ptr << endl;
    
    // Avanzando el puntero a la siguiente posición y accediendo al segundo elemento
    cout << "Valor del segundo elemento: " << *(ptr + 1) << endl;
    
    // Retrocediendo el puntero a la posición inicial y accediendo al primer elemento nuevamente
    cout << "Valor del primer elemento: " << *ptr << endl;
    
    return 0;
}
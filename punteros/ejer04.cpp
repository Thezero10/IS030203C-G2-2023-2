#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int* ptr1 = arr; // Puntero al primer elemento del arreglo
    int* ptr2 = arr + 3; // Puntero al cuarto elemento del arreglo
    
    // Calculando la diferencia entre los punteros
    int diff = ptr2 - ptr1;
    
    cout << "La diferencia entre los punteros es: " << diff << endl;
    
    return 0;
}
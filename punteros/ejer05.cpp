#include <iostream>
using namespace std;

// Función que intercambia los valores de dos variables utilizando punteros
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5;
    int y = 10;
    
    cout << "Antes del intercambio: " << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    
    // Llamada a la función swap pasando las direcciones de memoria de x e y
    swap(&x, &y);
    
    cout << "Después del intercambio: " << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    
    return 0;
}
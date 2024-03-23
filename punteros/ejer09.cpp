#include <iostream>
using namespace std;

int main() {
    // Creación de un puntero a entero sin asignar memoria
    int* ptr = nullptr;
    
    // Solicitar memoria bajo demanda
    ptr = new int;
    
    // Verificar si se asignó correctamente la memoria
    if (ptr != nullptr) {
        // Asignar un valor a la memoria reservada
        *ptr = 10;
        
        // Imprimir el valor almacenado en la memoria reservada
        cout << "Valor almacenado en la memoria reservada: " << *ptr << endl;
        
        // Liberar la memoria reservada
        delete ptr;
    }
    
    return 0;
}
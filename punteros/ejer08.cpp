#include <iostream>

int main() {
    using namespace std;
    
    int num = 10; // Variable entera
    int* ptr = &num; // Puntero a variable entera
    
    cout << "Valor de num: " << num << endl;
    cout << "Dirección de memoria de num: " << &num << endl;
    cout << "Valor almacenado en el puntero ptr: " << *ptr << endl;
    cout << "Dirección de memoria almacenada en el puntero ptr: " << ptr << endl;
    
    // Puntero a función
    void (*funcPtr)(); // Declaración de un puntero a función sin argumentos y sin valor asignado
    
    // Asignación de una función al puntero a función
    funcPtr = [](){
        cout << "¡Hola desde la función a través del puntero a función!" << endl;
    };
    
    // Llamada a la función a través del puntero a función
    funcPtr();
    
    // Puntero a estructura
    struct Persona {
        string nombre;
        int edad;
    };
    
    Persona* personaPtr = new Persona; // Creación de un objeto Persona en el montón
    
    // Acceso a los miembros de la estructura a través del puntero a estructura
    personaPtr->nombre = "Juan";
    personaPtr->edad = 25;
    
    cout << "Nombre: " << personaPtr->nombre << endl;
    cout << "Edad: " << personaPtr->edad << endl;
    
    delete personaPtr; // Liberación de la memoria asignada en el montón
    
    return 0;
}

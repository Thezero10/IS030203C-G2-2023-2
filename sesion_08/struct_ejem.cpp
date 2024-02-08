#include <iostream>
using namespace std;
struct Persona
{
    string nombre;
    int edad;
    float altura;
};

int main()
{
    // Declarar una variable de tipo Persona
    Persona persona1;

    // Asignar valores a los miembros de la variable
    persona1.nombre = "Ana";
    persona1.edad = 25;
    persona1.altura = 1.65;

    // Imprimir los valores de los miembros de la variable
    cout << "Nombre: " << persona1.nombre << endl;
    cout << "Edad: " << persona1.edad << endl;
    cout << "Altura: " << persona1.altura << endl;

    return 0;
}

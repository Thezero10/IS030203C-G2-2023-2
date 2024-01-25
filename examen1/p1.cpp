//elaborar un programa que solicite el numero de respuestas de un postulante, por cada respuesta correcta se incrementa su puntaje en 4, por cada respuesta incorrecta -2, 
//por cada respuesta en blanco 0, se pide calcular el puntaje total del postulante de una prueba de 20 preguntas
#include <iostream>
using namespace std;

int main()//Fabian Sangama Miguel Angel
{
    int respuestas_correctas, respuestas_incorrectas, respuestas_en_blanco;
    int puntaje_total;
    //Aqui solicita el numero de respuestas correctas
    cout << "Ingrese el numero de respuestas correctas: ";
    cin >> respuestas_correctas;
    // Aqui solicita el numero de respuestas incorrectas
    cout << "Ingrese el numero de respuestas incorrectas: ";
    cin >> respuestas_incorrectas;
    //Aqui solicita el numero de respuestas en blanco
    cout << "Ingrese el numero de respuestas en blanco: ";
    cin >> respuestas_en_blanco;
    //Aqui calcula el puntaje total
    puntaje_total = (respuestas_correctas * 4) + (respuestas_incorrectas * -2) + (respuestas_en_blanco * 0);
    //Aqui muestra el puntaje total
    cout << "\nEl puntaje total del postulante es: " << puntaje_total << endl;
    return 0;
}

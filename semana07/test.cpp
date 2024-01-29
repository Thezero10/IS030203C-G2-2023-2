#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

const int NUM_ALUMNOS = 20;
const int NUM_NOTAS = 5;
const float NOTA_APROBACION = 6.0;

struct Alumno
{
    string nombre;
    string facultad;
    float notas[NUM_NOTAS];
};

void ingresarAlumnos(Alumno alumnos[])
{
    cout << "Ingresando alumnos de forma aleatoria..." << endl;
    string nombres[] = {"Juan", "Maria", "Pedro", "Luis", "Ana", "Carlos", "Laura", "Diego", "Sofia", "Jorge",
                        "Lucia", "Roberto", "Mariana", "Julio", "Carmen", "Fernando", "Valeria", "Raul", "Elena", "Hector"};
    string facultades[] = {"Ingenieria", "Medicina", "Derecho", "Arquitectura", "Economia", "Psicologia", "Ciencias"};

    srand(time(0)); // Inicializar la semilla de números aleatorios

    for (int i = 0; i < NUM_ALUMNOS; i++)
    {
        alumnos[i].nombre = nombres[rand() % 20];
        alumnos[i].facultad = facultades[rand() % 7];
        for (int j = 0; j < NUM_NOTAS; j++)
        {
            alumnos[i].notas[j] = rand() % 11; // Generar notas aleatorias entre 0 y 10
        }
    }
}

void mostrarAlumnos(Alumno alumnos[])
{
    cout << "Datos de los alumnos:" << endl;
    for (int i = 0; i < NUM_ALUMNOS; i++)
    {
        cout << "Alumno " << i + 1 << ":" << endl;
        cout << "Nombre: " << alumnos[i].nombre << endl;
        cout << "Facultad: " << alumnos[i].facultad << endl;
        cout << "Notas:" << endl;
        for (int j = 0; j < NUM_NOTAS; j++)
        {
            cout << "Nota " << j + 1 << ": " << alumnos[i].notas[j] << endl;
        }
        cout << endl;
    }
}

void mostrarAprobados(Alumno alumnos[])
{
    cout << "Alumnos aprobados:" << endl;
    for (int i = 0; i < NUM_ALUMNOS; i++)
    {
        float promedio = 0;
        for (int j = 0; j < NUM_NOTAS; j++)
        {
            promedio += alumnos[i].notas[j];
        }
        promedio /= NUM_NOTAS;

        if (promedio >= NOTA_APROBACION)
        {
            cout << "Alumno " << i + 1 << ": " << alumnos[i].nombre << endl;
        }
    }
}

int main()
{
    Alumno alumnos[NUM_ALUMNOS];
    ingresarAlumnos(alumnos);
    mostrarAlumnos(alumnos);
    mostrarAprobados(alumnos);

    return 0;
}

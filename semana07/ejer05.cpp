#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <random>

struct Alumno
{
    std::string nombre;
    std::string facultad;
    std::vector<int> notas;
};

int main()
{
    // Crear un vector de alumnos
    std::vector<Alumno> alumnos;

    // Ingresar los datos de los 20 alumnos de forma aleatoria
    std::vector<std::string> nombres = {"Juan", "María", "Carlos", "Ana", "Luis", "Laura", "Pedro", "Sofía", "Diego", "Valentina", "Andrés", "Camila", "José", "Isabella", "Miguel", "Valeria", "Alejandro", "Lucía", "Felipe", "Gabriela"};
    std::vector<std::string> facultades = {"Ingeniería", "Medicina", "Derecho", "Arquitectura", "Economía"};

    // Generar una secuencia aleatoria de índices
    std::vector<int> indices(nombres.size());
    std::iota(indices.begin(), indices.end(), 0);
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(indices.begin(), indices.end(), g);

    // Ingresar los datos de los alumnos
    for (int i = 0; i < 20; i++)
    {
        Alumno alumno;
        alumno.nombre = nombres[indices[i]];
        alumno.facultad = facultades[rand() % facultades.size()];

        // Generar 5 notas aleatorias entre 0 y 100
        for (int j = 0; j < 5; j++)
        {
            alumno.notas.push_back(rand() % 101);
        }

        alumnos.push_back(alumno);
    }

    // Mostrar los alumnos que aprobaron el curso
    std::cout << "Alumnos que aprobaron el curso:" << std::endl;
    for (const auto &alumno : alumnos)
    {
        bool aprobo = true;
        for (const auto &nota : alumno.notas)
        {
            if (nota < 60)
            {
                aprobo = false;
                break;
            }
        }
        if (aprobo)
        {
            std::cout << "Nombre: " << alumno.nombre << std::endl;
            std::cout << "Facultad: " << alumno.facultad << std::endl;
            std::cout << "Notas: ";
            for (const auto &nota : alumno.notas)
            {
                std::cout << nota << " ";
            }
            std::cout << std::endl
                      << std::endl;
        }
    }

    return 0;
}
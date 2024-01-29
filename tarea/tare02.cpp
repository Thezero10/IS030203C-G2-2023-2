#include <iostream>
using namespace std;

struct Alumno
{
    string nombre;
    int nota1;
    int nota2;
    int nota3;
    int nota4;
    int promedio;
};

int main()
{
    Alumno alumnos[4];
    int i = 0;
    while (i < 4)
    {
        if (i == 0)
        {
            cout << "Ingrese el nombre del alumno " << i + 1 << ": ";
            getline(cin, alumnos[i].nombre);

            cout << "Ingrese la nota 1 del alumno " << i + 1 << ": ";
            cin >> alumnos[i].nota1;

            cout << "Ingrese la nota 2 del alumno " << i + 1 << ": ";
            cin >> alumnos[i].nota2;

            cout << "Ingrese la nota 3 del alumno " << i + 1 << ": ";
            cin >> alumnos[i].nota3;

            cout << "Ingrese la nota 4 del alumno " << i + 1 << ": ";
            cin >> alumnos[i].nota4;

            i++;
        }
        

        cout << "\nIngrese el nombre del alumno " << i + 1 << ": ";
        //getline(cin, alumnos[i].nombre);
        cin >> alumnos[i].nombre;

        cout << "Ingrese la nota 1 del alumno " << i + 1 << ": ";
        cin >> alumnos[i].nota1;

        cout << "Ingrese la nota 2 del alumno " << i + 1 << ": ";
        cin >> alumnos[i].nota2;

        cout << "Ingrese la nota 3 del alumno " << i + 1 << ": ";
        cin >> alumnos[i].nota3;

        cout << "Ingrese la nota 4 del alumno " << i + 1 << ": ";
        cin >> alumnos[i].nota4;

        i++;
    }

    for (int i = 0; i < 4; i++)
    {
        alumnos[i].promedio = (alumnos[i].nota1 + alumnos[i].nota2 + alumnos[i].nota3 + alumnos[i].nota4) / 4;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (alumnos[i].promedio < alumnos[j].promedio)
            {
                Alumno aux = alumnos[i];
                alumnos[i] = alumnos[j];
                alumnos[j] = aux;
            }
        }
    }
    cout<<"\n";
    for (int i = 0; i < 4; i++)
    {
        cout << "Alumno " << i + 1 << ": " << alumnos[i].nombre << " - Promedio: " << alumnos[i].promedio << endl;
    }
    return 0;
}

#include <string>
#include <iostream>
#include <fstream>
// #include <stdlib.h>
using namespace std;

int opcion;
int adex;
int conti;
bool continuar = true;
int menu()
{
    cout << "|--------------MENU--------------|\n|1-Registrar Nacimiento          |\n|2-Registrar Muerte              |\n|3-Mostrar Registro de Fallecidos|\n|4-Mostrar Registro de Nacimiento|\n|5-Salir                         |\n|--------------------------------|";
    cout << "\nIngrese una opcion>> ";
    cin >> opcion;
    return opcion;
}

int num_naci;
int id_ani;
string raza;
string sexo;
string fechaNacimiento;
double peso;
string nombrePadre;
string nombreMadre;

int registrarNacimiento()
{
    ofstream archivo("datos_nacimiento.txt", ios::app);
    if (archivo.is_open())
    {
        cout << "\nCuantos Vacunos desea agregar: ";
        cin >> num_naci;
        for (int i = 0; i < num_naci; i++)
        {
            cout << "\nIngrese id del animal: ";
            cin >> id_ani;
            cout << "\nIngrese la raza: ";
            cin >> raza;
            cout << "\nIngrese el sexo: ";
            cin >> sexo;
            cout << "\nIngrese fecha de nacimiento: ";
            cin >> fechaNacimiento;
            cout << "\nIngrese el peso: ";
            cin >> peso;
            cout << "\nIngrese nombre del padre: ";
            cin >> nombrePadre;
            cout << "\nIngrese nombre de la madre: ";
            cin >> nombreMadre;
            archivo << id_ani << "," << raza << "," << sexo << "," << fechaNacimiento << "," << peso << "," << nombrePadre << "," << nombreMadre << endl; // Escribir los datos en el archivo separados por comas
            cout << "Nacimiento del animal registrado correctamente" << endl;
        }
        archivo.close(); // Cerrar el archivo
    }
    else
    {
        cout << "Error al abrir el archivo" << endl;
    }
    cout << "\nVa a reaizar otra consulta (si:1 | no:0): ";
    cin >> conti;
    cout << "\n";
    if (conti != 1)
    {
        continuar = false;
    }
    return 0;
}

int idAnimal;
string fechaMuerte;
string causaMuerte;

int registrarMuerte()
{
    //Aqui abre el archivo en modo de escritura al final del archivo
    ofstream archivo("muertes_animales.txt", ios::app);
    if (archivo.is_open())
    {
        for (int i = 0; i < 2; i++)
        {
            cout << "\nIngrese id: ";
            cin >> idAnimal;
            cout << "\nIngrese fecha de muerte: ";
            cin >> fechaMuerte;
            cout << "\nIngrese causa de la muerte: ";
            cin >> causaMuerte;
            archivo << idAnimal << "," << fechaMuerte << "," << causaMuerte << endl; //Aqui escribe los datos en el archivo separados por comas
            cout << "\nMuerte del animal registrada correctamente" << endl;
        }
        archivo.close(); //Esto cierra el archivo
    }
    else
    {
        cout << "Error al abrir el archivo" << endl;
    }
    cout << "\nVa a reaizar otra consulta (si:1 | no:0): ";
    cin >> conti;
    cout << "\n";
    if (conti != 1)
    {
        continuar = false;
    }
    return 0;
}
int mostrarFallecidos()
{
    ifstream archivo("muertes_animales.txt");
    string linea;
    if (archivo.is_open())
    {
        while (getline(archivo, linea))
        {
            cout << linea << endl;
        }
        archivo.close();
    }
    else
    {
        cout << "Error al abrir el archivo." << endl;
    }
    cout << "\nVa a reaizar otra consulta (si:1 | no:0): ";
    cin >> conti;
    cout << "\n";
    if (conti != 1)
    {
        continuar = false;
    }
    if (conti == 1)
    {
        menu();
    }
    
    return 0;
}
int mostrarNacimiento()
{
    ifstream archivo("datos_nacimiento.txt");
    string lineax;
    if (archivo.is_open())
    {
        while (getline(archivo, lineax))
        {
            cout << lineax << endl;
        }
        archivo.close();
    }
    else
    {
        cout << "Error al abrir el archivo." << endl;
    }
    cout << "\nVa a reaizar otra consulta (si:1 | no:0): ";
    cin >> conti;
    cout << "\n";
    if (conti != 1)
    {
        continuar = false;
    }
    if (conti == 1)
    {
        menu();
    }
    
    return 0;
}

int main()
{
    menu();
    while (1 <= opcion <= 5)
    {
        switch (opcion)
        {
        case 1:
            system("cls");
            registrarNacimiento();
            cout<<"Hasta luego\n";
            return 0;
        case 2:
            system("cls");
            registrarMuerte();
            cout<<"Hasta luego\n";
            return 0;
        case 3:
            system("cls");
            mostrarFallecidos();
            cout<<"Hasta Luego\n";
            return 0;
        case 4:
            system("cls");
            mostrarNacimiento();
            cout<<"Hasta Luego\n";
            return 0;
        case 5:
            system("cls");
            return 0;
        default:
            break;
        }
    }
    return 0;
}

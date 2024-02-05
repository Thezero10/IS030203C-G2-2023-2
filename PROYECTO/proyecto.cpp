#include <string>
#include <iostream>
#include <fstream>
//#include <stdlib.h>
using namespace std;

int opcion;
int adex;
int conti;
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
    cout<<"\nVa a reaizar otra consulta (si:1 | no:0): ";
    cin>> conti;
    switch (conti)
    {
    case 0:
        cout<<"Hasta Luego...";
        break;
    case 1:
        menu();
    default:
        break;
    }
    return 0;
}

int idAnimal;
string fechaMuerte;
string causaMuerte;

int registrarMuerte()
{
    // Crear un nuevo registro con los datos de la muerte del animal
    // string registro = to_string(idAnimal) + "," + fechaMuerte + "," + causaMuerte;

    // Abrir el archivo en modo de escritura al final del archivo
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
            archivo << idAnimal << "," << fechaMuerte << "," << causaMuerte << endl; // Escribir los datos en el archivo separados por comas
            // archivo << registro << endl; // Escribir el registro en el archivo
            cout << "\nMuerte del animal registrada correctamente" << endl;
        }
        archivo.close(); // Cerrar el archivo
    }
    else
    {
        cout << "Error al abrir el archivo" << endl;
    }
    cout<<"\nVa a reaizar otra consulta (si:1 | no:0): ";
    cin>> conti;
    if (conti == 1)
    {
        menu();
    }
    else{
        system("exit");
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
    cout<<"\nVa a reaizar otra consulta (si:1 | no:0): ";
    cin>> conti;
    if (conti == 1)
    {
        menu();
    }
    else{
        system("exit");
    }
    return 0;
}
int mostrarNacimiento()
{
    ifstream archivo("datos_nacimento.txt");
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
    cout<<"\nVa a reaizar otra consulta (si:1 | no:0): ";
    cin>> conti;
    if (conti == 1)
    {
        menu();
    }
    
    
    return 0;
}

int main()
{
    menu();
    while (1 <= opcion <= 3)
    {
        switch (opcion)
        {
        case 1:
            registrarNacimiento();
            menu();
            break;
        case 2:
            registrarMuerte();
            menu();
            break;
        case 3:
            mostrarFallecidos();
            menu();
            break;
        case 4:
            mostrarNacimiento();
            menu();
            break;
        case 5:
            break;
        default:
            break;
        }
    }
    return 0;
}

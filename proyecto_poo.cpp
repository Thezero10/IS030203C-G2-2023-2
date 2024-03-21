#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
using namespace std;

class AnimalRegistry
{
public:
    int opcion;
    int idBuscado;
    int num_naci;
    int id_ani;
    string raza;
    string sexo;
    string fechaNacimiento;
    double peso;
    string nombrePadre;
    string nombreMadre;
    int idAnimal;
    string fechaMuerte;
    string causaMuerte;

    void salir()
    {
        exit(0);
    }

    int menu()
    {
        cout << "|--------------MENU--------------|\n|1-Registrar Nacimiento          |\n|2-Registrar Muerte              |\n|3-Mostrar Registro de Fallecidos|\n|4-Mostrar Registro de Nacimiento|\n|5-Buscar por ID                 |\n|6-Salir                         |\n|--------------------------------|";
        cout << "\nIngrese una opcion>> ";
        cin >> opcion;
        return opcion;
    }

    int solicitarID()
    {
        cout << "Por favor, introduce el ID del animal que deseas buscar: ";
        cin >> idBuscado;
        return idBuscado;
    }

    void registrarNacimiento()
    {
        ofstream archivo("datos_nacimiento.txt", ios::app);
        if (archivo.is_open())
        {
            archivo << "ID"
                    << "\t"
                    << "Raza"
                    << "\t"
                    << "Sexo"
                    << "\t"
                    << "F_Nacimiento"
                    << "\t"
                    << "Peso"
                    << "\t"
                    << "Padre"
                    << "\t"
                    << "Madre" << endl;
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
                archivo << id_ani << "\t" << raza << "\t" << sexo << "\t   " << fechaNacimiento << "\t   " << peso << "\t" << nombrePadre << "\t" << nombreMadre << endl;
                cout << "Nacimiento del animal registrado correctamente" << endl;
            }
            archivo.close();
        }
        else
        {
            cout << "Error al abrir el archivo" << endl;
        }
        system("pause");
    }

    void registrarMuerte()
    {
        ofstream archivo("muertes_animales.txt", ios::app);
        if (archivo.is_open())
        {
            archivo << "ID"
                    << "\t"
                    << "Fecha_Muerte"
                    << "\t"
                    << "Causa_Muerte" << endl;
            cout << "\nCuantos Vacunos desea registrar: ";
            cin >> num_naci;
            for (int i = 0; i < 2; i++)
            {
                cout << "\nIngrese id: ";
                cin >> idAnimal;
                cout << "\nIngrese fecha de muerte: ";
                cin >> fechaMuerte;
                cout << "\nIngrese causa de la muerte: ";
                cin >> causaMuerte;
                archivo << idAnimal << "\t" << fechaMuerte << "\t" << causaMuerte << endl;
                cout << "\nMuerte del animal registrada correctamente" << endl;
            }
            archivo.close();
        }
        else
        {
            cout << "Error al abrir el archivo" << endl;
        }
        system("pause");
    }

    void mostrarFallecidos()
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
        system("pause");
    }

    void mostrarNacimiento()
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
        system("pause");
    }

    void buscarAnimal(int idBuscado)
    {
        string linea;
        bool encontradoNacimiento = false;
        bool encontradoMuerte = false;
        ifstream archivoNacimiento("datos_nacimiento.txt");
        if (archivoNacimiento.is_open())
        {
            while (getline(archivoNacimiento, linea))
            {
                stringstream ss(linea);
                string item;
                getline(ss, item, '\t');
                if (!item.empty() && item.find_first_not_of("0123456789") == string::npos && stoi(item) == idBuscado)
                {
                    cout << "Datos de Nacimiento del Animal con ID " << idBuscado << ": " << linea << endl;
                    encontradoNacimiento = true;
                }
            }
            archivoNacimiento.close();
        }
        else
        {
            cout << "Error al abrir el archivo de nacimiento." << endl;
        }
        ifstream archivoMuerte("muertes_animales.txt");
        if (archivoMuerte.is_open())
        {
            while (getline(archivoMuerte, linea))
            {
                stringstream ss(linea);
                string item;
                getline(ss, item, '\t');
                if (!item.empty() && item.find_first_not_of("0123456789") == string::npos && stoi(item) == idBuscado)
                {
                    cout << "Datos de Muerte del Animal con ID " << idBuscado << ": " << linea << endl;
                    encontradoMuerte = true;
                    break;
                }
            }
            archivoMuerte.close();
        }
        else
        {
            cout << "Error al abrir el archivo de muertes." << endl;
        }

        if (encontradoNacimiento && !encontradoMuerte)
        {
            cout << "El animal con ID " << idBuscado << " esta vivo." << endl;
        }
        else if (encontradoNacimiento && encontradoMuerte)
        {
            cout << "El animal con ID " << idBuscado << " esta muerto." << endl;
        }
        else
        {
            cout << "No se encontro el animal con ID " << idBuscado << "." << endl;
        }
        system("pause");
    }
};
int main()
{
    AnimalRegistry registry;
    registry.menu();
    while (1 <= registry.opcion <= 6)
    {
        switch (registry.opcion)
        {
        case 1:
            system("cls");
            registry.registrarNacimiento();
            registry.menu();
            break;
        case 2:
            system("cls");
            registry.registrarMuerte();
            registry.menu();
            break;
        case 3:
            system("cls");
            registry.mostrarFallecidos();
            registry.menu();
            break;
        case 4:
            system("cls");
            registry.mostrarNacimiento();
            registry.menu();
            break;
        case 5:
            system("cls");
            int bus_por_id;
            registry.idBuscado = registry.solicitarID();
            registry.buscarAnimal(registry.idBuscado);
            registry.menu();
            break;
        case 6:
            system("cls");
            registry.salir();
        default:
            break;
        }
    }
    return 0;
}
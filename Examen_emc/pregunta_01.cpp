#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()//Fabian Sangama Miguel Angel
{
    srand(time(0));
    int numeroAleatorio = rand() % 100 + 1;
    int intentos = 0;
    int maxIntentos = 5;
    int numeroUsuario;
    cout<<"--------------------------------------------\n";
    cout << "|Bienvenido al juego de adivinar el numero |\n|     Adivina un numero entre 1 y 100      |" << endl;
    cout<<"--------------------------------------------"<<endl;

    while (intentos < maxIntentos)//Aqui evaluamos que el numero de intentos sea menor a maximo de intentos
    {
        cout << "\nIntento " << intentos + 1 << ". Ingresa tu numero: ";
        cin >> numeroUsuario;

        if (numeroUsuario < 1 || numeroUsuario > 100)//Aqui condiciona que si esta fuera del rango entonces te imprime una alerta
        {
            cout << "\nEl numero ingresado esta fuera del rango. Intentalo de nuevo." << endl;
            continue;
        }

        if (numeroUsuario == numeroAleatorio)//Aqui evaluamos que si el numero ingresado es igual al numero aleatorio entonces imprime el mensaje de ganaste y termina el progama
        {
            cout << "\nFelicidades Has adivinado el numero en " << intentos + 1 << " intentos." << endl;
            break;
        }
        else if (numeroUsuario < numeroAleatorio)//Aqui evalua si el numero ingresado es mayor o menor al numero a adivinar
        {
            cout << "El numero a adivinar es mayor." << endl;
        }
        else
        {
            cout << "El numero a adivinar es menor." << endl;
        }

        intentos++;//esto hace que se acumule el numero de intentos
    }

    if (intentos == maxIntentos)//Aqui evalua si ya alcanzo el maximo de intentos 
    {
        cout << "\nHas excedido el numero maximo de intentos. \nEl numero a adivinar era " << numeroAleatorio << "." << endl;
    }

    return 0;
}

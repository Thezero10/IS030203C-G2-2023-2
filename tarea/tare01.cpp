#include <iostream>
#include <stdlib.h>
#include <stack>

using namespace std;

int main()
{
    int notas[6];
    for (int i = 0; i < 6; i++)
    {
        notas[i] = rand() % 21;
    }
    cout << "Notas sin ordenar: ";
    for (int i = 0; i < 6; i++)
    {
        cout << notas[i] << " ";
    }
    cout << endl;
    char letras[6];
    for (int i = 0; i < 6; i++)
    {
        if (notas[i] >= 0 && notas[i] <= 9)
        {
            letras[i] = 'A';
        }
        else if (notas[i] >= 10 && notas[i] <= 14)
        {
            letras[i] = 'B';
        }
        else if (notas[i] >= 15 && notas[i] <= 19)
        {
            letras[i] = 'C';
        }
        else
        {
            letras[i] = 'D';
        }
    }
    stack<char> pila;

    //Aqui se inserta las letras en la pila
    for (int i = 0; i < 6; i++)
    {
        pila.push(letras[i]);
    }
    cout << "Notas ordenadas: ";
    while (!pila.empty())
    {
        cout << pila.top() << " ";
        pila.pop();
    }
    cout << endl;

    return 0;
}

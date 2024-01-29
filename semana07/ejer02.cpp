#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> lista;
    int i = 0;
    lista.push_back(4);
    lista.push_back(8);
    lista.push_back(7);
    lista.push_back(5);
    lista.push_back(9);
    lista.push_back(8);
    //Eliminar
    lista.erase(lista.begin());
    lista.erase(lista.begin());
    lista.pop_back();
    //Ingresar
    lista.push_back(10);//Ingreso por cola
    lista.insert(lista.begin(),11);
    lista.insert(lista.begin(),15);

    while (i<lista.size())
    {
        cout<<lista[i]<<" ";
        i++;
    }
    return 0;
}
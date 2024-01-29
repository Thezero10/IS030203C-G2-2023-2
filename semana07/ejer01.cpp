#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> lista;
    int i = 0;
    lista.push_back(10);
    lista.push_back(10);
    lista.push_back(10);
    lista.push_back(10);
    lista.push_back(10);
    lista.push_back(10);
    lista.push_back(10);
    lista.push_back(10);
    lista.push_back(10);
    lista.push_back(10);
    lista.push_back(10);
    while (i<lista.size())
    {
        cout<<lista[i]<<" ";
        i++;
    }
    return 0;
}
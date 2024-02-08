#include <iostream>
#include <vector>
using namespace std;

int main()//Fabian Sangama Miguel Angel
{
    vector<int> numerosPares;
    vector<int> numerosImpares;

    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            numerosPares.push_back(i);
        }
        else
        {
            numerosImpares.push_back(i);
        }
    }

    cout << "Numeros pares: ";
    for (int num : numerosPares)
    {
        cout << num << " ";
    }
    cout << endl;

    cout << "Numeros impares: ";
    for (int num : numerosImpares)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
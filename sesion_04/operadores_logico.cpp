#include <iostream>
using namespace std;

int main()
{

    if (false && false)
    {
        cout << "primera condicion";
    }

    if (false && true)
    {
        cout << "segunda condicion";
    }

    if (true && true)
    {
        cout << "tercera condicion";
    }

     if (false || false)
    {
        cout << "cuarta condicion";
    }

    if (false || true)
    {
        cout << "quinta condicion";
    }

    if (true || true)
    {
        cout << "sexta condicion";
    }

    return 0;
}
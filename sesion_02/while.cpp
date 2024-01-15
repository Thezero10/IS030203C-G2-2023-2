#include <iostream>
using namespace std;

int main()
{
    /*
    while (opcion != 5)
    {
         code 
        int opcion;
        cout << "ingrese una opcion valida: \n 1: suma \n 2: resta \n 3: multiplicacion \n 4: division \n 5: salir \n";
        cin >> opcion;
    }
    */
    int opcion;
    do{
       
        cout << "ingrese una opcion valida: \n 1: suma \n 2: resta \n 3: multiplicacion \n 4: division \n 5: salir \n";
        cin >> opcion;
    }
    while (opcion != 5);
    
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int cin1,cin2,cin3;
    cout<<"Ingrese el primer numero\n";
    cin>>cin1;
    cout<<"Ingrese el segundo numero\n";
    cin>>cin2;
    if (cin1==cin2)
    {
        cout<<"Ingrese el segundo numero\n";
        cin>>cin2;
    }
    
    cout<<"Ingrese el tercer numero\n";
    cin>>cin3;
    if (cin3==cin2 || cin3==cin1)
    {
        cout<<"Ingrese el tercer numero\n";
        cin>>cin3;
    }
    int mayor, menor;

    if (cin1 > cin2 && cin1 > cin3) {
        mayor = cin1;
        if (cin2 < cin3) {
            menor = cin2;
        } else {
            menor = cin3;
        }
    } else if (cin2 > cin1 && cin2 > cin3) {
        mayor = cin2;
        if (cin1 < cin3) {
            menor = cin1;
        } else {
            menor = cin3;
        }
    } else {
        mayor = cin3;
        if (cin1 < cin2) {
            menor = cin1;
        } else {
            menor = cin2;
        }
    }

    cout << "El numero mayor es: " << mayor <<endl;
    cout << "El numero menor es: " << menor <<endl;
        
    return 0;
}
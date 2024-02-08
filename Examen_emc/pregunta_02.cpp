#include <iostream>
using namespace std;

struct Cliente
{
    int tipoTarjeta;
    bool tieneDeuda;
};

int main()//Fabian Sangama Miguel Angel
{
    int num_cli;
    cout<<"--------------------------------------------\n";
    cout << "|          Bienvenido a TingoBank          |" << endl;
    cout<<"--------------------------------------------"<<endl;
    cout<<"\nCuantos clientes va a ingresar: ";
    cin>>num_cli;
    cout<<"\n";
    Cliente clientes[num_cli];

    for (int i = 0; i < num_cli; i++)//Aqui recorre la cantidad de veces ingresadas 
    {
        cout << "Ingrese el tipo de tarjeta del cliente " << i + 1 << ": ";
        cin >> clientes[i].tipoTarjeta;
        cout << "El cliente " << i + 1 << " tiene deuda con el banco? (1 para si, 0 para no): ";
        cin >> clientes[i].tieneDeuda;
    }

    float aumento;
    for (int i = 0; i < num_cli; i++)
    {
        switch (clientes[i].tipoTarjeta)
        {
        case 1:
            if (clientes[i].tieneDeuda)
            {
                aumento = 0.25 / 2;
            }
            else
            {
                aumento = 0.25;
            }
            break;
        case 2:
            if (clientes[i].tieneDeuda)
            {
                aumento = 0.35 / 2;
            }
            else
            {
                aumento = 0.35;
            }
            break;
        case 3:
            aumento = 0.40;
            break;
        default:
            if (clientes[i].tieneDeuda)
            {
                aumento = 0.50 / 2;
            }
            else
            {
                aumento = 0.50;
            }
            break;
        }
        cout<<"---------------------------------------------------------------\n";
        cout << "El cliente " << i + 1 << " tendra un aumento del " << aumento * 100 << "% en su limite de credito" << endl;
        cout<<"---------------------------------------------------------------\n";
    }

    return 0;
}
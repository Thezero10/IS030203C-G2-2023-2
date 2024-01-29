#include <iostream>
#include <string>
using namespace std;
struct Perro
{
    string name;
    int age;
    string breed;
    char gender;
};

int main(){
    Perro dog1;
    cout<<"Ingrese su nombre del perro: ";
    getline(cin, dog1.name);
    cout<<"Ingrese su edad del perro: ";
    cin>>dog1.age;
    cin.ignore();
    cout<<"Ingrese la raza del perro: ";
    getline(cin, dog1.breed);
    cout<<"Ingrese el sexo del perro: ";
    cin>>dog1.gender;
    cout<<"\nMostramos informacion: "<<endl;
    cout<<dog1.name<<endl;
    cout<<dog1.breed<<endl;
    cout<<dog1.age<<endl;
    cout<<dog1.gender<<endl;
    return 0;
}
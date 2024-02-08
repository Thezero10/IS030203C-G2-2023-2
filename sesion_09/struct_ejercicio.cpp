#include <iostream>
#include <string>
using namespace std;
struct Alumno
{
    string nombre;
    int edad;
    int notas[3];
    float promedio;
};
float calcularPromedio(int notas[]){
    float suma =0;
    for (int i = 0; i < 3; i++)
    {
        suma += notas[i];
    }
    return suma/3;
}
bool aprobo(Alumno alumno){
    return alumno.promedio >= 10.5;
}
int main(){
    
    Alumno alumno1 = {"Fabian",20,{14,17,18},0};
    Alumno alumno2 = {"Jose",18,{18,12,18},0};
    alumno1.promedio = calcularPromedio(alumno1.notas);
    alumno2.promedio = calcularPromedio(alumno2.notas);
    cout<<"El promedio de "<<alumno1.nombre<<" es "<<alumno1.promedio<<endl;
    cout<<"El promedio de "<<alumno2.nombre<<" es "<<alumno2.promedio<<endl;
    if (aprobo(alumno1)){
        cout<<alumno1.nombre<<" aprobo "<<endl;
    }else
    {
        cout<<alumno1.nombre<<" no aprobo "<<endl;
    }
    if (aprobo(alumno2))
    {
        cout<<alumno2.nombre<<" aprobo "<<endl;
    }
    else
    {
        cout<<alumno2.nombre<<" no aprobo "<<endl;
    }
    return 0;
}
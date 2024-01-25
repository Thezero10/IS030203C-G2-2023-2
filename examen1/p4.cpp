// elaborar un prorama que calcule el area de un triangulo conociendo sus 3 lados e identifique que tipo de triangulo
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float lado1, lado2, lado3;
    cout << "Ingrese la longitud del primer lado: ";
    cin >> lado1;
    cout << "Ingrese la longitud del segundo lado: ";
    cin >> lado2;
    cout << "Ingrese la longitud del tercer lado: ";
    cin >> lado3;

    //Aqui se calcula el semiperímetro
    float semiperimetro = (lado1 + lado2 + lado3) / 2;

    //Aqui se calcula el área
    float area = sqrt(semiperimetro * (semiperimetro - lado1) * (semiperimetro - lado2) * (semiperimetro - lado3));

    cout << "El area del triangulo es: " << area << endl;

    //Aqui utilizamos las condicionales if, else if para identificar el tipo de triángulo
    if (lado1 == lado2 && lado2 == lado3)
    {
        cout << "El triangulo es equilatero." << endl;
    }
    else if (lado1 != lado2 && lado2 != lado3 && lado1 != lado3)
    {
        cout << "El triangulo es escaleno." << endl;
    }
    else
    {
        cout << "El triangulo es isosceles." << endl;
    }

    return 0;
}

#include <iostream>

// Función sobrecargada para sumar dos enteros
int sumar (int a, int b) {
    return a + b;
}

// Función sobrecargada para sumar dos números de punto fotante
float sumar (float a, float b) {
    return a + b;
}

int main() {
    int num1 = 5;
    int num2 = 10;
    float num3 = 2.5;
    float num4 = 3.8;

    int resultado1 = sumar (num1, num2);
    float resultado2 = sumar (num3, num4);

    std::cout << "El resultado de sumar " << num1 << " y " << num2 << " es: " << resultado1 << std::endl;
    std::cout << "El resultado de sumar " << num3 << " y " << num4 << " es: " << resultado2 << std::endl;

    return 0;
}

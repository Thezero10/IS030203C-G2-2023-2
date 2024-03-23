#include <iostream>
using namespace std;

void funcion_init(int*& varRef) {
  *varRef = 10;
}

int main() {
  int numero = 0;
  int* ptr = &numero;
  funcion_init(ptr);
  // Ahora, numero vale 10
}

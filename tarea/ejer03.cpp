#include <iostream>
using namespace std;
int main() {
    int contador_multiplos = 0;
    for (int numero = 1; ; numero++) {
        if (numero % 9 == 0) {
            cout << numero << " es un multiplo de 9" << endl;
            contador_multiplos++;
        }
        if (contador_multiplos == 20) {
            break;
        }
    }
    return 0;
}

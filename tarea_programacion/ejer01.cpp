#include <iostream>

using namespace std;

int main() {
  // Declaramos las variables
  int dias;
  int anios;
  int meses;
  int dia;

  // Solicitamos al usuario el número de días
  cout << "Ingrese el numero de días: ";
  cin >> dias;

  // Calculamos los años
  anios = dias / 365;

  // Calculamos los meses
  meses = (dias % 365) / 30;

  // Calculamos los días
  dia = (dias % 365) % 30;

  // Imprimimos los resultados
  cout << "Anios: " << anios << endl;
  cout << "Meses: " << meses << endl;
  cout << "Dias: " << dia << endl;

  // Indicamos el mes
  switch (meses) {
    case 1:
      cout << "El dia recae en enero." << endl;
      break;
    case 2:
      cout << "El dia recae en febrero." << endl;
      break;
    case 3:
      cout << "El dia recae en marzo." << endl;
      break;
    case 4:
      cout << "El dia recae en abril." << endl;
      break;
    case 5:
      cout << "El dia recae en mayo." << endl;
      break;
    case 6:
      cout << "El dia recae en junio." << endl;
      break;
    case 7:
      cout << "El dia recae en julio." << endl;
      break;
    case 8:
      cout << "El dia recae en agosto." << endl;
      break;
    case 9:
      cout << "El dia recae en septiembre." << endl;
      break;
    case 10:
      cout << "El dia recae en octubre." << endl;
      break;
    case 11:
      cout << "El dia recae en noviembre." << endl;
      break;
    case 12:
      cout << "El dia recae en diciembre." << endl;
      break;
  }

  return 0;
}

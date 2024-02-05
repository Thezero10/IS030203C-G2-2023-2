#include <iostream>
#include <vector>
#include <chrono>

using namespace std;

struct Ganado
{
  string id;
  string nombre;
  string raza;
  int edad;
  bool desparasitado;
  int fecha_desparasitacion;
};

// Función para obtener la fecha actual
int getFechaActual()
{
  return chrono::system_clock::to_time_t(chrono::system_clock::now());
}

// Función para calcular la fecha de la próxima desparasitación
int calcularFechaDesparasitacion(Ganado ganado)
{
  return ganado.edad * 3;
}

void agregarGanado(vector<Ganado> &ganados)
{
  Ganado ganado;
  cout << "Ingrese los datos del ganado: " << endl;
  cout << "ID: ";
  cin >> ganado.id;
  cout << "Nombre: ";
  cin >> ganado.nombre;
  cout << "Raza: ";
  cin >> ganado.raza;
  cout << "Edad: ";
  cin >> ganado.edad;
  ganados.push_back(ganado);
}

void listarGanados(vector<Ganado> &ganados)
{
  for (Ganado ganado : ganados)
  {
    cout << ganado.id << " " << ganado.nombre << " " << ganado.raza << " " << ganado.edad << " " << ganado.desparasitado << endl;
  }
}

void desparasitarGanados(vector<Ganado> &ganados)
{
  for (Ganado ganado : ganados)
  {
    if (!ganado.desparasitado)
    {
      int fecha_desparasitacion = calcularFechaDesparasitacion(ganado);
      if (fecha_desparasitacion <= getFechaActual())
      {
        ganado.desparasitado = true;
        cout << "Se ha desparasitado a " << ganado.nombre << endl;
      }
    }
  }
}
// Función para generar el inventario de toretes para venta
void generarInventarioVentasToretes(vector<Ganado> &ganados)
{
  for (Ganado ganado : ganados)
  {
    if (ganado.raza == "toro" && ganado.edad >= 18)
    {
      cout << ganado.id << " " << ganado.nombre << " " << ganado.raza << " " << ganado.edad << endl;
    }
  }
}

int main()
{
  vector<Ganado> ganados;

  // Preguntamos la cantidad de ganados a agregar
  int cantidad_ganados;
  cout << "¿Cuántos ganados desea agregar?: ";
  cin >> cantidad_ganados;

  // Agregamos los ganados
  for (int i = 0; i < cantidad_ganados; i++)
  {
    agregarGanado(ganados);
  }

  // Listamos los animales
  listarGanados(ganados);

  // Desparasitamos a los animales que lo necesitan
  desparasitarGanados(ganados);

  // Generamos un inventario de los toretes que se venderán en setiembre
  generarInventarioVentasToretes(ganados);

  return 0;
}

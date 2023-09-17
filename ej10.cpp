/*10. Hacer un programa en C++ para A) Registrar los datos de tres libros como: título, autor, año y color del libro. El color se deberá hacer mediante una enumeración y sólo habrá rojo, verde y azul. B) Mostrar 3 Libros según sea su color.*/
#include <iostream>
#include <string>
using namespace std;
enum Color {
  rojo,
  verde,
  azul
};
struct Libro {
  string titulo;
  string autor;
  int anio;
  Color color;
};
int main() {
  Libro libros[3];
  for (int i = 0; i < 3; i++) {
    cout << "Ingrese el t�tulo del libro " << i + 1 << ": ";
    cin >> libros[i].titulo;
    cout << "Ingrese el autor del libro " << i + 1 << ": ";
    cin >> libros[i].autor;
    cout << "Ingrese el a�o de publicaci�n del libro " << i + 1 << ": ";
    cin >> libros[i].anio;
    cout << "Ingrese el color del libro " << i + 1 << " (rojo, verde o azul): ";
    string color;
    cin >> color;
    if (color == "rojo") {
      libros[i].color = rojo;
    } else if (color == "verde") {
      libros[i].color = verde;
    } else if (color == "azul") {
      libros[i].color = azul;
    } else {
      cout << "Color no v�lido. Ingrese rojo, verde o azul." << endl;
      i--;
    }
  }
  cout << endl << "Libros rojos:" << endl;
  for (int i = 0; i < 3; i++) {
    if (libros[i].color == rojo) {
      cout << libros[i].titulo << " de " << libros[i].autor << " (" << libros[i].anio << ")" << endl;
    }
  }
  cout << endl << "Libros verdes:" << endl;
  for (int i = 0; i < 3; i++) {
    if (libros[i].color == verde) {
      cout << libros[i].titulo << " de " << libros[i].autor << " (" << libros[i].anio << ")" << endl;
    }
  }
  cout << endl << "Libros azules:" << endl;
  for (int i = 0; i < 3;



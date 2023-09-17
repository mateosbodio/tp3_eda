/*9. Hacer estructuras anidadas para registrar los datos de un Trabajador y de una Persona sin oficio. Se guarda de las personas nombre, edad, peso, y fecha (estructura con dia, mes, anio). Un Trabajador es una estructura que guarda una persona, y un salario. Declare e inicialice un ejemplo de Trabajador y Persona.*/
#include <iostream>
using namespace std;
struct Fecha {
  int dia;
  int mes;
  int anio;
};
struct Persona {
  string nombre;
  int edad;
  float peso;
  Fecha fecha;
};
struct Trabajador : public Persona {
  float salario;
};
int main() {
  Persona persona1 = {"Juan", 25, 70.0, {1, 1, 2000}};
  Trabajador trabajador1 = {"Maria", 30, 60.0, {1, 1, 2001}, 1000.0};
  cout << "Nombre de la persona: " << persona1.nombre << endl;
  cout << "Edad de la persona: " << persona1.edad << endl;
  cout << "Peso de la persona: " << persona1.peso << endl;
  cout << "Fecha de nacimiento de la persona: " << persona1.fecha.dia << "/" << persona1.fecha.mes << "/" << persona1.fecha.anio << endl;
  cout << "Nombre del trabajador: " << trabajador1.nombre << endl;
  cout << "Edad del trabajador: " << trabajador1.edad << endl;
  cout << "Peso del trabajador: " << trabajador1.peso << endl;
  cout << "Fecha de nacimiento del trabajador: " << trabajador1.fecha.dia << "/" << trabajador1.fecha.mes << "/" << trabajador1.fecha.anio << endl;
  cout << "Salario del trabajador: " << trabajador1.salario << endl;
  return 0;
}


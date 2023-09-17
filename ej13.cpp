/*13. El programa de Anses pide N, y carga un arreglo de estructuras los datos de N jubilados (nroCarnet, nombre y apellido, dni, edad, aportes, montoPensión). Luego que imprima: A- los datos del Jubilado con mayor y menor pensión. B- Aquellos Jubilados con entre 20 y 30 años de aporte. C- El número de carnet de los Jubilados con pensión inferior a $90000.*/
#include <iostream>
#include <string>
using namespace std;
struct Jubilado {
  int nroCarnet;
  string nombreApellido;
  int dni;
  int edad;
  int aportes;
  int montoPension;
};
int main() {
  int n;
  cout << "Ingrese la cantidad de jubilados: ";
  cin >> n;
  Jubilado jubilados[n];
  for (int i = 0; i < n; i++) {
    cout << "Ingrese los datos del jubilado " << i + 1 << endl;
    cout << "Nro. de carnet: ";
    cin >> jubilados[i].nroCarnet;
    cout << "Nombre y apellido: ";
    cin >> jubilados[i].nombreApellido;
    cout << "DNI: ";
    cin >> jubilados[i].dni;
    cout << "Edad: ";
    cin >> jubilados[i].edad;
    cout << "Aportes: ";
    cin >> jubilados[i].aportes;
    cout << "Monto de pensi�n: ";
    cin >> jubilados[i].montoPension;
  }
  // A) Imprimir los datos del jubilado con mayor y menor pensi�n
  int mayorPension = jubilados[0].montoPension;
  int menorPension = jubilados[0].montoPension;
  int indiceMayorPension;
  int indiceMenorPension;
  for (int i = 1; i < n; i++) {
    if (jubilados[i].montoPension > mayorPension) {
      mayorPension = jubilados[i].montoPension;
      indiceMayorPension = i;
    }
    if (jubilados[i].montoPension < menorPension) {
      menorPension = jubilados[i].montoPension;
      indiceMenorPension = i;
    }
  }
  cout << endl << "Jubilado con mayor pensi�n:" << endl;
  cout << "Nro. de carnet: " << jubilados[indiceMayorPension].nroCarnet << endl;
  cout << "Nombre y apellido: " << jubilados[indiceMayorPension].nombreApellido << endl;
  cout << "DNI: " << jubilados[indiceMayorPension].dni <<



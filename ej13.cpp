/*13. El programa de Anses pide N, y carga un arreglo de estructuras los datos de N jubilados (nroCarnet, nombre y apellido, dni, edad, aportes, montoPensi√≥n). Luego que imprima: A- los datos del Jubilado con mayor y menor pensi√≥n. B- Aquellos Jubilados con entre 20 y 30 a√±os de aporte. C- El n√∫mero de carnet de los Jubilados con pensi√≥n inferior a $90000.*/
#include <iostream>
#include <vector>
using namespace std;
struct jubilado {
  int nroCarnet;
  string nombreApellido;
  int dni;
  int edad;
  int aportes;
  int montoPension;
};
int main() {
  // Se pide el n˙mero de jubilados
  int N;
  cout << "Ingrese el n˙mero de jubilados: ";
  cin >> N;
  // Se crea un arreglo de estructuras para almacenar los datos de los jubilados
  vector<jubilado> jubilados(N);
  for (int i = 0; i < N; i++) {
    cout << "Ingrese el n˙mero de carnet: ";
    cin >> jubilados[i].nroCarnet;
    cout << "Ingrese el nombre y apellido: ";
    cin >> jubilados[i].nombreApellido;
    cout << "Ingrese el DNI: ";
    cin >> jubilados[i].dni;
    cout << "Ingrese la edad: ";
    cin >> jubilados[i].edad;
    cout << "Ingrese los aportes: ";
    cin >> jubilados[i].aportes;
    cout << "Ingrese el monto de la pensiÛn: ";
    cin >> jubilados[i].montoPension;
  }
  // Se recorre el arreglo de estructuras para encontrar el jubilado con mayor y menor pensiÛn
  jubilado jubiladoConMayorPension = jubilados[0];
  jubilado jubiladoConMenorPension = jubilados[0];
  for (int i = 1; i < N; i++) {
    if (jubilados[i].montoPension > jubiladoConMayorPension.montoPension) {
      jubiladoConMayorPension = jubilados[i];
    }
    if (jubilados[i].montoPension < jubiladoConMenorPension.montoPension) {
      jubiladoConMenorPension = jubilados[i];
    }
  }
  // Se imprimen los datos del jubilado con mayor y menor pensiÛn
  cout << "Jubilado con mayor pensiÛn:" << endl;
  cout << "N˙mero de carnet: " << jubiladoConMayorPension.nroCarnet << endl;
  cout << "Nombre y apellido: " << jubiladoConMayorPension.nombreApellido << endl;
  cout << "DNI: " << jubiladoConMayorPension.dni << endl;
  cout << "Edad: " << jubiladoConMayorPension.edad << endl;
  cout << "Aportes: " << jubiladoConMayorPension.aportes << endl;
  cout << "Monto de la pensiÛn: " << jubiladoConMayorPension.montoPension << endl;
  cout << "Jubilado con menor pensiÛn:" << endl;
  cout << "N˙mero de carnet: " << jubiladoConMenorPension.nroCarnet << endl;
  cout << "Nombre y apellido: " << jubiladoConMenorPension.nombreApellido << endl;
  cout << "DNI: " << jubiladoConMenorPension.dni << endl;
  cout << "Edad: " << jubiladoConMenorPension.edad << endl;
  cout << "Aportes: " << jubiladoConMenorPension.aportes << endl;
  cout << "Monto de la pensiÛn: " << jubiladoConMenorPension.montoPension << endl;
  // Se recorre el arreglo de estructuras para encontrar los jubilados con entre 20 y 30 aÒos de aporte
  vector<jubilado> jubiladosConAportesEntre20y30;
  for (int i = 0; i < N; i++) {
    if (jubilados[i].aportes >= 20 && jubilados[i].aportes <= 30) {
      jubiladosConAportesEntre20y30.push_back(jubilados[i]);
    }
  }
  // Se imprimen los datos de los jubilados con entre 20 y 30 aÒos de aporte
  cout << "Jubilados con entre 20 y 30 aÒos de aporte:" << endl;
  for (int i = 0; i < jubiladosConAportesEntre20y30.size(); i++) {
    cout << "N˙mero de carnet: " << jubiladosConAportesEntre20y30[i].nroCarnet << endl;
    cout << "Nombre y apellido: " << jubiladosConAportesEntre20y30[i].nombreApellido << endl;
    cout << "DNI: " << jubiladosConAportesEntre20y30.jubiladosConAportesEntre20y30[i].dni << endl;
    cout << "Edad: " << jubiladosConAportesEntre20y30[i].edad << endl;
    cout << "Aportes: " << jubiladosConAportesEntre20y30[i].aportes << endl;
    cout << "Monto de la pensiÛn: " << jubiladosConAportesEntre20y30[i].montoPension << endl;
  }
}

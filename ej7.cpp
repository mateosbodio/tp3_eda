/*7. Cree una estructura profesor, con nombre, cargo, materia, y carga horaria. Declare 2 profesores con estos valores (fuera del main): Ej: Profe. Cristina, Titular, Gesti√≥n de datos, 20hs. Ej2: Fabiana. Jefa TP, Matem√°tica, 15hs. El registro profesor debe incluir a otro registro materia. Luego en el main, muestre ambos profesores concatenados a sus materias. Sugerencia getline para los char[].*/
#include <iostream>
#include <string>
using namespace std;
struct Materia {
  string nombre;
  int cargaHoraria;
};
struct Profesor {
  string nombre;
  string cargo;
  Materia materia;
};
Profesor profe1 = {"Cristina", "Titular", {"GestiÛn de datos", 20}};
Profesor profe2 = {"Fabiana", "Jefa TP", {"Matem·tica", 15}};
int main() {
  cout << profe1.nombre << ", " << profe1.cargo << ", " << profe1.materia.nombre << ", " << profe1.materia.cargaHoraria << "hs" << endl;
  cout << profe2.nombre << ", " << profe2.cargo << ", " << profe2.materia.nombre << ", " << profe2.materia.cargaHoraria << "hs" << endl;
  return 0;
}


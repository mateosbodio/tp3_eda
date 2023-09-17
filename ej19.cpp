/*19. En un comercio trabajan 6 vendedores. Defina la estructura principal vendedor se dese saber: nombre, legajo, sector.
Se guardan sus ventas clasificadas por rubro, por lo que debes hacer un array de estructuras ventas con códigos 01 al 04, concepto: bazar, accesorios, indumentaria, calzados; y de cada una su total vendido. El vendedor asocia sus ventas_rubro
Realice un programa que permita:
a. Cargar los datos de un arreglo de 3 vendedores, con sus ventas en rubro
b. Mostrar por cada vendedor, las ventas en cada rubro (esta información debe ser almacenada en la segunda estructura)*/
#include <iostream>
#include <string>
using namespace std;
struct Vendedor {
  string nombre;
  int legajo;
  string sector;
  float ventas_rubro[4];
};
struct Venta {
  int codigo;
  string concepto;
  float total_vendido;
};
int main() {
  Vendedor vendedores[3];
  Venta ventas[4] = {{01, "Bazar", 0}, {02, "Accesorios", 0}, {03, "Indumentaria", 0}, {04, "Calzados", 0}};
  // Cargar los datos de un arreglo de 3 vendedores, con sus ventas en rubro
  for (int i = 0; i < 3; i++) {
    cout << "Ingrese el nombre del vendedor " << i + 1 << ": ";
    cin >> vendedores[i].nombre;
    cout << "Ingrese el legajo del vendedor " << i + 1 << ": ";
    cin >> vendedores[i].legajo;
    cout << "Ingrese el sector del vendedor " << i + 1 << ": ";
    cin >> vendedores[i].sector;
    for (int j = 0; j < 4; j++) {
      cout << "Ingrese el total vendido en el rubro " << ventas[j].concepto << ": ";
      cin >> vendedores[i].ventas_rubro[j];
    }
  }
  // Mostrar por cada vendedor, las ventas en cada rubro
  for (int i = 0; i < 3; i++) {
    cout << "Vendedor " << vendedores[i].nombre << ":" << endl;
    cout << "Legajo: " << vendedores[i].legajo << endl;
    cout << "Sector: " << vendedores[i].sector << endl;
    for (int j = 0; j < 4; j++) {
      cout << "Ventas en " << ventas[j].concepto << ": " << vendedores[i].ventas_rubro[j] << endl;
    }
    cout << endl;
  }
  return 0;
}
?      

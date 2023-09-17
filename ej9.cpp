/*9. Hacer estructuras anidadas para registrar los datos de un Trabajador y de una Persona sin oficio. Se guarda de las personas nombre, edad, peso, y fecha (estructura con dia, mes, anio). Un Trabajador es una estructura que guarda una persona, y un salario. Declare e inicialice un ejemplo de Trabajador y Persona.*/
#include <stdio.h>
#include <stdlib.h>
// Definición de la estructura para la fecha
struct fecha {
  int dia;
  int mes;
  int anio;
};
// Definición de la estructura para la persona
struct persona {
  char nombre[50];
  int edad;
  float peso;
  struct fecha fecha_nacimiento;
};
// Definición de la estructura para el trabajador
struct trabajador {
  struct persona persona;
  float salario;
};
// Declaración e inicialización de un ejemplo de trabajador
struct trabajador trabajador1 = {
  {"Juan García", 30, 70.0, {15, 10, 1990}},
  1000.0
};
// Declaración e inicialización de un ejemplo de persona sin oficio
struct persona persona1 = {
  {"María Pérez", 25, 60.0, {20, 11, 1995}}
};
// Función principal
int main() {
  // Impresión de los datos del trabajador
  printf("Nombre: %s\n", trabajador1.persona.nombre);
  printf("Edad: %d\n", trabajador1.persona.edad);
  printf("Peso: %.2f\n", trabajador1.persona.peso);
  printf("Fecha de nacimiento: %d/%d/%d\n", trabajador1.persona.fecha_nacimiento.dia, trabajador1.persona.fecha_nacimiento.mes, trabajador1.persona.fecha_nacimiento.anio);
  printf("Salario: %.2f\n", trabajador1.salario);
  // Impresión de los datos de la persona sin oficio
  printf("Nombre: %s\n", persona1.nombre);
  printf("Edad: %d\n", persona1.edad);
  printf("Peso: %.2f\n", persona1.peso);
  printf("Fecha de nacimiento: %d/%d/%d\n", persona1.fecha_nacimiento.dia, persona1.fecha_nacimiento.mes, persona1.fecha_nacimiento.anio);
  return 0;
}


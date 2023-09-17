/*10. Hacer un programa en C++ para A) Registrar los datos de tres libros como: t√≠tulo, autor, a√±o y color del libro. El color se deber√° hacer mediante una enumeraci√≥n y s√≥lo habr√° rojo, verde y azul. B) Mostrar 3 Libros seg√∫n sea su color.*/
#include <stdio.h>
#include <stdlib.h>
// DefiniciÛn de la enumeraciÛn para los colores
enum colores {
  ROJO,
  VERDE,
  AZUL
};
// Estructura para almacenar los datos de un libro
struct libro {
  char titulo[50];
  char autor[50];
  int anio;
  enum colores color;
};
// FunciÛn para registrar los datos de un libro
void registrarLibro(struct libro *libro) {
  printf("TÌtulo: ");
  scanf("%s", libro->titulo);
  printf("Autor: ");
  scanf("%s", libro->autor);
  printf("AÒo: ");
  scanf("%d", &libro->anio);
  printf("Color: ");
  scanf("%d", &libro->color);
}
// FunciÛn para mostrar los datos de un libro
void mostrarLibro(struct libro libro) {
  printf("TÌtulo: %s\n", libro.titulo);
  printf("Autor: %s\n", libro.autor);
  printf("AÒo: %d\n", libro.anio);
  switch (libro.color) {
    case ROJO:
      printf("Color: Rojo\n");
      break;
    case VERDE:
      printf("Color: Verde\n");
      break;
    case AZUL:
      printf("Color: Azul\n");
      break;
  }
}
// FunciÛn principal
int main() {
  // DeclaraciÛn de las variables
  struct libro libros[3];
  int i;
  // Registro de los datos de los libros
  for (i = 0; i < 3; i++) {
    registrarLibro(&libros[i]);
  }
  // Mostrar los datos de los libros seg˙n su color
  printf("Libros rojos:\n");
  for (i = 0; i < 3; i++) {
    if (libros[i].color == ROJO) {
      mostrarLibro(libros[i]);
    }
  }
  printf("Libros verdes:\n");
  for (i = 0; i < 3; i++) {
    if (libros[i].color == VERDE) {
      mostrarLibro(libros[i]);
    } 
  }
  printf("Libros azules:\n");
  for (i = 0; i < 3; i++) {
    if (libros[i].color == AZUL) {
      mostrarLibro(libros[i]);
    }
  }
  return 0;
}


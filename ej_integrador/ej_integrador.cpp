/*EJERCICIO INTEGRADOR: Analice detalladamente el ejercicio antes de abordar una solución.
➢ Escribir la estructura persona con al menos 20 caracteres para el nombre, edad, peso y la fecha de nacimiento, que debe ser una Fecha
➢ Fecha es una estructura compuesta de su dia, mes y anio.
➢ Pedir en el main, los datos de la persona y cargar a Verónica, edad 20, peso 45, nacida el 2 de diciembre de 1997.
➢ Escribir la estructura empleado que es una persona con un salario.
➢ Desde el main creamos a Esteban de 19 años que pesa 60kg, y cumple años el 22 de julio de 1998. Esteban cuenta con un salario de 50000$.
➢ Desde el main, nos ocuparemos de mostrar tanto a Esteban como a Verónica.
➢ Declarar un arreglo de trabajadores, y cargar a Esteban y dos trabajadores adicionales, luego mostrar todos sus campos. */
#include <stdio.h>
#include <conio.h>
#include <string.h>
typedef struct {
    char nombre[20];
    int edad;
    float peso;
    struct fecha {
        int dia;
        int mes;
        int anio;
    } fechaNacimiento;
} Persona;
typedef struct {
    Persona persona;
    float salario;
} Empleado;
int main() {
    Persona Veronica;
    strcpy(Veronica.nombre, "Veronica");
    Veronica.edad = 20;
    Veronica.peso = 45;
    Veronica.fechaNacimiento.dia = 2;
    Veronica.fechaNacimiento.mes = 12;
    Veronica.fechaNacimiento.anio = 1997;
    Empleado Esteban;
    strcpy(Esteban.persona.nombre, "Esteban");
    Esteban.persona.edad = 19;
    Esteban.persona.peso = 60;
    Esteban.persona.fechaNacimiento.dia = 22;
    Esteban.persona.fechaNacimiento.mes = 7;
    Esteban.persona.fechaNacimiento.anio = 1998;
    Esteban.salario = 50000;
    printf("Ver�nica:\n");
    printf("Nombre: %s\n", Veronica.nombre);
    printf("Edad: %d\n", Veronica.edad);
    printf("Peso: %.2f\n", Veronica.peso);
    printf("Fecha de nacimiento: %d/%d/%d\n", Veronica.fechaNacimiento.dia, Veronica.fechaNacimiento.mes, Veronica.fechaNacimiento.anio);
    printf("\nEsteban:\n");
    printf("Nombre: %s\n", Esteban.persona.nombre);
    printf("Edad: %d\n", Esteban.persona.edad);
    printf("Peso: %.2f\n", Esteban.persona.peso);
    printf("Fecha de nacimiento: %d/%d/%d\n", Esteban.persona.fechaNacimiento.dia, Esteban.persona.fechaNacimiento.mes, Esteban.persona.fechaNacimiento.anio);
    printf("Salario: %.2f\n", Esteban.salario);
    Empleado trabajadores[3] = {Esteban};
    strcpy(trabajadores[1].persona.nombre , "Juan");
    trabajadores[1].persona.edad = 25;
    trabajadores[1].persona.peso = 70;
    trabajadores[1].persona.fechaNacimiento.dia = 15;
    trabajadores[1].persona.fechaNacimiento.mes = 8;
    trabajadores[1].persona.fechaNacimiento.anio = 1995;
    trabajadores[1].salario = 60000;
    strcpy(trabajadores[2].persona.nombre, "Mar�a");
    trabajadores[2].persona.edad = 30;
    trabajadores[2].persona.peso = 55;
    trabajadores[2].persona.fechaNacimiento.dia = 1;
    trabajadores[2].persona.fechaNacimiento.mes = 1;
    trabajadores[2].persona.fechaNacimiento.anio = 1990;
    trabajadores[2].salario = 70000;
    for (int i = 0; i < 3; i++) {
        printf("\nTrabajador %d:\n", i + 1);
        printf("Nombre: %s\n", trabajadores[i].persona.nombre);
        printf("Edad: %d\n", trabajadores[i].persona.edad);
        printf("Peso: %.2f\n", trabajadores[i].persona.peso);
        printf("Fecha de nacimiento: %d/%d/%d\n", trabajadores[i].persona.fechaNacimiento.dia, trabajadores[i].persona.fechaNacimiento.mes, trabajadores[i].persona.fechaNacimiento.anio);
        printf("Salario: %.2f\n", trabajadores[i].salario);
    }
    return 0;
}

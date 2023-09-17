/*20. Una empresa necesita el registro tanto de sus Empleados, como de sus Clientes, de ambos requiere los datos de su domicilio Ej. provincia en que viven, el barrio, la calle, y altura, si esEdificio o no. Adem√°s de sus empleados guardamos el legajo, su puesto, y su sueldo. Plantearlo con estructuras anidadas, si adem√°s tenemos del Cliente el nombre, correo, tel√©fono, y domicilio de residencia. Luego CARGAR arreglos de 10 clientes y 5 empleados. Luego Mostrar en consola:
a. Donde viven los 10 clientes, y su nombre.
b. Datos de los Empleados con sueldos de m√°s de $50000
c. Correo y tel√©fono, de clientes que viven en edificio
d. Datos de los Empleados con puesto de vendedor
e. Reemplazar el nro. de legajo, por un registro: nroLegajo, nombre, apellido, y antig√ºedad. */
#include<iostream>
#include<string>
using namespace std;
struct Domicilio {
    string provincia;
    string barrio;
    string calle;
    int altura;
    bool esEdificio;
};
struct Empleado {
    int legajo;
    string puesto;
    double sueldo;
    Domicilio domicilio;
};
struct Cliente {
    string nombre;
    string correo;
    string telefono;
    Domicilio domicilio;
};
int main() {
    const int MAX_CLIENTES = 10;
    const int MAX_EMPLEADOS = 5;
    Cliente clientes[MAX_CLIENTES];
    Empleado empleados[MAX_EMPLEADOS];
    // Carga de datos de ejemplo
    for (int i = 0; i < MAX_CLIENTES; i++) {
        cout << "Datos del cliente " << i+1 << ":" << endl;
        cout << "Nombre: ";
        cin >> clientes[i].nombre;
        cout << "Provincia: ";
        cin >> clientes[i].domicilio.provincia;
        cout << "Barrio: ";
        cin >> clientes[i].domicilio.barrio;
        cout << "Calle: ";
        cin >> clientes[i].domicilio.calle;
        cout << "Altura: ";
        cin >> clientes[i].domicilio.altura;
        cout << "øEs edificio? (1 = SÌ, 0 = No): ";
        cin >> clientes[i].domicilio.esEdificio;
        cout << endl;
    }
    for (int i = 0; i < MAX_EMPLEADOS; i++) {
        cout << "Datos del empleado " << i+1 << ":" << endl;
        cout << "Legajo: ";
        cin >> empleados[i].legajo;
        cout << "Puesto: ";
        cin >> empleados[i].puesto;
        cout << "Sueldo: ";
        cin >> empleados[i].sueldo;
        cout << "Provincia: ";
        cin >> empleados[i].domicilio.provincia;
        cout << "Barrio: ";
        cin >> empleados[i].domicilio.barrio;
        cout << "Calle: ";
        cin >> empleados[i].domicilio.calle;
        cout << "Altura: ";
        cin >> empleados[i].domicilio.altura;
        cout << "øEs edificio? (1 = SÌ, 0 = No): ";
        cin >> empleados[i].domicilio.esEdificio;
        cout << endl;
    }
    // Mostrar clientes y su lugar de residencia
    cout << "Clientes y su lugar de residencia:" << endl;
    for (int i = 0; i < MAX_CLIENTES; i++) {
        cout << "Cliente " << i+1 << ": " << clientes[i].nombre << endl;
        cout << "Provincia: " << clientes[i].domicilio.provincia << endl;
        cout << "Barrio: " << clientes[i].domicilio.barrio << endl;
        cout << "Calle: " << clientes[i].domicilio.calle << endl;
        cout << "Altura: " << clientes[i].domicilio.altura << endl;
        cout << endl;
    }
    // Mostrar empleados con sueldos superiores a $50000
    cout << "Empleados con sueldos de m·s de $50000:" << endl;
    for (int i = 0; i < MAX_EMPLEADOS; i++) {
        if (empleados[i].sueldo > 50000) {
            cout << "Empleado " << i+1 << ":" << endl;
            cout << "Legajo: " << empleados[i].legajo << endl;
            cout << "Puesto: " << empleados[i].puesto << endl;
            cout << "Sueldo: " << empleados[i].sueldo << endl;
            cout << endl;
        }
    }
    // Mostrar correo y telÈfono de clientes que viven en un edificio
    cout << "Correos y telÈfonos de clientes que viven en un edificio:" << endl;
    for (int i = 0; i < MAX_CLIENTES; i++) {
        if (clientes[i].domicilio.esEdificio) {
            cout << "Cliente " << i+1 << ": " << clientes[i].nombre << endl;
            cout << "Correo: " << clientes[i].correo << endl;
            cout << "TelÈfono: " << clientes[i].telefono << endl;
            cout << endl;
        }
    }
    // Mostrar empleados con puesto de vendedor
    cout << "Empleados con puesto de vendedor:" << endl;
    for (int i = 0; i < MAX_EMPLEADOS; i++) {
        if (empleados[i].puesto == "vendedor") {
            cout << "Empleado " << i+1 << ":" << endl;
            cout << "Legajo: " << empleados[i].legajo << endl;
            cout << "Puesto: " << empleados[i].puesto << endl;
            cout << "Sueldo: " << empleados[i].sueldo << endl;
            cout << endl;
        }
    }
    return 0;
}
    

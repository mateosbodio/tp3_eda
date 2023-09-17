/*16. Defina una estructura Etapa, que indique el tiempo empleado por un ciclista en una etapa. Debe tener tres campos: horas, minutos y segundos. Escriba un programa que dado n etapas calcule el tiempo total empleado por el ciclista en completar todas y cada una de las etapas.*/
#include <iostream>
 
using namespace std;
 
struct Etapa
{
    int horas;
    int minutos;
    int segundos;
};
 
int main()
{
    Etapa etapas[3];
 
    Etapa *e = etapas;
    int sumaH, sumaM, sumaS;
 
    sumaH = sumaM = sumaS = 0;
 
    for (int i = 0; i < 3; i++)
    {
        cout << "Eatapa " << i + 1 << ": " << endl;
        cout << "Horas: "; cin >> e->horas;
        cout << "Minutos: "; cin >> e->minutos;
        cout << "Segundos: "; cin >> e->segundos;
        cout << endl;
 
        sumaH += e->horas;
        sumaM += e->minutos;
        sumaS += e->segundos;
        e++;
    }
 
    int temp;
    if (sumaS > 59)
    {
        temp = sumaS / 60;
        sumaM += temp;
        sumaS -= temp * 60;
    }
    if (sumaM > 59)
    {
        temp = sumaM / 60;
        sumaH += temp;
        sumaM -= temp * 60;
    }
 
    cout << "Total Etapas: " << (sumaH < 10 ? "0" : "") << sumaH << ":"
                             << (sumaM < 10 ? "0" : "") << sumaM << ":"
                           	 << (sumaS < 10 ? "0" : "") << sumaS << endl;
 
    return 0;
}

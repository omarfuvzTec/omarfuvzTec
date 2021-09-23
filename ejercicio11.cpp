/*
    Problema: Encontrar la pendiente de la linea que pasa
    por 2 puntos dados en el plano de coordenadas. Incluir la
    posibilidad de que la pediente sea indefinida
    Capitulo 2 - Problema 89
*/
#include<iostream>
#include<math.h>

using namespace std;

void CalcularPendiente(double x1, double y1, double x2, double y2)
{
    double superior, inferior;
    superior = (y2 - y1);
    inferior = (x2 - x1);
    cout << "Pendiente fraccional: (" << superior << "/" << inferior << ")" << endl;
    cout << "Pendiente decimal: " << (superior / inferior) << endl;
    cout << "\n\n";
}

int main()
{
    int pausa = 0;
    cout << "Calcular la pendiente de 2 puntos en el plano de coordenadas" << endl;
    double x1 = 0, x2 = 0, y1 = 0, y2 = 0;
    cout << "x1: "; cin >> x1;
    cout << "y1: "; cin >> y1;
    cout << "x2: "; cin >> x2;
    cout << "y2: "; cin >> y2;
    CalcularPendiente(x1, y1, x2, y2);
    cout << "Introduzca un valor cualquiera + Enter para salir: ";
    cin >> pausa;
    return 0;
}
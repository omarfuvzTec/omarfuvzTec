/*
    Problema: Calcular la pendiente de la linea que pasa
    por dos puntos. Usar las siguientes parejas de puntos como datos
    A) (-3, -5) y (0, -2)
    B) (-4, 6) y (8, -3)
    C) (3, -5) y (3, 0)
    Capitulo 2 - Problema 88
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
    CalcularPendiente(-3, -5, 0, -2);
    CalcularPendiente(-4, 6, 8, -3);
    CalcularPendiente(3, -5, 3, 0);
    cout << "Introduzca un valor cualquiera + Enter para salir: ";
    cin >> pausa;
    return 0;
}
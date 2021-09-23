/*
    Problema: Determinar la ecuacion de la recta que pasa por los puntos
    (0, -2) y (-68, -15)
    Capitulo 2 - Problema 82
*/
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int pausa = 0;
    double x1 = 0, y1 = -2, x2 = -68, y2 = -15; // Los puntos
    double superior = 0, inferior = 0;
    cout << "Calculamos la pendiente" << endl;
    superior = (y2 - y1);
    inferior = (x2 - x1);
    y1 = y1 * (-1);
    if (y1 > -1)
    {
        cout << "Ecuacion: y = ( ( " << superior << "/" << inferior << " ) ( x - ( " << x1 << " ) ) ) - " << y1 << endl;
    }
    else if (y1 < 1)
    {
        cout << "Ecuacion: y = ( ( " << superior << "/" << inferior << " ) ( x - ( " << x1 << " ) ) ) + " << (y1 * -1) << endl;
    }
    cout << "Programa finalizado";
    cin >> pausa;
    return 0;
}
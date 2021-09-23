/*
    Problema: Determinar la ecuacion de la recta que pasa por los puntos
    (56, 16) y (-40, 1)
    Capitulo 2 - Problema 83
*/
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int pausa = 0;
    double x1 = 56, y1 = 16, x2 = -40, y2 = 1; // Los puntos
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
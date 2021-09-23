/*
    Problema: Determinar la ecuacion de la recta descrita
    por la pendiente 3 y el punto sobre una recta (8, -4)
    Capitulo 2 - Problema 84
*/
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int pausa = 0;
    double x = 8, y = -4, m = 3;
    cout << "Ecuacion: (y - (" << y << ")) = " << m << "(x - (" << x << "))" << endl;
    cout << "Programa finalizado";
    cin >> pausa;
    return 0;
}
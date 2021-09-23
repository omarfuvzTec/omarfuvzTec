/*
    Problema: Imprimir la pendiente de la recta con una
    intercepcion de (0, 10) y (-3, 0)
    Capitulo 2 - Problema 85
*/
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int pausa = 0;
    double superior = 0, inferior = 0;
    double x1 = 0, y1 = 10, x2 = -3, y2 = 0, m = 0;
    superior = (y2 - y1);
    inferior = (x2 - x1);
    m = superior / inferior;
    cout << "Pendiente fraccional: ((" << superior << ")/(" << inferior << "))" << endl;
    cout << "Pendiente decimal: " << m << endl;
    cout << "Programa finalizado";
    cin >> pausa;
    return 0;
}
/*
    Problema: Encontrar la pendiente y la intercepcion (x, y)
    de la grafica 2x+3y+8=0
    Capitulo 2 - Problema 86
*/
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int pausa = 0;
    double a = 2, b = 3, c = 8, m = 0, B = 0;
    cout << "Ecuacion original: " << a << "x + " << b << "y + " << c << " = 0" << endl;
    cout << "Despejamos: y = -(" << a << "/" << b << ")x - (" << c << " / " << a << ")" << endl;
    m = (a / b) * -1;
    B = (c / a) * -1;
    if (m > 0 && B > 0)
    {
        cout << "Punto pendiente: y = (" << a << "/" << b << ")x+" << B << endl;
        cout << "Pendiente: (" << a << "/" << b << ")" << endl;
        cout << "Punto: (0, " << B << ")" << endl;
    }
    else if (m > 0 && B < 0)
    {
        cout << "Punto pendiente: y = (" << a << "/" << b << ")x-" << (B * -1) << endl;
        cout << "Pendiente: (" << a << "/" << b << ")" << endl;
        cout << "Punto: (0, -" << (B * -1) << ")" << endl;
    }
    else if (m < 0 && B < 0)
    {
        cout << "Punto pendiente: y = -(" << a << "/" << b << ")x-" << (B * -1) << endl;
        cout << "Pendiente: -(" << a << "/" << b << ")" << endl;
        cout << "Punto: (0, -" << (B * -1) << ")" << endl;
    }
    else if (m < 0 && B > 0)
    {
        cout << "Punto pendiente: y = -(" << a << "/" << b << ")x+" << B << endl;
        cout << "Pendiente: -(" << a << "/" << b << ")" << endl;
        cout << "Punto: (0, " << B << ")" << endl;
    }
    cout << "Introduzca un valor cualquiera + Enter para salir: ";
    cin >> pausa;
    return 0;
}
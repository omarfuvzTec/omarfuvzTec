/*
    Problema: Determinar la pendiente e intercepcion de las siguientes
    ecuaciones
    A) 3x + y = 4;
    B) x - y = 2;
    C) 5x - 3y = 15;
    Capitulo 2 - Problema 87
*/
#include<iostream>
#include<math.h>

using namespace std;

void CalcularPuntoPendiente(int numero = 1, double a = 0, double b = 0, double c = 0)
{
    double m = 0, B = 0;
    cout << numero << ".- Ecuacion original: " << a << "x + " << b << "y + " << c << " = 0" << endl;
    cout << numero << ".- Despejamos: y = -(" << a << "/" << b << ")x - (" << c << " / " << a << ")" << endl;
    m = (a / b) * -1;
    B = (c / a) * -1;
    if (m > 0 && B > 0)
    {
        cout << numero << ".- Punto pendiente: y = (" << a << "/" << b << ")x+" << B << endl;
        cout << numero << ".- Pendiente: (" << a << "/" << b << ")" << endl;
        cout << numero << ".- Punto: (0, " << B << ")" << endl;
    }
    else if (m > 0 && B < 0)
    {
        cout << numero << ".- Punto pendiente: y = (" << a << "/" << b << ")x-" << (B * -1) << endl;
        cout << numero << ".- Pendiente: (" << a << "/" << b << ")" << endl;
        cout << numero << ".- Punto: (0, -" << (B * -1) << ")" << endl;
    }
    else if (m < 0 && B < 0)
    {
        cout << numero << ".- Punto pendiente: y = -(" << a << "/" << b << ")x-" << (B * -1) << endl;
        cout << numero << ".- Pendiente: -(" << a << "/" << b << ")" << endl;
        cout << numero << ".- Punto: (0, -" << (B * -1) << ")" << endl;
    }
    else if (m < 0 && B > 0)
    {
        cout << numero << ".- Punto pendiente: y = -(" << a << "/" << b << ")x+" << B << endl;
        cout << numero << ".- Pendiente: -(" << a << "/" << b << ")" << endl;
        cout << numero << ".- Punto: (0, " << B << ")" << endl;
    }
    cout << "\n\n";
}

int main()
{
    int pausa = 0;
    CalcularPuntoPendiente(1, 3, 1, -4);
    CalcularPuntoPendiente(2, 1, -1, -2);
    CalcularPuntoPendiente(3, 5, -3, -15);
    cout << "Introduzca un valor cualquiera + Enter para salir: ";
    cin >> pausa;
    return 0;
}
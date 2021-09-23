/*
    Problema: Escribir un programa para introducir cuatro numeros;
    imprimir el inversio aditivo de cada 1, la suma de los 4 y el inverso aditivo de la suma
    Capitulo 2 - Problema 90
*/
#include<iostream>
#include<math.h>

using namespace std;


int main()
{
    int pausa = 0;
    cout << "Inverso aditivo de 4 numeros y su suma" << endl;
    double a = 0, b = 0, c = 0, d = 0;
    cout << "Primero: "; cin >> a;
    cout << "Segundo: "; cin >> b;
    cout << "Tercero: "; cin >> c;
    cout << "Cuarto: "; cin >> d;
    cout << "Inverso aditivo de los numeros. \na:" << (a * -1) << "\nb:" << (b * -1) << "\nc:" << (c * -1) << "\nd:" << (d * -1) << endl;
    double suma = a + b + c + d;
    cout << "Inverso aditivo de la suma. \nSuma:" << (suma * -1) << endl;
    cout << "Introduzca un valor cualquiera + Enter para salir: ";
    cin >> pausa;
    return 0;
}
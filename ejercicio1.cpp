/*
    Problema: Generar x numeros de dos digitos al azar
    e imprimir todos los numeros menores a su edad, donde x y su
    edad sean entradas
    Capitulo 1 - Problema 73
*/
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int edad = 0, x = 0, pausa, i = 0;
    cout << "Introduzca su edad: ";
    cin >> edad;
    cout << "Introduzca la cantidad de numeros random: ";
    cin >> x;
    for (i; i < x; i++)
    {
        int r = rand() % 99 + 10; // Del 10 al 99
        if (r < edad)
        {
            cout << "Numero menor: " << r << endl;
        }
    }
    cout << "Programa finalizado despues de: " << i << " veces";
    cin >> pausa;
    return 0;
}
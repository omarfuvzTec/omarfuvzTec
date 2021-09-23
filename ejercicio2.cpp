/*
    Problema: Generar veinte numeros al azar, en el rango 1 a 100.
    Imprimirlos conforme se genera y enseguida en el orden siguiente:
    el numero mayor, el numero menor, el segundo mayor, el segundo menor
    y asi sucesivamente hasta que se hayan impreso 10 pares.
    Capitulo 1 - Problema 74
*/
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int i = 0;
    int numeros[20] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 }; // 20 espacios
    int part1[10] = { 0,0,0,0,0,0,0,0,0,0 };
    int part2[10] = { 0,0,0,0,0,0,0,0,0,0 };

    // Generamos los numeros
    for (i; i < 20; i++)
    {
        int r = rand() % 100 + 1; // Del 1 al 100
        numeros[i] = r;
        cout << "Numero generado: " << r << endl;
    }
    cout << "\nOrdenados" << endl;
    // Ordenamos de mayor a menor
    for (i = 0; i < 20 - 1; i++)
    {
        for (int j = i + 1; j < 20; j++)
        {
            if (numeros[i] > numeros[j])
            {
                int temp = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = temp;
            }
        }
    }
    // Dividimos el arreglo en partes iguales
    for (i = 0; i < 10; i++)
    {
        part1[i] = numeros[i];
        cout << "Numero: " << part1[i] << endl;
    }
    for (i = 0; i < 10; i++)
    {
        part2[i] = numeros[i + 10];
        cout << "Numero: " << part2[i] << endl;
    }
    cout << "\nResultado" << endl;
    // Mostramos en pantalla
    for (i = 0; i < 10; i++)
    {
        int pos = (i - 9) * -1;
        cout << "Menor: " << part1[i] << endl;
        cout << "Mayor: " << part2[pos] << endl;
    }
    cout << "Finalizado";
    cin >> i;
    return 0;
}
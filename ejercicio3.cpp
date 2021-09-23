/*
    Problema: Imprimir el patron
    100101
    100001
    011101
    Capitulo 1 - Problema 75
*/
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int pausa = 0;
    int patron[3][6] = { {1,0,0,1,0,1}, {1,0,0,0,0,1}, {0,1,1,1,0,1} };
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << patron[i][j];
        }
        cout << endl;
    }
    cout << "Finalizado";
    cin >> pausa;
    return 0;
}
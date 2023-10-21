#include <iostream>
#include <locale>
#include "funciones.h"

using namespace std;

bool EsMatrizSimoniana(int matriz[][5])
{
    int fila, suma;
    bool encontro;
    for(fila=0; fila<5; fila++)
    {
        suma = SumarFila(matriz, fila);
        encontro = BuscarElemento(matriz, suma);
        if(encontro == true)
        {
            return true;
        }
        /*
        if(BuscarElemento(matriz, suma)){
          return true;
        }
        */
    }
    return false;
}

int SumarFila(int matriz[][5], int fila)
{
    int suma = 0;
    int col;
    for(col=0; col<5; col++)
    {
        suma += matriz[fila][col];
    }
    return suma;
}

bool BuscarElemento(int matriz[][5], int elem)
{
    int f, c;
    for(f=0; f<5; f++)
    {
        for(c=0; c<5; c++)
        {
            if(elem == matriz[f][c])
            {
                return true;
            }
        }
    }
    return false;
}

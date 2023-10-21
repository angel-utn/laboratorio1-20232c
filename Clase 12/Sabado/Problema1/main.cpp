#include <iostream>
#include "funciones.h"

using namespace std;

int main()
{
    int matriz1[5][5] = {{ 1, 2, 3, 4, 5 },
        { 5, 4, 18, 10, 11},
        { 1, 1, 1, 1, 1},
        { 9, 8, 4, 2, -5},
        { 10, 10, 10, 10, 10}
    };

    int matriz2[5][5] = {{ 1, 2, 3, 4, 6 },
        { 6, 4, 6, 10, 11},
        { 1, 1, 1, 1, 1},
        { 9, 8, 4, 2, -5},
        { 10, 10, 10, 10, 10}
    };

    bool resultado;

    //resultado = EsMatrizSimoniana(matriz1);
    resultado = EsMatrizSimoniana(matriz2);

    if(resultado)
    {
        cout << "Es matriz Simoniana" << endl;
    }
    else
    {
        cout << "NO es matriz Simoniana" << endl;
    }

    return 0;
}

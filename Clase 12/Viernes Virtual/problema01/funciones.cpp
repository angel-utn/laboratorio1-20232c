#include <iostream>
#include "funciones.h"

using namespace std;

bool EsMatrizSimoniana(int m[][5])
{
    int vec[5] = {};

    for(int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            vec[i] += m[i][j];
        }
    }

    for (int x = 0; x < 5; x++)
    {
        for(int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if(vec[x] == m[i][j]){
//                     cout << "ACUMULADO : " << vec[x] << endl;
//                     cout << "VALOR: " << m[i][j] << endl;
                    return true;
                }
            }
        }
    }
    return false;
}

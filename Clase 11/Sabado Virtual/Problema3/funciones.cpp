#include <iostream>
#include <locale>
#include "funciones.h"

using namespace std;

bool esPrimo(int num)
{
    if(num < 2)
    {
        return false;
    }

    int contDiv = 2;
    int i;
    for(i=2; i<num; i++)
    {
        if(num % i == 0)
        {
            contDiv++;
        }
    }
    if(contDiv == 2)
    {
        return true;
    }
    else
    {
        return false;
    }

}

bool esPrimoDeSG(int num)
{
    if(esPrimo(num) && esPrimo(num*2+1))
    {
        return true;
    }
    return false;
}

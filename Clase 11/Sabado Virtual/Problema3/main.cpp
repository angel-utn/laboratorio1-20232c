#include <iostream>
#include "funciones.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int num;

    cout << "Ingrese un n�mero: ";
    cin >> num;

    if(esPrimoDeSG(num))
    {
        cout << "El n�mero " << num << " es primo de Sophie Germain" << endl;
    }
    else
    {
        cout << "El n�mero " << num << " NO es primo de Sophie Germain" << endl;
    }

    return 0;
}

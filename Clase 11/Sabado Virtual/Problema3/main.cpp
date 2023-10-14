#include <iostream>
#include "funciones.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int num;

    cout << "Ingrese un número: ";
    cin >> num;

    if(esPrimoDeSG(num))
    {
        cout << "El número " << num << " es primo de Sophie Germain" << endl;
    }
    else
    {
        cout << "El número " << num << " NO es primo de Sophie Germain" << endl;
    }

    return 0;
}

/*
Ingresar n�meros enteros y contar la cantidad de pares.
Cuando se ingresa un 0, el programa debe finalizar.
Variante: el 0 debe ser tenido en cuenta en el c�lculo de pares.
*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Spanish");

    int n = 1, pares = 0;

    //cout << "Ingrese un n�mero: ";
    //cin >> n;

    //cout << n << endl;

    while(n != 0)
    {
        cout << "Ingrese un n�mero: ";
        cin >> n;

        if (n%2==0)
        {
            pares++;
        }

    }

    cout << "Pares: ";
    cout << pares;

    return 0;
}

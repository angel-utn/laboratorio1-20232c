/*
Ingresar números enteros y contar la cantidad de pares.
Cuando se ingresa un 0, el programa debe finalizar.
Variante: el 0 debe ser tenido en cuenta en el cálculo de pares.
*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Spanish");

    int n, pares = 0;

    do
    {
        cout << "Ingrese un número: ";
        cin >> n;

        if (n%2==0)
        {
            pares++;
        }

    }while(n != 0);

    cout << "Pares: ";
    cout << pares;

    return 0;
}

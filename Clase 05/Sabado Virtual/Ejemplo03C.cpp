/*Ingresar números enteros, finalizar cuando se ingresa un cero.
Contar cantidad de pares
*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int n, pares = 0;
    //VARIANTE 1: NO tener en cuenta al cero

    /*
    cout << "Ingrese un número: ";
    cin >> n;


    while(n != 0)
    {
        if(n%2 == 0)
        {
            pares++;
        }
        cout << "Ingrese un número: ";
        cin >> n;
    }    */

    //VARIANTE 2: SI tener en cuenta al cero
    do{
        cout << "Ingrese un número: ";
        cin >> n;

        if(n%2 == 0)
        {
            pares++;
        }

    }while(n != 0);


    cout << "Cantidad pares: " << pares << endl;

    return 0;
}

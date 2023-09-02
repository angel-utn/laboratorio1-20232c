/*Ingresar números enteros y mostrar "OK" para los positivos o cero.
Terminar el programa con el ingreso de un número negativo
*/
#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    int n;
    cout << "Ingresar un número: ";
    cin >> n;

    while(n >= 0)
    {
        cout << "OK" << endl;
        cout << "Ingresar un número: ";
        cin >> n;
    }
    cout << "FIN" << endl;


    return 0;
}

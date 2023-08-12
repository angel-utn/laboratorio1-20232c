/* Pedir el ingreso de un número entero por teclado
Evaluar e informar si el número ingresado es positivo, negativo o cero
*/
#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Ingrese un numero: ";
    cin >> num;

    /*
    if(num > 0)
    {
        cout << "El numero es positivo" << endl;
    }
    else if (num < 0 )
    {
        cout << "El numero es negativo" << endl;
    }
    else
    {
        cout << "El numero es cero" << endl;
    }
    */

    if(num > 0){
        cout << "El numero es positivo" << endl;
    }
    else{
        if(num < 0){
            cout << "El numero es negativo" << endl;
        }
        else{
            cout << "El numero es cero" << endl;
        }
    }

    return 0;
}

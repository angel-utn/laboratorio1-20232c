/*
Hacer un programa que dados 3 números enteros muestre un mensaje indicando
"TODOS POSITIVOS" si todos los números son positivos
"ALGUNOS POSITIVOS" si alguno de los números es positivo
"NINGUNO POSITIVO" si ninguno de los números es positivo
*/

#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;

    cout << "Ingrese primer numero: ";
    cin >> num1;
    cout << "Ingrese segundo numero: ";
    cin >> num2;
    cout << "Ingrese tercer numero: ";
    cin >> num3;

    if((num1 > 0) && (num2 > 0) && (num3 > 0))
    {
        cout << "TODOS POSITIVOS" << endl;
    }
    else
    {
        if((num1 <= 0) && (num2 <= 0) && (num3 <= 0))
        {
            cout << "NINGUNO POSITIVO" << endl;
        }
        else
        {
            cout << "ALGUNOS POSITIVOS" << endl;
        }
    }

    return 0;
}

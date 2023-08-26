/*
Hacer un programa que simule tres operaciones de un cajero autom�tico.
    Debe solicitar el importe (negativo para extraccion, positivo para dep�sito)
    El programa debe informar:
    A- Si hubo al menos un deposito mayor a $50000
    B- La cantidad de dep�sitos realizados
    C- El total de dinero operado
*/

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    float operacion;
    bool huboDepMayorA50000 = false;
    int contador = 0;
    float total = 0.0f;

    cout << "Operacion #1: $";
    cin >> operacion;

    if(operacion > 50000)
    {
        huboDepMayorA50000 = true;
    }

    if(operacion > 0)
    {
        contador++;
    }

    if(operacion < 0)
    {
        operacion = operacion * (-1);
    }

    total += operacion;

    cout << "Operacion #2: $";
    cin >> operacion;

    if(operacion > 50000)
    {
        huboDepMayorA50000 = true;
    }

    if(operacion > 0)
    {
        contador++;
    }

    if(operacion < 0)
    {
        operacion = operacion * (-1);
    }

    total += operacion;

    cout << "Operacion #3: $";
    cin >> operacion;

    if(operacion > 50000)
    {
        huboDepMayorA50000 = true;
    }

    if(operacion > 0)
    {
        contador++;
    }

    if(operacion < 0)
    {
        operacion = operacion * (-1);
    }

    total += operacion;

    //RESULTADOS
    //A
    if(huboDepMayorA50000 == true)
    {
        cout << "Hubo un dep�sito mayor a $50000" << endl;
    }

    //B
    if(contador == 0)
    {
        cout << "No hubo dep�sitos" << endl;
    }
    else
    {
        cout << "Cantidad de dep�sitos efectuados: " << contador << endl;
    }

    //C
    cout << "Cantidad total de dinero operado: $" << total << endl;

    return 0;
}

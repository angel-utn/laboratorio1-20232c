/*
Hacer un programa que simule tres operaciones de un cajero autom�tico.
    Debe solicitar el importe (negativo para extraccion, positivo para dep�sito)
    El programa debe informar:
    A- Si hubo al menos un deposito mayor a $50000
    B- La cantidad de dep�sitos realizados
    C- El total de dinero operado

    Variante: hacer que el cajero lleve un saldo, y si el mismo es <= 0, no permitir hacer extracciones
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
    int i;
    const int OP = 3;
    float saldo = 10000.00f;

    for(i=1; i<=OP; i++)
    {
        cout << "Operacion #" << i << ": $";
        cin >> operacion;

        if(operacion > 50000)
        {
            huboDepMayorA50000 = true;
        }

        if(operacion > 0.0f)
        {
            contador++;
            saldo += operacion;
        }

        if(operacion < 0.0f)
        {
            if(saldo <= 0.0f){
              cout << "La operaci�n no puede ser efectuada" << endl;
            }
            else{
              saldo += operacion;
              total += operacion * (-1);
            }
            //operacion = operacion * (-1);
        }

        if(operacion > 0.0f){
          total += operacion;
        }

        cout << "Saldo: $" << saldo << endl;
    }

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

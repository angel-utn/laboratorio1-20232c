/*
Hacer un programa que dado 3 números enteros muestre un mensaje indicando
si alguno de ellos es positivo. En caso de que no haya, mostrar un mensaje aclarándolo
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

    // VARIANTE 1 - ELSE IF
	/* 
    if(num1 > 0)
    {
        cout << "Hay un numero positivo" << endl;
    }
    else if(num2 > 0)
    {
        cout << "Hay un numero positivo" << endl;
    }
    else if(num3 > 0)
    {
        cout << "Hay un numero positivo" << endl;
    }
    else
    {
        cout << "No hay numeros positivos" << endl;
    }
    */

    // VARIANTE 2 - IFs ANIDADOS
    /*
	if(num1 > 0)
    {
        cout << "Hay un numero positivo" << endl;
    }
    else
    {
        if(num2 > 0)
        {
            cout << "Hay un numero positivo" << endl;
        }
        else
        {
            if(num3 > 0)
            {
                cout << "Hay un numero positivo" << endl;
            }
            else
            {
                cout << "No hay numeros positivos" << endl;
            }
        }
    }
    */

    /* VARIANTE 3 - OPERADORES LOGICOS */
    if((num1 > 0) || (num2 > 0) || (num3 > 0)){
        cout << "Hay al menos un numero positivo" << endl;
    }
    else{
        cout << "No hay numeros positivos" << endl;
    }
	
	// VARIANTE 4 - NEGACION
	if(!((num1 <=0) && (num2 <= 0) && (num3 <= 0)))
		cout << "Hay al menos un numero positivo" << endl;
    }
    else{
        cout << "No hay numeros positivos" << endl;
    }	

    /* LO SIGUIENTE ES INCORRECTO
    if(num1 || num2 || num3 > 0){
      cout << "Hay al menos un numero positivo" << endl;
    }
    else{
        cout << "No hay numeros positivos" << endl;
    }
    */

    return 0;
}

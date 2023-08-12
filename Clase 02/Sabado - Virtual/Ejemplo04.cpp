/*
Pedir el ingreso de un número entero por teclado.
Determinar e informar si el número es positivo.
Caso contrario informar también.
*/

#include <iostream>

using namespace std;

int main()
{
	/* OPERADORES RELACIONALES

	< : menor
	<= : menor o igual
	> : mayor
	>= : mayor o igual
	== : igual
	!= : distinto de

	OPERADORES LÓGICOS

	&& : AND (Y)
	|| : OR (O)
	! : NOT (NEGACIÓN)

	*/

	int numero;

	cout << "Ingrese un numero: ";
	cin >> numero;

	if(!(numero > 0))
    {
    cout << "No es positivo" << endl;
	}
	else{
    cout << "Es positivo" << endl;
	}

	return 0;
}

/*
Pedir el ingreso de un n�mero entero por teclado.
Determinar e informar si el n�mero es positivo.
Caso contrario informar tambi�n.
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

	OPERADORES L�GICOS

	&& : AND (Y)
	|| : OR (O)
	! : NOT (NEGACI�N)

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

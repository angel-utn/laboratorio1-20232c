/*
Grupo de riesgo Laravirus:
edad > 80
O
inmunosuprimido
*/

#include <iostream>

using namespace std;

int main()
{
	int edad;
	char inm;

	cout << "Ingrese edad: ";
	cin >> edad;
	cout << "Inmunosuprimido/a (S/N): ";
	cin >> inm;

	if(edad > 80 || inm == 'S'){
    cout << "Es grupo de riesgo de Laravirus" << endl;
	}
	else{
    cout << "No es grupo de riesgo de Laravirus" << endl;
	}

	return 0;
}

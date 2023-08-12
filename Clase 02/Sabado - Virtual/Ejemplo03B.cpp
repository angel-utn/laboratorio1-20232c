#include <iostream>

using namespace std;

int main()
{
	int edad;
	bool inm;

	cout << "Ingrese edad: ";
	cin >> edad;
	cout << "Inmunosuprimido/a (1-Si/0-No): ";
	cin >> inm;

	if(edad > 80 || inm == 1){
		cout << "Es grupo de riesgo de Laravirus" << endl;
	}
	else{
		cout << "No es grupo de riesgo de Laravirus" << endl;
	}
	
	/* VARIANTE, APROVECHANDO QUE inm es BOOL:
	if(edad > 80 || inm){
		cout << "Es grupo de riesgo de Laravirus" << endl;
	}
	else{
		cout << "No es grupo de riesgo de Laravirus" << endl;
	}
	*/

	return 0;
}

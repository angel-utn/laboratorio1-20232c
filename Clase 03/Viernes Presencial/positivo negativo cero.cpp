#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float numero;
	cout << "Ingrese numero: ";
	cin >> numero;
	
	if(numero>0){
		cout << "Es positivo"<<endl;	
	}
	else{
		if(numero == 0){
			cout << "Es cero" << endl;
		}
		else{
			cout << "Es Negativo" << endl;
		}
	}
	
	cout << "Fin del programa";
	
	return 0;
}


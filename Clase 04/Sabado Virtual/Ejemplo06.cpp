#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int i;

	cout << "Se muestran los números pares entre 2 y 20 (ambos inclusive)" << endl;
	
	for(i=2; i<=20; i+=2){
		cout << i << endl;
	}
	
	cout << "Valor de i=" << i << endl; //22
	
	for(i=20; i<20; i+=2){ // NO SE EJECUTA (ABSURDO)
		cout << i << endl;
	}
	
	cout << "Valor de i=" << i << endl; //20

	for(i=20; i>=20; i+=2){ // CICLO INFINITO
		cout << i << endl;
	}


	return 0;
}

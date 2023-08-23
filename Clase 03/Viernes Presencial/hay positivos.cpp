#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float n1, n2, n3, n4;
	
	cout << "Ingrese numero: ";
	cin >> n1;
	cout << "Ingrese numero: ";
	cin >> n2;
	cout << "Ingrese numero: ";
	cin >> n3;
	cout << "Ingrese numero: ";
	cin >> n4;
	
	if(n1 > 0 && n2 > 0 && n3 > 0 && n4 > 0){

		cout << "TODOS POSITIVOS"<<endl;	
	}
	else{
		if(n1 > 0 || n2 > 0 || n3 > 0 || n4 > 0){
			cout << "ALGUNO ES POSITIVO"<< endl;
		}
		else{
			cout << "NO HAY POSITIVOS" << endl;
		}
	}
	
	
	
	return 0;
}


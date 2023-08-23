#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n1, n2;
	char op;
	float resultado;
	
	cout << "Ingrese valor 1"<<endl;
	cin >> n1;
	
	cout << "Ingrese valor 2"<<endl;
	cin >> n2;
	
	cout << "Ingrese operacion: "<<endl;
	cin >> op;
	
	switch(op){
	case '+':
	case '1':
		resultado = n1 + n2;
		break;
	case '-':
		resultado = n1 - n2;
		break;
	case '*':
		resultado = n1 * n2;
		break;
	case '/':
		if(n2 != 0){
			resultado = (float)n1 / n2;	
		}
		else{
			cout << "No se puede realizar una division por cero"<<endl;
			resultado = 0;
		}
		break;
	case '%':
		resultado = n1 % n2;	
		break;
	}
	
	cout << n1 << " " << op << " " << n2 << " = " << resultado << endl;
	
	
	

	return 0;
}


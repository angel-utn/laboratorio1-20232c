#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	char c;

	cout << "Mostrando el abc en min�sculas: " << endl;
	for(c='a'; c<='z'; c++){
		cout << c << endl;
	}

	int i;

	cout << endl << "Mostrando el ABC en MAY�SCULAS: " << endl;
	for(i=65; i<=90; i++){
		cout << char(i) << endl;
	}

	cout << "Car�cter que se representa con el n�mero 64: " << char(64) << endl;
	
	return 0;
}

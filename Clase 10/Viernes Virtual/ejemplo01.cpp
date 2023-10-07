#include <iostream>
using namespace std;

/// es hacer un programa que pida dos numeros 
/// y muestre el mayor de ellos

/// declaro la funcion
/// tipo nombre(parametros);
int sumar(int n, int m);

int main() {
   cout << sumar(15.5f,10) << endl;
	return 0;
}

/// definicion de la funcion
/// tipo nombre(parametros) { ... }
int sumar(int n, int m){
   return n + m;
}




#include <iostream>
using namespace std;
/**
   hacer un programa que pida 3 numeros enteros 
   y muestre el promedio
*/

int main() {
   /// float n1, n2, n3;
   int n1, n2, n3;
   
   float promedio;
   
   cout << "Ingrese numero: ";
   cin >> n1;
   
   cout << "Ingrese numero: ";
   cin >> n2;
   
   cout << "Ingrese numero: ";
   cin >> n3;
   
   /// promedio = (n1 + n2 + n3) / 3.0f;
   promedio = (float)(n1 + n2 + n3) / 3;
   
   cout << "Prmedio: "<< promedio << endl;
	
	return 0;
}


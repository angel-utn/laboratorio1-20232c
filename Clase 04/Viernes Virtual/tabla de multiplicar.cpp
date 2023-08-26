#include <iostream>
using namespace std;

/**
   hacer un programa donde se ingrese un numero y muestre la tabla de 
   multiplicar de ese numero.

   2
   2 x 1 = 2
   2 x 2 = 4
   ...
   2 x 10 = 20
*/

int main() {
   int tabla;
   
   cout << "Ingrese el valor de la tabla: ";
   cin >> tabla;
   
   for(int i=1; i<=10; i++){
      cout << tabla << " x " << i << " = " << tabla * i << endl;
      /// i = 5; /// verymal
   }
	
	return 0;
}


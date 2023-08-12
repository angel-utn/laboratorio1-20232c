#include <iostream>
using namespace std;

int main() {
   int suma, cantidad;
   float promedio = 0;
   
   cout << "Ingrese la suma de todos: ";
   cin >> suma;
   
   cout << "Ingrese la cantidad: ";
   cin >> cantidad;
   
   if(cantidad != 0){
      promedio = (float)suma/cantidad;   
   }
   
   
   cout << "Promedio es: " << promedio << endl;
	
	return 0;
}


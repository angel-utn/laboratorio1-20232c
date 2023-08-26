#include <iostream>
using namespace std;

/**
   hacer un programa que pida 10 numeros enteros
   y muestre la cantidad de numeros pares ingresados
*/

int main() {
   int numero, cantidadPares;
   /// inicializamos contadores y acumuladores
   cantidadPares = 0;
   
   for(int i=1; i<=10; i++){ /// lo utilizamos para cargar 10 numeros
      cout << "Ingrese numero: ";
      cin >> numero;
      
      if(numero % 2 == 0){/// para averiguar si es par
         cantidadPares++; /// contar la cantidad de pares
      }
   }
   
	cout << "Cantida de pares son: "<< cantidadPares << endl;
	return 0;
}


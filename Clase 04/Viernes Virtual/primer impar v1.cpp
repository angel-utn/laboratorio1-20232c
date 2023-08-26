#include <iostream>
using namespace std;
/**
   Hacer un programa que ingrese 5 numeros y 
   muestre el primer impar ingresado
*/


int main() {
   int numero, primerImpar, cantImpares=0;
   
   for(int i=1; i<=5; i++){ /// para ingresar los 5 numeros
      cout << "Ingrese numero: ";
      cin >> numero;
      
      if(numero%2 != 0){ /// para averiguar si es impar
         cantImpares++;
         if(cantImpares == 1){ /// para averiguar si es el primero
            primerImpar = numero;   
         }
      }
   }
   if(cantImpares>0){
      cout << "El primer impar es: " << primerImpar;
   }
	return 0;
}


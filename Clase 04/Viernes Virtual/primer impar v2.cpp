#include <iostream>
using namespace std;
/**
   Hacer un programa que ingrese 5 numeros y 
   muestre el primer impar ingresado
   y muestre en que posicion se ingreso!
*/


int main() {
   int numero, primerImpar=0, posicion;
   
   for(int i=1; i<=5; i++){ /// para ingresar los 5 numeros
      cout << "Ingrese numero: ";
      cin >> numero;
      
      if(numero%2 != 0){ /// para averiguar si es impar
         if(primerImpar == 0){ /// para averiguar si es el primero
            primerImpar = numero;   
            posicion = i;
         }
      }
   }
   if(primerImpar != 0){
      cout << "El primer impar es: " << primerImpar;
      cout << " en la posicion #"<< posicion;
   }
   
   return 0;
}


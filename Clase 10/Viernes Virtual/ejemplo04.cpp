#include <iostream>
using namespace std;
/**
   hacer un programa que ingrese 5 numeros y muestre 
   cuantos son mayores al promedio
*/

int sumarVector(int vec[], int tam);
void cargarVector(int vec[], int tam);

int main() {
   const int CANTIDAD = 5;
   int vNumeros[CANTIDAD];
   cout << vNumeros[0] << endl;
   /// los vectores son modificados por las funciones
   cargarVector(vNumeros, CANTIDAD);
   
   cout << "La suma: " << sumarVector(vNumeros, CANTIDAD)<<endl;
   cout << vNumeros[0] << endl;
	return 0;
}

void cargarVector(int vec[], int tam){
   for(int i=0; i<tam; i++){
      cout << "Ingrese numero: ";
      cin >> vec[i];
   }
}

int sumarVector(int vec[], int tam){
   int suma = 0;
   
   for(int i=0; i<tam; i++){
      suma+=vec[i];
   }
   
   return suma;
}




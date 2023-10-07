#include <iostream>
using namespace std;

/**
   hacer un programa que ingrese 5 numeros y muestre 
   cuantos son mayores al promedio
*/
void cargarVector(int vec[], int tam);
int sumarVector(int vec[], int tam);
float promedioVector(int vec[], int tam);
int contarMayores(int vec[], int tam, float valorComparar);

int main() {
   const int CANTIDAD = 5;
   int vNumeros[CANTIDAD], cantidadMayores;
   float promedio;
   
   /// ingresar los 5 numeritos
   cargarVector(vNumeros, CANTIDAD);
   
   /// calculamos el promedio
   promedio = promedioVector(vNumeros, CANTIDAD);
   
   /// contamos mayores al promedio
   cantidadMayores = contarMayores(vNumeros, CANTIDAD, promedio);
   
   /// mostramos la cantidad
   cout << "Cantidad mayores al promedio es: " << cantidadMayores << endl;
	
	return 0;
}


int contarMayores(int vec[], int tam, float valorComparar){
   int cant = 0;
   
   for(int i=0; i<tam; i++){
      if(vec[i] > valorComparar){
         cant++;
      }
   }
   
   return cant;
}

float promedioVector(int vec[], int tam){
   int suma;
   suma = sumarVector(vec, tam);
   
   return (float)suma / tam;
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



#include <iostream>
using namespace std;

int main() {
   int n;
   int minimo, maximo;
   bool esPrimero = true; // bandera de 2 estados
   
   cout << "Ingrese N: ";
   cin >> n;
   
   for(int i=2; i<n; i++){
      if(n % i == 0){
         if(esPrimero){ // algoritmo el primero
            minimo = i;
            esPrimero = false;
         }
         
         maximo = i; // algoritmo de ultimo
      }
   }
   
   cout << "Minimo Divisor: " << minimo<<endl;
   cout << "Maximo Divisor: " << maximo<<endl;
   
   return 0;
}




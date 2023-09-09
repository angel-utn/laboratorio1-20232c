#include <iostream>
using namespace std;

int main() {
   int n;
   int maximo;
   int minimo=0; // valor absurdo 
   
   cout << "Ingrese N: ";
   cin >> n;
   
   for(int i=2; i<n; i++){
      if(n % i == 0){
         if(minimo == 0){ // algoritmo el primero
            minimo = i;
         }
         
         maximo = i; // algoritmo de ultimo
      }
   }
   
   cout << "Minimo Divisor: " << minimo<<endl;
   cout << "Maximo Divisor: " << maximo<<endl;
   
   return 0;
}




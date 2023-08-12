#include <iostream>
using namespace std;

int main() {
   
   int numero;
   
   cout << "Ingrese numero: ";
   cin >> numero;
   
   if(numero > 0){
      cout << "Es positivo" << endl;
   }
   else{
      if(numero == 0){
         cout << "Es cero" << endl;   
      }
      else{
         cout << "Es negativo" << endl;
      }
   }
   
	
	return 0;
}

